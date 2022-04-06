#include <common.h>

#ifdef HAS_IOE

#include <device/alarm.h>
#include <device/dev.h>
#include <SDL2/SDL.h>


void send_key(uint8_t, nemu_bool);

static int device_update_flag = false;

static void set_device_update_flag() {
  device_update_flag = true;
}

void device_update() {
  if (!device_update_flag) {
    return;
  }
  device_update_flag = false;

  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT: {
        void monitor_statistic();
        monitor_statistic();
        exit(0);
      }

                     // If a key was pressed
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        nemu_bool is_keydown = (event.key.type == SDL_KEYDOWN);
        send_key(k, is_keydown);
        break;
      }
      default: break;
    }
  }
}

void sdl_clear_event_queue() {
  SDL_Event event;
  while (SDL_PollEvent(&event));
}

void init_device() {
#ifdef XIANGSHAN
  init_vga();
  init_uartlite();
#else
  init_vga();
  init_serial();
  init_timer();
  init_i8042();
  init_audio();
#endif

  add_alarm_handle((void *)set_device_update_flag);
  init_alarm();
}
#else

void init_device() {
}

#endif	/* HAS_IOE */
