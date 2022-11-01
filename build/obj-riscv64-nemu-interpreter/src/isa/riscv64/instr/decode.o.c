# 1 "src/isa/riscv64/instr/decode.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "src/isa/riscv64/instr/decode.c"
# 1 "src/isa/riscv64/instr/../local-include/rtl.h" 1



# 1 "/home/user/ecpt/work/simpoint_nemu/include/rtl/rtl.h" 1



# 1 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 1



# 1 "/home/user/ecpt/work/simpoint_nemu/include/isa.h" 1




# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h" 1



# 1 "/home/user/ecpt/work/simpoint_nemu/include/common.h" 1



# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 424 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 427 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 428 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 429 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 425 "/usr/include/features.h" 2 3 4
# 448 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 449 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4



# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 130 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 131 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/usr/include/stdint.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 68 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 81 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 97 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 111 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h" 2 3 4
# 5 "/home/user/ecpt/work/simpoint_nemu/include/common.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdbool.h" 1 3 4
# 6 "/home/user/ecpt/work/simpoint_nemu/include/common.h" 2
# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 7 "/home/user/ecpt/work/simpoint_nemu/include/common.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/string.h" 2 3 4
# 42 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 90 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 121 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 153 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 225 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 252 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 272 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 302 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 329 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 384 "/usr/include/string.h" 3 4
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 409 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 427 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));








# 1 "/usr/include/x86_64-linux-gnu/bits/strings_fortified.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/strings_fortified.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) bcopy (const void *__src, void *__dest, size_t __len)
{
  (void) __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) bzero (void *__dest, size_t __len)
{
  (void) __builtin___memset_chk (__dest, '\0', __len, __builtin_object_size (__dest, 0));
}
# 145 "/usr/include/strings.h" 2 3 4
# 432 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 494 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/string_fortified.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/string_fortified.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memcpy (void *__restrict __dest, const void *__restrict __src, size_t __len)

{
  return __builtin___memcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memmove (void *__dest, const void *__src, size_t __len)
{
  return __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}
# 58 "/usr/include/x86_64-linux-gnu/bits/string_fortified.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memset (void *__dest, int __ch, size_t __len)
{
# 71 "/usr/include/x86_64-linux-gnu/bits/string_fortified.h" 3 4
  return __builtin___memset_chk (__dest, __ch, __len, __builtin_object_size (__dest, 0));
}




void __explicit_bzero_chk (void *__dest, size_t __len, size_t __destlen)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) explicit_bzero (void *__dest, size_t __len)
{
  __explicit_bzero_chk (__dest, __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcpy (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}
# 102 "/usr/include/x86_64-linux-gnu/bits/string_fortified.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strncpy (char *__restrict __dest, const char *__restrict __src, size_t __len)

{
  return __builtin___strncpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}


extern char *__stpncpy_chk (char *__dest, const char *__src, size_t __n,
       size_t __destlen) __attribute__ ((__nothrow__ , __leaf__));
extern char *__stpncpy_alias (char *__dest, const char *__src, size_t __n) __asm__ ("" "stpncpy") __attribute__ ((__nothrow__ , __leaf__))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) stpncpy (char *__dest, const char *__src, size_t __n)
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1
      && (!__builtin_constant_p (__n) || __n > __builtin_object_size (__dest, 2 > 1)))
    return __stpncpy_chk (__dest, __src, __n, __builtin_object_size (__dest, 2 > 1));
  return __stpncpy_alias (__dest, __src, __n);
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcat (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strncat (char *__restrict __dest, const char *__restrict __src, size_t __len)

{
  return __builtin___strncat_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}
# 495 "/usr/include/string.h" 2 3 4




# 8 "/home/user/ecpt/work/simpoint_nemu/include/common.h" 2




# 1 "/home/user/ecpt/work/simpoint_nemu/include/generated/bbv.autoconf.h" 1
# 13 "/home/user/ecpt/work/simpoint_nemu/include/common.h" 2


# 1 "/home/user/ecpt/work/simpoint_nemu/include/macro.h" 1
# 16 "/home/user/ecpt/work/simpoint_nemu/include/common.h" 2






# 21 "/home/user/ecpt/work/simpoint_nemu/include/common.h"
typedef uint64_t word_t;
typedef int64_t sword_t;


typedef word_t rtlreg_t;
typedef word_t vaddr_t;
typedef uint32_t paddr_t;

typedef uint16_t ioaddr_t;


struct DynamicConfig {
  
# 33 "/home/user/ecpt/work/simpoint_nemu/include/common.h" 3 4
 _Bool 
# 33 "/home/user/ecpt/work/simpoint_nemu/include/common.h"
      ignore_illegal_mem_access;
  
# 34 "/home/user/ecpt/work/simpoint_nemu/include/common.h" 3 4
 _Bool 
# 34 "/home/user/ecpt/work/simpoint_nemu/include/common.h"
      debug_difftest;
};
extern struct DynamicConfig dynamic_config;
void update_dynamic_config(void* config);

# 1 "/home/user/ecpt/work/simpoint_nemu/include/debug.h" 1



# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4




# 4 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 3 4
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 37 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 38 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/libio.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 22 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 2 3 4




typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 36 "/usr/include/x86_64-linux-gnu/bits/libio.h" 2 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/x86_64-linux-gnu/bits/libio.h" 2 3 4
# 149 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;




typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 337 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 389 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 433 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 462 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 42 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 57 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 71 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;






typedef _G_fpos_t fpos_t;
# 131 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 132 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));







extern FILE *tmpfile (void) __attribute__ ((__warn_unused_result__));
# 173 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 190 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 213 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 232 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) __attribute__ ((__warn_unused_result__));




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 265 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 278 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 365 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));




extern int scanf (const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 395 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                          __attribute__ ((__warn_unused_result__));
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                         __attribute__ ((__warn_unused_result__));
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 420 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 443 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 477 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 495 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 506 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 517 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __attribute__ ((__warn_unused_result__));
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) __attribute__ ((__warn_unused_result__));




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) __attribute__ ((__warn_unused_result__));
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 757 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));







extern void perror (const char *__s);





# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) __attribute__ ((__warn_unused_result__));





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 840 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 859 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 1 3 4
# 43 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}
# 124 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 860 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern int __sprintf_chk (char *__restrict __s, int __flag, size_t __slen,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int __vsprintf_chk (char *__restrict __s, int __flag, size_t __slen,
      const char *__restrict __format,
      __gnuc_va_list __ap) __attribute__ ((__nothrow__ , __leaf__));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) sprintf (char *__restrict __s, const char *__restrict __fmt, ...)
{
  return __builtin___sprintf_chk (__s, 2 - 1,
      __builtin_object_size (__s, 2 > 1), __fmt, __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vsprintf (char *__restrict __s, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __builtin___vsprintf_chk (__s, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}



extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
      size_t __slen, const char *__restrict __format,
      ...) __attribute__ ((__nothrow__ , __leaf__));
extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
       size_t __slen, const char *__restrict __format,
       __gnuc_va_list __ap) __attribute__ ((__nothrow__ , __leaf__));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) snprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, ...)

{
  return __builtin___snprintf_chk (__s, __n, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vsnprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __builtin___vsnprintf_chk (__s, __n, 2 - 1,
        __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}





extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
     const char *__restrict __format, ...);
extern int __printf_chk (int __flag, const char *__restrict __format, ...);
extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
      const char *__restrict __format, __gnuc_va_list __ap);
extern int __vprintf_chk (int __flag, const char *__restrict __format,
     __gnuc_va_list __ap);


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
fprintf (FILE *__restrict __stream, const char *__restrict __fmt, ...)
{
  return __fprintf_chk (__stream, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
printf (const char *__restrict __fmt, ...)
{
  return __printf_chk (2 - 1, __fmt, __builtin_va_arg_pack ());
}







extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __ap)
{

  return __vfprintf_chk (stdout, 2 - 1, __fmt, __ap);



}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vfprintf (FILE *__restrict __stream,
   const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vfprintf_chk (__stream, 2 - 1, __fmt, __ap);
}


extern int __dprintf_chk (int __fd, int __flag, const char *__restrict __fmt,
     ...) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __vdprintf_chk (int __fd, int __flag,
      const char *__restrict __fmt, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 3, 0)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
dprintf (int __fd, const char *__restrict __fmt, ...)
{
  return __dprintf_chk (__fd, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}





extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vdprintf (int __fd, const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vdprintf_chk (__fd, 2 - 1, __fmt, __ap);
}
# 240 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern char *__fgets_chk (char *__restrict __s, size_t __size, int __n,
     FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern char *__fgets_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets")

                                        __attribute__ ((__warn_unused_result__));
extern char *__fgets_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets called with bigger size than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgets_chk (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1))
 return __fgets_chk_warn (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);
    }
  return __fgets_alias (__s, __n, __stream);
}

extern size_t __fread_chk (void *__restrict __ptr, size_t __ptrlen,
      size_t __size, size_t __n,
      FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread")


            __attribute__ ((__warn_unused_result__));
extern size_t __fread_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread called with bigger size * nmemb than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread (void *__restrict __ptr, size_t __size, size_t __n,
       FILE *__restrict __stream)
{
  if (__builtin_object_size (__ptr, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
   || !__builtin_constant_p (__n)
   || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 return __fread_chk (__ptr, __builtin_object_size (__ptr, 0), __size, __n, __stream);

      if (__size * __n > __builtin_object_size (__ptr, 0))
 return __fread_chk_warn (__ptr, __builtin_object_size (__ptr, 0), __size, __n, __stream);
    }
  return __fread_alias (__ptr, __size, __n, __stream);
}
# 326 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern size_t __fread_unlocked_chk (void *__restrict __ptr, size_t __ptrlen,
        size_t __size, size_t __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread_unlocked")


                     __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_unlocked_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread_unlocked called with bigger size * nmemb than " "length of destination buffer")))
                                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread_unlocked (void *__restrict __ptr, size_t __size, size_t __n,
  FILE *__restrict __stream)
{
  if (__builtin_object_size (__ptr, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
   || !__builtin_constant_p (__n)
   || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 return __fread_unlocked_chk (__ptr, __builtin_object_size (__ptr, 0), __size, __n,
         __stream);

      if (__size * __n > __builtin_object_size (__ptr, 0))
 return __fread_unlocked_chk_warn (__ptr, __builtin_object_size (__ptr, 0), __size, __n,
       __stream);
    }


  if (__builtin_constant_p (__size)
      && __builtin_constant_p (__n)
      && (__size | __n) < (((size_t) 1) << (8 * sizeof (size_t) / 2))
      && __size * __n <= 8)
    {
      size_t __cnt = __size * __n;
      char *__cptr = (char *) __ptr;
      if (__cnt == 0)
 return 0;

      for (; __cnt > 0; --__cnt)
 {
   int __c = (__builtin_expect (((__stream)->_IO_read_ptr >= (__stream)->_IO_read_end), 0) ? __uflow (__stream) : *(unsigned char *) (__stream)->_IO_read_ptr++);
   if (__c == (-1))
     break;
   *__cptr++ = __c;
 }
      return (__cptr - (char *) __ptr) / __size;
    }

  return __fread_unlocked_alias (__ptr, __size, __n, __stream);
}
# 863 "/usr/include/stdio.h" 2 3 4






# 5 "/home/user/ecpt/work/simpoint_nemu/include/debug.h" 2
# 1 "/usr/include/assert.h" 1 3 4
# 6 "/home/user/ecpt/work/simpoint_nemu/include/debug.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/include/utils.h" 1



# 1 "/home/user/ecpt/work/simpoint_nemu/include/common.h" 1
# 5 "/home/user/ecpt/work/simpoint_nemu/include/utils.h" 2




# 8 "/home/user/ecpt/work/simpoint_nemu/include/utils.h"
enum { NEMU_RUNNING, NEMU_STOP, NEMU_END, NEMU_ABORT, NEMU_QUIT };

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NEMUState;

extern NEMUState nemu_state;

enum {
  dflag_none = 0,
  dflag_mem,
  dflag_translate,
  dflag_trace_bb,
  dflag_trace_inst,
  dflag_trace_inst_dasm,
  dflag_betapoint,
  dflag_exit,
  dflag_memprof,
  dflag_ctrlprof,
  dflag_simpoint,
};




uint64_t get_time();
# 56 "/home/user/ecpt/work/simpoint_nemu/include/utils.h"
extern char log_bytebuf[80];
extern char log_asmbuf[80];



word_t expr(char *e, 
# 61 "/home/user/ecpt/work/simpoint_nemu/include/utils.h" 3 4
                    _Bool 
# 61 "/home/user/ecpt/work/simpoint_nemu/include/utils.h"
                         *success);


void iqueue_commit(vaddr_t pc, uint8_t *instr_buf, uint8_t ilen);
void iqueue_dump();





# 70 "/home/user/ecpt/work/simpoint_nemu/include/utils.h" 3 4
_Bool 
# 70 "/home/user/ecpt/work/simpoint_nemu/include/utils.h"
    is_gz_file(const char *filename);
# 7 "/home/user/ecpt/work/simpoint_nemu/include/debug.h" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 205 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 206 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 210 "/usr/include/unistd.h" 2 3 4
# 229 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 230 "/usr/include/unistd.h" 2 3 4






# 235 "/usr/include/unistd.h" 3 4
typedef __gid_t gid_t;




typedef __uid_t uid_t;
# 258 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;




typedef __pid_t pid_t;
# 277 "/usr/include/unistd.h" 3 4
typedef __socklen_t socklen_t;
# 290 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 307 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));
# 337 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 356 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) __attribute__ ((__warn_unused_result__));





extern ssize_t write (int __fd, const void *__buf, size_t __n) __attribute__ ((__warn_unused_result__));
# 379 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) __attribute__ ((__warn_unused_result__));






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) __attribute__ ((__warn_unused_result__));
# 420 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 435 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 447 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 472 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 514 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 528 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) __attribute__ ((__warn_unused_result__));




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
# 546 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 601 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 613 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 663 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 703 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 759 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) __attribute__ ((__warn_unused_result__));




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) __attribute__ ((__warn_unused_result__));


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4








extern char *optarg;
# 50 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 91 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 2 3 4


# 49 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4

# 873 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
# 970 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 994 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 1017 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 1038 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1059 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1082 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) __attribute__ ((__warn_unused_result__));
# 1118 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1167 "/usr/include/unistd.h" 3 4
int getentropy (void *__buffer, size_t __length) __attribute__ ((__warn_unused_result__));




# 1 "/usr/include/x86_64-linux-gnu/bits/unistd.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/unistd.h" 3 4
extern ssize_t __read_chk (int __fd, void *__buf, size_t __nbytes,
      size_t __buflen) __attribute__ ((__warn_unused_result__));
extern ssize_t __read_alias (int __fd, void *__buf, size_t __nbytes) __asm__ ("" "read")
                               __attribute__ ((__warn_unused_result__));
extern ssize_t __read_chk_warn (int __fd, void *__buf, size_t __nbytes, size_t __buflen) __asm__ ("" "__read_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("read called with bigger length than size of " "the destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
read (int __fd, void *__buf, size_t __nbytes)
{
  if (__builtin_object_size (__buf, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__nbytes))
 return __read_chk (__fd, __buf, __nbytes, __builtin_object_size (__buf, 0));

      if (__nbytes > __builtin_object_size (__buf, 0))
 return __read_chk_warn (__fd, __buf, __nbytes, __builtin_object_size (__buf, 0));
    }
  return __read_alias (__fd, __buf, __nbytes);
}
# 123 "/usr/include/x86_64-linux-gnu/bits/unistd.h" 3 4
extern ssize_t __readlink_chk (const char *__restrict __path,
          char *__restrict __buf, size_t __len,
          size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlink_alias (const char *__restrict __path, char *__restrict __buf, size_t __len) __asm__ ("" "readlink") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlink_chk_warn (const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) __asm__ ("" "__readlink_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("readlink called with bigger length " "than size of destination buffer")))
                                         ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) ssize_t
__attribute__ ((__nothrow__ , __leaf__)) readlink (const char *__restrict __path, char *__restrict __buf, size_t __len)

{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __readlink_chk (__path, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if ( __len > __builtin_object_size (__buf, 2 > 1))
 return __readlink_chk_warn (__path, __buf, __len, __builtin_object_size (__buf, 2 > 1));
    }
  return __readlink_alias (__path, __buf, __len);
}



extern ssize_t __readlinkat_chk (int __fd, const char *__restrict __path,
     char *__restrict __buf, size_t __len,
     size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlinkat_alias (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len) __asm__ ("" "readlinkat") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlinkat_chk_warn (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) __asm__ ("" "__readlinkat_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("readlinkat called with bigger " "length than size of destination " "buffer")))

                ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) ssize_t
__attribute__ ((__nothrow__ , __leaf__)) readlinkat (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len)

{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __readlinkat_chk (__fd, __path, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if (__len > __builtin_object_size (__buf, 2 > 1))
 return __readlinkat_chk_warn (__fd, __path, __buf, __len,
          __builtin_object_size (__buf, 2 > 1));
    }
  return __readlinkat_alias (__fd, __path, __buf, __len);
}


extern char *__getcwd_chk (char *__buf, size_t __size, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *__getcwd_alias (char *__buf, size_t __size) __asm__ ("" "getcwd") __attribute__ ((__nothrow__ , __leaf__))
                                              __attribute__ ((__warn_unused_result__));
extern char *__getcwd_chk_warn (char *__buf, size_t __size, size_t __buflen) __asm__ ("" "__getcwd_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getcwd caller with bigger length than size of " "destination buffer")))
                              ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) getcwd (char *__buf, size_t __size)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size))
 return __getcwd_chk (__buf, __size, __builtin_object_size (__buf, 2 > 1));

      if (__size > __builtin_object_size (__buf, 2 > 1))
 return __getcwd_chk_warn (__buf, __size, __builtin_object_size (__buf, 2 > 1));
    }
  return __getcwd_alias (__buf, __size);
}


extern char *__getwd_chk (char *__buf, size_t buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern char *__getwd_warn (char *__buf) __asm__ ("" "getwd") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("please use getcwd instead, as getwd " "doesn't specify buffer size")))
                                         ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) getwd (char *__buf)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    return __getwd_chk (__buf, __builtin_object_size (__buf, 2 > 1));
  return __getwd_warn (__buf);
}


extern size_t __confstr_chk (int __name, char *__buf, size_t __len,
        size_t __buflen) __attribute__ ((__nothrow__ , __leaf__));
extern size_t __confstr_alias (int __name, char *__buf, size_t __len) __asm__ ("" "confstr") __attribute__ ((__nothrow__ , __leaf__))
                             ;
extern size_t __confstr_chk_warn (int __name, char *__buf, size_t __len, size_t __buflen) __asm__ ("" "__confstr_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__((__warning__ ("confstr called with bigger length than size of destination " "buffer")))
            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) confstr (int __name, char *__buf, size_t __len)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __confstr_chk (__name, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if (__builtin_object_size (__buf, 2 > 1) < __len)
 return __confstr_chk_warn (__name, __buf, __len, __builtin_object_size (__buf, 2 > 1));
    }
  return __confstr_alias (__name, __buf, __len);
}


extern int __getgroups_chk (int __size, __gid_t __list[], size_t __listlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int __getgroups_alias (int __size, __gid_t __list[]) __asm__ ("" "getgroups") __attribute__ ((__nothrow__ , __leaf__))
                 __attribute__ ((__warn_unused_result__));
extern int __getgroups_chk_warn (int __size, __gid_t __list[], size_t __listlen) __asm__ ("" "__getgroups_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getgroups called with bigger group count than what " "can fit into destination buffer")))
                                           ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) getgroups (int __size, __gid_t __list[])
{
  if (__builtin_object_size (__list, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size) || __size < 0)
 return __getgroups_chk (__size, __list, __builtin_object_size (__list, 2 > 1));

      if (__size * sizeof (__gid_t) > __builtin_object_size (__list, 2 > 1))
 return __getgroups_chk_warn (__size, __list, __builtin_object_size (__list, 2 > 1));
    }
  return __getgroups_alias (__size, __list);
}


extern int __ttyname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int __ttyname_r_alias (int __fd, char *__buf, size_t __buflen) __asm__ ("" "ttyname_r") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (2)));
extern int __ttyname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__ttyname_r_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ttyname_r called with bigger buflen than " "size of destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) ttyname_r (int __fd, char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __ttyname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __ttyname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __ttyname_r_alias (__fd, __buf, __buflen);
}



extern int __getlogin_r_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nonnull__ (1)));
extern int __getlogin_r_alias (char *__buf, size_t __buflen) __asm__ ("" "getlogin_r")
                     __attribute__ ((__nonnull__ (1)));
extern int __getlogin_r_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__getlogin_r_chk")


     __attribute__ ((__nonnull__ (1))) __attribute__((__warning__ ("getlogin_r called with bigger buflen than " "size of destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
getlogin_r (char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __getlogin_r_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __getlogin_r_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __getlogin_r_alias (__buf, __buflen);
}




extern int __gethostname_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int __gethostname_alias (char *__buf, size_t __buflen) __asm__ ("" "gethostname") __attribute__ ((__nothrow__ , __leaf__))
                   __attribute__ ((__nonnull__ (1)));
extern int __gethostname_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__gethostname_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1))) __attribute__((__warning__ ("gethostname called with bigger buflen than " "size of destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) gethostname (char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __gethostname_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __gethostname_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __gethostname_alias (__buf, __buflen);
}




extern int __getdomainname_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int __getdomainname_alias (char *__buf, size_t __buflen) __asm__ ("" "getdomainname") __attribute__ ((__nothrow__ , __leaf__))

                     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int __getdomainname_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__getdomainname_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getdomainname called with bigger " "buflen than size of destination " "buffer")))

                    ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) getdomainname (char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __getdomainname_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __getdomainname_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __getdomainname_alias (__buf, __buflen);
}
# 1173 "/usr/include/unistd.h" 2 3 4



# 8 "/home/user/ecpt/work/simpoint_nemu/include/debug.h" 2
# 40 "/home/user/ecpt/work/simpoint_nemu/include/common.h" 2
# 5 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h" 2








# 12 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h"
struct ExecutionGuide {

  
# 14 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h" 3 4
 _Bool 
# 14 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h"
      force_raise_exception;
  uint64_t exception_num;
  uint64_t mtval;
  uint64_t stval;

  
# 19 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h" 3 4
 _Bool 
# 19 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h"
      force_set_jump_target;
  uint64_t jump_target;
};

struct DebugInfo {
  uint64_t current_pc;
};
# 42 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h"
typedef struct {

  union {
    uint64_t _64;
  } gpr[32];

  union {
    uint64_t _64;
  } fpr[32];


  uint64_t pc;
  uint64_t mstatus, mcause, mepc;
  uint64_t sstatus, scause, sepc;

  uint64_t satp, mip, mie, mscratch, sscratch, mideleg, medeleg;
  uint64_t mtval, stval, mtvec, stvec;
  uint64_t mode;
# 76 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h"
  
# 76 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h" 3 4
 _Bool 
# 76 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h"
      amo;
  int mem_exception;


  uint64_t lr_addr;
  uint64_t lr_valid;

  
# 83 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h" 3 4
 _Bool 
# 83 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h"
      INTR;


  
# 86 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h" 3 4
 _Bool 
# 86 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h"
      guided_exec;
  struct ExecutionGuide execution_guide;


  struct DebugInfo debug;



} riscv64_CPU_state;


typedef struct {
  union {
    struct {
      uint32_t opcode1_0 : 2;
      uint32_t opcode6_2 : 5;
      uint32_t rd : 5;
      uint32_t funct3 : 3;
      uint32_t rs1 : 5;
      uint32_t rs2 : 5;
      uint32_t funct7 : 7;
    } r;
    struct {
      uint32_t opcode1_0 : 2;
      uint32_t opcode6_2 : 5;
      uint32_t rd : 5;
      uint32_t funct3 : 3;
      uint32_t rs1 : 5;
      int32_t simm11_0 :12;
    } i;
    struct {
      uint32_t opcode1_0 : 2;
      uint32_t opcode6_2 : 5;
      uint32_t imm4_0 : 5;
      uint32_t funct3 : 3;
      uint32_t rs1 : 5;
      uint32_t rs2 : 5;
      int32_t simm11_5 : 7;
    } s;
    struct {
      uint32_t opcode1_0 : 2;
      uint32_t opcode6_2 : 5;
      uint32_t imm11 : 1;
      uint32_t imm4_1 : 4;
      uint32_t funct3 : 3;
      uint32_t rs1 : 5;
      uint32_t rs2 : 5;
      uint32_t imm10_5 : 6;
      int32_t simm12 : 1;
    } b;
    struct {
      uint32_t opcode1_0 : 2;
      uint32_t opcode6_2 : 5;
      uint32_t rd : 5;
      int32_t simm31_12 :20;
    } u;
    struct {
      uint32_t opcode1_0 : 2;
      uint32_t opcode6_2 : 5;
      uint32_t rd : 5;
      uint32_t imm19_12 : 8;
      uint32_t imm11 : 1;
      uint32_t imm10_1 :10;
      int32_t simm20 : 1;
    } j;
    struct {
      uint32_t pad7 :20;
      uint32_t csr :12;
    } csr;
    struct {
      uint32_t opcode1_0 : 2;
      uint32_t opcode6_2 : 5;
      uint32_t rd : 5;
      uint32_t rm : 3;
      uint32_t rs1 : 5;
      uint32_t rs2 : 5;
      uint32_t fmt : 2;
      uint32_t funct5 : 5;
    } fp;
# 211 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h"
    uint32_t val;
  } instr;
} riscv64_ISADecodeInfo;

enum { MODE_U = 0, MODE_S, MODE_H, MODE_M };

int get_data_mmu_state();
# 6 "/home/user/ecpt/work/simpoint_nemu/include/isa.h" 2



typedef riscv64_CPU_state CPU_state;
typedef riscv64_ISADecodeInfo ISADecodeInfo;


extern char isa_logo[];
void init_isa();


extern CPU_state cpu;
extern rtlreg_t csr_array[4096];
void isa_reg_display();
word_t isa_reg_str2val(const char *name, 
# 20 "/home/user/ecpt/work/simpoint_nemu/include/isa.h" 3 4
                                        _Bool 
# 20 "/home/user/ecpt/work/simpoint_nemu/include/isa.h"
                                             *success);


struct Decode;
int isa_fetch_decode(struct Decode *s);
void isa_hostcall(uint32_t id, rtlreg_t *dest, const rtlreg_t *src1,
    const rtlreg_t *src2, word_t imm);


enum { MMU_DIRECT, MMU_TRANSLATE, MMU_DYNAMIC };
enum { MEM_TYPE_IFETCH, MEM_TYPE_READ, MEM_TYPE_WRITE, MEM_TYPE_IFETCH_READ, MEM_TYPE_WRITE_READ };
enum { MEM_RET_OK, MEM_RET_FAIL, MEM_RET_CROSS_PAGE };




int isa_mmu_check(vaddr_t vaddr, int len, int type);

paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type);

# 39 "/home/user/ecpt/work/simpoint_nemu/include/isa.h" 3 4
_Bool 
# 39 "/home/user/ecpt/work/simpoint_nemu/include/isa.h"
    isa_pmp_check_permission(paddr_t addr, int len, int type, int mode);


vaddr_t raise_intr(word_t NO, vaddr_t epc);

word_t isa_query_intr();




# 48 "/home/user/ecpt/work/simpoint_nemu/include/isa.h" 3 4
_Bool 
# 48 "/home/user/ecpt/work/simpoint_nemu/include/isa.h"
    isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc);
void isa_difftest_attach();


void isa_difftest_regcpy(void *dut, 
# 52 "/home/user/ecpt/work/simpoint_nemu/include/isa.h" 3 4
                                   _Bool 
# 52 "/home/user/ecpt/work/simpoint_nemu/include/isa.h"
                                        direction);
void isa_difftest_csrcpy(void *dut, 
# 53 "/home/user/ecpt/work/simpoint_nemu/include/isa.h" 3 4
                                   _Bool 
# 53 "/home/user/ecpt/work/simpoint_nemu/include/isa.h"
                                        direction);
void isa_difftest_raise_intr(word_t NO);
void isa_difftest_uarchstatus_cpy(void *dut, 
# 55 "/home/user/ecpt/work/simpoint_nemu/include/isa.h" 3 4
                                            _Bool 
# 55 "/home/user/ecpt/work/simpoint_nemu/include/isa.h"
                                                 direction);
void isa_difftest_guided_exec(void *guide);
void isa_difftest_query_ref(void *result_buffer, uint64_t type);
# 5 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 2



typedef struct {
  union {
    ;
    ;
    rtlreg_t *preg;
    word_t imm;
    sword_t simm;
  };
  ;
  ;
  ;
  ;
  ;
  ;
  ;
} Operand;

enum {
  INSTR_TYPE_N,
  INSTR_TYPE_J,
  INSTR_TYPE_B,
  INSTR_TYPE_I,
};

typedef struct Decode {
  union {
    struct {
      struct Decode *tnext;
      struct Decode *ntnext;
    };
    struct {
      struct Decode *list_next;
      struct Decode *bb_src;
    };
  };
  vaddr_t pc;
  vaddr_t snpc;
  const void *EHelper;
  ;
  Operand dest, src1, src2;
  vaddr_t jnpc;
  uint16_t idx_in_bb;
  uint8_t type;
  ISADecodeInfo isa;
  ;
# 68 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
} Decode;
# 104 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
static inline void decode_empty (Decode *s, int width) {}






__attribute__((always_inline))
static inline void pattern_decode(const char *str, int len,
    uint32_t *key, uint32_t *mask, uint32_t *shift) {
  uint32_t __key = 0, __mask = 0, __shift = 0;
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
  if ((0) >= len) goto finish; else { char c = str[0]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 1) >= len) goto finish; else { char c = str[(0) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 2) >= len) goto finish; else { char c = str[(0) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 2) + 1) >= len) goto finish; else { char c = str[((0) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 4) >= len) goto finish; else { char c = str[(0) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 4) + 1) >= len) goto finish; else { char c = str[((0) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 4) + 2) >= len) goto finish; else { char c = str[((0) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 4) + 2) + 1) >= len) goto finish; else { char c = str[(((0) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 8) >= len) goto finish; else { char c = str[(0) + 8]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 8) + 1) >= len) goto finish; else { char c = str[((0) + 8) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 8) + 2) >= len) goto finish; else { char c = str[((0) + 8) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 8) + 2) + 1) >= len) goto finish; else { char c = str[(((0) + 8) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 8) + 4) >= len) goto finish; else { char c = str[((0) + 8) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 8) + 4) + 1) >= len) goto finish; else { char c = str[(((0) + 8) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 8) + 4) + 2) >= len) goto finish; else { char c = str[(((0) + 8) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 8) + 4) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 8) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 16) >= len) goto finish; else { char c = str[(0) + 16]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 16) + 1) >= len) goto finish; else { char c = str[((0) + 16) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 16) + 2) >= len) goto finish; else { char c = str[((0) + 16) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 2) + 1) >= len) goto finish; else { char c = str[(((0) + 16) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 16) + 4) >= len) goto finish; else { char c = str[((0) + 16) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 4) + 1) >= len) goto finish; else { char c = str[(((0) + 16) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 4) + 2) >= len) goto finish; else { char c = str[(((0) + 16) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 16) + 4) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 16) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 16) + 8) >= len) goto finish; else { char c = str[((0) + 16) + 8]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 8) + 1) >= len) goto finish; else { char c = str[(((0) + 16) + 8) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 8) + 2) >= len) goto finish; else { char c = str[(((0) + 16) + 8) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 16) + 8) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 16) + 8) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 8) + 4) >= len) goto finish; else { char c = str[(((0) + 16) + 8) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 16) + 8) + 4) + 1) >= len) goto finish; else { char c = str[((((0) + 16) + 8) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 16) + 8) + 4) + 2) >= len) goto finish; else { char c = str[((((0) + 16) + 8) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 16) + 8) + 4) + 2) + 1) >= len) goto finish; else { char c = str[(((((0) + 16) + 8) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 32) >= len) goto finish; else { char c = str[(0) + 32]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 32) + 1) >= len) goto finish; else { char c = str[((0) + 32) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 32) + 2) >= len) goto finish; else { char c = str[((0) + 32) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 2) + 1) >= len) goto finish; else { char c = str[(((0) + 32) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 32) + 4) >= len) goto finish; else { char c = str[((0) + 32) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 4) + 1) >= len) goto finish; else { char c = str[(((0) + 32) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 4) + 2) >= len) goto finish; else { char c = str[(((0) + 32) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 4) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 32) + 8) >= len) goto finish; else { char c = str[((0) + 32) + 8]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 8) + 1) >= len) goto finish; else { char c = str[(((0) + 32) + 8) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 8) + 2) >= len) goto finish; else { char c = str[(((0) + 32) + 8) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 8) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 8) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 8) + 4) >= len) goto finish; else { char c = str[(((0) + 32) + 8) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 8) + 4) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 8) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 8) + 4) + 2) >= len) goto finish; else { char c = str[((((0) + 32) + 8) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 32) + 8) + 4) + 2) + 1) >= len) goto finish; else { char c = str[(((((0) + 32) + 8) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 32) + 16) >= len) goto finish; else { char c = str[((0) + 32) + 16]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 16) + 1) >= len) goto finish; else { char c = str[(((0) + 32) + 16) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 16) + 2) >= len) goto finish; else { char c = str[(((0) + 32) + 16) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 16) + 4) >= len) goto finish; else { char c = str[(((0) + 32) + 16) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 4) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 4) + 2) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 32) + 16) + 4) + 2) + 1) >= len) goto finish; else { char c = str[(((((0) + 32) + 16) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 16) + 8) >= len) goto finish; else { char c = str[(((0) + 32) + 16) + 8]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 8) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 8) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 8) + 2) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 8) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 32) + 16) + 8) + 2) + 1) >= len) goto finish; else { char c = str[(((((0) + 32) + 16) + 8) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 8) + 4) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 8) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 32) + 16) + 8) + 4) + 1) >= len) goto finish; else { char c = str[(((((0) + 32) + 16) + 8) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 32) + 16) + 8) + 4) + 2) >= len) goto finish; else { char c = str[(((((0) + 32) + 16) + 8) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((((0) + 32) + 16) + 8) + 4) + 2) + 1) >= len) goto finish; else { char c = str[((((((0) + 32) + 16) + 8) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { fflush(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stdout
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[1;31m"); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "invalid character '%c' in pattern string", c); fprintf(
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 stderr
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h", 134, __extension__ __PRETTY_FUNCTION__); }))
# 134 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } };

finish:
  *key = __key >> __shift;
  *mask = __mask >> __shift;
  *shift = __shift;
}
# 5 "/home/user/ecpt/work/simpoint_nemu/include/rtl/rtl.h" 2

extern const rtlreg_t rzero;
extern rtlreg_t tmp_reg[4];
# 21 "/home/user/ecpt/work/simpoint_nemu/include/rtl/rtl.h"
enum {





  RELOP_FALSE = 0 | 0 | 0 | 0,
  RELOP_TRUE = 0 | 0 | 0 | 1,
  RELOP_EQ = 0 | 0 | 2 | 0,
  RELOP_NE = 0 | 0 | 2 | 1,

  RELOP_LT = 0 | 4 | 0 | 0,
  RELOP_LE = 0 | 4 | 2 | 0,
  RELOP_GT = 0 | 4 | 2 | 1,
  RELOP_GE = 0 | 4 | 0 | 1,

  RELOP_LTU = 8 | 0 | 0 | 0,
  RELOP_LEU = 8 | 0 | 2 | 0,
  RELOP_GTU = 8 | 0 | 2 | 1,
  RELOP_GEU = 8 | 0 | 0 | 1,
};

# 1 "/home/user/ecpt/work/simpoint_nemu/include/rtl/fp.h" 1



enum {
  FPCALL_W32,
  FPCALL_W64,
  FPCALL_W128,
  FPCALL_W80,
};

enum {
  FPCALL_RM_RNE,
  FPCALL_RM_RTZ,
  FPCALL_RM_RDN,
  FPCALL_RM_RUP,
  FPCALL_RM_RMM,
};

enum {
  FPCALL_EX_NX = 0x01,
  FPCALL_EX_UF = 0x02,
  FPCALL_EX_OF = 0x04,
  FPCALL_EX_DZ = 0x08,
  FPCALL_EX_NV = 0x10,
};

enum {
  FPCALL_ADD,
  FPCALL_SUB,
  FPCALL_MUL,
  FPCALL_DIV,
  FPCALL_SQRT,
  FPCALL_MADD,

  FPCALL_I32ToF,
  FPCALL_U32ToF,
  FPCALL_I64ToF,
  FPCALL_U64ToF,

  FPCALL_FToI32,
  FPCALL_FToU32,
  FPCALL_FToI64,
  FPCALL_FToU64,

  FPCALL_F32ToF64,
  FPCALL_F64ToF32,

  FPCALL_NEED_RM,

  FPCALL_MAX,
  FPCALL_MIN,
  FPCALL_LE,
  FPCALL_EQ,
  FPCALL_LT,
};
# 44 "/home/user/ecpt/work/simpoint_nemu/include/rtl/rtl.h" 2

enum {
  HOSTCALL_EXIT,
  HOSTCALL_INV,
  HOSTCALL_PIO,
  HOSTCALL_FP,
  HOSTCALL_CSR,
  HOSTCALL_TRAP,
  HOSTCALL_PRIV,
};

void rtl_hostcall(Decode *s, uint32_t id, rtlreg_t *dest, const rtlreg_t *src1, const rtlreg_t *src2, word_t imm)
                                     ;

# 1 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 1



# 1 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h" 1
# 45 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h"
static inline 
# 45 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h" 3 4
             _Bool 
# 45 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h"
                  interpret_relop(uint32_t relop, const rtlreg_t src1, const rtlreg_t src2) {
  switch (relop) {
    case RELOP_FALSE: return 
# 47 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h" 3 4
                            0
# 47 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h"
                                 ;
    case RELOP_TRUE: return 
# 48 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h" 3 4
                           1
# 48 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h"
                               ;
    case RELOP_EQ: return src1 == src2;
    case RELOP_NE: return src1 != src2;
    case RELOP_LT: return (sword_t)src1 < (sword_t)src2;
    case RELOP_LE: return (sword_t)src1 <= (sword_t)src2;
    case RELOP_GT: return (sword_t)src1 > (sword_t)src2;
    case RELOP_GE: return (sword_t)src1 >= (sword_t)src2;
    case RELOP_LTU: return src1 < src2;
    case RELOP_LEU: return src1 <= src2;
    case RELOP_GTU: return src1 > src2;
    case RELOP_GEU: return src1 >= src2;
    default: do { if (!(0)) { fflush(
# 59 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h" 3 4
            stdout
# 59 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h"
            ); fprintf(
# 59 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h" 3 4
            stderr
# 59 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h"
            , "\33[1;31m"); fprintf(
# 59 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h" 3 4
            stderr
# 59 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h"
            , "unsupport relop = %d", relop); fprintf(
# 59 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h" 3 4
            stderr
# 59 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h"
            , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 59 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h" 3 4
            ((void) sizeof ((
# 59 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h"
            0
# 59 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h" 3 4
            ) ? 1 : 0), __extension__ ({ if (
# 59 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h"
            0
# 59 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h" 3 4
            ) ; else __assert_fail (
# 59 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h"
            "0"
# 59 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h" 3 4
            , "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h", 59, __extension__ __PRETTY_FUNCTION__); }))
# 59 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/c_op.h"
            ; } } while (0);
  }
}
# 5 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h" 1





enum ProfilingState {
    NoProfiling = 0,
    SimpointProfiling,
    SimpointCheckpointing,
    BetapointProfiling,
    UniformCheckpointing
};

extern int profiling_state;
extern 
# 15 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h" 3 4
      _Bool 
# 15 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h"
           checkpoint_taking;
extern 
# 16 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h" 3 4
      _Bool 
# 16 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h"
           checkpoint_restoring;
extern uint64_t checkpoint_interval;

extern 
# 19 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h" 3 4
      _Bool 
# 19 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h"
           wait_manual_oneshot_cpt;
extern 
# 20 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h" 3 4
      _Bool 
# 20 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h"
           wait_manual_uniform_cpt;
extern 
# 21 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h" 3 4
      _Bool 
# 21 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h"
           recvd_manual_oneshot_cpt;
extern 
# 22 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h" 3 4
      _Bool 
# 22 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h"
           recvd_manual_uniform_cpt;

extern 
# 24 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h" 3 4
      _Bool 
# 24 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h"
           profiling_started;
extern 
# 25 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h" 3 4
      _Bool 
# 25 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h"
           force_cpt_mmode;

void reset_inst_counters();
# 6 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/include/memory/vaddr.h" 1





struct Decode;
word_t vaddr_ifetch(vaddr_t addr, int len);
word_t vaddr_read(struct Decode *s, vaddr_t addr, int len, int mmu_mode);
void vaddr_write(struct Decode *s, vaddr_t addr, int len, word_t data, int mmu_mode);

word_t vaddr_read_safe(vaddr_t addr, int len);





int force_raise_pf(vaddr_t vaddr, int type);
# 7 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 2
# 26 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
static inline void rtl_add(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((*src1) + (*src2)); } static inline void rtl_addi(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const sword_t imm) { *dest = ((*src1) + (imm)); }
static inline void rtl_sub(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((*src1) - (*src2)); } static inline void rtl_subi(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const sword_t imm) { *dest = ((*src1) - (imm)); }
static inline void rtl_and(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((*src1) & (*src2)); } static inline void rtl_andi(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const sword_t imm) { *dest = ((*src1) & (imm)); }
static inline void rtl_or(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((*src1) | (*src2)); } static inline void rtl_ori(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const sword_t imm) { *dest = ((*src1) | (imm)); }
static inline void rtl_xor(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((*src1) ^ (*src2)); } static inline void rtl_xori(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const sword_t imm) { *dest = ((*src1) ^ (imm)); }
static inline void rtl_shl(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((*src1) << ((*src2) & 0x3f)); } static inline void rtl_shli(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const sword_t imm) { *dest = ((*src1) << ((imm) & 0x3f)); }
static inline void rtl_shr(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((*src1) >> ((*src2) & 0x3f)); } static inline void rtl_shri(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const sword_t imm) { *dest = ((*src1) >> ((imm) & 0x3f)); }
static inline void rtl_sar(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((sword_t)(*src1) >> ((*src2) & 0x3f)); } static inline void rtl_sari(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const sword_t imm) { *dest = ((sword_t)(*src1) >> ((imm) & 0x3f)); }


static inline void rtl_addw(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((int64_t)(int32_t)((*src1) + (*src2))); } static inline void rtl_addwi(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const sword_t imm) { *dest = ((int64_t)(int32_t)((*src1) + (imm))); }
static inline void rtl_subw(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((int64_t)(int32_t)((*src1) - (*src2))); } static inline void rtl_subwi(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const sword_t imm) { *dest = ((int64_t)(int32_t)((*src1) - (imm))); }
static inline void rtl_shlw(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((int64_t)(int32_t)((uint32_t)(*src1) << ((*src2) & 0x1f))); } static inline void rtl_shlwi(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const sword_t imm) { *dest = ((int64_t)(int32_t)((uint32_t)(*src1) << ((imm) & 0x1f))); }
static inline void rtl_shrw(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((int64_t)(int32_t)((uint32_t)(*src1) >> ((*src2) & 0x1f))); } static inline void rtl_shrwi(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const sword_t imm) { *dest = ((int64_t)(int32_t)((uint32_t)(*src1) >> ((imm) & 0x1f))); }
static inline void rtl_sarw(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((int64_t)(int32_t)(( int32_t)(*src1) >> ((*src2) & 0x1f))); } static inline void rtl_sarwi(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const sword_t imm) { *dest = ((int64_t)(int32_t)(( int32_t)(*src1) >> ((imm) & 0x1f))); }






static inline void rtl_setrelop(Decode *s, uint32_t relop, rtlreg_t *dest, const rtlreg_t *src1, const rtlreg_t *src2)
                                                {
  *dest = interpret_relop(relop, *src1, *src2);
}

static inline void rtl_setrelopi(Decode *s, uint32_t relop, rtlreg_t *dest, const rtlreg_t *src1, sword_t imm)
                                       {
  *dest = interpret_relop(relop, *src1, imm);
}



static inline void rtl_mulu_lo(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((*src1) * (*src2)); }
static inline void rtl_mulu_hi(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = (((__uint128_t)(*src1) * (__uint128_t)(*src2)) >> 64); }
static inline void rtl_muls_hi(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = (((__int128_t)(sword_t)(*src1) * (__int128_t)(sword_t)(*src2)) >> 64); }
static inline void rtl_divu_q(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((*src1) / (*src2)); }
static inline void rtl_divu_r(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((*src1) % (*src2)); }
static inline void rtl_divs_q(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((sword_t)(*src1) / (sword_t)(*src2)); }
static inline void rtl_divs_r(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((sword_t)(*src1) % (sword_t)(*src2)); }


static inline void rtl_mulw(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((int64_t)(int32_t)((*src1) * (*src2))); }
static inline void rtl_divw(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((int64_t)(int32_t)(( int32_t)(*src1) / ( int32_t)(*src2))); }
static inline void rtl_divuw(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((int64_t)(int32_t)((uint32_t)(*src1) / (uint32_t)(*src2))); }
static inline void rtl_remw(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((int64_t)(int32_t)(( int32_t)(*src1) % ( int32_t)(*src2))); }
static inline void rtl_remuw(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, const rtlreg_t* src2) { *dest = ((int64_t)(int32_t)((uint32_t)(*src1) % (uint32_t)(*src2))); }


static inline void rtl_div64u_q(Decode *s, rtlreg_t* dest, const rtlreg_t* src1_hi, const rtlreg_t* src1_lo, const rtlreg_t* src2)
                                                                            {
  uint64_t dividend = ((uint64_t)(*src1_hi) << 32) | (*src1_lo);
  uint32_t divisor = (*src2);
  *dest = dividend / divisor;
}

static inline void rtl_div64u_r(Decode *s, rtlreg_t* dest, const rtlreg_t* src1_hi, const rtlreg_t* src1_lo, const rtlreg_t* src2)
                                                                            {
  uint64_t dividend = ((uint64_t)(*src1_hi) << 32) | (*src1_lo);
  uint32_t divisor = (*src2);
  *dest = dividend % divisor;
}

static inline void rtl_div64s_q(Decode *s, rtlreg_t* dest, const rtlreg_t* src1_hi, const rtlreg_t* src1_lo, const rtlreg_t* src2)
                                                                            {
  int64_t dividend = ((uint64_t)(*src1_hi) << 32) | (*src1_lo);
  int32_t divisor = (*src2);
  *dest = dividend / divisor;
}

static inline void rtl_div64s_r(Decode *s, rtlreg_t* dest, const rtlreg_t* src1_hi, const rtlreg_t* src1_lo, const rtlreg_t* src2)
                                                                            {
  int64_t dividend = ((uint64_t)(*src1_hi) << 32) | (*src1_lo);
  int32_t divisor = (*src2);
  *dest = dividend % divisor;
}



static inline void rtl_lm(Decode *s, rtlreg_t *dest, const rtlreg_t* addr, word_t offset, int len, int mmu_mode)
                                          {
  *dest = vaddr_read(s, *addr + offset, len, mmu_mode);






}

static inline void rtl_sm(Decode *s, const rtlreg_t *src1, const rtlreg_t* addr, word_t offset, int len, int mmu_mode)
                                          {
  vaddr_write(s, *addr + offset, len, *src1, mmu_mode);






}

static inline void rtl_lms(Decode *s, rtlreg_t *dest, const rtlreg_t* addr, word_t offset, int len, int mmu_mode)
                                          {
  word_t val = vaddr_read(s, *addr + offset, len, mmu_mode);
  switch (len) {
    case 4: *dest = (sword_t)(int32_t)val; return;
    case 1: *dest = (sword_t)( int8_t)val; return;
    case 2: *dest = (sword_t)(int16_t)val; return;
    case 8: *dest = (sword_t)(int64_t)val; return;
    default: 
# 135 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 3 4
   ((void) sizeof ((
# 135 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
   0
# 135 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 3 4
   ) ? 1 : 0), __extension__ ({ if (
# 135 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
   0
# 135 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 3 4
   ) ; else __assert_fail (
# 135 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
   "0"
# 135 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 3 4
   , "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h", 135, __extension__ __PRETTY_FUNCTION__); }))
# 135 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
                                             ;
  }






}

static inline void rtl_host_lm(Decode *s, rtlreg_t* dest, const void *addr, int len) {
  switch (len) {
    case 4: *dest = *(uint32_t *)addr; return;
    case 1: *dest = *( uint8_t *)addr; return;
    case 2: *dest = *(uint16_t *)addr; return;
    case 8: *dest = *(uint64_t *)addr; return;
    default: 
# 151 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 3 4
   ((void) sizeof ((
# 151 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
   0
# 151 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 3 4
   ) ? 1 : 0), __extension__ ({ if (
# 151 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
   0
# 151 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 3 4
   ) ; else __assert_fail (
# 151 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
   "0"
# 151 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 3 4
   , "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h", 151, __extension__ __PRETTY_FUNCTION__); }))
# 151 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
                                             ;
  }
}

static inline void rtl_host_sm(Decode *s, void *addr, const rtlreg_t *src1, int len) {
  switch (len) {
    case 4: *(uint32_t *)addr = *src1; return;
    case 1: *( uint8_t *)addr = *src1; return;
    case 2: *(uint16_t *)addr = *src1; return;
    case 8: *(uint64_t *)addr = *src1; return;
    default: 
# 161 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 3 4
   ((void) sizeof ((
# 161 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
   0
# 161 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 3 4
   ) ? 1 : 0), __extension__ ({ if (
# 161 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
   0
# 161 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 3 4
   ) ; else __assert_fail (
# 161 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
   "0"
# 161 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 3 4
   , "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h", 161, __extension__ __PRETTY_FUNCTION__); }))
# 161 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
                                             ;
  }
}


extern void simpoint_profiling(uint64_t pc, 
# 166 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 3 4
                                           _Bool 
# 166 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
                                                is_control, uint64_t abs_instr_count);
extern uint64_t get_abs_instr_count();

static inline void rtl_j(Decode *s, vaddr_t target) {
# 182 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
  cpu.pc = target;

  if (profiling_state == SimpointProfiling && profiling_started) {
    simpoint_profiling(cpu.pc, 
# 185 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 3 4
                              1
# 185 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
                                  , get_abs_instr_count());
  }





}

static inline void rtl_jr(Decode *s, rtlreg_t *target) {
# 207 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
  cpu.pc = *target;

  if (profiling_state == SimpointProfiling && profiling_started) {
    simpoint_profiling(cpu.pc, 
# 210 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 3 4
                              1
# 210 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
                                  , get_abs_instr_count());
  }





}

static inline void rtl_jrelop(Decode *s, uint32_t relop, const rtlreg_t *src1, const rtlreg_t *src2, vaddr_t target)
                                                                {
  
# 221 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h" 3 4
 _Bool 
# 221 "/home/user/ecpt/work/simpoint_nemu/src/engine/interpreter/rtl-basic.h"
      is_jmp = interpret_relop(relop, *src1, *src2);
  rtl_j(s, (is_jmp ? target : s->snpc));
}
# 59 "/home/user/ecpt/work/simpoint_nemu/include/rtl/rtl.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h" 1
# 10 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h"
static inline void rtl_li(Decode *s, rtlreg_t* dest, const rtlreg_t imm) {
  rtl_addi(s, dest, (&rzero), imm);
}

static inline void rtl_mv(Decode *s, rtlreg_t* dest, const rtlreg_t *src1) {
  rtl_addi(s, dest, src1, 0);
}

static inline void rtl_not(Decode *s, rtlreg_t *dest, const rtlreg_t* src1) {




  rtl_xori(s, dest, src1, -1);

}

static inline void rtl_neg(Decode *s, rtlreg_t *dest, const rtlreg_t* src1) {




  rtl_sub(s, dest, (&rzero), src1);

}

static inline void rtl_sext(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, int width) {




  const int word_size = sizeof(word_t);
  if (width == word_size) {
    rtl_mv(s, dest, src1);
  } else {

    
# 46 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h" 3 4
   ((void) sizeof ((
# 46 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h"
   width == 1 || width == 2 || width == 4
# 46 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h" 3 4
   ) ? 1 : 0), __extension__ ({ if (
# 46 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h"
   width == 1 || width == 2 || width == 4
# 46 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h" 3 4
   ) ; else __assert_fail (
# 46 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h"
   "width == 1 || width == 2 || MUXDEF(CONFIG_ISA64, width == 4, false)"
# 46 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h" 3 4
   , "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h", 46, __extension__ __PRETTY_FUNCTION__); }))
# 46 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h"
                                                                              ;

    rtl_shli(s, dest, src1, (word_size - width) * 8);
    rtl_sari(s, dest, dest, (word_size - width) * 8);
  }

}

static inline void rtl_zext(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, int width) {




  const int word_size = sizeof(word_t);
  if (width == word_size) {
    rtl_mv(s, dest, src1);
  } else {

    
# 64 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h" 3 4
   ((void) sizeof ((
# 64 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h"
   width == 1 || width == 2 || width == 4
# 64 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h" 3 4
   ) ? 1 : 0), __extension__ ({ if (
# 64 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h"
   width == 1 || width == 2 || width == 4
# 64 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h" 3 4
   ) ; else __assert_fail (
# 64 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h"
   "width == 1 || width == 2 || MUXDEF(CONFIG_ISA64, width == 4, false)"
# 64 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h" 3 4
   , "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h", 64, __extension__ __PRETTY_FUNCTION__); }))
# 64 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h"
                                                                              ;

    rtl_shli(s, dest, src1, (word_size - width) * 8);
    rtl_shri(s, dest, dest, (word_size - width) * 8);
  }

}

static inline void rtl_msb(Decode *s, rtlreg_t* dest, const rtlreg_t* src1, int width) {




  rtl_shri(s, dest, src1, width * 8 - 1);
  if (width != 4) {
    rtl_andi(s, dest, dest, 0x1);
  }

}

static inline void rtl_trap(Decode *s, vaddr_t ret_pc, word_t NO) {
  rtl_li(s, (&tmp_reg[3]), ret_pc);
  rtl_hostcall(s, HOSTCALL_TRAP, (&tmp_reg[3]), (&tmp_reg[3]), 
# 86 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h" 3 4
                                        ((void *)0)
# 86 "/home/user/ecpt/work/simpoint_nemu/include/rtl/pseudo.h"
                                            , NO);
  rtl_jr(s, (&tmp_reg[3]));
}
static inline void rtl_mux(Decode *s, rtlreg_t* dest, const rtlreg_t* cond, const rtlreg_t* src1, const rtlreg_t* src2) {


  rtl_setrelopi(s, RELOP_EQ, (&tmp_reg[3]), cond, 0);
  rtl_subi(s, (&tmp_reg[3]), (&tmp_reg[3]), 1);

  rtl_and(s, (&tmp_reg[2]), src1, (&tmp_reg[3]));
  rtl_not(s, (&tmp_reg[3]), (&tmp_reg[3]));
  rtl_and(s, (&tmp_reg[3]), src2, (&tmp_reg[3]));
  rtl_or(s, dest, (&tmp_reg[3]), (&tmp_reg[2]));
}
# 60 "/home/user/ecpt/work/simpoint_nemu/include/rtl/rtl.h" 2
# 5 "src/isa/riscv64/instr/../local-include/rtl.h" 2
# 1 "src/isa/riscv64/instr/../local-include/reg.h" 1





static inline int check_reg_index(int index) {
  
# 7 "src/isa/riscv64/instr/../local-include/reg.h" 3 4
 ((void) sizeof ((
# 7 "src/isa/riscv64/instr/../local-include/reg.h"
 index >= 0 && index < 32
# 7 "src/isa/riscv64/instr/../local-include/reg.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 7 "src/isa/riscv64/instr/../local-include/reg.h"
 index >= 0 && index < 32
# 7 "src/isa/riscv64/instr/../local-include/reg.h" 3 4
 ) ; else __assert_fail (
# 7 "src/isa/riscv64/instr/../local-include/reg.h"
 "index >= 0 && index < 32"
# 7 "src/isa/riscv64/instr/../local-include/reg.h" 3 4
 , "src/isa/riscv64/instr/../local-include/reg.h", 7, __extension__ __PRETTY_FUNCTION__); }))
# 7 "src/isa/riscv64/instr/../local-include/reg.h"
                                                         ;
  return index;
}



static inline const char* reg_name(int index, int width) {
  extern const char* regsl[];
  
# 15 "src/isa/riscv64/instr/../local-include/reg.h" 3 4
 ((void) sizeof ((
# 15 "src/isa/riscv64/instr/../local-include/reg.h"
 index >= 0 && index < 32
# 15 "src/isa/riscv64/instr/../local-include/reg.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 15 "src/isa/riscv64/instr/../local-include/reg.h"
 index >= 0 && index < 32
# 15 "src/isa/riscv64/instr/../local-include/reg.h" 3 4
 ) ; else __assert_fail (
# 15 "src/isa/riscv64/instr/../local-include/reg.h"
 "index >= 0 && index < 32"
# 15 "src/isa/riscv64/instr/../local-include/reg.h" 3 4
 , "src/isa/riscv64/instr/../local-include/reg.h", 15, __extension__ __PRETTY_FUNCTION__); }))
# 15 "src/isa/riscv64/instr/../local-include/reg.h"
                                                         ;
  return regsl[index];
}




static inline const char* fpreg_name(int index, int width){
  extern const char* fpregsl[];
  
# 24 "src/isa/riscv64/instr/../local-include/reg.h" 3 4
 ((void) sizeof ((
# 24 "src/isa/riscv64/instr/../local-include/reg.h"
 index >= 0 && index < 32
# 24 "src/isa/riscv64/instr/../local-include/reg.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 24 "src/isa/riscv64/instr/../local-include/reg.h"
 index >= 0 && index < 32
# 24 "src/isa/riscv64/instr/../local-include/reg.h" 3 4
 ) ; else __assert_fail (
# 24 "src/isa/riscv64/instr/../local-include/reg.h"
 "index >= 0 && index < 32"
# 24 "src/isa/riscv64/instr/../local-include/reg.h" 3 4
 , "src/isa/riscv64/instr/../local-include/reg.h", 24, __extension__ __PRETTY_FUNCTION__); }))
# 24 "src/isa/riscv64/instr/../local-include/reg.h"
                                                         ;
  return fpregsl[index];
}
# 6 "src/isa/riscv64/instr/../local-include/rtl.h" 2
# 1 "src/isa/riscv64/instr/../local-include/csr.h" 1
# 73 "src/isa/riscv64/instr/../local-include/csr.h"
typedef union { struct {
  uint64_t uie : 1;
  uint64_t sie : 1;
  uint64_t pad0: 1;
  uint64_t mie : 1;
  uint64_t upie: 1;
  uint64_t spie: 1;
  uint64_t pad1: 1;
  uint64_t mpie: 1;
  uint64_t spp : 1;
  uint64_t vs: 2;
  uint64_t mpp : 2;
  uint64_t fs : 2;
  uint64_t xs : 2;
  uint64_t mprv: 1;
  uint64_t sum : 1;
  uint64_t mxr : 1;
  uint64_t tvm : 1;
  uint64_t tw : 1;
  uint64_t tsr : 1;
  uint64_t pad3: 9;
  uint64_t uxl : 2;
  uint64_t sxl : 2;
  uint64_t sbe : 1;
  uint64_t mbe : 1;
  uint64_t pad4:25;
  uint64_t sd : 1;
}; word_t val; } mstatus_t;

typedef union { struct {
  uint64_t extensions: 26;
  uint64_t pad : 36;
  uint64_t mxl : 2;
}; word_t val; } misa_t;

typedef union { struct {
}; word_t val; } mtvec_t;

typedef union { struct {
}; word_t val; } mcounteren_t;

typedef union { struct {
  uint64_t code:63;
  uint64_t intr: 1;
}; word_t val; } mcause_t;

typedef union { struct {
}; word_t val; } mepc_t;

typedef union { struct {
}; word_t val; } medeleg_t;

typedef union { struct {
}; word_t val; } mideleg_t;

typedef union { struct {
}; word_t val; } mhartid_t;

typedef union { struct {
}; word_t val; } mscratch_t;

typedef union { struct {
}; word_t val; } mtval_t;

typedef union { struct {
  uint64_t usie : 1;
  uint64_t ssie : 1;
  uint64_t hsie : 1;
  uint64_t msie : 1;
  uint64_t utie : 1;
  uint64_t stie : 1;
  uint64_t htie : 1;
  uint64_t mtie : 1;
  uint64_t ueie : 1;
  uint64_t seie : 1;
  uint64_t heie : 1;
  uint64_t meie : 1;
}; word_t val; } mie_t;

typedef union { struct {
  uint64_t usip : 1;
  uint64_t ssip : 1;
  uint64_t hsip : 1;
  uint64_t msip : 1;
  uint64_t utip : 1;
  uint64_t stip : 1;
  uint64_t htip : 1;
  uint64_t mtip : 1;
  uint64_t ueip : 1;
  uint64_t seip : 1;
  uint64_t heip : 1;
  uint64_t meip : 1;
}; word_t val; } mip_t;
# 203 "src/isa/riscv64/instr/../local-include/csr.h"
typedef union { struct {
}; word_t val; } pmpcfg0_t;

typedef union { struct {
}; word_t val; } pmpcfg1_t;

typedef union { struct {
}; word_t val; } pmpcfg2_t;

typedef union { struct {
}; word_t val; } pmpcfg3_t;

typedef union { struct {
}; word_t val; } pmpaddr0_t;

typedef union { struct {
}; word_t val; } pmpaddr1_t;

typedef union { struct {
}; word_t val; } pmpaddr2_t;

typedef union { struct {
}; word_t val; } pmpaddr3_t;

typedef union { struct {
}; word_t val; } pmpaddr4_t;

typedef union { struct {
}; word_t val; } pmpaddr5_t;

typedef union { struct {
}; word_t val; } pmpaddr6_t;

typedef union { struct {
}; word_t val; } pmpaddr7_t;

typedef union { struct {
}; word_t val; } pmpaddr8_t;

typedef union { struct {
}; word_t val; } pmpaddr9_t;

typedef union { struct {
}; word_t val; } pmpaddr10_t;

typedef union { struct {
}; word_t val; } pmpaddr11_t;

typedef union { struct {
}; word_t val; } pmpaddr12_t;

typedef union { struct {
}; word_t val; } pmpaddr13_t;

typedef union { struct {
}; word_t val; } pmpaddr14_t;

typedef union { struct {
}; word_t val; } pmpaddr15_t;

typedef union { struct {
  uint64_t uie : 1;
  uint64_t sie : 1;
  uint64_t pad0: 2;
  uint64_t upie: 1;
  uint64_t spie: 1;
  uint64_t pad1: 2;
  uint64_t spp : 1;
  uint64_t pad2: 4;
}; word_t val; } sstatus_t;

typedef union { struct {
}; word_t val; } stvec_t;

typedef union { struct {
}; word_t val; } scounteren_t;

typedef union { struct {
  uint64_t usie : 1;
  uint64_t ssie : 1;
  uint64_t pad0 : 2;
  uint64_t utie : 1;
  uint64_t stie : 1;
  uint64_t pad1 : 2;
  uint64_t ueie : 1;
  uint64_t seie : 1;
  uint64_t pad2 : 2;
}; word_t val; } sie_t;

typedef union { struct {
  uint64_t usip : 1;
  uint64_t ssip : 1;
  uint64_t pad0 : 2;
  uint64_t utip : 1;
  uint64_t stip : 1;
  uint64_t pad1 : 2;
  uint64_t ueip : 1;
  uint64_t seip : 1;
  uint64_t pad2 : 2;
}; word_t val; } sip_t;
# 316 "src/isa/riscv64/instr/../local-include/csr.h"
typedef union { struct {
  uint64_t ppn :44;
  uint64_t asid:16;
  uint64_t mode: 4;
}; word_t val; } satp_t;

typedef union { struct {
  uint64_t code:63;
  uint64_t intr: 1;
}; word_t val; } scause_t;

typedef union { struct {
}; word_t val; } sepc_t;

typedef union { struct {
}; word_t val; } stval_t;

typedef union { struct {
}; word_t val; } sscratch_t;






typedef union { struct {
  uint64_t rnctrl : 1;
  uint64_t svinval : 1;
  uint64_t reserve :63;
}; word_t val; } srnctl_t;


typedef union { struct {
}; word_t val; } fflags_t;

typedef union { struct {
}; word_t val; } frm_t;

typedef union { struct {
  union {
    struct {
      uint64_t nv: 1;
      uint64_t dz: 1;
      uint64_t of: 1;
      uint64_t uf: 1;
      uint64_t nx: 1;
      uint64_t frm : 3;
    };
    struct {
      uint64_t val: 5;
    } fflags;
  };
}; word_t val; } fcsr_t;

typedef union { struct {
}; word_t val; } mtime_t;

typedef union { struct {
}; word_t val; } cycle_t;

typedef union { struct {
}; word_t val; } minstret_t;
# 418 "src/isa/riscv64/instr/../local-include/csr.h"
extern mstatus_t* const mstatus; extern misa_t* const misa; extern medeleg_t* const medeleg; extern mideleg_t* const mideleg; extern mie_t* const mie; extern mtvec_t* const mtvec; extern mcounteren_t* const mcounteren; extern mscratch_t* const mscratch; extern mepc_t* const mepc; extern mcause_t* const mcause; extern mtval_t* const mtval; extern mip_t* const mip; extern pmpcfg0_t* const pmpcfg0; extern pmpcfg1_t* const pmpcfg1; extern pmpcfg2_t* const pmpcfg2; extern pmpcfg3_t* const pmpcfg3; extern pmpaddr0_t* const pmpaddr0; extern pmpaddr1_t* const pmpaddr1; extern pmpaddr2_t* const pmpaddr2; extern pmpaddr3_t* const pmpaddr3; extern pmpaddr4_t* const pmpaddr4; extern pmpaddr5_t* const pmpaddr5; extern pmpaddr6_t* const pmpaddr6; extern pmpaddr7_t* const pmpaddr7; extern pmpaddr8_t* const pmpaddr8; extern pmpaddr9_t* const pmpaddr9; extern pmpaddr10_t* const pmpaddr10; extern pmpaddr11_t* const pmpaddr11; extern pmpaddr12_t* const pmpaddr12; extern pmpaddr13_t* const pmpaddr13; extern pmpaddr14_t* const pmpaddr14; extern pmpaddr15_t* const pmpaddr15; extern mhartid_t* const mhartid; extern sstatus_t* const sstatus; extern sie_t* const sie; extern stvec_t* const stvec; extern scounteren_t* const scounteren; extern sscratch_t* const sscratch; extern sepc_t* const sepc; extern scause_t* const scause; extern stval_t* const stval; extern sip_t* const sip; extern satp_t* const satp; extern srnctl_t* const srnctl; extern fflags_t* const fflags; extern frm_t* const frm; extern fcsr_t* const fcsr; extern mtime_t* const mtime; extern cycle_t* const cycle; extern minstret_t* const minstret;




word_t csrid_read(uint32_t csrid);


uint8_t pmpcfg_from_index(int idx);
word_t pmpaddr_from_index(int idx);
word_t pmpaddr_from_csrid(int id);
word_t pmp_tor_mask();
# 7 "src/isa/riscv64/instr/../local-include/rtl.h" 2





static inline void rtl_fbox(Decode *s, rtlreg_t *dest, rtlreg_t *src) {
  rtl_ori(s, dest, src, 0xFFFFFFFF00000000ull);
}

static inline void rtl_funbox(Decode *s, rtlreg_t *dest, rtlreg_t *src) {
  if((*src & 0xFFFFFFFF00000000ull) == 0xFFFFFFFF00000000ull){
      rtl_andi(s, dest, src, ~0xFFFFFFFF00000000ull);
  } else {
      *dest = 0x7FC00000;
  }
}

static inline void rtl_fsr(Decode *s, rtlreg_t *fdest, rtlreg_t *src, int width) {
  if (width == FPCALL_W32) rtl_fbox(s, fdest, src);
  else if (width == FPCALL_W64) rtl_mv(s, fdest, src);
  else 
# 27 "src/isa/riscv64/instr/../local-include/rtl.h" 3 4
      ((void) sizeof ((
# 27 "src/isa/riscv64/instr/../local-include/rtl.h"
      0
# 27 "src/isa/riscv64/instr/../local-include/rtl.h" 3 4
      ) ? 1 : 0), __extension__ ({ if (
# 27 "src/isa/riscv64/instr/../local-include/rtl.h"
      0
# 27 "src/isa/riscv64/instr/../local-include/rtl.h" 3 4
      ) ; else __assert_fail (
# 27 "src/isa/riscv64/instr/../local-include/rtl.h"
      "0"
# 27 "src/isa/riscv64/instr/../local-include/rtl.h" 3 4
      , "src/isa/riscv64/instr/../local-include/rtl.h", 27, __extension__ __PRETTY_FUNCTION__); }))
# 27 "src/isa/riscv64/instr/../local-include/rtl.h"
               ;
  void fp_set_dirty();
  fp_set_dirty();
}
# 2 "src/isa/riscv64/instr/decode.c" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/include/cpu/ifetch.h" 1




static inline uint32_t instr_fetch(vaddr_t *pc, int len) {
  uint32_t instr = vaddr_ifetch(*pc, len);
# 19 "/home/user/ecpt/work/simpoint_nemu/include/cpu/ifetch.h"
  (*pc) += len;
  return instr;
}
# 3 "src/isa/riscv64/instr/decode.c" 2

# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-all-instr.h" 1



# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/rtl.h" 1
# 5 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-all-instr.h" 2
# 171 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-all-instr.h"
enum { EXEC_ID_inv = 0 }; enum { EXEC_ID_rt_inv = 1 }; enum { EXEC_ID_nemu_trap = 2 }; enum { EXEC_ID_fence_i = 3 }; enum { EXEC_ID_fence = 4 }; enum { EXEC_ID_p_ret = 5 }; enum { EXEC_ID_p_li_0 = 6 }; enum { EXEC_ID_p_li_1 = 7 }; enum { EXEC_ID_lui = 8 }; enum { EXEC_ID_auipc = 9 }; enum { EXEC_ID_jal = 10 }; enum { EXEC_ID_ld = 11 }; enum { EXEC_ID_lw = 12 }; enum { EXEC_ID_lh = 13 }; enum { EXEC_ID_lb = 14 }; enum { EXEC_ID_lwu = 15 }; enum { EXEC_ID_lhu = 16 }; enum { EXEC_ID_lbu = 17 }; enum { EXEC_ID_sd = 18 }; enum { EXEC_ID_sw = 19 }; enum { EXEC_ID_sh = 20 }; enum { EXEC_ID_sb = 21 }; enum { EXEC_ID_c_j = 22 }; enum { EXEC_ID_p_jal = 23 }; enum { EXEC_ID_c_jr = 24 }; enum { EXEC_ID_c_jalr = 25 }; enum { EXEC_ID_c_beqz = 26 }; enum { EXEC_ID_c_bnez = 27 }; enum { EXEC_ID_c_mv = 28 }; enum { EXEC_ID_p_sext_w = 29 }; enum { EXEC_ID_clz = 30 }; enum { EXEC_ID_clzw = 31 }; enum { EXEC_ID_ctz = 32 }; enum { EXEC_ID_ctzw = 33 }; enum { EXEC_ID_cpop = 34 }; enum { EXEC_ID_cpopw = 35 }; enum { EXEC_ID_orc_b = 36 }; enum { EXEC_ID_rev8 = 37 }; enum { EXEC_ID_revb = 38 }; enum { EXEC_ID_sext_b = 39 }; enum { EXEC_ID_sext_h = 40 }; enum { EXEC_ID_zext_h = 41 }; enum { EXEC_ID_aes64im = 42 }; enum { EXEC_ID_sm3p0 = 43 }; enum { EXEC_ID_sm3p1 = 44 }; enum { EXEC_ID_sha256sig0 = 45 }; enum { EXEC_ID_sha256sig1 = 46 }; enum { EXEC_ID_sha256sum0 = 47 }; enum { EXEC_ID_sha256sum1 = 48 }; enum { EXEC_ID_sha512sig0 = 49 }; enum { EXEC_ID_sha512sig1 = 50 }; enum { EXEC_ID_sha512sum0 = 51 }; enum { EXEC_ID_sha512sum1 = 52 }; enum { EXEC_ID_ld_mmu = 53 }; enum { EXEC_ID_lw_mmu = 54 }; enum { EXEC_ID_lh_mmu = 55 }; enum { EXEC_ID_lb_mmu = 56 }; enum { EXEC_ID_lwu_mmu = 57 }; enum { EXEC_ID_lhu_mmu = 58 }; enum { EXEC_ID_lbu_mmu = 59 }; enum { EXEC_ID_sd_mmu = 60 }; enum { EXEC_ID_sw_mmu = 61 }; enum { EXEC_ID_sh_mmu = 62 }; enum { EXEC_ID_sb_mmu = 63 }; enum { EXEC_ID_flw = 64 }; enum { EXEC_ID_fsw = 65 }; enum { EXEC_ID_flw_mmu = 66 }; enum { EXEC_ID_fsw_mmu = 67 }; enum { EXEC_ID_fsqrts = 68 }; enum { EXEC_ID_fles = 69 }; enum { EXEC_ID_flts = 70 }; enum { EXEC_ID_feqs = 71 }; enum { EXEC_ID_fcvt_s_w = 72 }; enum { EXEC_ID_fcvt_s_wu = 73 }; enum { EXEC_ID_fcvt_s_l = 74 }; enum { EXEC_ID_fcvt_s_lu = 75 }; enum { EXEC_ID_fcvt_w_s = 76 }; enum { EXEC_ID_fcvt_wu_s = 77 }; enum { EXEC_ID_fcvt_l_s = 78 }; enum { EXEC_ID_fcvt_lu_s = 79 }; enum { EXEC_ID_fsgnjs = 80 }; enum { EXEC_ID_fsgnjns = 81 }; enum { EXEC_ID_fsgnjxs = 82 }; enum { EXEC_ID_fmv_x_w = 83 }; enum { EXEC_ID_fmv_w_x = 84 }; enum { EXEC_ID_fclasss = 85 }; enum { EXEC_ID_fclassd = 86 }; enum { EXEC_ID_fld = 87 }; enum { EXEC_ID_fsd = 88 }; enum { EXEC_ID_fld_mmu = 89 }; enum { EXEC_ID_fsd_mmu = 90 }; enum { EXEC_ID_fsqrtd = 91 }; enum { EXEC_ID_fled = 92 }; enum { EXEC_ID_fltd = 93 }; enum { EXEC_ID_feqd = 94 }; enum { EXEC_ID_fcvt_d_w = 95 }; enum { EXEC_ID_fcvt_d_wu = 96 }; enum { EXEC_ID_fcvt_d_l = 97 }; enum { EXEC_ID_fcvt_d_lu = 98 }; enum { EXEC_ID_fcvt_w_d = 99 }; enum { EXEC_ID_fcvt_wu_d = 100 }; enum { EXEC_ID_fcvt_l_d = 101 }; enum { EXEC_ID_fcvt_lu_d = 102 }; enum { EXEC_ID_fsgnjd = 103 }; enum { EXEC_ID_fsgnjnd = 104 }; enum { EXEC_ID_fsgnjxd = 105 }; enum { EXEC_ID_fmv_x_d = 106 }; enum { EXEC_ID_fmv_d_x = 107 }; enum { EXEC_ID_fcvt_d_s = 108 }; enum { EXEC_ID_fcvt_s_d = 109 }; enum { EXEC_ID_add = 110 }; enum { EXEC_ID_sll = 111 }; enum { EXEC_ID_srl = 112 }; enum { EXEC_ID_slt = 113 }; enum { EXEC_ID_sltu = 114 }; enum { EXEC_ID_xor = 115 }; enum { EXEC_ID_or = 116 }; enum { EXEC_ID_sub = 117 }; enum { EXEC_ID_sra = 118 }; enum { EXEC_ID_and = 119 }; enum { EXEC_ID_addi = 120 }; enum { EXEC_ID_slli = 121 }; enum { EXEC_ID_srli = 122 }; enum { EXEC_ID_slti = 123 }; enum { EXEC_ID_sltui = 124 }; enum { EXEC_ID_xori = 125 }; enum { EXEC_ID_ori = 126 }; enum { EXEC_ID_srai = 127 }; enum { EXEC_ID_andi = 128 }; enum { EXEC_ID_addw = 129 }; enum { EXEC_ID_sllw = 130 }; enum { EXEC_ID_srlw = 131 }; enum { EXEC_ID_subw = 132 }; enum { EXEC_ID_sraw = 133 }; enum { EXEC_ID_addiw = 134 }; enum { EXEC_ID_slliw = 135 }; enum { EXEC_ID_srliw = 136 }; enum { EXEC_ID_sraiw = 137 }; enum { EXEC_ID_jalr = 138 }; enum { EXEC_ID_beq = 139 }; enum { EXEC_ID_bne = 140 }; enum { EXEC_ID_blt = 141 }; enum { EXEC_ID_bge = 142 }; enum { EXEC_ID_bltu = 143 }; enum { EXEC_ID_bgeu = 144 }; enum { EXEC_ID_mul = 145 }; enum { EXEC_ID_mulh = 146 }; enum { EXEC_ID_mulhu = 147 }; enum { EXEC_ID_mulhsu = 148 }; enum { EXEC_ID_div = 149 }; enum { EXEC_ID_divu = 150 }; enum { EXEC_ID_rem = 151 }; enum { EXEC_ID_remu = 152 }; enum { EXEC_ID_mulw = 153 }; enum { EXEC_ID_divw = 154 }; enum { EXEC_ID_divuw = 155 }; enum { EXEC_ID_remw = 156 }; enum { EXEC_ID_remuw = 157 }; enum { EXEC_ID_c_li = 158 }; enum { EXEC_ID_c_addi = 159 }; enum { EXEC_ID_c_slli = 160 }; enum { EXEC_ID_c_srli = 161 }; enum { EXEC_ID_c_srai = 162 }; enum { EXEC_ID_c_andi = 163 }; enum { EXEC_ID_c_addiw = 164 }; enum { EXEC_ID_c_add = 165 }; enum { EXEC_ID_c_and = 166 }; enum { EXEC_ID_c_or = 167 }; enum { EXEC_ID_c_xor = 168 }; enum { EXEC_ID_c_sub = 169 }; enum { EXEC_ID_c_addw = 170 }; enum { EXEC_ID_c_subw = 171 }; enum { EXEC_ID_p_blez = 172 }; enum { EXEC_ID_p_bgez = 173 }; enum { EXEC_ID_p_bltz = 174 }; enum { EXEC_ID_p_bgtz = 175 }; enum { EXEC_ID_p_inc = 176 }; enum { EXEC_ID_p_dec = 177 }; enum { EXEC_ID_atomic = 178 }; enum { EXEC_ID_system = 179 }; enum { EXEC_ID_fadds = 180 }; enum { EXEC_ID_fsubs = 181 }; enum { EXEC_ID_fmuls = 182 }; enum { EXEC_ID_fdivs = 183 }; enum { EXEC_ID_fmins = 184 }; enum { EXEC_ID_fmaxs = 185 }; enum { EXEC_ID_faddd = 186 }; enum { EXEC_ID_fsubd = 187 }; enum { EXEC_ID_fmuld = 188 }; enum { EXEC_ID_fdivd = 189 }; enum { EXEC_ID_fmind = 190 }; enum { EXEC_ID_fmaxd = 191 }; enum { EXEC_ID_fmadds = 192 }; enum { EXEC_ID_fmsubs = 193 }; enum { EXEC_ID_fnmsubs = 194 }; enum { EXEC_ID_fnmadds = 195 }; enum { EXEC_ID_fmaddd = 196 }; enum { EXEC_ID_fmsubd = 197 }; enum { EXEC_ID_fnmsubd = 198 }; enum { EXEC_ID_fnmaddd = 199 }; enum { EXEC_ID_andn = 200 }; enum { EXEC_ID_orn = 201 }; enum { EXEC_ID_xnor = 202 }; enum { EXEC_ID_min = 203 }; enum { EXEC_ID_minu = 204 }; enum { EXEC_ID_max = 205 }; enum { EXEC_ID_maxu = 206 }; enum { EXEC_ID_bclr = 207 }; enum { EXEC_ID_bset = 208 }; enum { EXEC_ID_binv = 209 }; enum { EXEC_ID_bext = 210 }; enum { EXEC_ID_bclri = 211 }; enum { EXEC_ID_bseti = 212 }; enum { EXEC_ID_binvi = 213 }; enum { EXEC_ID_bexti = 214 }; enum { EXEC_ID_clmul = 215 }; enum { EXEC_ID_clmulr = 216 }; enum { EXEC_ID_clmulh = 217 }; enum { EXEC_ID_rol = 218 }; enum { EXEC_ID_rolw = 219 }; enum { EXEC_ID_ror = 220 }; enum { EXEC_ID_rori = 221 }; enum { EXEC_ID_rorw = 222 }; enum { EXEC_ID_roriw = 223 }; enum { EXEC_ID_sh1add = 224 }; enum { EXEC_ID_sh2add = 225 }; enum { EXEC_ID_sh3add = 226 }; enum { EXEC_ID_sh1adduw = 227 }; enum { EXEC_ID_sh2adduw = 228 }; enum { EXEC_ID_sh3adduw = 229 }; enum { EXEC_ID_pack = 230 }; enum { EXEC_ID_packh = 231 }; enum { EXEC_ID_packw = 232 }; enum { EXEC_ID_xpermn = 233 }; enum { EXEC_ID_xpermb = 234 }; enum { EXEC_ID_adduw = 235 }; enum { EXEC_ID_slliuw = 236 }; enum { EXEC_ID_aes64es = 237 }; enum { EXEC_ID_aes64esm = 238 }; enum { EXEC_ID_aes64ds = 239 }; enum { EXEC_ID_aes64dsm = 240 }; enum { EXEC_ID_aes64ks1i = 241 }; enum { EXEC_ID_aes64ks2 = 242 }; enum { EXEC_ID_sm4ks = 243 }; enum { EXEC_ID_sm4ed = 244 }; ;
# 5 "src/isa/riscv64/instr/decode.c" 2


static inline int table_inv (Decode *s) { ; return EXEC_ID_inv; } static inline int table_rt_inv (Decode *s) { ; return EXEC_ID_rt_inv; } static inline int table_nemu_trap (Decode *s) { ; return EXEC_ID_nemu_trap; } static inline int table_fence_i (Decode *s) { ; return EXEC_ID_fence_i; } static inline int table_fence (Decode *s) { ; return EXEC_ID_fence; } static inline int table_p_ret (Decode *s) { ; return EXEC_ID_p_ret; } static inline int table_p_li_0 (Decode *s) { ; return EXEC_ID_p_li_0; } static inline int table_p_li_1 (Decode *s) { ; return EXEC_ID_p_li_1; } static inline int table_lui (Decode *s) { ; return EXEC_ID_lui; } static inline int table_auipc (Decode *s) { ; return EXEC_ID_auipc; } static inline int table_jal (Decode *s) { ; return EXEC_ID_jal; } static inline int table_ld (Decode *s) { ; return EXEC_ID_ld; } static inline int table_lw (Decode *s) { ; return EXEC_ID_lw; } static inline int table_lh (Decode *s) { ; return EXEC_ID_lh; } static inline int table_lb (Decode *s) { ; return EXEC_ID_lb; } static inline int table_lwu (Decode *s) { ; return EXEC_ID_lwu; } static inline int table_lhu (Decode *s) { ; return EXEC_ID_lhu; } static inline int table_lbu (Decode *s) { ; return EXEC_ID_lbu; } static inline int table_sd (Decode *s) { ; return EXEC_ID_sd; } static inline int table_sw (Decode *s) { ; return EXEC_ID_sw; } static inline int table_sh (Decode *s) { ; return EXEC_ID_sh; } static inline int table_sb (Decode *s) { ; return EXEC_ID_sb; } static inline int table_c_j (Decode *s) { ; return EXEC_ID_c_j; } static inline int table_p_jal (Decode *s) { ; return EXEC_ID_p_jal; } static inline int table_c_jr (Decode *s) { ; return EXEC_ID_c_jr; } static inline int table_c_jalr (Decode *s) { ; return EXEC_ID_c_jalr; } static inline int table_c_beqz (Decode *s) { ; return EXEC_ID_c_beqz; } static inline int table_c_bnez (Decode *s) { ; return EXEC_ID_c_bnez; } static inline int table_c_mv (Decode *s) { ; return EXEC_ID_c_mv; } static inline int table_p_sext_w (Decode *s) { ; return EXEC_ID_p_sext_w; } static inline int table_clz (Decode *s) { ; return EXEC_ID_clz; } static inline int table_clzw (Decode *s) { ; return EXEC_ID_clzw; } static inline int table_ctz (Decode *s) { ; return EXEC_ID_ctz; } static inline int table_ctzw (Decode *s) { ; return EXEC_ID_ctzw; } static inline int table_cpop (Decode *s) { ; return EXEC_ID_cpop; } static inline int table_cpopw (Decode *s) { ; return EXEC_ID_cpopw; } static inline int table_orc_b (Decode *s) { ; return EXEC_ID_orc_b; } static inline int table_rev8 (Decode *s) { ; return EXEC_ID_rev8; } static inline int table_revb (Decode *s) { ; return EXEC_ID_revb; } static inline int table_sext_b (Decode *s) { ; return EXEC_ID_sext_b; } static inline int table_sext_h (Decode *s) { ; return EXEC_ID_sext_h; } static inline int table_zext_h (Decode *s) { ; return EXEC_ID_zext_h; } static inline int table_aes64im (Decode *s) { ; return EXEC_ID_aes64im; } static inline int table_sm3p0 (Decode *s) { ; return EXEC_ID_sm3p0; } static inline int table_sm3p1 (Decode *s) { ; return EXEC_ID_sm3p1; } static inline int table_sha256sig0 (Decode *s) { ; return EXEC_ID_sha256sig0; } static inline int table_sha256sig1 (Decode *s) { ; return EXEC_ID_sha256sig1; } static inline int table_sha256sum0 (Decode *s) { ; return EXEC_ID_sha256sum0; } static inline int table_sha256sum1 (Decode *s) { ; return EXEC_ID_sha256sum1; } static inline int table_sha512sig0 (Decode *s) { ; return EXEC_ID_sha512sig0; } static inline int table_sha512sig1 (Decode *s) { ; return EXEC_ID_sha512sig1; } static inline int table_sha512sum0 (Decode *s) { ; return EXEC_ID_sha512sum0; } static inline int table_sha512sum1 (Decode *s) { ; return EXEC_ID_sha512sum1; } static inline int table_ld_mmu (Decode *s) { ; return EXEC_ID_ld_mmu; } static inline int table_lw_mmu (Decode *s) { ; return EXEC_ID_lw_mmu; } static inline int table_lh_mmu (Decode *s) { ; return EXEC_ID_lh_mmu; } static inline int table_lb_mmu (Decode *s) { ; return EXEC_ID_lb_mmu; } static inline int table_lwu_mmu (Decode *s) { ; return EXEC_ID_lwu_mmu; } static inline int table_lhu_mmu (Decode *s) { ; return EXEC_ID_lhu_mmu; } static inline int table_lbu_mmu (Decode *s) { ; return EXEC_ID_lbu_mmu; } static inline int table_sd_mmu (Decode *s) { ; return EXEC_ID_sd_mmu; } static inline int table_sw_mmu (Decode *s) { ; return EXEC_ID_sw_mmu; } static inline int table_sh_mmu (Decode *s) { ; return EXEC_ID_sh_mmu; } static inline int table_sb_mmu (Decode *s) { ; return EXEC_ID_sb_mmu; } static inline int table_flw (Decode *s) { ; return EXEC_ID_flw; } static inline int table_fsw (Decode *s) { ; return EXEC_ID_fsw; } static inline int table_flw_mmu (Decode *s) { ; return EXEC_ID_flw_mmu; } static inline int table_fsw_mmu (Decode *s) { ; return EXEC_ID_fsw_mmu; } static inline int table_fsqrts (Decode *s) { ; return EXEC_ID_fsqrts; } static inline int table_fles (Decode *s) { ; return EXEC_ID_fles; } static inline int table_flts (Decode *s) { ; return EXEC_ID_flts; } static inline int table_feqs (Decode *s) { ; return EXEC_ID_feqs; } static inline int table_fcvt_s_w (Decode *s) { ; return EXEC_ID_fcvt_s_w; } static inline int table_fcvt_s_wu (Decode *s) { ; return EXEC_ID_fcvt_s_wu; } static inline int table_fcvt_s_l (Decode *s) { ; return EXEC_ID_fcvt_s_l; } static inline int table_fcvt_s_lu (Decode *s) { ; return EXEC_ID_fcvt_s_lu; } static inline int table_fcvt_w_s (Decode *s) { ; return EXEC_ID_fcvt_w_s; } static inline int table_fcvt_wu_s (Decode *s) { ; return EXEC_ID_fcvt_wu_s; } static inline int table_fcvt_l_s (Decode *s) { ; return EXEC_ID_fcvt_l_s; } static inline int table_fcvt_lu_s (Decode *s) { ; return EXEC_ID_fcvt_lu_s; } static inline int table_fsgnjs (Decode *s) { ; return EXEC_ID_fsgnjs; } static inline int table_fsgnjns (Decode *s) { ; return EXEC_ID_fsgnjns; } static inline int table_fsgnjxs (Decode *s) { ; return EXEC_ID_fsgnjxs; } static inline int table_fmv_x_w (Decode *s) { ; return EXEC_ID_fmv_x_w; } static inline int table_fmv_w_x (Decode *s) { ; return EXEC_ID_fmv_w_x; } static inline int table_fclasss (Decode *s) { ; return EXEC_ID_fclasss; } static inline int table_fclassd (Decode *s) { ; return EXEC_ID_fclassd; } static inline int table_fld (Decode *s) { ; return EXEC_ID_fld; } static inline int table_fsd (Decode *s) { ; return EXEC_ID_fsd; } static inline int table_fld_mmu (Decode *s) { ; return EXEC_ID_fld_mmu; } static inline int table_fsd_mmu (Decode *s) { ; return EXEC_ID_fsd_mmu; } static inline int table_fsqrtd (Decode *s) { ; return EXEC_ID_fsqrtd; } static inline int table_fled (Decode *s) { ; return EXEC_ID_fled; } static inline int table_fltd (Decode *s) { ; return EXEC_ID_fltd; } static inline int table_feqd (Decode *s) { ; return EXEC_ID_feqd; } static inline int table_fcvt_d_w (Decode *s) { ; return EXEC_ID_fcvt_d_w; } static inline int table_fcvt_d_wu (Decode *s) { ; return EXEC_ID_fcvt_d_wu; } static inline int table_fcvt_d_l (Decode *s) { ; return EXEC_ID_fcvt_d_l; } static inline int table_fcvt_d_lu (Decode *s) { ; return EXEC_ID_fcvt_d_lu; } static inline int table_fcvt_w_d (Decode *s) { ; return EXEC_ID_fcvt_w_d; } static inline int table_fcvt_wu_d (Decode *s) { ; return EXEC_ID_fcvt_wu_d; } static inline int table_fcvt_l_d (Decode *s) { ; return EXEC_ID_fcvt_l_d; } static inline int table_fcvt_lu_d (Decode *s) { ; return EXEC_ID_fcvt_lu_d; } static inline int table_fsgnjd (Decode *s) { ; return EXEC_ID_fsgnjd; } static inline int table_fsgnjnd (Decode *s) { ; return EXEC_ID_fsgnjnd; } static inline int table_fsgnjxd (Decode *s) { ; return EXEC_ID_fsgnjxd; } static inline int table_fmv_x_d (Decode *s) { ; return EXEC_ID_fmv_x_d; } static inline int table_fmv_d_x (Decode *s) { ; return EXEC_ID_fmv_d_x; } static inline int table_fcvt_d_s (Decode *s) { ; return EXEC_ID_fcvt_d_s; } static inline int table_fcvt_s_d (Decode *s) { ; return EXEC_ID_fcvt_s_d; } static inline int table_add (Decode *s) { ; return EXEC_ID_add; } static inline int table_sll (Decode *s) { ; return EXEC_ID_sll; } static inline int table_srl (Decode *s) { ; return EXEC_ID_srl; } static inline int table_slt (Decode *s) { ; return EXEC_ID_slt; } static inline int table_sltu (Decode *s) { ; return EXEC_ID_sltu; } static inline int table_xor (Decode *s) { ; return EXEC_ID_xor; } static inline int table_or (Decode *s) { ; return EXEC_ID_or; } static inline int table_sub (Decode *s) { ; return EXEC_ID_sub; } static inline int table_sra (Decode *s) { ; return EXEC_ID_sra; } static inline int table_and (Decode *s) { ; return EXEC_ID_and; } static inline int table_addi (Decode *s) { ; return EXEC_ID_addi; } static inline int table_slli (Decode *s) { ; return EXEC_ID_slli; } static inline int table_srli (Decode *s) { ; return EXEC_ID_srli; } static inline int table_slti (Decode *s) { ; return EXEC_ID_slti; } static inline int table_sltui (Decode *s) { ; return EXEC_ID_sltui; } static inline int table_xori (Decode *s) { ; return EXEC_ID_xori; } static inline int table_ori (Decode *s) { ; return EXEC_ID_ori; } static inline int table_srai (Decode *s) { ; return EXEC_ID_srai; } static inline int table_andi (Decode *s) { ; return EXEC_ID_andi; } static inline int table_addw (Decode *s) { ; return EXEC_ID_addw; } static inline int table_sllw (Decode *s) { ; return EXEC_ID_sllw; } static inline int table_srlw (Decode *s) { ; return EXEC_ID_srlw; } static inline int table_subw (Decode *s) { ; return EXEC_ID_subw; } static inline int table_sraw (Decode *s) { ; return EXEC_ID_sraw; } static inline int table_addiw (Decode *s) { ; return EXEC_ID_addiw; } static inline int table_slliw (Decode *s) { ; return EXEC_ID_slliw; } static inline int table_srliw (Decode *s) { ; return EXEC_ID_srliw; } static inline int table_sraiw (Decode *s) { ; return EXEC_ID_sraiw; } static inline int table_jalr (Decode *s) { ; return EXEC_ID_jalr; } static inline int table_beq (Decode *s) { ; return EXEC_ID_beq; } static inline int table_bne (Decode *s) { ; return EXEC_ID_bne; } static inline int table_blt (Decode *s) { ; return EXEC_ID_blt; } static inline int table_bge (Decode *s) { ; return EXEC_ID_bge; } static inline int table_bltu (Decode *s) { ; return EXEC_ID_bltu; } static inline int table_bgeu (Decode *s) { ; return EXEC_ID_bgeu; } static inline int table_mul (Decode *s) { ; return EXEC_ID_mul; } static inline int table_mulh (Decode *s) { ; return EXEC_ID_mulh; } static inline int table_mulhu (Decode *s) { ; return EXEC_ID_mulhu; } static inline int table_mulhsu (Decode *s) { ; return EXEC_ID_mulhsu; } static inline int table_div (Decode *s) { ; return EXEC_ID_div; } static inline int table_divu (Decode *s) { ; return EXEC_ID_divu; } static inline int table_rem (Decode *s) { ; return EXEC_ID_rem; } static inline int table_remu (Decode *s) { ; return EXEC_ID_remu; } static inline int table_mulw (Decode *s) { ; return EXEC_ID_mulw; } static inline int table_divw (Decode *s) { ; return EXEC_ID_divw; } static inline int table_divuw (Decode *s) { ; return EXEC_ID_divuw; } static inline int table_remw (Decode *s) { ; return EXEC_ID_remw; } static inline int table_remuw (Decode *s) { ; return EXEC_ID_remuw; } static inline int table_c_li (Decode *s) { ; return EXEC_ID_c_li; } static inline int table_c_addi (Decode *s) { ; return EXEC_ID_c_addi; } static inline int table_c_slli (Decode *s) { ; return EXEC_ID_c_slli; } static inline int table_c_srli (Decode *s) { ; return EXEC_ID_c_srli; } static inline int table_c_srai (Decode *s) { ; return EXEC_ID_c_srai; } static inline int table_c_andi (Decode *s) { ; return EXEC_ID_c_andi; } static inline int table_c_addiw (Decode *s) { ; return EXEC_ID_c_addiw; } static inline int table_c_add (Decode *s) { ; return EXEC_ID_c_add; } static inline int table_c_and (Decode *s) { ; return EXEC_ID_c_and; } static inline int table_c_or (Decode *s) { ; return EXEC_ID_c_or; } static inline int table_c_xor (Decode *s) { ; return EXEC_ID_c_xor; } static inline int table_c_sub (Decode *s) { ; return EXEC_ID_c_sub; } static inline int table_c_addw (Decode *s) { ; return EXEC_ID_c_addw; } static inline int table_c_subw (Decode *s) { ; return EXEC_ID_c_subw; } static inline int table_p_blez (Decode *s) { ; return EXEC_ID_p_blez; } static inline int table_p_bgez (Decode *s) { ; return EXEC_ID_p_bgez; } static inline int table_p_bltz (Decode *s) { ; return EXEC_ID_p_bltz; } static inline int table_p_bgtz (Decode *s) { ; return EXEC_ID_p_bgtz; } static inline int table_p_inc (Decode *s) { ; return EXEC_ID_p_inc; } static inline int table_p_dec (Decode *s) { ; return EXEC_ID_p_dec; } static inline int table_atomic (Decode *s) { ; return EXEC_ID_atomic; } static inline int table_system (Decode *s) { ; return EXEC_ID_system; } static inline int table_fadds (Decode *s) { ; return EXEC_ID_fadds; } static inline int table_fsubs (Decode *s) { ; return EXEC_ID_fsubs; } static inline int table_fmuls (Decode *s) { ; return EXEC_ID_fmuls; } static inline int table_fdivs (Decode *s) { ; return EXEC_ID_fdivs; } static inline int table_fmins (Decode *s) { ; return EXEC_ID_fmins; } static inline int table_fmaxs (Decode *s) { ; return EXEC_ID_fmaxs; } static inline int table_faddd (Decode *s) { ; return EXEC_ID_faddd; } static inline int table_fsubd (Decode *s) { ; return EXEC_ID_fsubd; } static inline int table_fmuld (Decode *s) { ; return EXEC_ID_fmuld; } static inline int table_fdivd (Decode *s) { ; return EXEC_ID_fdivd; } static inline int table_fmind (Decode *s) { ; return EXEC_ID_fmind; } static inline int table_fmaxd (Decode *s) { ; return EXEC_ID_fmaxd; } static inline int table_fmadds (Decode *s) { ; return EXEC_ID_fmadds; } static inline int table_fmsubs (Decode *s) { ; return EXEC_ID_fmsubs; } static inline int table_fnmsubs (Decode *s) { ; return EXEC_ID_fnmsubs; } static inline int table_fnmadds (Decode *s) { ; return EXEC_ID_fnmadds; } static inline int table_fmaddd (Decode *s) { ; return EXEC_ID_fmaddd; } static inline int table_fmsubd (Decode *s) { ; return EXEC_ID_fmsubd; } static inline int table_fnmsubd (Decode *s) { ; return EXEC_ID_fnmsubd; } static inline int table_fnmaddd (Decode *s) { ; return EXEC_ID_fnmaddd; } static inline int table_andn (Decode *s) { ; return EXEC_ID_andn; } static inline int table_orn (Decode *s) { ; return EXEC_ID_orn; } static inline int table_xnor (Decode *s) { ; return EXEC_ID_xnor; } static inline int table_min (Decode *s) { ; return EXEC_ID_min; } static inline int table_minu (Decode *s) { ; return EXEC_ID_minu; } static inline int table_max (Decode *s) { ; return EXEC_ID_max; } static inline int table_maxu (Decode *s) { ; return EXEC_ID_maxu; } static inline int table_bclr (Decode *s) { ; return EXEC_ID_bclr; } static inline int table_bset (Decode *s) { ; return EXEC_ID_bset; } static inline int table_binv (Decode *s) { ; return EXEC_ID_binv; } static inline int table_bext (Decode *s) { ; return EXEC_ID_bext; } static inline int table_bclri (Decode *s) { ; return EXEC_ID_bclri; } static inline int table_bseti (Decode *s) { ; return EXEC_ID_bseti; } static inline int table_binvi (Decode *s) { ; return EXEC_ID_binvi; } static inline int table_bexti (Decode *s) { ; return EXEC_ID_bexti; } static inline int table_clmul (Decode *s) { ; return EXEC_ID_clmul; } static inline int table_clmulr (Decode *s) { ; return EXEC_ID_clmulr; } static inline int table_clmulh (Decode *s) { ; return EXEC_ID_clmulh; } static inline int table_rol (Decode *s) { ; return EXEC_ID_rol; } static inline int table_rolw (Decode *s) { ; return EXEC_ID_rolw; } static inline int table_ror (Decode *s) { ; return EXEC_ID_ror; } static inline int table_rori (Decode *s) { ; return EXEC_ID_rori; } static inline int table_rorw (Decode *s) { ; return EXEC_ID_rorw; } static inline int table_roriw (Decode *s) { ; return EXEC_ID_roriw; } static inline int table_sh1add (Decode *s) { ; return EXEC_ID_sh1add; } static inline int table_sh2add (Decode *s) { ; return EXEC_ID_sh2add; } static inline int table_sh3add (Decode *s) { ; return EXEC_ID_sh3add; } static inline int table_sh1adduw (Decode *s) { ; return EXEC_ID_sh1adduw; } static inline int table_sh2adduw (Decode *s) { ; return EXEC_ID_sh2adduw; } static inline int table_sh3adduw (Decode *s) { ; return EXEC_ID_sh3adduw; } static inline int table_pack (Decode *s) { ; return EXEC_ID_pack; } static inline int table_packh (Decode *s) { ; return EXEC_ID_packh; } static inline int table_packw (Decode *s) { ; return EXEC_ID_packw; } static inline int table_xpermn (Decode *s) { ; return EXEC_ID_xpermn; } static inline int table_xpermb (Decode *s) { ; return EXEC_ID_xpermb; } static inline int table_adduw (Decode *s) { ; return EXEC_ID_adduw; } static inline int table_slliuw (Decode *s) { ; return EXEC_ID_slliuw; } static inline int table_aes64es (Decode *s) { ; return EXEC_ID_aes64es; } static inline int table_aes64esm (Decode *s) { ; return EXEC_ID_aes64esm; } static inline int table_aes64ds (Decode *s) { ; return EXEC_ID_aes64ds; } static inline int table_aes64dsm (Decode *s) { ; return EXEC_ID_aes64dsm; } static inline int table_aes64ks1i (Decode *s) { ; return EXEC_ID_aes64ks1i; } static inline int table_aes64ks2 (Decode *s) { ; return EXEC_ID_aes64ks2; } static inline int table_sm4ks (Decode *s) { ; return EXEC_ID_sm4ks; } static inline int table_sm4ed (Decode *s) { ; return EXEC_ID_sm4ed; } ;

__attribute__((always_inline))
static inline uint32_t get_instr(Decode *s) {
  return s->isa.instr.val;
}





# 1 "src/isa/riscv64/instr/rvi/decode.h" 1
static int table_c_addi_dispatch(Decode *s);
static int table_c_addiw_dispatch(Decode *s);

static inline void decode_op_i (Decode *s, Operand *op, word_t val, 
# 4 "src/isa/riscv64/instr/rvi/decode.h" 3 4
             _Bool 
# 4 "src/isa/riscv64/instr/rvi/decode.h"
             flag) {
  op->imm = val;
  ;
}

static inline void decode_op_r (Decode *s, Operand *op, word_t val, 
# 9 "src/isa/riscv64/instr/rvi/decode.h" 3 4
             _Bool 
# 9 "src/isa/riscv64/instr/rvi/decode.h"
             flag) {
  
# 10 "src/isa/riscv64/instr/rvi/decode.h" 3 4
 _Bool 
# 10 "src/isa/riscv64/instr/rvi/decode.h"
      load_val = flag;
  static word_t zero_null = 0;
  ;
  op->preg = (!load_val && val == 0) ? &zero_null : &(cpu.gpr[check_reg_index(val)]._64);
  ;



}

static inline void decode_I (Decode *s, int width) {
  decode_op_r(s, (&s->src1), s->isa.instr.i.rs1, 
# 21 "src/isa/riscv64/instr/rvi/decode.h" 3 4
                                             1
# 21 "src/isa/riscv64/instr/rvi/decode.h"
                                                 );
  decode_op_i(s, (&s->src2), (sword_t)s->isa.instr.i.simm11_0, 
# 22 "src/isa/riscv64/instr/rvi/decode.h" 3 4
                                                           0
# 22 "src/isa/riscv64/instr/rvi/decode.h"
                                                                );
  decode_op_r(s, (&s->dest), s->isa.instr.i.rd, 
# 23 "src/isa/riscv64/instr/rvi/decode.h" 3 4
                                            0
# 23 "src/isa/riscv64/instr/rvi/decode.h"
                                                 );
}

static inline void decode_R (Decode *s, int width) {
  decode_op_r(s, (&s->src1), s->isa.instr.r.rs1, 
# 27 "src/isa/riscv64/instr/rvi/decode.h" 3 4
                                             1
# 27 "src/isa/riscv64/instr/rvi/decode.h"
                                                 );
  decode_op_r(s, (&s->src2), s->isa.instr.r.rs2, 
# 28 "src/isa/riscv64/instr/rvi/decode.h" 3 4
                                             1
# 28 "src/isa/riscv64/instr/rvi/decode.h"
                                                 );
  decode_op_r(s, (&s->dest), s->isa.instr.r.rd, 
# 29 "src/isa/riscv64/instr/rvi/decode.h" 3 4
                                            0
# 29 "src/isa/riscv64/instr/rvi/decode.h"
                                                 );
}

static inline void decode_U (Decode *s, int width) {
  decode_op_i(s, (&s->src1), (sword_t)s->isa.instr.u.simm31_12 << 12, 
# 33 "src/isa/riscv64/instr/rvi/decode.h" 3 4
                                                                  1
# 33 "src/isa/riscv64/instr/rvi/decode.h"
                                                                      );
  decode_op_r(s, (&s->dest), s->isa.instr.u.rd, 
# 34 "src/isa/riscv64/instr/rvi/decode.h" 3 4
                                            0
# 34 "src/isa/riscv64/instr/rvi/decode.h"
                                                 );
}

static inline void decode_auipc (Decode *s, int width) {
  decode_U(s, width);
  (&s->src1)->imm += s->pc;
}

static inline void decode_J (Decode *s, int width) {
  sword_t offset = (s->isa.instr.j.simm20 << 20) | (s->isa.instr.j.imm19_12 << 12) |
    (s->isa.instr.j.imm11 << 11) | (s->isa.instr.j.imm10_1 << 1);
  decode_op_i(s, (&s->src1), s->pc + offset, 
# 45 "src/isa/riscv64/instr/rvi/decode.h" 3 4
                                         1
# 45 "src/isa/riscv64/instr/rvi/decode.h"
                                             );
  decode_op_r(s, (&s->dest), s->isa.instr.j.rd, 
# 46 "src/isa/riscv64/instr/rvi/decode.h" 3 4
                                            0
# 46 "src/isa/riscv64/instr/rvi/decode.h"
                                                 );
  (&s->src2)->imm = s->snpc;
}

static inline void decode_B (Decode *s, int width) {
  sword_t offset = (s->isa.instr.b.simm12 << 12) | (s->isa.instr.b.imm11 << 11) |
    (s->isa.instr.b.imm10_5 << 5) | (s->isa.instr.b.imm4_1 << 1);
  decode_op_i(s, (&s->dest), s->pc + offset, 
# 53 "src/isa/riscv64/instr/rvi/decode.h" 3 4
                                         1
# 53 "src/isa/riscv64/instr/rvi/decode.h"
                                             );
  decode_op_r(s, (&s->src1), s->isa.instr.b.rs1, 
# 54 "src/isa/riscv64/instr/rvi/decode.h" 3 4
                                             1
# 54 "src/isa/riscv64/instr/rvi/decode.h"
                                                 );
  decode_op_r(s, (&s->src2), s->isa.instr.b.rs2, 
# 55 "src/isa/riscv64/instr/rvi/decode.h" 3 4
                                             1
# 55 "src/isa/riscv64/instr/rvi/decode.h"
                                                 );
}

static inline void decode_S (Decode *s, int width) {
  decode_op_r(s, (&s->src1), s->isa.instr.s.rs1, 
# 59 "src/isa/riscv64/instr/rvi/decode.h" 3 4
                                             1
# 59 "src/isa/riscv64/instr/rvi/decode.h"
                                                 );
  sword_t simm = (s->isa.instr.s.simm11_5 << 5) | s->isa.instr.s.imm4_0;
  decode_op_i(s, (&s->src2), simm, 
# 61 "src/isa/riscv64/instr/rvi/decode.h" 3 4
                               0
# 61 "src/isa/riscv64/instr/rvi/decode.h"
                                    );
  decode_op_r(s, (&s->dest), s->isa.instr.s.rs2, 
# 62 "src/isa/riscv64/instr/rvi/decode.h" 3 4
                                             1
# 62 "src/isa/riscv64/instr/rvi/decode.h"
                                                 );
}

static inline int table_load (Decode *s) {
  ;
  int mmu_mode = get_data_mmu_state();
  if (mmu_mode == MMU_DIRECT) {
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? ????? ??", (sizeof("??????? ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_lb(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 001 ????? ????? ??", (sizeof("??????? ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_lh(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 010 ????? ????? ??", (sizeof("??????? ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_lw(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 011 ????? ????? ??", (sizeof("??????? ????? ????? 011 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_ld(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 100 ????? ????? ??", (sizeof("??????? ????? ????? 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_lbu(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 101 ????? ????? ??", (sizeof("??????? ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_lhu(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 110 ????? ????? ??", (sizeof("??????? ????? ????? 110 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_lwu(s); }; } } while (0);
  } else if (mmu_mode == MMU_TRANSLATE) {
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? ????? ??", (sizeof("??????? ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_lb_mmu(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 001 ????? ????? ??", (sizeof("??????? ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_lh_mmu(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 010 ????? ????? ??", (sizeof("??????? ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_lw_mmu(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 011 ????? ????? ??", (sizeof("??????? ????? ????? 011 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_ld_mmu(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 100 ????? ????? ??", (sizeof("??????? ????? ????? 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_lbu_mmu(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 101 ????? ????? ??", (sizeof("??????? ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_lhu_mmu(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 110 ????? ????? ??", (sizeof("??????? ????? ????? 110 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_lwu_mmu(s); }; } } while (0);
  } else { 
# 84 "src/isa/riscv64/instr/rvi/decode.h" 3 4
          ((void) sizeof ((
# 84 "src/isa/riscv64/instr/rvi/decode.h"
          0
# 84 "src/isa/riscv64/instr/rvi/decode.h" 3 4
          ) ? 1 : 0), __extension__ ({ if (
# 84 "src/isa/riscv64/instr/rvi/decode.h"
          0
# 84 "src/isa/riscv64/instr/rvi/decode.h" 3 4
          ) ; else __assert_fail (
# 84 "src/isa/riscv64/instr/rvi/decode.h"
          "0"
# 84 "src/isa/riscv64/instr/rvi/decode.h" 3 4
          , "src/isa/riscv64/instr/rvi/decode.h", 84, __extension__ __PRETTY_FUNCTION__); }))
# 84 "src/isa/riscv64/instr/rvi/decode.h"
                   ; }
  return EXEC_ID_inv;
}

static inline int table_store (Decode *s) {
  ;
  int mmu_mode = get_data_mmu_state();
  if (mmu_mode == MMU_DIRECT) {
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? ????? ??", (sizeof("??????? ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sb(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 001 ????? ????? ??", (sizeof("??????? ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sh(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 010 ????? ????? ??", (sizeof("??????? ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sw(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 011 ????? ????? ??", (sizeof("??????? ????? ????? 011 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sd(s); }; } } while (0);
  } else if (mmu_mode == MMU_TRANSLATE) {
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? ????? ??", (sizeof("??????? ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sb_mmu(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 001 ????? ????? ??", (sizeof("??????? ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sh_mmu(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 010 ????? ????? ??", (sizeof("??????? ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sw_mmu(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 011 ????? ????? ??", (sizeof("??????? ????? ????? 011 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sd_mmu(s); }; } } while (0);
  } else { 
# 101 "src/isa/riscv64/instr/rvi/decode.h" 3 4
          ((void) sizeof ((
# 101 "src/isa/riscv64/instr/rvi/decode.h"
          0
# 101 "src/isa/riscv64/instr/rvi/decode.h" 3 4
          ) ? 1 : 0), __extension__ ({ if (
# 101 "src/isa/riscv64/instr/rvi/decode.h"
          0
# 101 "src/isa/riscv64/instr/rvi/decode.h" 3 4
          ) ; else __assert_fail (
# 101 "src/isa/riscv64/instr/rvi/decode.h"
          "0"
# 101 "src/isa/riscv64/instr/rvi/decode.h" 3 4
          , "src/isa/riscv64/instr/rvi/decode.h", 101, __extension__ __PRETTY_FUNCTION__); }))
# 101 "src/isa/riscv64/instr/rvi/decode.h"
                   ; }
  return EXEC_ID_inv;
}

static inline int table_addi_dispatch (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("0000000 00000 00000 ??? ????? ????? ??", (sizeof("0000000 00000 00000 ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_p_li_0(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000000 00001 00000 ??? ????? ????? ??", (sizeof("0000000 00001 00000 ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_p_li_1(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? 00000 ??? ????? ????? ??", (sizeof("??????? ????? 00000 ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_li(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000000 00000 ????? ??? ????? ????? ??", (sizeof("0000000 00000 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_mv(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? ????? ??", (sizeof("??????? ????? ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_addi(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_op_imm (Decode *s) {
  if (s->isa.instr.i.rd == s->isa.instr.i.rs1) {
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? ????? ??", (sizeof("??????? ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_addi_dispatch(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 111 ????? ????? ??", (sizeof("??????? ????? ????? 111 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_andi(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("000000? ????? ????? 001 ????? ????? ??", (sizeof("000000? ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_slli(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("010000? ????? ????? 101 ????? ????? ??", (sizeof("010000? ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_srai(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("000000? ????? ????? 101 ????? ????? ??", (sizeof("000000? ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_srli(s); }; } } while (0);
  }
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? ????? ??", (sizeof("??????? ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_addi_dispatch(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 010 ????? ????? ??", (sizeof("??????? ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_slti(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 011 ????? ????? ??", (sizeof("??????? ????? ????? 011 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sltui(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 100 ????? ????? ??", (sizeof("??????? ????? ????? 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_xori(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 110 ????? ????? ??", (sizeof("??????? ????? ????? 110 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_ori(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 111 ????? ????? ??", (sizeof("??????? ????? ????? 111 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_andi(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("000000? ????? ????? 001 ????? ????? ??", (sizeof("000000? ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_slli(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("000000? ????? ????? 101 ????? ????? ??", (sizeof("000000? ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_srli(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("010000? ????? ????? 101 ????? ????? ??", (sizeof("010000? ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_srai(s); }; } } while (0);

  do { uint32_t key, mask, shift; pattern_decode("001010? ????? ????? 001 ????? ????? ??", (sizeof("001010? ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_bseti(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0010100 00111 ????? 101 ????? ????? ??", (sizeof("0010100 00111 ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_orc_b(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("010010? ????? ????? 001 ????? ????? ??", (sizeof("010010? ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_bclri(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("010010? ????? ????? 101 ????? ????? ??", (sizeof("010010? ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_bexti(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0110000 00000 ????? 001 ????? ????? ??", (sizeof("0110000 00000 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_clz(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0110000 00001 ????? 001 ????? ????? ??", (sizeof("0110000 00001 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_ctz(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0110000 00010 ????? 001 ????? ????? ??", (sizeof("0110000 00010 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_cpop(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0110000 00100 ????? 001 ????? ????? ??", (sizeof("0110000 00100 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sext_b(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0110000 00101 ????? 001 ????? ????? ??", (sizeof("0110000 00101 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sext_h(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("011000? ????? ????? 101 ????? ????? ??", (sizeof("011000? ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_rori(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("011010? ????? ????? 001 ????? ????? ??", (sizeof("011010? ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_binvi(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0110101 11000 ????? 101 ????? ????? ??", (sizeof("0110101 11000 ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_rev8(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0110100 00111 ????? 101 ????? ????? ??", (sizeof("0110100 00111 ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_revb(s); }; } } while (0);


  do { uint32_t key, mask, shift; pattern_decode("0011000 00000 ????? 001 ????? ????? ??", (sizeof("0011000 00000 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_aes64im(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0011000 1???? ????? 001 ????? ????? ??", (sizeof("0011000 1???? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_aes64ks1i(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0001000 00000 ????? 001 ????? ????? ??", (sizeof("0001000 00000 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sha256sum0(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0001000 00001 ????? 001 ????? ????? ??", (sizeof("0001000 00001 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sha256sum1(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0001000 00010 ????? 001 ????? ????? ??", (sizeof("0001000 00010 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sha256sig0(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0001000 00011 ????? 001 ????? ????? ??", (sizeof("0001000 00011 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sha256sig1(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0001000 00100 ????? 001 ????? ????? ??", (sizeof("0001000 00100 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sha512sum0(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0001000 00101 ????? 001 ????? ????? ??", (sizeof("0001000 00101 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sha512sum1(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0001000 00110 ????? 001 ????? ????? ??", (sizeof("0001000 00110 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sha512sig0(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0001000 00111 ????? 001 ????? ????? ??", (sizeof("0001000 00111 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sha512sig1(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0001000 01000 ????? 001 ????? ????? ??", (sizeof("0001000 01000 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sm3p0(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0001000 01001 ????? 001 ????? ????? ??", (sizeof("0001000 01001 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sm3p1(s); }; } } while (0);

  return EXEC_ID_inv;
};

static inline int table_op_imm32 (Decode *s) {
  if (s->isa.instr.i.rd == s->isa.instr.i.rs1) {
    do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? ????? ??", (sizeof("??????? ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_addiw_dispatch(s); }; } } while (0);
  }
  do { uint32_t key, mask, shift; pattern_decode("0000000 00000 ????? 000 ????? ????? ??", (sizeof("0000000 00000 ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_p_sext_w(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? ????? ??", (sizeof("??????? ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_addiw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 001 ????? ????? ??", (sizeof("0000000 ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_slliw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 101 ????? ????? ??", (sizeof("0000000 ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_srliw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0100000 ????? ????? 101 ????? ????? ??", (sizeof("0100000 ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sraiw(s); }; } } while (0);

  do { uint32_t key, mask, shift; pattern_decode("000010? ????? ????? 001 ????? ????? ??", (sizeof("000010? ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_slliuw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0110000 00000 ????? 001 ????? ????? ??", (sizeof("0110000 00000 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_clzw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0110000 00001 ????? 001 ????? ????? ??", (sizeof("0110000 00001 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_ctzw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0110000 00010 ????? 001 ????? ????? ??", (sizeof("0110000 00010 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_cpopw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0110000 ????? ????? 101 ????? ????? ??", (sizeof("0110000 ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_roriw(s); }; } } while (0);

  return EXEC_ID_inv;
}

static inline int table_op (Decode *s) {
  if (s->isa.instr.r.rd == s->isa.instr.r.rs1) {
    do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 000 ????? ????? ??", (sizeof("0000000 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_add(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("0100000 ????? ????? 000 ????? ????? ??", (sizeof("0100000 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_sub(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 100 ????? ????? ??", (sizeof("0000000 ????? ????? 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_xor(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 110 ????? ????? ??", (sizeof("0000000 ????? ????? 110 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_or(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 111 ????? ????? ??", (sizeof("0000000 ????? ????? 111 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_and(s); }; } } while (0);
  }
  do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 000 ????? ????? ??", (sizeof("0000000 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_add(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 001 ????? ????? ??", (sizeof("0000000 ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sll(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 010 ????? ????? ??", (sizeof("0000000 ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_slt(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 011 ????? ????? ??", (sizeof("0000000 ????? ????? 011 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sltu(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 100 ????? ????? ??", (sizeof("0000000 ????? ????? 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_xor(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 101 ????? ????? ??", (sizeof("0000000 ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_srl(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 110 ????? ????? ??", (sizeof("0000000 ????? ????? 110 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_or(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 111 ????? ????? ??", (sizeof("0000000 ????? ????? 111 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_and(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0100000 ????? ????? 000 ????? ????? ??", (sizeof("0100000 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sub(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0100000 ????? ????? 101 ????? ????? ??", (sizeof("0100000 ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sra(s); }; } } while (0);

  do { uint32_t key, mask, shift; pattern_decode("0000101 ????? ????? 001 ????? ????? ??", (sizeof("0000101 ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_clmul(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000101 ????? ????? 010 ????? ????? ??", (sizeof("0000101 ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_clmulr(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000101 ????? ????? 011 ????? ????? ??", (sizeof("0000101 ????? ????? 011 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_clmulh(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000101 ????? ????? 100 ????? ????? ??", (sizeof("0000101 ????? ????? 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_min(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000101 ????? ????? 101 ????? ????? ??", (sizeof("0000101 ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_minu(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000101 ????? ????? 110 ????? ????? ??", (sizeof("0000101 ????? ????? 110 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_max(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000101 ????? ????? 111 ????? ????? ??", (sizeof("0000101 ????? ????? 111 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_maxu(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0010000 ????? ????? 010 ????? ????? ??", (sizeof("0010000 ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sh1add(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0010000 ????? ????? 100 ????? ????? ??", (sizeof("0010000 ????? ????? 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sh2add(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0010000 ????? ????? 110 ????? ????? ??", (sizeof("0010000 ????? ????? 110 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sh3add(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0010100 ????? ????? 001 ????? ????? ??", (sizeof("0010100 ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_bset(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0100000 ????? ????? 100 ????? ????? ??", (sizeof("0100000 ????? ????? 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_xnor(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0100000 ????? ????? 110 ????? ????? ??", (sizeof("0100000 ????? ????? 110 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_orn(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0100000 ????? ????? 111 ????? ????? ??", (sizeof("0100000 ????? ????? 111 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_andn(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0100100 ????? ????? 001 ????? ????? ??", (sizeof("0100100 ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_bclr(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0100100 ????? ????? 101 ????? ????? ??", (sizeof("0100100 ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_bext(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0110000 ????? ????? 001 ????? ????? ??", (sizeof("0110000 ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_rol(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0110000 ????? ????? 101 ????? ????? ??", (sizeof("0110000 ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_ror(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0110100 ????? ????? 001 ????? ????? ??", (sizeof("0110100 ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_binv(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000100 ????? ????? 100 ????? ????? ??", (sizeof("0000100 ????? ????? 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_pack(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000100 ????? ????? 111 ????? ????? ??", (sizeof("0000100 ????? ????? 111 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_packh(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0010100 ????? ????? 010 ????? ????? ??", (sizeof("0010100 ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_xpermn(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0010100 ????? ????? 100 ????? ????? ??", (sizeof("0010100 ????? ????? 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_xpermb(s); }; } } while (0);


  do { uint32_t key, mask, shift; pattern_decode("0011001 ????? ????? 000 ????? ????? ??", (sizeof("0011001 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_aes64es(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0011011 ????? ????? 000 ????? ????? ??", (sizeof("0011011 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_aes64esm(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0011101 ????? ????? 000 ????? ????? ??", (sizeof("0011101 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_aes64ds(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0011111 ????? ????? 000 ????? ????? ??", (sizeof("0011111 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_aes64dsm(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0111111 ????? ????? 000 ????? ????? ??", (sizeof("0111111 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_aes64ks2(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??11000 ????? ????? 000 ????? ????? ??", (sizeof("??11000 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sm4ed(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??11010 ????? ????? 000 ????? ????? ??", (sizeof("??11010 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sm4ks(s); }; } } while (0);

  return EXEC_ID_inv;
}

static inline int table_op32 (Decode *s) {
  if (s->isa.instr.r.rd == s->isa.instr.r.rs1) {
    do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 000 ????? ????? ??", (sizeof("0000000 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_addw(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("0100000 ????? ????? 000 ????? ????? ??", (sizeof("0100000 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_subw(s); }; } } while (0);
  }
  do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 000 ????? ????? ??", (sizeof("0000000 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_addw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0100000 ????? ????? 000 ????? ????? ??", (sizeof("0100000 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_subw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 001 ????? ????? ??", (sizeof("0000000 ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sllw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000000 ????? ????? 101 ????? ????? ??", (sizeof("0000000 ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_srlw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0100000 ????? ????? 101 ????? ????? ??", (sizeof("0100000 ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sraw(s); }; } } while (0);

  do { uint32_t key, mask, shift; pattern_decode("0000100 ????? ????? 000 ????? ????? ??", (sizeof("0000100 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_adduw(s); }; } } while (0);

  do { uint32_t key, mask, shift; pattern_decode("0010000 ????? ????? 010 ????? ????? ??", (sizeof("0010000 ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sh1adduw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0010000 ????? ????? 100 ????? ????? ??", (sizeof("0010000 ????? ????? 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sh2adduw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0010000 ????? ????? 110 ????? ????? ??", (sizeof("0010000 ????? ????? 110 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sh3adduw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0110000 ????? ????? 001 ????? ????? ??", (sizeof("0110000 ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_rolw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0110000 ????? ????? 101 ????? ????? ??", (sizeof("0110000 ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_rorw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000100 ????? ????? 100 ????? ????? ??", (sizeof("0000100 ????? ????? 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_packw(s); }; } } while (0);

  return EXEC_ID_inv;
}

static inline int table_branch (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("??????? 00000 ????? 000 ????? ????? ??", (sizeof("??????? 00000 ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_beqz(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? 00000 ????? 001 ????? ????? ??", (sizeof("??????? 00000 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_bnez(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? 00000 ????? 100 ????? ????? ??", (sizeof("??????? 00000 ????? 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_p_bltz(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? 00000 ????? 101 ????? ????? ??", (sizeof("??????? 00000 ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_p_bgez(s); }; } } while (0);

  do { uint32_t key, mask, shift; pattern_decode("??????? ????? 00000 100 ????? ????? ??", (sizeof("??????? ????? 00000 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_p_bgtz(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? 00000 101 ????? ????? ??", (sizeof("??????? ????? 00000 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_p_blez(s); }; } } while (0);

  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? ????? ??", (sizeof("??????? ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_beq(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 001 ????? ????? ??", (sizeof("??????? ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_bne(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 100 ????? ????? ??", (sizeof("??????? ????? ????? 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_blt(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 101 ????? ????? ??", (sizeof("??????? ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_bge(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 110 ????? ????? ??", (sizeof("??????? ????? ????? 110 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_bltu(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 111 ????? ????? ??", (sizeof("??????? ????? ????? 111 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_bgeu(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_jal_dispatch (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? 00000 ????? ??", (sizeof("??????? ????? ????? ??? 00000 ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_j(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? 00001 ????? ??", (sizeof("??????? ????? ????? ??? 00001 ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_p_jal(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? ????? ??", (sizeof("??????? ????? ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_jal(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_jalr_dispatch (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("0000000 00000 00001 ??? 00000 ????? ??", (sizeof("0000000 00000 00001 ??? 00000 ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_p_ret(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000000 00000 ????? ??? 00000 ????? ??", (sizeof("0000000 00000 ????? ??? 00000 ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_jr(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? ????? ??", (sizeof("??????? ????? ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_jalr(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_mem_fence (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? ????? ??", (sizeof("??????? ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fence(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 001 ????? ????? ??", (sizeof("??????? ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fence_i(s); }; } } while (0);
  return EXEC_ID_inv;
}
# 19 "src/isa/riscv64/instr/decode.c" 2
# 1 "src/isa/riscv64/instr/rvf/decode.h" 1

# 1 "src/isa/riscv64/instr/rvf/decode.h" 3 4
_Bool 
# 1 "src/isa/riscv64/instr/rvf/decode.h"
    fp_enable();
static int table_op_fp_d(Decode *s);
static int table_fmadd_d_dispatch(Decode *s);

static inline void decode_op_fr (Decode *s, Operand *op, word_t val, 
# 5 "src/isa/riscv64/instr/rvf/decode.h" 3 4
             _Bool 
# 5 "src/isa/riscv64/instr/rvf/decode.h"
             flag){
  ;
  op->preg = &(cpu.fpr[check_reg_index(val)]._64);
  ;



}

static inline void decode_fr (Decode *s, int width) {
  decode_op_fr(s, (&s->src1), s->isa.instr.fp.rs1, 
# 15 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                               0
# 15 "src/isa/riscv64/instr/rvf/decode.h"
                                                    );
  decode_op_fr(s, (&s->src2), s->isa.instr.fp.rs2, 
# 16 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                               0
# 16 "src/isa/riscv64/instr/rvf/decode.h"
                                                    );
  decode_op_fr(s, (&s->dest), s->isa.instr.fp.rd, 
# 17 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                               0
# 17 "src/isa/riscv64/instr/rvf/decode.h"
                                                    );
}

static inline void decode_R4 (Decode *s, int width) {
  decode_op_fr(s, (&s->src1), s->isa.instr.fp.rs1, 
# 21 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                               0
# 21 "src/isa/riscv64/instr/rvf/decode.h"
                                                    );
  decode_op_fr(s, (&s->src2), s->isa.instr.fp.rs2, 
# 22 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                               0
# 22 "src/isa/riscv64/instr/rvf/decode.h"
                                                    );
  decode_op_fr(s, (&s->dest), s->isa.instr.fp.rd, 
# 23 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                               0
# 23 "src/isa/riscv64/instr/rvf/decode.h"
                                                    );
  ;

}

static inline void decode_fload (Decode *s, int width) {
  decode_op_r(s, (&s->src1), s->isa.instr.i.rs1, 
# 29 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                             1
# 29 "src/isa/riscv64/instr/rvf/decode.h"
                                                 );
  decode_op_i(s, (&s->src2), (sword_t)s->isa.instr.i.simm11_0, 
# 30 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                                           0
# 30 "src/isa/riscv64/instr/rvf/decode.h"
                                                                );
  decode_op_fr(s, (&s->dest), s->isa.instr.i.rd, 
# 31 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                             0
# 31 "src/isa/riscv64/instr/rvf/decode.h"
                                                  );
}

static inline void decode_fstore (Decode *s, int width) {
  decode_op_r(s, (&s->src1), s->isa.instr.s.rs1, 
# 35 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                             1
# 35 "src/isa/riscv64/instr/rvf/decode.h"
                                                 );
  sword_t simm = (s->isa.instr.s.simm11_5 << 5) | s->isa.instr.s.imm4_0;
  decode_op_i(s, (&s->src2), simm, 
# 37 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                               0
# 37 "src/isa/riscv64/instr/rvf/decode.h"
                                    );
  decode_op_fr(s, (&s->dest), s->isa.instr.s.rs2, 
# 38 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                              0
# 38 "src/isa/riscv64/instr/rvf/decode.h"
                                                   );
}

static inline void decode_fr2r (Decode *s, int width){
  decode_op_fr(s, (&s->src1), s->isa.instr.fp.rs1, 
# 42 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                               1
# 42 "src/isa/riscv64/instr/rvf/decode.h"
                                                   );
  decode_op_fr(s, (&s->src2), s->isa.instr.fp.rs2, 
# 43 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                               1
# 43 "src/isa/riscv64/instr/rvf/decode.h"
                                                   );
  decode_op_r(s, (&s->dest), s->isa.instr.fp.rd, 
# 44 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                             0
# 44 "src/isa/riscv64/instr/rvf/decode.h"
                                                  );
}

static inline void decode_r2fr (Decode *s, int width){
  decode_op_r(s, (&s->src1), s->isa.instr.fp.rs1, 
# 48 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                              1
# 48 "src/isa/riscv64/instr/rvf/decode.h"
                                                  );
  decode_op_r(s, (&s->src2), s->isa.instr.fp.rs2, 
# 49 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                              1
# 49 "src/isa/riscv64/instr/rvf/decode.h"
                                                  );
  decode_op_fr(s, (&s->dest), s->isa.instr.fp.rd, 
# 50 "src/isa/riscv64/instr/rvf/decode.h" 3 4
                                              0
# 50 "src/isa/riscv64/instr/rvf/decode.h"
                                                   );
}
# 93 "src/isa/riscv64/instr/rvf/decode.h"
static inline int table_fload (Decode *s) {
  ;







  int mmu_mode = get_data_mmu_state();
  if (mmu_mode == MMU_DIRECT) {
    if (fp_enable()) {
      do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 010 ????? ????? ??", (sizeof("??????? ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_flw(s); }; } } while (0);
      do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 011 ????? ????? ??", (sizeof("??????? ????? ????? 011 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fld(s); }; } } while (0);
    }
# 116 "src/isa/riscv64/instr/rvf/decode.h"
  } else if (mmu_mode == MMU_TRANSLATE) {
    if (fp_enable()) {
      do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 010 ????? ????? ??", (sizeof("??????? ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_flw_mmu(s); }; } } while (0);
      do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 011 ????? ????? ??", (sizeof("??????? ????? ????? 011 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fld_mmu(s); }; } } while (0);
    }
# 129 "src/isa/riscv64/instr/rvf/decode.h"
  } else { 
# 129 "src/isa/riscv64/instr/rvf/decode.h" 3 4
          ((void) sizeof ((
# 129 "src/isa/riscv64/instr/rvf/decode.h"
          0
# 129 "src/isa/riscv64/instr/rvf/decode.h" 3 4
          ) ? 1 : 0), __extension__ ({ if (
# 129 "src/isa/riscv64/instr/rvf/decode.h"
          0
# 129 "src/isa/riscv64/instr/rvf/decode.h" 3 4
          ) ; else __assert_fail (
# 129 "src/isa/riscv64/instr/rvf/decode.h"
          "0"
# 129 "src/isa/riscv64/instr/rvf/decode.h" 3 4
          , "src/isa/riscv64/instr/rvf/decode.h", 129, __extension__ __PRETTY_FUNCTION__); }))
# 129 "src/isa/riscv64/instr/rvf/decode.h"
                   ; }
  return EXEC_ID_inv;
}

static inline int table_fstore (Decode *s) {
  ;







  int mmu_mode = get_data_mmu_state();
  if (mmu_mode == MMU_DIRECT) {
    if (fp_enable()) {
      do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 010 ????? ????? ??", (sizeof("??????? ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fsw(s); }; } } while (0);
      do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 011 ????? ????? ??", (sizeof("??????? ????? ????? 011 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fsd(s); }; } } while (0);
    }
# 156 "src/isa/riscv64/instr/rvf/decode.h"
  } else if (mmu_mode == MMU_TRANSLATE) {
    if (fp_enable()) {
      do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 010 ????? ????? ??", (sizeof("??????? ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fsw_mmu(s); }; } } while (0);
      do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 011 ????? ????? ??", (sizeof("??????? ????? ????? 011 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fsd_mmu(s); }; } } while (0);
    }
# 169 "src/isa/riscv64/instr/rvf/decode.h"
  } else { 
# 169 "src/isa/riscv64/instr/rvf/decode.h" 3 4
          ((void) sizeof ((
# 169 "src/isa/riscv64/instr/rvf/decode.h"
          0
# 169 "src/isa/riscv64/instr/rvf/decode.h" 3 4
          ) ? 1 : 0), __extension__ ({ if (
# 169 "src/isa/riscv64/instr/rvf/decode.h"
          0
# 169 "src/isa/riscv64/instr/rvf/decode.h" 3 4
          ) ; else __assert_fail (
# 169 "src/isa/riscv64/instr/rvf/decode.h"
          "0"
# 169 "src/isa/riscv64/instr/rvf/decode.h" 3 4
          , "src/isa/riscv64/instr/rvf/decode.h", 169, __extension__ __PRETTY_FUNCTION__); }))
# 169 "src/isa/riscv64/instr/rvf/decode.h"
                   ; }
  return EXEC_ID_inv;
}

static inline int table_op_fp (Decode *s) {
  if (!fp_enable()) return table_rt_inv(s);

  if ((s->isa.instr.fp.fmt == 0b00 && s->isa.instr.fp.funct5 == 0b01000) ||
      s->isa.instr.fp.fmt == 0b01) return table_op_fp_d(s);


  do { uint32_t key, mask, shift; pattern_decode("00000 00 ????? ????? ??? ????? ????? ??", (sizeof("00000 00 ????? ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fadds(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("00001 00 ????? ????? ??? ????? ????? ??", (sizeof("00001 00 ????? ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fsubs(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("00010 00 ????? ????? ??? ????? ????? ??", (sizeof("00010 00 ????? ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fmuls(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("00011 00 ????? ????? ??? ????? ????? ??", (sizeof("00011 00 ????? ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fdivs(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("01011 00 00000 ????? ??? ????? ????? ??", (sizeof("01011 00 00000 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fsqrts(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("00100 00 ????? ????? 000 ????? ????? ??", (sizeof("00100 00 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fsgnjs(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("00100 00 ????? ????? 001 ????? ????? ??", (sizeof("00100 00 ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fsgnjns(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("00100 00 ????? ????? 010 ????? ????? ??", (sizeof("00100 00 ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fsgnjxs(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("00101 00 ????? ????? 000 ????? ????? ??", (sizeof("00101 00 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fmins(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("00101 00 ????? ????? 001 ????? ????? ??", (sizeof("00101 00 ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fmaxs(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11000 00 00000 ????? ??? ????? ????? ??", (sizeof("11000 00 00000 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_fcvt_w_s(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11000 00 00001 ????? ??? ????? ????? ??", (sizeof("11000 00 00001 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_fcvt_wu_s(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11100 00 00000 ????? 000 ????? ????? ??", (sizeof("11100 00 00000 ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_fmv_x_w(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("10100 00 ????? ????? 010 ????? ????? ??", (sizeof("10100 00 ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_feqs(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("10100 00 ????? ????? 001 ????? ????? ??", (sizeof("10100 00 ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_flts(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("10100 00 ????? ????? 000 ????? ????? ??", (sizeof("10100 00 ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_fles(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11100 00 00000 ????? 001 ????? ????? ??", (sizeof("11100 00 00000 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_fclasss(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11010 00 00000 ????? ??? ????? ????? ??", (sizeof("11010 00 00000 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_r2fr(s, 0); return table_fcvt_s_w(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11010 00 00001 ????? ??? ????? ????? ??", (sizeof("11010 00 00001 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_r2fr(s, 0); return table_fcvt_s_wu(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11110 00 00000 ????? 000 ????? ????? ??", (sizeof("11110 00 00000 ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_r2fr(s, 0); return table_fmv_w_x(s); }; } } while (0);


  do { uint32_t key, mask, shift; pattern_decode("11000 00 00010 ????? ??? ????? ????? ??", (sizeof("11000 00 00010 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_fcvt_l_s(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11000 00 00011 ????? ??? ????? ????? ??", (sizeof("11000 00 00011 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_fcvt_lu_s(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11010 00 00010 ????? ??? ????? ????? ??", (sizeof("11010 00 00010 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_r2fr(s, 0); return table_fcvt_s_l(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11010 00 00011 ????? ??? ????? ????? ??", (sizeof("11010 00 00011 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_r2fr(s, 0); return table_fcvt_s_lu(s); }; } } while (0);

  return EXEC_ID_inv;
}

static inline int table_fmadd_dispatch (Decode *s) {
  if (!fp_enable()) return table_rt_inv(s);
  do { uint32_t key, mask, shift; pattern_decode("????? 01 ????? ????? ??? ????? ????? ??", (sizeof("????? 01 ????? ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fmadd_d_dispatch(s); }; } } while (0);

  do { uint32_t key, mask, shift; pattern_decode("????? 00 ????? ????? ??? ????? 10000 ??", (sizeof("????? 00 ????? ????? ??? ????? 10000 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fmadds(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("????? 00 ????? ????? ??? ????? 10001 ??", (sizeof("????? 00 ????? ????? ??? ????? 10001 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fmsubs(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("????? 00 ????? ????? ??? ????? 10010 ??", (sizeof("????? 00 ????? ????? ??? ????? 10010 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fnmsubs(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("????? 00 ????? ????? ??? ????? 10011 ??", (sizeof("????? 00 ????? ????? ??? ????? 10011 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fnmadds(s); }; } } while (0);
  return EXEC_ID_inv;
}
# 20 "src/isa/riscv64/instr/decode.c" 2
# 1 "src/isa/riscv64/instr/rvm/decode.h" 1
static inline int table_rvm (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? ????? ??", (sizeof("??????? ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_mul(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 001 ????? ????? ??", (sizeof("??????? ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_mulh(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 010 ????? ????? ??", (sizeof("??????? ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_mulhsu(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 011 ????? ????? ??", (sizeof("??????? ????? ????? 011 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_mulhu(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 100 ????? ????? ??", (sizeof("??????? ????? ????? 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_div(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 101 ????? ????? ??", (sizeof("??????? ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_divu(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 110 ????? ????? ??", (sizeof("??????? ????? ????? 110 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_rem(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 111 ????? ????? ??", (sizeof("??????? ????? ????? 111 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_remu(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_rvm32 (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? ????? ??", (sizeof("??????? ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_mulw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 100 ????? ????? ??", (sizeof("??????? ????? ????? 100 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_divw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 101 ????? ????? ??", (sizeof("??????? ????? ????? 101 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_divuw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 110 ????? ????? ??", (sizeof("??????? ????? ????? 110 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_remw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? 111 ????? ????? ??", (sizeof("??????? ????? ????? 111 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_remuw(s); }; } } while (0);
  return EXEC_ID_inv;
}
# 21 "src/isa/riscv64/instr/decode.c" 2
# 1 "src/isa/riscv64/instr/rva/decode.h" 1
# 22 "src/isa/riscv64/instr/decode.c" 2
# 1 "src/isa/riscv64/instr/rvc/decode.h" 1



static inline uint32_t ror_imm(uint32_t imm, int len, int r) {
  if (r == 0) return imm;
  uint32_t copy = imm | (imm << len);
  uint32_t mask = ((1 << (len)) - 1) << r;
  uint32_t res = copy & mask;
  return res;
}

static inline void decode_op_C_imm6(Decode *s, uint32_t imm6, 
# 12 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                             _Bool 
# 12 "src/isa/riscv64/instr/rvc/decode.h"
                                                                  sign, int shift, int rotate) {
  uint64_t imm = (sign ? ({ struct { int64_t n : 6; } __x = { .n = imm6 }; (int64_t)__x.n; }) << shift : ror_imm(imm6, 6, rotate));
  decode_op_i(s, (&s->src2), imm, 
# 14 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                              0
# 14 "src/isa/riscv64/instr/rvc/decode.h"
                                   );
}

static inline void decode_op_C_rd_rs1(Decode *s, 
# 17 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                _Bool 
# 17 "src/isa/riscv64/instr/rvc/decode.h"
                                                     creg) {
  uint32_t instr = s->isa.instr.val;
  uint32_t rd_rs1 = (creg ? ((((instr) >> (7)) & ((1 << ((9) - (7) + 1)) - 1)) + 8) : (((instr) >> (7)) & ((1 << ((11) - (7) + 1)) - 1)));
  decode_op_r(s, (&s->src1), rd_rs1, 
# 20 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                 1
# 20 "src/isa/riscv64/instr/rvc/decode.h"
                                     );
  decode_op_r(s, (&s->dest), rd_rs1, 
# 21 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                 0
# 21 "src/isa/riscv64/instr/rvc/decode.h"
                                      );
}


static inline void decode_op_rd_rs1_imm6(Decode *s, 
# 25 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                   _Bool 
# 25 "src/isa/riscv64/instr/rvc/decode.h"
                                                        sign, int shift, int rotate, 
# 25 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                                                     _Bool 
# 25 "src/isa/riscv64/instr/rvc/decode.h"
                                                                                          creg) {
  uint32_t instr = s->isa.instr.val;
  uint32_t imm6 = ((((instr) >> (12)) & ((1 << ((12) - (12) + 1)) - 1)) << 5) | (((instr) >> (2)) & ((1 << ((6) - (2) + 1)) - 1));
  decode_op_C_imm6(s, imm6, sign, shift, rotate);
  decode_op_C_rd_rs1(s, creg);
}
# 44 "src/isa/riscv64/instr/rvc/decode.h"
static inline void decode_CI_simm (Decode *s, int width) {
  decode_op_rd_rs1_imm6(s, 
# 45 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                          1
# 45 "src/isa/riscv64/instr/rvc/decode.h"
                              , 0, 0, 
# 45 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                      0
# 45 "src/isa/riscv64/instr/rvc/decode.h"
                                           );
}

static inline void decode_CI_simm_lui (Decode *s, int width) {
  decode_CI_simm(s, width);

  (&s->src1)->imm = (&s->src2)->imm << 12;
}


static inline void decode_CI_uimm (Decode *s, int width) {
  decode_op_rd_rs1_imm6(s, 
# 56 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                          0
# 56 "src/isa/riscv64/instr/rvc/decode.h"
                               , 0, 0, 
# 56 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                       0
# 56 "src/isa/riscv64/instr/rvc/decode.h"
                                            );
}

static inline void decode_C_LI (Decode *s, int width) {
  decode_CI_simm(s, width);
  decode_op_r(s, (&s->src1), 0, 
# 61 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                            1
# 61 "src/isa/riscv64/instr/rvc/decode.h"
                                );
}

static inline void decode_C_ADDI16SP (Decode *s, int width) {
  decode_op_r(s, (&s->src1), 2, 
# 65 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                            1
# 65 "src/isa/riscv64/instr/rvc/decode.h"
                                );
  uint32_t instr = s->isa.instr.val;
  sword_t simm = (({ struct { int64_t n : 1; } __x = { .n = (((instr) >> (12)) & ((1 << ((12) - (12) + 1)) - 1)) }; (int64_t)__x.n; }) << 9) | ((((instr) >> (3)) & ((1 << ((4) - (3) + 1)) - 1)) << 7) |
    ((((instr) >> (5)) & ((1 << ((5) - (5) + 1)) - 1)) << 6) | ((((instr) >> (2)) & ((1 << ((2) - (2) + 1)) - 1)) << 5) | ((((instr) >> (6)) & ((1 << ((6) - (6) + 1)) - 1)) << 4);
  
# 69 "src/isa/riscv64/instr/rvc/decode.h" 3 4
 ((void) sizeof ((
# 69 "src/isa/riscv64/instr/rvc/decode.h"
 simm != 0
# 69 "src/isa/riscv64/instr/rvc/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 69 "src/isa/riscv64/instr/rvc/decode.h"
 simm != 0
# 69 "src/isa/riscv64/instr/rvc/decode.h" 3 4
 ) ; else __assert_fail (
# 69 "src/isa/riscv64/instr/rvc/decode.h"
 "simm != 0"
# 69 "src/isa/riscv64/instr/rvc/decode.h" 3 4
 , "src/isa/riscv64/instr/rvc/decode.h", 69, __extension__ __PRETTY_FUNCTION__); }))
# 69 "src/isa/riscv64/instr/rvc/decode.h"
                  ;
  decode_op_i(s, (&s->src2), simm, 
# 70 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                               0
# 70 "src/isa/riscv64/instr/rvc/decode.h"
                                    );
  decode_op_r(s, (&s->dest), 2, 
# 71 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                            0
# 71 "src/isa/riscv64/instr/rvc/decode.h"
                                 );
}


static inline void decode_C_xxSP(Decode *s, uint32_t imm6, int rotate) {
  decode_op_r(s, (&s->src1), 2, 
# 76 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                            1
# 76 "src/isa/riscv64/instr/rvc/decode.h"
                                );
  decode_op_C_imm6(s, imm6, 
# 77 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                           0
# 77 "src/isa/riscv64/instr/rvc/decode.h"
                                , 0, rotate);
}

static inline void decode_C_LxSP(Decode *s, int rotate, 
# 80 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                       _Bool 
# 80 "src/isa/riscv64/instr/rvc/decode.h"
                                                            is_fp) {
  uint32_t imm6 = ((((s->isa.instr.val) >> (12)) & ((1 << ((12) - (12) + 1)) - 1)) << 5) | (((s->isa.instr.val) >> (2)) & ((1 << ((6) - (2) + 1)) - 1));
  decode_C_xxSP(s, imm6, rotate);
  uint32_t rd = (((s->isa.instr.val) >> (7)) & ((1 << ((11) - (7) + 1)) - 1));
  if (is_fp) decode_op_fr(s, (&s->dest), rd, 
# 84 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                         0
# 84 "src/isa/riscv64/instr/rvc/decode.h"
                                              );
  else decode_op_r(s, (&s->dest), rd, 
# 85 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                  0
# 85 "src/isa/riscv64/instr/rvc/decode.h"
                                       );
}

static inline void decode_C_LWSP (Decode *s, int width) {
  decode_C_LxSP(s, 2, 
# 89 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                     0
# 89 "src/isa/riscv64/instr/rvc/decode.h"
                          );
}

static inline void decode_C_LDSP (Decode *s, int width) {
  decode_C_LxSP(s, 3, 
# 93 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                     0
# 93 "src/isa/riscv64/instr/rvc/decode.h"
                          );
}

static inline void decode_C_FLDSP (Decode *s, int width) {
  decode_C_LxSP(s, 3, 
# 97 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                     1
# 97 "src/isa/riscv64/instr/rvc/decode.h"
                         );
}



static inline void decode_C_SxSP(Decode *s, int rotate, 
# 102 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                       _Bool 
# 102 "src/isa/riscv64/instr/rvc/decode.h"
                                                            is_fp) {
  uint32_t imm6 = (((s->isa.instr.val) >> (7)) & ((1 << ((12) - (7) + 1)) - 1));
  decode_C_xxSP(s, imm6, rotate);
  uint32_t rs2 = (((s->isa.instr.val) >> (2)) & ((1 << ((6) - (2) + 1)) - 1));
  if (is_fp) decode_op_fr(s, (&s->dest), rs2, 
# 106 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                          1
# 106 "src/isa/riscv64/instr/rvc/decode.h"
                                              );
  else decode_op_r(s, (&s->dest), rs2, 
# 107 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                   1
# 107 "src/isa/riscv64/instr/rvc/decode.h"
                                       );
}

static inline void decode_C_SWSP (Decode *s, int width) {
  decode_C_SxSP(s, 2, 
# 111 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                     0
# 111 "src/isa/riscv64/instr/rvc/decode.h"
                          );
}

static inline void decode_C_SDSP (Decode *s, int width) {
  decode_C_SxSP(s, 3, 
# 115 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                     0
# 115 "src/isa/riscv64/instr/rvc/decode.h"
                          );
}

static inline void decode_C_FSDSP (Decode *s, int width) {
  decode_C_SxSP(s, 3, 
# 119 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                     1
# 119 "src/isa/riscv64/instr/rvc/decode.h"
                         );
}



static inline void decode_C_ADDI4SPN (Decode *s, int width) {
  decode_op_r(s, (&s->src1), 2, 
# 125 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                            1
# 125 "src/isa/riscv64/instr/rvc/decode.h"
                                );
  uint32_t instr = s->isa.instr.val;
  uint32_t imm9_6 = ror_imm((((instr) >> (7)) & ((1 << ((12) - (7) + 1)) - 1)), 6, 4);
  uint32_t imm = imm9_6 | (((instr) >> (5)) & ((1 << ((5) - (5) + 1)) - 1)) << 3 | (((instr) >> (6)) & ((1 << ((6) - (6) + 1)) - 1)) << 2;

  if(__builtin_expect(imm == 0, 0)){

    do { if (!(0)) { fflush(
# 132 "src/isa/riscv64/instr/rvc/decode.h" 3 4
   stdout
# 132 "src/isa/riscv64/instr/rvc/decode.h"
   ); fprintf(
# 132 "src/isa/riscv64/instr/rvc/decode.h" 3 4
   stderr
# 132 "src/isa/riscv64/instr/rvc/decode.h"
   , "\33[1;31m"); fprintf(
# 132 "src/isa/riscv64/instr/rvc/decode.h" 3 4
   stderr
# 132 "src/isa/riscv64/instr/rvc/decode.h"
   , "SHAER =1; Invalid inst 0x0000: pc = " "0x%016lx", s->pc); fprintf(
# 132 "src/isa/riscv64/instr/rvc/decode.h" 3 4
   stderr
# 132 "src/isa/riscv64/instr/rvc/decode.h"
   , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 132 "src/isa/riscv64/instr/rvc/decode.h" 3 4
   ((void) sizeof ((
# 132 "src/isa/riscv64/instr/rvc/decode.h"
   0
# 132 "src/isa/riscv64/instr/rvc/decode.h" 3 4
   ) ? 1 : 0), __extension__ ({ if (
# 132 "src/isa/riscv64/instr/rvc/decode.h"
   0
# 132 "src/isa/riscv64/instr/rvc/decode.h" 3 4
   ) ; else __assert_fail (
# 132 "src/isa/riscv64/instr/rvc/decode.h"
   "0"
# 132 "src/isa/riscv64/instr/rvc/decode.h" 3 4
   , "src/isa/riscv64/instr/rvc/decode.h", 132, __extension__ __PRETTY_FUNCTION__); }))
# 132 "src/isa/riscv64/instr/rvc/decode.h"
   ; } } while (0);





  }
  decode_op_i(s, (&s->src2), imm, 
# 139 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                              0
# 139 "src/isa/riscv64/instr/rvc/decode.h"
                                   );
  decode_op_r(s, (&s->dest), ((((instr) >> (2)) & ((1 << ((4) - (2) + 1)) - 1)) + 8), 
# 140 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                      0
# 140 "src/isa/riscv64/instr/rvc/decode.h"
                                                           );
}




static inline void decode_C_ldst_common(Decode *s, int rotate, 
# 146 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                              _Bool 
# 146 "src/isa/riscv64/instr/rvc/decode.h"
                                                                   is_store, 
# 146 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                                             _Bool 
# 146 "src/isa/riscv64/instr/rvc/decode.h"
                                                                                  is_fp) {
  uint32_t instr = s->isa.instr.val;
  decode_op_r(s, (&s->src1), ((((instr) >> (7)) & ((1 << ((9) - (7) + 1)) - 1)) + 8), 
# 148 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                      1
# 148 "src/isa/riscv64/instr/rvc/decode.h"
                                                          );
  uint32_t imm5 = ((((instr) >> (10)) & ((1 << ((12) - (10) + 1)) - 1)) << 2) | (((instr) >> (5)) & ((1 << ((6) - (5) + 1)) - 1));
  uint32_t imm = ror_imm(imm5, 5, rotate) << 1;
  decode_op_i(s, (&s->src2), imm, 
# 151 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                              0
# 151 "src/isa/riscv64/instr/rvc/decode.h"
                                   );
  if (is_fp) decode_op_fr(s, (&s->dest), ((((instr) >> (2)) & ((1 << ((4) - (2) + 1)) - 1)) + 8), is_store);
  else decode_op_r(s, (&s->dest), ((((instr) >> (2)) & ((1 << ((4) - (2) + 1)) - 1)) + 8), is_store);
}

static inline void decode_C_LW (Decode *s, int width) {
  decode_C_ldst_common(s, 1, 
# 157 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                            0
# 157 "src/isa/riscv64/instr/rvc/decode.h"
                                 , 
# 157 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                   0
# 157 "src/isa/riscv64/instr/rvc/decode.h"
                                        );
}

static inline void decode_C_LD (Decode *s, int width) {
  decode_C_ldst_common(s, 2, 
# 161 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                            0
# 161 "src/isa/riscv64/instr/rvc/decode.h"
                                 , 
# 161 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                   0
# 161 "src/isa/riscv64/instr/rvc/decode.h"
                                        );
}

static inline void decode_C_FLD (Decode *s, int width) {
  decode_C_ldst_common(s, 2, 
# 165 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                            0
# 165 "src/isa/riscv64/instr/rvc/decode.h"
                                 , 
# 165 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                   1
# 165 "src/isa/riscv64/instr/rvc/decode.h"
                                       );
}



static inline void decode_C_SW (Decode *s, int width) {
  decode_C_ldst_common(s, 1, 
# 171 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                            1
# 171 "src/isa/riscv64/instr/rvc/decode.h"
                                , 
# 171 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                  0
# 171 "src/isa/riscv64/instr/rvc/decode.h"
                                       );
}

static inline void decode_C_SD (Decode *s, int width) {
  decode_C_ldst_common(s, 2, 
# 175 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                            1
# 175 "src/isa/riscv64/instr/rvc/decode.h"
                                , 
# 175 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                  0
# 175 "src/isa/riscv64/instr/rvc/decode.h"
                                       );
}

static inline void decode_C_FSD (Decode *s, int width) {
  decode_C_ldst_common(s, 2, 
# 179 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                            1
# 179 "src/isa/riscv64/instr/rvc/decode.h"
                                , 
# 179 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                  1
# 179 "src/isa/riscv64/instr/rvc/decode.h"
                                      );
}

static inline void decode_CS (Decode *s, int width) {
  decode_op_C_rd_rs1(s, 
# 183 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                       1
# 183 "src/isa/riscv64/instr/rvc/decode.h"
                           );
  uint32_t rs2 = ((((s->isa.instr.val) >> (2)) & ((1 << ((4) - (2) + 1)) - 1)) + 8);
  decode_op_r(s, (&s->src2), rs2, 
# 185 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                              1
# 185 "src/isa/riscv64/instr/rvc/decode.h"
                                  );
}



static inline void decode_CB (Decode *s, int width) {
  uint32_t instr = s->isa.instr.val;
  sword_t simm8 = ({ struct { int64_t n : 1; } __x = { .n = (((instr) >> (12)) & ((1 << ((12) - (12) + 1)) - 1)) }; (int64_t)__x.n; });
  uint32_t imm7_6 = (((instr) >> (5)) & ((1 << ((6) - (5) + 1)) - 1));
  uint32_t imm5 = (((instr) >> (2)) & ((1 << ((2) - (2) + 1)) - 1));
  uint32_t imm4_3 = (((instr) >> (10)) & ((1 << ((11) - (10) + 1)) - 1));
  uint32_t imm2_1 = (((instr) >> (3)) & ((1 << ((4) - (3) + 1)) - 1));
  sword_t offset = (simm8 << 8) | (imm7_6 << 6) | (imm5 << 5) | (imm4_3 << 3) | (imm2_1 << 1);
  decode_op_i(s, (&s->dest), s->pc + offset, 
# 198 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                         1
# 198 "src/isa/riscv64/instr/rvc/decode.h"
                                             );
  decode_op_r(s, (&s->src1), ((((instr) >> (7)) & ((1 << ((9) - (7) + 1)) - 1)) + 8), 
# 199 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                      1
# 199 "src/isa/riscv64/instr/rvc/decode.h"
                                                          );
  decode_op_r(s, (&s->src2), 0, 
# 200 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                            1
# 200 "src/isa/riscv64/instr/rvc/decode.h"
                                );
}

static inline void decode_CB_shift (Decode *s, int width) {
  decode_op_rd_rs1_imm6(s, 
# 204 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                          0
# 204 "src/isa/riscv64/instr/rvc/decode.h"
                               , 0, 0, 
# 204 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                       1
# 204 "src/isa/riscv64/instr/rvc/decode.h"
                                           );
}

static inline void decode_CB_andi (Decode *s, int width) {
  decode_op_rd_rs1_imm6(s, 
# 208 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                          1
# 208 "src/isa/riscv64/instr/rvc/decode.h"
                              , 0, 0, 
# 208 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                      1
# 208 "src/isa/riscv64/instr/rvc/decode.h"
                                          );
}



static inline void decode_CJ (Decode *s, int width) {
  uint32_t instr = s->isa.instr.val;
  sword_t simm11 = ({ struct { int64_t n : 1; } __x = { .n = (((instr) >> (12)) & ((1 << ((12) - (12) + 1)) - 1)) }; (int64_t)__x.n; });
  uint32_t imm10 = (((instr) >> (8)) & ((1 << ((8) - (8) + 1)) - 1));
  uint32_t imm9_8 = (((instr) >> (9)) & ((1 << ((10) - (9) + 1)) - 1));
  uint32_t imm7 = (((instr) >> (6)) & ((1 << ((6) - (6) + 1)) - 1));
  uint32_t imm6 = (((instr) >> (7)) & ((1 << ((7) - (7) + 1)) - 1));
  uint32_t imm5 = (((instr) >> (2)) & ((1 << ((2) - (2) + 1)) - 1));
  uint32_t imm4 = (((instr) >> (11)) & ((1 << ((11) - (11) + 1)) - 1));
  uint32_t imm3_1 = (((instr) >> (3)) & ((1 << ((5) - (3) + 1)) - 1));

  sword_t offset = (simm11 << 11) | (imm10 << 10) | (imm9_8 << 8) |
    (imm7 << 7) | (imm6 << 6) | (imm5 << 5) | (imm4 << 4) | (imm3_1 << 1);
  decode_op_i(s, (&s->src1), s->pc + offset, 
# 226 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                         1
# 226 "src/isa/riscv64/instr/rvc/decode.h"
                                             );
}

static inline void decode_C_rs1_rs2_rd(Decode *s, 
# 229 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                 _Bool 
# 229 "src/isa/riscv64/instr/rvc/decode.h"
                                                      is_rs1_zero, 
# 229 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                                   _Bool 
# 229 "src/isa/riscv64/instr/rvc/decode.h"
                                                                        is_rs2_zero, 
# 229 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                                                     _Bool 
# 229 "src/isa/riscv64/instr/rvc/decode.h"
                                                                                          is_rd_zero) {
  decode_op_r(s, (&s->src1), (is_rs1_zero ? 0 : (((s->isa.instr.val) >> (7)) & ((1 << ((11) - (7) + 1)) - 1))), 
# 230 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                                            1
# 230 "src/isa/riscv64/instr/rvc/decode.h"
                                                                                );
  decode_op_r(s, (&s->src2), (is_rs2_zero ? 0 : (((s->isa.instr.val) >> (2)) & ((1 << ((6) - (2) + 1)) - 1))), 
# 231 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                                           1
# 231 "src/isa/riscv64/instr/rvc/decode.h"
                                                                               );
  decode_op_r(s, (&s->dest), (is_rd_zero ? 0 : (((s->isa.instr.val) >> (7)) & ((1 << ((11) - (7) + 1)) - 1))), 
# 232 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                                           0
# 232 "src/isa/riscv64/instr/rvc/decode.h"
                                                                                );
}

static inline void decode_C_JR (Decode *s, int width) {
  decode_op_r(s, (&s->src1), (((s->isa.instr.val) >> (7)) & ((1 << ((11) - (7) + 1)) - 1)), 
# 236 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                        1
# 236 "src/isa/riscv64/instr/rvc/decode.h"
                                                            );
}

static inline void decode_C_MOV (Decode *s, int width) {

  decode_op_r(s, (&s->src1), (((s->isa.instr.val) >> (2)) & ((1 << ((6) - (2) + 1)) - 1)), 
# 241 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                       1
# 241 "src/isa/riscv64/instr/rvc/decode.h"
                                                           );
  decode_op_r(s, (&s->src2), 0, 
# 242 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                            1
# 242 "src/isa/riscv64/instr/rvc/decode.h"
                                );
  decode_op_r(s, (&s->dest), (((s->isa.instr.val) >> (7)) & ((1 << ((11) - (7) + 1)) - 1)), 
# 243 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                        0
# 243 "src/isa/riscv64/instr/rvc/decode.h"
                                                             );
}

static inline void decode_C_ADD (Decode *s, int width) {
  decode_C_rs1_rs2_rd(s, 
# 247 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                        0
# 247 "src/isa/riscv64/instr/rvc/decode.h"
                             , 
# 247 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                               0
# 247 "src/isa/riscv64/instr/rvc/decode.h"
                                    , 
# 247 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                      0
# 247 "src/isa/riscv64/instr/rvc/decode.h"
                                           );
}

static inline void decode_C_JALR (Decode *s, int width) {
  decode_op_r(s, (&s->src1), (((s->isa.instr.val) >> (7)) & ((1 << ((11) - (7) + 1)) - 1)), 
# 251 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                                                        1
# 251 "src/isa/riscv64/instr/rvc/decode.h"
                                                            );
  decode_op_i(s, (&s->src2), 0, 
# 252 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                            1
# 252 "src/isa/riscv64/instr/rvc/decode.h"
                                );
  decode_op_r(s, (&s->dest), 1, 
# 253 "src/isa/riscv64/instr/rvc/decode.h" 3 4
                            0
# 253 "src/isa/riscv64/instr/rvc/decode.h"
                                 );
}


static inline int table_c_addi_dispatch (Decode *s) {
  if ((&s->src2)->imm == 1) return table_p_inc(s);
  if ((&s->src2)->imm == -1ul) return table_p_dec(s);
  return table_c_addi(s);
}

static inline int table_c_addiw_dispatch (Decode *s) {
  return table_c_addiw(s);
}

static inline int table_c_ldst (Decode *s) {
  int mmu_mode = get_data_mmu_state();
  if (mmu_mode == MMU_DIRECT) {
    do { uint32_t key, mask, shift; pattern_decode("010 ??? ??? ?? ??? ??", (sizeof("010 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_lw(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("011 ??? ??? ?? ??? ??", (sizeof("011 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_ld(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("110 ??? ??? ?? ??? ??", (sizeof("110 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sw(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("111 ??? ??? ?? ??? ??", (sizeof("111 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sd(s); }; } } while (0);
  } else if (mmu_mode == MMU_TRANSLATE) {
    do { uint32_t key, mask, shift; pattern_decode("010 ??? ??? ?? ??? ??", (sizeof("010 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_lw_mmu(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("011 ??? ??? ?? ??? ??", (sizeof("011 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_ld_mmu(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("110 ??? ??? ?? ??? ??", (sizeof("110 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sw_mmu(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("111 ??? ??? ?? ??? ??", (sizeof("111 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_sd_mmu(s); }; } } while (0);
  } else 
# 279 "src/isa/riscv64/instr/rvc/decode.h" 3 4
        ((void) sizeof ((
# 279 "src/isa/riscv64/instr/rvc/decode.h"
        0
# 279 "src/isa/riscv64/instr/rvc/decode.h" 3 4
        ) ? 1 : 0), __extension__ ({ if (
# 279 "src/isa/riscv64/instr/rvc/decode.h"
        0
# 279 "src/isa/riscv64/instr/rvc/decode.h" 3 4
        ) ; else __assert_fail (
# 279 "src/isa/riscv64/instr/rvc/decode.h"
        "0"
# 279 "src/isa/riscv64/instr/rvc/decode.h" 3 4
        , "src/isa/riscv64/instr/rvc/decode.h", 279, __extension__ __PRETTY_FUNCTION__); }))
# 279 "src/isa/riscv64/instr/rvc/decode.h"
                 ;
  return EXEC_ID_inv;
}

static inline int table_c_fldst (Decode *s) {
  int mmu_mode = get_data_mmu_state();
  if (mmu_mode == MMU_DIRECT) {
    do { uint32_t key, mask, shift; pattern_decode("001 ??? ??? ?? ??? ??", (sizeof("001 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fld(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("101 ??? ??? ?? ??? ??", (sizeof("101 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fsd(s); }; } } while (0);
  } else if (mmu_mode == MMU_TRANSLATE) {
    do { uint32_t key, mask, shift; pattern_decode("001 ??? ??? ?? ??? ??", (sizeof("001 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fld_mmu(s); }; } } while (0);
    do { uint32_t key, mask, shift; pattern_decode("101 ??? ??? ?? ??? ??", (sizeof("101 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fsd_mmu(s); }; } } while (0);
  } else 
# 291 "src/isa/riscv64/instr/rvc/decode.h" 3 4
        ((void) sizeof ((
# 291 "src/isa/riscv64/instr/rvc/decode.h"
        0
# 291 "src/isa/riscv64/instr/rvc/decode.h" 3 4
        ) ? 1 : 0), __extension__ ({ if (
# 291 "src/isa/riscv64/instr/rvc/decode.h"
        0
# 291 "src/isa/riscv64/instr/rvc/decode.h" 3 4
        ) ; else __assert_fail (
# 291 "src/isa/riscv64/instr/rvc/decode.h"
        "0"
# 291 "src/isa/riscv64/instr/rvc/decode.h" 3 4
        , "src/isa/riscv64/instr/rvc/decode.h", 291, __extension__ __PRETTY_FUNCTION__); }))
# 291 "src/isa/riscv64/instr/rvc/decode.h"
                 ;
  return EXEC_ID_inv;
}

static inline int table_c_li_dispatch (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("??? 0 ????? 00000 ??", (sizeof("??? 0 ????? 00000 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_p_li_0(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? 0 ????? 00001 ??", (sizeof("??? 0 ????? 00001 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_p_li_1(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? ? ????? ????? ??", (sizeof("??? ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_li(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_rvc_Q1_lui_addi16sp (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("??? ? 00010 ????? ??", (sizeof("??? ? 00010 ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_ADDI16SP(s, 0); return table_c_addi(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? ? ????? ????? ??", (sizeof("??? ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_CI_simm_lui(s, 0); return table_lui(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_rvc_Q1_compute_more64 (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("??? ? ????? 00??? ??", (sizeof("??? ? ????? 00??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_sub(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? ? ????? 01??? ??", (sizeof("??? ? ????? 01??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_xor(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? ? ????? 10??? ??", (sizeof("??? ? ????? 10??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_or(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? ? ????? 11??? ??", (sizeof("??? ? ????? 11??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_and(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_rvc_Q1_compute_more32 (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("??? ? ????? 00??? ??", (sizeof("??? ? ????? 00??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_subw(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? ? ????? 01??? ??", (sizeof("??? ? ????? 01??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_c_addw(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_rvc_Q1_compute_more (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("??? 0 ????? ????? ??", (sizeof("??? 0 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_rvc_Q1_compute_more64(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? 1 ????? ????? ??", (sizeof("??? 1 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_rvc_Q1_compute_more32(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_rvc_Q1_compute (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("??? ? 00??? ????? ??", (sizeof("??? ? 00??? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_CB_shift(s, 0); return table_c_srli(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? ? 01??? ????? ??", (sizeof("??? ? 01??? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_CB_shift(s, 0); return table_c_srai(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? ? 10??? ????? ??", (sizeof("??? ? 10??? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_CB_andi(s, 0); return table_c_andi(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? ? 11??? ????? ??", (sizeof("??? ? 11??? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_CS(s, 0); return table_rvc_Q1_compute_more(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_rvc_Q2_jr_mov (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("??? ? 00001 00000 ??", (sizeof("??? ? 00001 00000 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_JR(s, 0); return table_p_ret(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? ? ????? 00000 ??", (sizeof("??? ? ????? 00000 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_JR(s, 0); return table_c_jr(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? ? ????? ????? ??", (sizeof("??? ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_MOV(s, 0); return table_c_mv(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_rvc_Q2_jalr_add (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("??? ? 00000 00000 ??", (sizeof("??? ? 00000 00000 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_inv(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? ? 00001 00000 ??", (sizeof("??? ? 00001 00000 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_JALR(s, 0); return table_jalr(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? ? ????? 00000 ??", (sizeof("??? ? ????? 00000 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_JALR(s, 0); return table_c_jalr(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? ? ????? ????? ??", (sizeof("??? ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_ADD(s, 0); return table_c_add(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_rvc_Q2_misc (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("??? 0 ????? ????? ??", (sizeof("??? 0 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_rvc_Q2_jr_mov(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??? 1 ????? ????? ??", (sizeof("??? 1 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_rvc_Q2_jalr_add(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_rvc_Q0 (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("000 ???????? ??? ??", (sizeof("000 ???????? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_ADDI4SPN(s, 0); return table_addi(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("001 ??? ??? ?? ??? ??", (sizeof("001 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_FLD(s, 0); return table_c_fldst(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("010 ??? ??? ?? ??? ??", (sizeof("010 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_LW(s, 0); return table_c_ldst(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("011 ??? ??? ?? ??? ??", (sizeof("011 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_LD(s, 0); return table_c_ldst(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("101 ??? ??? ?? ??? ??", (sizeof("101 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_FSD(s, 0); return table_c_fldst(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("110 ??? ??? ?? ??? ??", (sizeof("110 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_SW(s, 0); return table_c_ldst(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("111 ??? ??? ?? ??? ??", (sizeof("111 ??? ??? ?? ??? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_SD(s, 0); return table_c_ldst(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_rvc_Q1 (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("000 ? ????? ????? ??", (sizeof("000 ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_CI_simm(s, 0); return table_c_addi_dispatch(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("001 ? ????? ????? ??", (sizeof("001 ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_CI_simm(s, 0); return table_c_addiw_dispatch(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("010 ? ????? ????? ??", (sizeof("010 ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_LI(s, 0); return table_c_li_dispatch(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("011 ? ????? ????? ??", (sizeof("011 ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_rvc_Q1_lui_addi16sp(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("100 ? ????? ????? ??", (sizeof("100 ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_rvc_Q1_compute(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("101 ??????????? ??", (sizeof("101 ??????????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_CJ(s, 0); return table_c_j(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("110 ??? ??? ????? ??", (sizeof("110 ??? ??? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_CB(s, 0); return table_c_beqz(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("111 ??? ??? ????? ??", (sizeof("111 ??? ??? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_CB(s, 0); return table_c_bnez(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_rvc_Q2 (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("000 ? ????? ????? ??", (sizeof("000 ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_CI_uimm(s, 0); return table_c_slli(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("001 ? ????? ????? ??", (sizeof("001 ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_FLDSP(s, 0); return table_c_fldst(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("010 ? ????? ????? ??", (sizeof("010 ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_LWSP(s, 0); return table_c_ldst(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("011 ? ????? ????? ??", (sizeof("011 ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_LDSP(s, 0); return table_c_ldst(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("100 ? ????? ????? ??", (sizeof("100 ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_rvc_Q2_misc(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("101 ? ????? ????? ??", (sizeof("101 ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_FSDSP(s, 0); return table_c_fldst(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("110 ? ????? ????? ??", (sizeof("110 ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_SWSP(s, 0); return table_c_ldst(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("111 ? ????? ????? ??", (sizeof("111 ? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_C_SDSP(s, 0); return table_c_ldst(s); }; } } while (0);
  return EXEC_ID_inv;
}

static inline int table_rvc (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("?????????????? 00", (sizeof("?????????????? 00") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_rvc_Q0(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("?????????????? 01", (sizeof("?????????????? 01") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_rvc_Q1(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("?????????????? 10", (sizeof("?????????????? 10") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_rvc_Q2(s); }; } } while (0);
  return table_inv(s);
};
# 23 "src/isa/riscv64/instr/decode.c" 2
# 1 "src/isa/riscv64/instr/rvd/decode.h" 1
static inline int table_op_fp_d (Decode *s) {

  do { uint32_t key, mask, shift; pattern_decode("00000 ?? ????? ????? ??? ????? ????? ??", (sizeof("00000 ?? ????? ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_faddd(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("00001 ?? ????? ????? ??? ????? ????? ??", (sizeof("00001 ?? ????? ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fsubd(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("00010 ?? ????? ????? ??? ????? ????? ??", (sizeof("00010 ?? ????? ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fmuld(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("00011 ?? ????? ????? ??? ????? ????? ??", (sizeof("00011 ?? ????? ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fdivd(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("01011 ?? 00000 ????? ??? ????? ????? ??", (sizeof("01011 ?? 00000 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fsqrtd(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("00100 ?? ????? ????? 000 ????? ????? ??", (sizeof("00100 ?? ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fsgnjd(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("00100 ?? ????? ????? 001 ????? ????? ??", (sizeof("00100 ?? ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fsgnjnd(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("00100 ?? ????? ????? 010 ????? ????? ??", (sizeof("00100 ?? ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fsgnjxd(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("00101 ?? ????? ????? 000 ????? ????? ??", (sizeof("00101 ?? ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fmind(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("00101 ?? ????? ????? 001 ????? ????? ??", (sizeof("00101 ?? ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fmaxd(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("01000 00 00001 ????? ??? ????? ????? ??", (sizeof("01000 00 00001 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fcvt_s_d(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("01000 01 00000 ????? ??? ????? ????? ??", (sizeof("01000 01 00000 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr(s, 0); return table_fcvt_d_s(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("10100 ?? ????? ????? 010 ????? ????? ??", (sizeof("10100 ?? ????? ????? 010 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_feqd(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("10100 ?? ????? ????? 001 ????? ????? ??", (sizeof("10100 ?? ????? ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_fltd(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("10100 ?? ????? ????? 000 ????? ????? ??", (sizeof("10100 ?? ????? ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_fled(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11100 ?? 00000 ????? 001 ????? ????? ??", (sizeof("11100 ?? 00000 ????? 001 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_fclassd(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11000 ?? 00000 ????? ??? ????? ????? ??", (sizeof("11000 ?? 00000 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_fcvt_w_d(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11000 ?? 00001 ????? ??? ????? ????? ??", (sizeof("11000 ?? 00001 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_fcvt_wu_d(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11010 ?? 00000 ????? ??? ????? ????? ??", (sizeof("11010 ?? 00000 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_r2fr(s, 0); return table_fcvt_d_w(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11010 ?? 00001 ????? ??? ????? ????? ??", (sizeof("11010 ?? 00001 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_r2fr(s, 0); return table_fcvt_d_wu(s); }; } } while (0);


  do { uint32_t key, mask, shift; pattern_decode("11000 ?? 00010 ????? ??? ????? ????? ??", (sizeof("11000 ?? 00010 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_fcvt_l_d(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11000 ?? 00011 ????? ??? ????? ????? ??", (sizeof("11000 ?? 00011 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_fcvt_lu_d(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11100 ?? 00000 ????? 000 ????? ????? ??", (sizeof("11100 ?? 00000 ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fr2r(s, 0); return table_fmv_x_d(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11010 ?? 00010 ????? ??? ????? ????? ??", (sizeof("11010 ?? 00010 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_r2fr(s, 0); return table_fcvt_d_l(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11010 ?? 00011 ????? ??? ????? ????? ??", (sizeof("11010 ?? 00011 ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_r2fr(s, 0); return table_fcvt_d_lu(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("11110 ?? 00000 ????? 000 ????? ????? ??", (sizeof("11110 ?? 00000 ????? 000 ????? ????? ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_r2fr(s, 0); return table_fmv_d_x(s); }; } } while (0);

  return EXEC_ID_inv;
}

static inline int table_fmadd_d_dispatch (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("????? ?? ????? ????? ??? ????? 10000 11", (sizeof("????? ?? ????? ????? ??? ????? 10000 11") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fmaddd(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("????? ?? ????? ????? ??? ????? 10001 11", (sizeof("????? ?? ????? ????? ??? ????? 10001 11") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fmsubd(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("????? ?? ????? ????? ??? ????? 10010 11", (sizeof("????? ?? ????? ????? ??? ????? 10010 11") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fnmsubd(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("????? ?? ????? ????? ??? ????? 10011 11", (sizeof("????? ?? ????? ????? ??? ????? 10011 11") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_fnmaddd(s); }; } } while (0);
  return EXEC_ID_inv;
}
# 24 "src/isa/riscv64/instr/decode.c" 2
# 1 "src/isa/riscv64/instr/priv/decode.h" 1
static inline void decode_csr (Decode *s, int width) {
  decode_op_r(s, (&s->src1), s->isa.instr.i.rs1, 
# 2 "src/isa/riscv64/instr/priv/decode.h" 3 4
                                             1
# 2 "src/isa/riscv64/instr/priv/decode.h"
                                                 );
  decode_op_i(s, (&s->src2), s->isa.instr.csr.csr, 
# 3 "src/isa/riscv64/instr/priv/decode.h" 3 4
                                               1
# 3 "src/isa/riscv64/instr/priv/decode.h"
                                                   );
  decode_op_r(s, (&s->dest), s->isa.instr.i.rd, 
# 4 "src/isa/riscv64/instr/priv/decode.h" 3 4
                                            0
# 4 "src/isa/riscv64/instr/priv/decode.h"
                                                 );
}
# 25 "src/isa/riscv64/instr/decode.c" 2




static inline int table_main (Decode *s) {
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 00000 ??", (sizeof("??????? ????? ????? ??? ????? 00000 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_I(s, 0); return table_load(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 00001 ??", (sizeof("??????? ????? ????? ??? ????? 00001 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fload(s, 0); return table_fload(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 00011 ??", (sizeof("??????? ????? ????? ??? ????? 00011 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_I(s, 0); return table_mem_fence(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 00100 ??", (sizeof("??????? ????? ????? ??? ????? 00100 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_I(s, 0); return table_op_imm(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 00101 ??", (sizeof("??????? ????? ????? ??? ????? 00101 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_auipc(s, 0); return table_auipc(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 00110 ??", (sizeof("??????? ????? ????? ??? ????? 00110 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_I(s, 0); return table_op_imm32(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 01000 ??", (sizeof("??????? ????? ????? ??? ????? 01000 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_S(s, 0); return table_store(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 01001 ??", (sizeof("??????? ????? ????? ??? ????? 01001 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_fstore(s, 0); return table_fstore(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 01011 ??", (sizeof("??????? ????? ????? ??? ????? 01011 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_R(s, 0); return table_atomic(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000001 ????? ????? ??? ????? 01100 ??", (sizeof("0000001 ????? ????? ??? ????? 01100 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_R(s, 0); return table_rvm(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 01100 ??", (sizeof("??????? ????? ????? ??? ????? 01100 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_R(s, 0); return table_op(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 01101 ??", (sizeof("??????? ????? ????? ??? ????? 01101 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_U(s, 0); return table_lui(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("0000001 ????? ????? ??? ????? 01110 ??", (sizeof("0000001 ????? ????? ??? ????? 01110 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_R(s, 0); return table_rvm32(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 01110 ??", (sizeof("??????? ????? ????? ??? ????? 01110 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_R(s, 0); return table_op32(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 10000 ??", (sizeof("??????? ????? ????? ??? ????? 10000 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_R4(s, 0); return table_fmadd_dispatch(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 10001 ??", (sizeof("??????? ????? ????? ??? ????? 10001 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_R4(s, 0); return table_fmadd_dispatch(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 10010 ??", (sizeof("??????? ????? ????? ??? ????? 10010 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_R4(s, 0); return table_fmadd_dispatch(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 10011 ??", (sizeof("??????? ????? ????? ??? ????? 10011 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_R4(s, 0); return table_fmadd_dispatch(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 10100 ??", (sizeof("??????? ????? ????? ??? ????? 10100 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_op_fp(s); }; } } while (0);



  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 11000 ??", (sizeof("??????? ????? ????? ??? ????? 11000 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_B(s, 0); return table_branch(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 11001 ??", (sizeof("??????? ????? ????? ??? ????? 11001 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_I(s, 0); return table_jalr_dispatch(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 11010 ??", (sizeof("??????? ????? ????? ??? ????? 11010 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_empty(s, 0); return table_nemu_trap(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 11011 ??", (sizeof("??????? ????? ????? ??? ????? 11011 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_J(s, 0); return table_jal_dispatch(s); }; } } while (0);
  do { uint32_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 11100 ??", (sizeof("??????? ????? ????? ??? ????? 11100 ??") - 1), &key, &mask, &shift); if (((get_instr(s) >> shift) & mask) == key) { { decode_csr(s, 0); return table_system(s); }; } } while (0);
  return table_inv(s);
};

int isa_fetch_decode(Decode *s) {
  int idx = EXEC_ID_inv;

  s->isa.instr.val = instr_fetch(&s->snpc, 2);
  if (s->isa.instr.r.opcode1_0 != 0x3) {

    idx = table_rvc(s);
  } else {




    uint32_t hi = instr_fetch(&s->snpc, 2);
    s->isa.instr.val |= (hi << 16);
    idx = table_main(s);
  }

  s->type = INSTR_TYPE_N;
  switch (idx) {
    case EXEC_ID_c_j: case EXEC_ID_p_jal: case EXEC_ID_jal:
      s->jnpc = (&s->src1)->imm; s->type = INSTR_TYPE_J; break;

    case EXEC_ID_beq: case EXEC_ID_bne: case EXEC_ID_blt: case EXEC_ID_bge:
    case EXEC_ID_bltu: case EXEC_ID_bgeu:
    case EXEC_ID_c_beqz: case EXEC_ID_c_bnez:
    case EXEC_ID_p_bltz: case EXEC_ID_p_bgez: case EXEC_ID_p_blez: case EXEC_ID_p_bgtz:
      s->jnpc = (&s->dest)->imm; s->type = INSTR_TYPE_B; break;

    case EXEC_ID_p_ret: case EXEC_ID_c_jr: case EXEC_ID_c_jalr: case EXEC_ID_jalr:
   
      s->type = INSTR_TYPE_I; break;


    case EXEC_ID_system:
      if (s->isa.instr.i.funct3 == 0) {
        switch (s->isa.instr.csr.csr) {
          case 0:
          case 0x102:
          case 0x302:
            s->type = INSTR_TYPE_I;
        }
      }
      break;

  }

  return idx;
}
