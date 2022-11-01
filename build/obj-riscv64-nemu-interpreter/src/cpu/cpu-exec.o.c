# 1 "src/cpu/cpu-exec.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "src/cpu/cpu-exec.c"
# 1 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h" 1



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
# 5 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h" 2


# 6 "/home/user/ecpt/work/simpoint_nemu/include/profiling/profiling_control.h"
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
# 2 "src/cpu/cpu-exec.c" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/include/cpu/cpu.h" 1





enum {
  NEMU_EXEC_RUNNING = 0,
  NEMU_EXEC_END,
  NEMU_EXEC_AGAIN,
  NEMU_EXEC_EXCEPTION
};

void cpu_exec(uint64_t n);
__attribute__((noreturn)) void longjmp_exec(int cause);
__attribute__((noreturn)) void longjmp_exception(int ex_cause);

enum {
  SYS_STATE_UPDATE = 1,
  SYS_STATE_FLUSH_TCACHE = 2,
};
void set_sys_state_flag(int flag);
void mmu_tlb_flush(vaddr_t vaddr);

struct Decode;
void save_globals(struct Decode *s);
void fetch_decode(struct Decode *s, vaddr_t pc);
# 3 "src/cpu/cpu-exec.c" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/include/cpu/exec.h" 1



# 1 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 1



# 1 "/home/user/ecpt/work/simpoint_nemu/include/isa.h" 1




# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-def.h" 1
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
# 5 "/home/user/ecpt/work/simpoint_nemu/include/cpu/exec.h" 2
# 4 "src/cpu/cpu-exec.c" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/include/cpu/difftest.h" 1




# 1 "/home/user/ecpt/work/simpoint_nemu/lib-include/difftest.h" 1





enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
# 29 "/home/user/ecpt/work/simpoint_nemu/lib-include/difftest.h"
struct SyncState {
  uint64_t lrscValid;
  uint64_t lrscAddr;
};
# 6 "/home/user/ecpt/work/simpoint_nemu/include/cpu/difftest.h" 2
# 15 "/home/user/ecpt/work/simpoint_nemu/include/cpu/difftest.h"
static inline void difftest_skip_ref() {}
static inline void difftest_skip_dut(int nr_ref, int nr_dut) {}
static inline void difftest_set_patch(void (*fn)(void *arg), void *arg) {}
static inline void difftest_step(vaddr_t pc, vaddr_t npc) {}
static inline void difftest_detach() {}
static inline void difftest_attach() {}


extern void (*ref_difftest_memcpy)(paddr_t dest, void *src, size_t n, 
# 23 "/home/user/ecpt/work/simpoint_nemu/include/cpu/difftest.h" 3 4
                                                                     _Bool 
# 23 "/home/user/ecpt/work/simpoint_nemu/include/cpu/difftest.h"
                                                                          direction);
extern void (*ref_difftest_regcpy)(void *c, 
# 24 "/home/user/ecpt/work/simpoint_nemu/include/cpu/difftest.h" 3 4
                                           _Bool 
# 24 "/home/user/ecpt/work/simpoint_nemu/include/cpu/difftest.h"
                                                direction);
extern void (*ref_difftest_exec)(uint64_t n);
extern void (*ref_difftest_raise_intr)(uint64_t NO);

static inline 
# 28 "/home/user/ecpt/work/simpoint_nemu/include/cpu/difftest.h" 3 4
             _Bool 
# 28 "/home/user/ecpt/work/simpoint_nemu/include/cpu/difftest.h"
                  difftest_check_reg(const char *name, vaddr_t pc, rtlreg_t ref, rtlreg_t dut) {
  if (ref != dut) {
    do { printf("\33[1;34m[%s:%d,%s] " "%s is different after executing instruction at pc = " "0x%016lx" ", right = " "0x%016lx" ", wrong = " "0x%016lx" "\33[0m\n", "/home/user/ecpt/work/simpoint_nemu/include/cpu/difftest.h", 31, __func__, name, pc, ref, dut); ; } while (0)
                                                                        ;
    return 
# 32 "/home/user/ecpt/work/simpoint_nemu/include/cpu/difftest.h" 3 4
          0
# 32 "/home/user/ecpt/work/simpoint_nemu/include/cpu/difftest.h"
               ;
  }
  return 
# 34 "/home/user/ecpt/work/simpoint_nemu/include/cpu/difftest.h" 3 4
        1
# 34 "/home/user/ecpt/work/simpoint_nemu/include/cpu/difftest.h"
            ;
}
# 5 "src/cpu/cpu-exec.c" 2

# 1 "/home/user/ecpt/work/simpoint_nemu/include/memory/host-tlb.h" 1





struct Decode;
word_t hosttlb_read(struct Decode *s, vaddr_t vaddr, int len, int type);
void hosttlb_write(struct Decode *s, vaddr_t vaddr, int len, word_t data);
void hosttlb_init();
void hosttlb_flush(vaddr_t vaddr);
# 7 "src/cpu/cpu-exec.c" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-all-instr.h" 1



# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/rtl.h" 1



# 1 "/home/user/ecpt/work/simpoint_nemu/include/rtl/rtl.h" 1





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
# 5 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/rtl.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h" 1





static inline int check_reg_index(int index) {
  
# 7 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h" 3 4
 ((void) sizeof ((
# 7 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h"
 index >= 0 && index < 32
# 7 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 7 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h"
 index >= 0 && index < 32
# 7 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h" 3 4
 ) ; else __assert_fail (
# 7 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h"
 "index >= 0 && index < 32"
# 7 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h", 7, __extension__ __PRETTY_FUNCTION__); }))
# 7 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h"
                                                         ;
  return index;
}



static inline const char* reg_name(int index, int width) {
  extern const char* regsl[];
  
# 15 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h" 3 4
 ((void) sizeof ((
# 15 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h"
 index >= 0 && index < 32
# 15 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 15 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h"
 index >= 0 && index < 32
# 15 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h" 3 4
 ) ; else __assert_fail (
# 15 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h"
 "index >= 0 && index < 32"
# 15 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h", 15, __extension__ __PRETTY_FUNCTION__); }))
# 15 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h"
                                                         ;
  return regsl[index];
}




static inline const char* fpreg_name(int index, int width){
  extern const char* fpregsl[];
  
# 24 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h" 3 4
 ((void) sizeof ((
# 24 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h"
 index >= 0 && index < 32
# 24 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 24 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h"
 index >= 0 && index < 32
# 24 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h" 3 4
 ) ; else __assert_fail (
# 24 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h"
 "index >= 0 && index < 32"
# 24 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h" 3 4
 , "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h", 24, __extension__ __PRETTY_FUNCTION__); }))
# 24 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/reg.h"
                                                         ;
  return fpregsl[index];
}
# 6 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/rtl.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/csr.h" 1
# 73 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/csr.h"
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
# 203 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/csr.h"
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
# 316 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/csr.h"
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
# 418 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/csr.h"
extern mstatus_t* const mstatus; extern misa_t* const misa; extern medeleg_t* const medeleg; extern mideleg_t* const mideleg; extern mie_t* const mie; extern mtvec_t* const mtvec; extern mcounteren_t* const mcounteren; extern mscratch_t* const mscratch; extern mepc_t* const mepc; extern mcause_t* const mcause; extern mtval_t* const mtval; extern mip_t* const mip; extern pmpcfg0_t* const pmpcfg0; extern pmpcfg1_t* const pmpcfg1; extern pmpcfg2_t* const pmpcfg2; extern pmpcfg3_t* const pmpcfg3; extern pmpaddr0_t* const pmpaddr0; extern pmpaddr1_t* const pmpaddr1; extern pmpaddr2_t* const pmpaddr2; extern pmpaddr3_t* const pmpaddr3; extern pmpaddr4_t* const pmpaddr4; extern pmpaddr5_t* const pmpaddr5; extern pmpaddr6_t* const pmpaddr6; extern pmpaddr7_t* const pmpaddr7; extern pmpaddr8_t* const pmpaddr8; extern pmpaddr9_t* const pmpaddr9; extern pmpaddr10_t* const pmpaddr10; extern pmpaddr11_t* const pmpaddr11; extern pmpaddr12_t* const pmpaddr12; extern pmpaddr13_t* const pmpaddr13; extern pmpaddr14_t* const pmpaddr14; extern pmpaddr15_t* const pmpaddr15; extern mhartid_t* const mhartid; extern sstatus_t* const sstatus; extern sie_t* const sie; extern stvec_t* const stvec; extern scounteren_t* const scounteren; extern sscratch_t* const sscratch; extern sepc_t* const sepc; extern scause_t* const scause; extern stval_t* const stval; extern sip_t* const sip; extern satp_t* const satp; extern srnctl_t* const srnctl; extern fflags_t* const fflags; extern frm_t* const frm; extern fcsr_t* const fcsr; extern mtime_t* const mtime; extern cycle_t* const cycle; extern minstret_t* const minstret;




word_t csrid_read(uint32_t csrid);


uint8_t pmpcfg_from_index(int idx);
word_t pmpaddr_from_index(int idx);
word_t pmpaddr_from_csrid(int id);
word_t pmp_tor_mask();
# 7 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/rtl.h" 2





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
# 27 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/rtl.h" 3 4
      ((void) sizeof ((
# 27 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/rtl.h"
      0
# 27 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/rtl.h" 3 4
      ) ? 1 : 0), __extension__ ({ if (
# 27 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/rtl.h"
      0
# 27 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/rtl.h" 3 4
      ) ; else __assert_fail (
# 27 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/rtl.h"
      "0"
# 27 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/rtl.h" 3 4
      , "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/rtl.h", 27, __extension__ __PRETTY_FUNCTION__); }))
# 27 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/rtl.h"
               ;
  void fp_set_dirty();
  fp_set_dirty();
}
# 5 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-all-instr.h" 2
# 171 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-all-instr.h"
enum { EXEC_ID_inv = 0 }; enum { EXEC_ID_rt_inv = 1 }; enum { EXEC_ID_nemu_trap = 2 }; enum { EXEC_ID_fence_i = 3 }; enum { EXEC_ID_fence = 4 }; enum { EXEC_ID_p_ret = 5 }; enum { EXEC_ID_p_li_0 = 6 }; enum { EXEC_ID_p_li_1 = 7 }; enum { EXEC_ID_lui = 8 }; enum { EXEC_ID_auipc = 9 }; enum { EXEC_ID_jal = 10 }; enum { EXEC_ID_ld = 11 }; enum { EXEC_ID_lw = 12 }; enum { EXEC_ID_lh = 13 }; enum { EXEC_ID_lb = 14 }; enum { EXEC_ID_lwu = 15 }; enum { EXEC_ID_lhu = 16 }; enum { EXEC_ID_lbu = 17 }; enum { EXEC_ID_sd = 18 }; enum { EXEC_ID_sw = 19 }; enum { EXEC_ID_sh = 20 }; enum { EXEC_ID_sb = 21 }; enum { EXEC_ID_c_j = 22 }; enum { EXEC_ID_p_jal = 23 }; enum { EXEC_ID_c_jr = 24 }; enum { EXEC_ID_c_jalr = 25 }; enum { EXEC_ID_c_beqz = 26 }; enum { EXEC_ID_c_bnez = 27 }; enum { EXEC_ID_c_mv = 28 }; enum { EXEC_ID_p_sext_w = 29 }; enum { EXEC_ID_clz = 30 }; enum { EXEC_ID_clzw = 31 }; enum { EXEC_ID_ctz = 32 }; enum { EXEC_ID_ctzw = 33 }; enum { EXEC_ID_cpop = 34 }; enum { EXEC_ID_cpopw = 35 }; enum { EXEC_ID_orc_b = 36 }; enum { EXEC_ID_rev8 = 37 }; enum { EXEC_ID_revb = 38 }; enum { EXEC_ID_sext_b = 39 }; enum { EXEC_ID_sext_h = 40 }; enum { EXEC_ID_zext_h = 41 }; enum { EXEC_ID_aes64im = 42 }; enum { EXEC_ID_sm3p0 = 43 }; enum { EXEC_ID_sm3p1 = 44 }; enum { EXEC_ID_sha256sig0 = 45 }; enum { EXEC_ID_sha256sig1 = 46 }; enum { EXEC_ID_sha256sum0 = 47 }; enum { EXEC_ID_sha256sum1 = 48 }; enum { EXEC_ID_sha512sig0 = 49 }; enum { EXEC_ID_sha512sig1 = 50 }; enum { EXEC_ID_sha512sum0 = 51 }; enum { EXEC_ID_sha512sum1 = 52 }; enum { EXEC_ID_ld_mmu = 53 }; enum { EXEC_ID_lw_mmu = 54 }; enum { EXEC_ID_lh_mmu = 55 }; enum { EXEC_ID_lb_mmu = 56 }; enum { EXEC_ID_lwu_mmu = 57 }; enum { EXEC_ID_lhu_mmu = 58 }; enum { EXEC_ID_lbu_mmu = 59 }; enum { EXEC_ID_sd_mmu = 60 }; enum { EXEC_ID_sw_mmu = 61 }; enum { EXEC_ID_sh_mmu = 62 }; enum { EXEC_ID_sb_mmu = 63 }; enum { EXEC_ID_flw = 64 }; enum { EXEC_ID_fsw = 65 }; enum { EXEC_ID_flw_mmu = 66 }; enum { EXEC_ID_fsw_mmu = 67 }; enum { EXEC_ID_fsqrts = 68 }; enum { EXEC_ID_fles = 69 }; enum { EXEC_ID_flts = 70 }; enum { EXEC_ID_feqs = 71 }; enum { EXEC_ID_fcvt_s_w = 72 }; enum { EXEC_ID_fcvt_s_wu = 73 }; enum { EXEC_ID_fcvt_s_l = 74 }; enum { EXEC_ID_fcvt_s_lu = 75 }; enum { EXEC_ID_fcvt_w_s = 76 }; enum { EXEC_ID_fcvt_wu_s = 77 }; enum { EXEC_ID_fcvt_l_s = 78 }; enum { EXEC_ID_fcvt_lu_s = 79 }; enum { EXEC_ID_fsgnjs = 80 }; enum { EXEC_ID_fsgnjns = 81 }; enum { EXEC_ID_fsgnjxs = 82 }; enum { EXEC_ID_fmv_x_w = 83 }; enum { EXEC_ID_fmv_w_x = 84 }; enum { EXEC_ID_fclasss = 85 }; enum { EXEC_ID_fclassd = 86 }; enum { EXEC_ID_fld = 87 }; enum { EXEC_ID_fsd = 88 }; enum { EXEC_ID_fld_mmu = 89 }; enum { EXEC_ID_fsd_mmu = 90 }; enum { EXEC_ID_fsqrtd = 91 }; enum { EXEC_ID_fled = 92 }; enum { EXEC_ID_fltd = 93 }; enum { EXEC_ID_feqd = 94 }; enum { EXEC_ID_fcvt_d_w = 95 }; enum { EXEC_ID_fcvt_d_wu = 96 }; enum { EXEC_ID_fcvt_d_l = 97 }; enum { EXEC_ID_fcvt_d_lu = 98 }; enum { EXEC_ID_fcvt_w_d = 99 }; enum { EXEC_ID_fcvt_wu_d = 100 }; enum { EXEC_ID_fcvt_l_d = 101 }; enum { EXEC_ID_fcvt_lu_d = 102 }; enum { EXEC_ID_fsgnjd = 103 }; enum { EXEC_ID_fsgnjnd = 104 }; enum { EXEC_ID_fsgnjxd = 105 }; enum { EXEC_ID_fmv_x_d = 106 }; enum { EXEC_ID_fmv_d_x = 107 }; enum { EXEC_ID_fcvt_d_s = 108 }; enum { EXEC_ID_fcvt_s_d = 109 }; enum { EXEC_ID_add = 110 }; enum { EXEC_ID_sll = 111 }; enum { EXEC_ID_srl = 112 }; enum { EXEC_ID_slt = 113 }; enum { EXEC_ID_sltu = 114 }; enum { EXEC_ID_xor = 115 }; enum { EXEC_ID_or = 116 }; enum { EXEC_ID_sub = 117 }; enum { EXEC_ID_sra = 118 }; enum { EXEC_ID_and = 119 }; enum { EXEC_ID_addi = 120 }; enum { EXEC_ID_slli = 121 }; enum { EXEC_ID_srli = 122 }; enum { EXEC_ID_slti = 123 }; enum { EXEC_ID_sltui = 124 }; enum { EXEC_ID_xori = 125 }; enum { EXEC_ID_ori = 126 }; enum { EXEC_ID_srai = 127 }; enum { EXEC_ID_andi = 128 }; enum { EXEC_ID_addw = 129 }; enum { EXEC_ID_sllw = 130 }; enum { EXEC_ID_srlw = 131 }; enum { EXEC_ID_subw = 132 }; enum { EXEC_ID_sraw = 133 }; enum { EXEC_ID_addiw = 134 }; enum { EXEC_ID_slliw = 135 }; enum { EXEC_ID_srliw = 136 }; enum { EXEC_ID_sraiw = 137 }; enum { EXEC_ID_jalr = 138 }; enum { EXEC_ID_beq = 139 }; enum { EXEC_ID_bne = 140 }; enum { EXEC_ID_blt = 141 }; enum { EXEC_ID_bge = 142 }; enum { EXEC_ID_bltu = 143 }; enum { EXEC_ID_bgeu = 144 }; enum { EXEC_ID_mul = 145 }; enum { EXEC_ID_mulh = 146 }; enum { EXEC_ID_mulhu = 147 }; enum { EXEC_ID_mulhsu = 148 }; enum { EXEC_ID_div = 149 }; enum { EXEC_ID_divu = 150 }; enum { EXEC_ID_rem = 151 }; enum { EXEC_ID_remu = 152 }; enum { EXEC_ID_mulw = 153 }; enum { EXEC_ID_divw = 154 }; enum { EXEC_ID_divuw = 155 }; enum { EXEC_ID_remw = 156 }; enum { EXEC_ID_remuw = 157 }; enum { EXEC_ID_c_li = 158 }; enum { EXEC_ID_c_addi = 159 }; enum { EXEC_ID_c_slli = 160 }; enum { EXEC_ID_c_srli = 161 }; enum { EXEC_ID_c_srai = 162 }; enum { EXEC_ID_c_andi = 163 }; enum { EXEC_ID_c_addiw = 164 }; enum { EXEC_ID_c_add = 165 }; enum { EXEC_ID_c_and = 166 }; enum { EXEC_ID_c_or = 167 }; enum { EXEC_ID_c_xor = 168 }; enum { EXEC_ID_c_sub = 169 }; enum { EXEC_ID_c_addw = 170 }; enum { EXEC_ID_c_subw = 171 }; enum { EXEC_ID_p_blez = 172 }; enum { EXEC_ID_p_bgez = 173 }; enum { EXEC_ID_p_bltz = 174 }; enum { EXEC_ID_p_bgtz = 175 }; enum { EXEC_ID_p_inc = 176 }; enum { EXEC_ID_p_dec = 177 }; enum { EXEC_ID_atomic = 178 }; enum { EXEC_ID_system = 179 }; enum { EXEC_ID_fadds = 180 }; enum { EXEC_ID_fsubs = 181 }; enum { EXEC_ID_fmuls = 182 }; enum { EXEC_ID_fdivs = 183 }; enum { EXEC_ID_fmins = 184 }; enum { EXEC_ID_fmaxs = 185 }; enum { EXEC_ID_faddd = 186 }; enum { EXEC_ID_fsubd = 187 }; enum { EXEC_ID_fmuld = 188 }; enum { EXEC_ID_fdivd = 189 }; enum { EXEC_ID_fmind = 190 }; enum { EXEC_ID_fmaxd = 191 }; enum { EXEC_ID_fmadds = 192 }; enum { EXEC_ID_fmsubs = 193 }; enum { EXEC_ID_fnmsubs = 194 }; enum { EXEC_ID_fnmadds = 195 }; enum { EXEC_ID_fmaddd = 196 }; enum { EXEC_ID_fmsubd = 197 }; enum { EXEC_ID_fnmsubd = 198 }; enum { EXEC_ID_fnmaddd = 199 }; enum { EXEC_ID_andn = 200 }; enum { EXEC_ID_orn = 201 }; enum { EXEC_ID_xnor = 202 }; enum { EXEC_ID_min = 203 }; enum { EXEC_ID_minu = 204 }; enum { EXEC_ID_max = 205 }; enum { EXEC_ID_maxu = 206 }; enum { EXEC_ID_bclr = 207 }; enum { EXEC_ID_bset = 208 }; enum { EXEC_ID_binv = 209 }; enum { EXEC_ID_bext = 210 }; enum { EXEC_ID_bclri = 211 }; enum { EXEC_ID_bseti = 212 }; enum { EXEC_ID_binvi = 213 }; enum { EXEC_ID_bexti = 214 }; enum { EXEC_ID_clmul = 215 }; enum { EXEC_ID_clmulr = 216 }; enum { EXEC_ID_clmulh = 217 }; enum { EXEC_ID_rol = 218 }; enum { EXEC_ID_rolw = 219 }; enum { EXEC_ID_ror = 220 }; enum { EXEC_ID_rori = 221 }; enum { EXEC_ID_rorw = 222 }; enum { EXEC_ID_roriw = 223 }; enum { EXEC_ID_sh1add = 224 }; enum { EXEC_ID_sh2add = 225 }; enum { EXEC_ID_sh3add = 226 }; enum { EXEC_ID_sh1adduw = 227 }; enum { EXEC_ID_sh2adduw = 228 }; enum { EXEC_ID_sh3adduw = 229 }; enum { EXEC_ID_pack = 230 }; enum { EXEC_ID_packh = 231 }; enum { EXEC_ID_packw = 232 }; enum { EXEC_ID_xpermn = 233 }; enum { EXEC_ID_xpermb = 234 }; enum { EXEC_ID_adduw = 235 }; enum { EXEC_ID_slliuw = 236 }; enum { EXEC_ID_aes64es = 237 }; enum { EXEC_ID_aes64esm = 238 }; enum { EXEC_ID_aes64ds = 239 }; enum { EXEC_ID_aes64dsm = 240 }; enum { EXEC_ID_aes64ks1i = 241 }; enum { EXEC_ID_aes64ks2 = 242 }; enum { EXEC_ID_sm4ks = 243 }; enum { EXEC_ID_sm4ed = 244 }; ;
# 8 "src/cpu/cpu-exec.c" 2
# 1 "/usr/include/locale.h" 1 3 4
# 28 "/usr/include/locale.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 29 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/locale.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4


# 51 "/usr/include/locale.h" 3 4

# 51 "/usr/include/locale.h" 3 4
struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 118 "/usr/include/locale.h" 3 4
};



extern char *setlocale (int __category, const char *__locale) __attribute__ ((__nothrow__ , __leaf__));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__ , __leaf__));
# 141 "/usr/include/locale.h" 3 4
extern locale_t newlocale (int __category_mask, const char *__locale,
      locale_t __base) __attribute__ ((__nothrow__ , __leaf__));
# 176 "/usr/include/locale.h" 3 4
extern locale_t duplocale (locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));



extern void freelocale (locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));






extern locale_t uselocale (locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));








# 9 "src/cpu/cpu-exec.c" 2
# 1 "/usr/include/setjmp.h" 1 3 4
# 27 "/usr/include/setjmp.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
# 30 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 31 "/usr/include/setjmp.h" 2 3 4


struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };


typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));




extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));



extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));
# 67 "/usr/include/setjmp.h" 3 4
extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));





extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 93 "/usr/include/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));





# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp2.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/setjmp2.h" 3 4
extern void longjmp (struct __jmp_buf_tag __env[1], int __val) __asm__ ("" "__longjmp_chk") __attribute__ ((__nothrow__))

                        __attribute__ ((__noreturn__));
extern void _longjmp (struct __jmp_buf_tag __env[1], int __val) __asm__ ("" "__longjmp_chk") __attribute__ ((__nothrow__))

                        __attribute__ ((__noreturn__));
extern void siglongjmp (struct __jmp_buf_tag __env[1], int __val) __asm__ ("" "__longjmp_chk") __attribute__ ((__nothrow__))

                        __attribute__ ((__noreturn__));
# 101 "/usr/include/setjmp.h" 2 3 4



# 10 "src/cpu/cpu-exec.c" 2

# 1 "/home/user/ecpt/work/simpoint_nemu/include/profiling/betapoint-ext.h" 1






# 6 "/home/user/ecpt/work/simpoint_nemu/include/profiling/betapoint-ext.h"
void control_profile(vaddr_t pc, vaddr_t target, 
# 6 "/home/user/ecpt/work/simpoint_nemu/include/profiling/betapoint-ext.h" 3 4
                                                _Bool 
# 6 "/home/user/ecpt/work/simpoint_nemu/include/profiling/betapoint-ext.h"
                                                     taken);
void beta_on_start();
void beta_on_exit();
void dataflow_profile(vaddr_t pc, paddr_t paddr, 
# 9 "/home/user/ecpt/work/simpoint_nemu/include/profiling/betapoint-ext.h" 3 4
                                                _Bool 
# 9 "/home/user/ecpt/work/simpoint_nemu/include/profiling/betapoint-ext.h"
                                                     is_write, uint8_t mem_width,
    uint8_t dst_id, uint8_t src1_id, uint8_t src2_id, uint8_t fsrc3_id, uint8_t is_strl);
# 12 "src/cpu/cpu-exec.c" 2
# 1 "resource/CRoaring/include/roaring/roaring.h" 1
# 10 "resource/CRoaring/include/roaring/roaring.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4

# 149 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 328 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef int wchar_t;
# 426 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 437 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
} max_align_t;
# 11 "resource/CRoaring/include/roaring/roaring.h" 2

# 1 "resource/CRoaring/include/roaring/memory.h" 1







# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 9 "resource/CRoaring/include/roaring/memory.h" 2


# 10 "resource/CRoaring/include/roaring/memory.h"
typedef void* (*roaring_malloc_p)(size_t);
typedef void* (*roaring_realloc_p)(void*, size_t);
typedef void* (*roaring_calloc_p)(size_t, size_t);
typedef void (*roaring_free_p)(void*);
typedef void* (*roaring_aligned_malloc_p)(size_t, size_t);
typedef void (*roaring_aligned_free_p)(void*);

typedef struct roaring_memory_s {
    roaring_malloc_p malloc;
    roaring_realloc_p realloc;
    roaring_calloc_p calloc;
    roaring_free_p free;
    roaring_aligned_malloc_p aligned_malloc;
    roaring_aligned_free_p aligned_free;
} roaring_memory_t;

void roaring_init_memory_hook(roaring_memory_t memory_hook);

void* roaring_malloc(size_t);
void* roaring_realloc(void*, size_t);
void* roaring_calloc(size_t, size_t);
void roaring_free(void*);
void* roaring_aligned_malloc(size_t, size_t);
void roaring_aligned_free(void*);
# 13 "resource/CRoaring/include/roaring/roaring.h" 2
# 1 "resource/CRoaring/include/roaring/roaring_types.h" 1
# 50 "resource/CRoaring/include/roaring/roaring_types.h"
typedef struct roaring_array_s {
    int32_t size;
    int32_t allocation_size;
    void **containers;
    uint16_t *keys;
    uint8_t *typecodes;
    uint8_t flags;
} roaring_array_t;


typedef 
# 60 "resource/CRoaring/include/roaring/roaring_types.h" 3 4
       _Bool 
# 60 "resource/CRoaring/include/roaring/roaring_types.h"
            (*roaring_iterator)(uint32_t value, void *param);
typedef 
# 61 "resource/CRoaring/include/roaring/roaring_types.h" 3 4
       _Bool 
# 61 "resource/CRoaring/include/roaring/roaring_types.h"
            (*roaring_iterator64)(uint64_t value, void *param);






typedef struct roaring_statistics_s {
    uint32_t n_containers;

    uint32_t n_array_containers;
    uint32_t n_run_containers;
    uint32_t n_bitset_containers;

    uint32_t
        n_values_array_containers;
    uint32_t n_values_run_containers;
    uint32_t
        n_values_bitset_containers;

    uint32_t n_bytes_array_containers;

    uint32_t n_bytes_run_containers;

    uint32_t n_bytes_bitset_containers;


    uint32_t
        max_value;
    uint32_t
        min_value;
    uint64_t sum_value;


    uint64_t cardinality;


} roaring_statistics_t;
# 14 "resource/CRoaring/include/roaring/roaring.h" 2
# 1 "resource/CRoaring/include/roaring/roaring_version.h" 1




enum {
    ROARING_VERSION_MAJOR = 0,
    ROARING_VERSION_MINOR = 5,
    ROARING_VERSION_REVISION = 0
};
# 15 "resource/CRoaring/include/roaring/roaring.h" 2





typedef struct roaring_bitmap_s {
    roaring_array_t high_low_container;
} roaring_bitmap_t;







roaring_bitmap_t *roaring_bitmap_create_with_capacity(uint32_t cap);






static inline roaring_bitmap_t *roaring_bitmap_create(void)
  { return roaring_bitmap_create_with_capacity(0); }







# 45 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 45 "resource/CRoaring/include/roaring/roaring.h"
    roaring_bitmap_init_with_capacity(roaring_bitmap_t *r, uint32_t cap);






static inline void roaring_bitmap_init_cleared(roaring_bitmap_t *r)
  { roaring_bitmap_init_with_capacity(r, 0); }





roaring_bitmap_t *roaring_bitmap_from_range(uint64_t min, uint64_t max,
                                            uint32_t step);




roaring_bitmap_t *roaring_bitmap_of_ptr(size_t n_args, const uint32_t *vals);
# 76 "resource/CRoaring/include/roaring/roaring.h"
static inline 
# 76 "resource/CRoaring/include/roaring/roaring.h" 3 4
             _Bool 
# 76 "resource/CRoaring/include/roaring/roaring.h"
                  roaring_bitmap_get_copy_on_write(const roaring_bitmap_t* r) {
    return r->high_low_container.flags & 0x1;
}
static inline void roaring_bitmap_set_copy_on_write(roaring_bitmap_t* r,
                                                    
# 80 "resource/CRoaring/include/roaring/roaring.h" 3 4
                                                   _Bool 
# 80 "resource/CRoaring/include/roaring/roaring.h"
                                                        cow) {
    if (cow) {
        r->high_low_container.flags |= 0x1;
    } else {
        r->high_low_container.flags &= ~0x1;
    }
}

roaring_bitmap_t *roaring_bitmap_add_offset(const roaring_bitmap_t *bm,
                                            int64_t offset);



void roaring_bitmap_printf_describe(const roaring_bitmap_t *r);




roaring_bitmap_t *roaring_bitmap_of(size_t n, ...);





roaring_bitmap_t *roaring_bitmap_copy(const roaring_bitmap_t *r);
# 114 "resource/CRoaring/include/roaring/roaring.h"

# 114 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 114 "resource/CRoaring/include/roaring/roaring.h"
    roaring_bitmap_overwrite(roaring_bitmap_t *dest,
                              const roaring_bitmap_t *src);




void roaring_bitmap_printf(const roaring_bitmap_t *r);





roaring_bitmap_t *roaring_bitmap_and(const roaring_bitmap_t *r1,
                                     const roaring_bitmap_t *r2);




uint64_t roaring_bitmap_and_cardinality(const roaring_bitmap_t *r1,
                                        const roaring_bitmap_t *r2);





# 138 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 138 "resource/CRoaring/include/roaring/roaring.h"
    roaring_bitmap_intersect(const roaring_bitmap_t *r1,
                              const roaring_bitmap_t *r2);





# 144 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 144 "resource/CRoaring/include/roaring/roaring.h"
    roaring_bitmap_intersect_with_range(const roaring_bitmap_t *bm,
                                         uint64_t x, uint64_t y);







double roaring_bitmap_jaccard_index(const roaring_bitmap_t *r1,
                                    const roaring_bitmap_t *r2);




uint64_t roaring_bitmap_or_cardinality(const roaring_bitmap_t *r1,
                                       const roaring_bitmap_t *r2);




uint64_t roaring_bitmap_andnot_cardinality(const roaring_bitmap_t *r1,
                                           const roaring_bitmap_t *r2);




uint64_t roaring_bitmap_xor_cardinality(const roaring_bitmap_t *r1,
                                        const roaring_bitmap_t *r2);





void roaring_bitmap_and_inplace(roaring_bitmap_t *r1,
                                const roaring_bitmap_t *r2);





roaring_bitmap_t *roaring_bitmap_or(const roaring_bitmap_t *r1,
                                    const roaring_bitmap_t *r2);





void roaring_bitmap_or_inplace(roaring_bitmap_t *r1,
                               const roaring_bitmap_t *r2);






roaring_bitmap_t *roaring_bitmap_or_many(size_t number,
                                         const roaring_bitmap_t **rs);






roaring_bitmap_t *roaring_bitmap_or_many_heap(uint32_t number,
                                              const roaring_bitmap_t **rs);





roaring_bitmap_t *roaring_bitmap_xor(const roaring_bitmap_t *r1,
                                     const roaring_bitmap_t *r2);




void roaring_bitmap_xor_inplace(roaring_bitmap_t *r1,
                                const roaring_bitmap_t *r2);





roaring_bitmap_t *roaring_bitmap_xor_many(size_t number,
                                          const roaring_bitmap_t **rs);





roaring_bitmap_t *roaring_bitmap_andnot(const roaring_bitmap_t *r1,
                                        const roaring_bitmap_t *r2);




void roaring_bitmap_andnot_inplace(roaring_bitmap_t *r1,
                                   const roaring_bitmap_t *r2);
# 258 "resource/CRoaring/include/roaring/roaring.h"
void roaring_bitmap_free(const roaring_bitmap_t *r);





void roaring_bitmap_add_many(roaring_bitmap_t *r, size_t n_args,
                             const uint32_t *vals);




void roaring_bitmap_add(roaring_bitmap_t *r, uint32_t x);






# 276 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 276 "resource/CRoaring/include/roaring/roaring.h"
    roaring_bitmap_add_checked(roaring_bitmap_t *r, uint32_t x);




void roaring_bitmap_add_range_closed(roaring_bitmap_t *r,
                                     uint32_t min, uint32_t max);




static inline void roaring_bitmap_add_range(roaring_bitmap_t *r,
                                            uint64_t min, uint64_t max) {
    if(max == min) return;
    roaring_bitmap_add_range_closed(r, (uint32_t)min, (uint32_t)(max - 1));
}




void roaring_bitmap_remove(roaring_bitmap_t *r, uint32_t x);




void roaring_bitmap_remove_range_closed(roaring_bitmap_t *r,
                                        uint32_t min, uint32_t max);




static inline void roaring_bitmap_remove_range(roaring_bitmap_t *r,
                                               uint64_t min, uint64_t max) {
    if(max == min) return;
    roaring_bitmap_remove_range_closed(r, (uint32_t)min, (uint32_t)(max - 1));
}




void roaring_bitmap_remove_many(roaring_bitmap_t *r, size_t n_args,
                                const uint32_t *vals);






# 323 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 323 "resource/CRoaring/include/roaring/roaring.h"
    roaring_bitmap_remove_checked(roaring_bitmap_t *r, uint32_t x);





# 328 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 328 "resource/CRoaring/include/roaring/roaring.h"
    roaring_bitmap_contains(const roaring_bitmap_t *r, uint32_t val);






# 334 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 334 "resource/CRoaring/include/roaring/roaring.h"
    roaring_bitmap_contains_range(const roaring_bitmap_t *r,
                                   uint64_t range_start,
                                   uint64_t range_end);




uint64_t roaring_bitmap_get_cardinality(const roaring_bitmap_t *r);




uint64_t roaring_bitmap_range_cardinality(const roaring_bitmap_t *r,
                                          uint64_t range_start,
                                          uint64_t range_end);





# 353 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 353 "resource/CRoaring/include/roaring/roaring.h"
    roaring_bitmap_is_empty(const roaring_bitmap_t *r);







void roaring_bitmap_clear(roaring_bitmap_t *r);
# 370 "resource/CRoaring/include/roaring/roaring.h"
void roaring_bitmap_to_uint32_array(const roaring_bitmap_t *r, uint32_t *ans);
# 382 "resource/CRoaring/include/roaring/roaring.h"

# 382 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 382 "resource/CRoaring/include/roaring/roaring.h"
    roaring_bitmap_range_uint32_array(const roaring_bitmap_t *r,
                                       size_t offset, size_t limit,
                                       uint32_t *ans);






# 390 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 390 "resource/CRoaring/include/roaring/roaring.h"
    roaring_bitmap_remove_run_compression(roaring_bitmap_t *r);
# 399 "resource/CRoaring/include/roaring/roaring.h"

# 399 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 399 "resource/CRoaring/include/roaring/roaring.h"
    roaring_bitmap_run_optimize(roaring_bitmap_t *r);





size_t roaring_bitmap_shrink_to_fit(roaring_bitmap_t *r);
# 417 "resource/CRoaring/include/roaring/roaring.h"
size_t roaring_bitmap_serialize(const roaring_bitmap_t *r, char *buf);







roaring_bitmap_t *roaring_bitmap_deserialize(const void *buf);





size_t roaring_bitmap_size_in_bytes(const roaring_bitmap_t *r);
# 444 "resource/CRoaring/include/roaring/roaring.h"
roaring_bitmap_t *roaring_bitmap_portable_deserialize(const char *buf);
# 453 "resource/CRoaring/include/roaring/roaring.h"
roaring_bitmap_t *roaring_bitmap_portable_deserialize_safe(const char *buf,
                                                           size_t maxbytes);
# 463 "resource/CRoaring/include/roaring/roaring.h"
size_t roaring_bitmap_portable_deserialize_size(const char *buf,
                                                size_t maxbytes);







size_t roaring_bitmap_portable_size_in_bytes(const roaring_bitmap_t *r);
# 484 "resource/CRoaring/include/roaring/roaring.h"
size_t roaring_bitmap_portable_serialize(const roaring_bitmap_t *r, char *buf);
# 508 "resource/CRoaring/include/roaring/roaring.h"
size_t roaring_bitmap_frozen_size_in_bytes(const roaring_bitmap_t *r);





void roaring_bitmap_frozen_serialize(const roaring_bitmap_t *r, char *buf);
# 527 "resource/CRoaring/include/roaring/roaring.h"
const roaring_bitmap_t *roaring_bitmap_frozen_view(const char *buf,
                                                   size_t length);
# 543 "resource/CRoaring/include/roaring/roaring.h"

# 543 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 543 "resource/CRoaring/include/roaring/roaring.h"
    roaring_iterate(const roaring_bitmap_t *r, roaring_iterator iterator,
                     void *ptr);


# 546 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 546 "resource/CRoaring/include/roaring/roaring.h"
    roaring_iterate64(const roaring_bitmap_t *r, roaring_iterator64 iterator,
                       uint64_t high_bits, void *ptr);





# 552 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 552 "resource/CRoaring/include/roaring/roaring.h"
    roaring_bitmap_equals(const roaring_bitmap_t *r1,
                           const roaring_bitmap_t *r2);





# 558 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 558 "resource/CRoaring/include/roaring/roaring.h"
    roaring_bitmap_is_subset(const roaring_bitmap_t *r1,
                              const roaring_bitmap_t *r2);






# 565 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 565 "resource/CRoaring/include/roaring/roaring.h"
    roaring_bitmap_is_strict_subset(const roaring_bitmap_t *r1,
                                     const roaring_bitmap_t *r2);
# 583 "resource/CRoaring/include/roaring/roaring.h"
roaring_bitmap_t *roaring_bitmap_lazy_or(const roaring_bitmap_t *r1,
                                         const roaring_bitmap_t *r2,
                                         const 
# 585 "resource/CRoaring/include/roaring/roaring.h" 3 4
                                              _Bool 
# 585 "resource/CRoaring/include/roaring/roaring.h"
                                                   bitsetconversion);
# 595 "resource/CRoaring/include/roaring/roaring.h"
void roaring_bitmap_lazy_or_inplace(roaring_bitmap_t *r1,
                                    const roaring_bitmap_t *r2,
                                    const 
# 597 "resource/CRoaring/include/roaring/roaring.h" 3 4
                                         _Bool 
# 597 "resource/CRoaring/include/roaring/roaring.h"
                                              bitsetconversion);







void roaring_bitmap_repair_after_lazy(roaring_bitmap_t *r1);
# 618 "resource/CRoaring/include/roaring/roaring.h"
roaring_bitmap_t *roaring_bitmap_lazy_xor(const roaring_bitmap_t *r1,
                                          const roaring_bitmap_t *r2);






void roaring_bitmap_lazy_xor_inplace(roaring_bitmap_t *r1,
                                     const roaring_bitmap_t *r2);






roaring_bitmap_t *roaring_bitmap_flip(const roaring_bitmap_t *r1,
                                      uint64_t range_start, uint64_t range_end);







void roaring_bitmap_flip_inplace(roaring_bitmap_t *r1, uint64_t range_start,
                                 uint64_t range_end);








# 652 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 652 "resource/CRoaring/include/roaring/roaring.h"
    roaring_bitmap_select(const roaring_bitmap_t *r, uint32_t rank,
                           uint32_t *element);
# 665 "resource/CRoaring/include/roaring/roaring.h"
uint64_t roaring_bitmap_rank(const roaring_bitmap_t *r, uint32_t x);




uint32_t roaring_bitmap_minimum(const roaring_bitmap_t *r);




uint32_t roaring_bitmap_maximum(const roaring_bitmap_t *r);







void roaring_bitmap_statistics(const roaring_bitmap_t *r,
                               roaring_statistics_t *stat);
# 701 "resource/CRoaring/include/roaring/roaring.h"
typedef struct roaring_uint32_iterator_s {
    const roaring_bitmap_t *parent;
    int32_t container_index;
    int32_t in_container_index;

    int32_t run_index;

    uint32_t current_value;
    
# 709 "resource/CRoaring/include/roaring/roaring.h" 3 4
   _Bool 
# 709 "resource/CRoaring/include/roaring/roaring.h"
        has_value;

    const void
        *container;

    uint8_t typecode;

    uint32_t highbits;



} roaring_uint32_iterator_t;






void roaring_init_iterator(const roaring_bitmap_t *r,
                           roaring_uint32_iterator_t *newit);






void roaring_init_iterator_last(const roaring_bitmap_t *r,
                                roaring_uint32_iterator_t *newit);
# 746 "resource/CRoaring/include/roaring/roaring.h"
roaring_uint32_iterator_t *roaring_create_iterator(const roaring_bitmap_t *r);







# 753 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 753 "resource/CRoaring/include/roaring/roaring.h"
    roaring_advance_uint32_iterator(roaring_uint32_iterator_t *it);







# 760 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 760 "resource/CRoaring/include/roaring/roaring.h"
    roaring_previous_uint32_iterator(roaring_uint32_iterator_t *it);







# 767 "resource/CRoaring/include/roaring/roaring.h" 3 4
_Bool 
# 767 "resource/CRoaring/include/roaring/roaring.h"
    roaring_move_uint32_iterator_equalorlarger(roaring_uint32_iterator_t *it,
                                                uint32_t val);





roaring_uint32_iterator_t *roaring_copy_uint32_iterator(
    const roaring_uint32_iterator_t *it);




void roaring_free_uint32_iterator(roaring_uint32_iterator_t *it);
# 792 "resource/CRoaring/include/roaring/roaring.h"
uint32_t roaring_read_uint32_iterator(roaring_uint32_iterator_t *it,
                                      uint32_t* buf, uint32_t count);
# 13 "src/cpu/cpu-exec.c" 2

# 1 "src/cpu/../isa/riscv64/local-include/csr.h" 1
# 15 "src/cpu/cpu-exec.c" 2
# 28 "src/cpu/cpu-exec.c"
CPU_state cpu = {};
uint64_t g_nr_guest_instr = 0;
static uint64_t g_timer = 0;
static 
# 31 "src/cpu/cpu-exec.c" 3 4
      _Bool 
# 31 "src/cpu/cpu-exec.c"
           g_print_step = 
# 31 "src/cpu/cpu-exec.c" 3 4
                          0
# 31 "src/cpu/cpu-exec.c"
                               ;
const rtlreg_t rzero = 0;
rtlreg_t tmp_reg[4];
FILE* debug_fd = 
# 34 "src/cpu/cpu-exec.c" 3 4
                ((void *)0)
# 34 "src/cpu/cpu-exec.c"
                    ;
# 46 "src/cpu/cpu-exec.c"
static jmp_buf jbuf_exec = {};
static uint64_t n_remain_total;
static int n_remain;
static Decode *prev_s;

void save_globals(Decode *s) {
  prev_s = s;
}

uint64_t get_abs_instr_count () {

  int n_batch = n_remain_total >= 65536 ? 65536 : n_remain_total;
  uint32_t n_executed = n_batch - n_remain;
  return n_executed + g_nr_guest_instr;

  return 0;
}

static void update_instr_cnt() {

  int n_batch = n_remain_total >= 65536 ? 65536 : n_remain_total;
  uint32_t n_executed = n_batch - n_remain;
  n_remain_total -= (n_remain_total > n_executed) ? n_executed : n_remain_total;
  g_nr_guest_instr += n_executed;

  n_remain = n_batch > n_remain_total ? n_remain_total : n_batch;


}

void monitor_statistic() {
  update_instr_cnt();
  setlocale(
# 78 "src/cpu/cpu-exec.c" 3 4
           1
# 78 "src/cpu/cpu-exec.c"
                     , "");
  do { printf("\33[1;34m[%s:%d,%s] " "host time spent = %'ld us" "\33[0m\n", "src/cpu/cpu-exec.c", 79, __func__, g_timer); ; } while (0);

  do { printf("\33[1;34m[%s:%d,%s] " "total guest instructions = %'ld" "\33[0m\n", "src/cpu/cpu-exec.c", 81, __func__, g_nr_guest_instr); ; } while (0);
  if (g_timer > 0) do { printf("\33[1;34m[%s:%d,%s] " "simulation frequency = %'ld instr/s" "\33[0m\n", "src/cpu/cpu-exec.c", 82, __func__, g_nr_guest_instr * 1000000 / g_timer); ; } while (0);
  else do { printf("\33[1;34m[%s:%d,%s] " "Finish running in less than 1 us and can not calculate the simulation frequency" "\33[0m\n", "src/cpu/cpu-exec.c", 83, __func__); ; } while (0);



}

static word_t g_ex_cause = 0;
static int g_sys_state_flag = 0;

void set_sys_state_flag(int flag) {
  g_sys_state_flag |= flag;
}

void mmu_tlb_flush(vaddr_t vaddr) {
  hosttlb_flush(vaddr);
  if (vaddr == 0) set_sys_state_flag(SYS_STATE_FLUSH_TCACHE);
}

void longjmp_exec(int cause) {
  do { if (dflag_exit == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "Longjmp to jbuf_exec with cause: %i" "\33[0m\n", "src/cpu/cpu-exec.c", 102, __func__, cause); ; } while (0); if (dflag_exit == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "Longjmp to jbuf_exec with cause: %i" "\33[0m\n", "src/cpu/cpu-exec.c", 102, __func__, cause); ; } while (0); if (dflag_exit == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "Longjmp to jbuf_exec with cause: %i" "\33[0m\n", "src/cpu/cpu-exec.c", 102, __func__, cause); ; } while (0); if (dflag_exit == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "Longjmp to jbuf_exec with cause: %i" "\33[0m\n", "src/cpu/cpu-exec.c", 102, __func__, cause); ; } while (0); if (dflag_exit == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "Longjmp to jbuf_exec with cause: %i" "\33[0m\n", "src/cpu/cpu-exec.c", 102, __func__, cause); ; } while (0); if (dflag_exit == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Longjmp to jbuf_exec with cause: %i" "\33[0m\n", "src/cpu/cpu-exec.c", 102, __func__, cause); ; } while (0); if (dflag_exit == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "Longjmp to jbuf_exec with cause: %i" "\33[0m\n", "src/cpu/cpu-exec.c", 102, __func__, cause); ; } while (0); if (dflag_exit == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Longjmp to jbuf_exec with cause: %i" "\33[0m\n", "src/cpu/cpu-exec.c", 102, __func__, cause); ; } while (0); if (dflag_exit == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Longjmp to jbuf_exec with cause: %i" "\33[0m\n", "src/cpu/cpu-exec.c", 102, __func__, cause); ; } while (0); if (dflag_exit == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Longjmp to jbuf_exec with cause: %i" "\33[0m\n", "src/cpu/cpu-exec.c", 102, __func__, cause); ; } while (0); } while (0);
  longjmp(jbuf_exec, cause);
}

void longjmp_exception(int ex_cause) {



  g_ex_cause = ex_cause;
  do { if (dflag_exit == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "longjmp_exec(NEMU_EXEC_EXCEPTION)" "\33[0m\n", "src/cpu/cpu-exec.c", 111, __func__); ; } while (0); if (dflag_exit == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "longjmp_exec(NEMU_EXEC_EXCEPTION)" "\33[0m\n", "src/cpu/cpu-exec.c", 111, __func__); ; } while (0); if (dflag_exit == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "longjmp_exec(NEMU_EXEC_EXCEPTION)" "\33[0m\n", "src/cpu/cpu-exec.c", 111, __func__); ; } while (0); if (dflag_exit == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "longjmp_exec(NEMU_EXEC_EXCEPTION)" "\33[0m\n", "src/cpu/cpu-exec.c", 111, __func__); ; } while (0); if (dflag_exit == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "longjmp_exec(NEMU_EXEC_EXCEPTION)" "\33[0m\n", "src/cpu/cpu-exec.c", 111, __func__); ; } while (0); if (dflag_exit == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "longjmp_exec(NEMU_EXEC_EXCEPTION)" "\33[0m\n", "src/cpu/cpu-exec.c", 111, __func__); ; } while (0); if (dflag_exit == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "longjmp_exec(NEMU_EXEC_EXCEPTION)" "\33[0m\n", "src/cpu/cpu-exec.c", 111, __func__); ; } while (0); if (dflag_exit == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "longjmp_exec(NEMU_EXEC_EXCEPTION)" "\33[0m\n", "src/cpu/cpu-exec.c", 111, __func__); ; } while (0); if (dflag_exit == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "longjmp_exec(NEMU_EXEC_EXCEPTION)" "\33[0m\n", "src/cpu/cpu-exec.c", 111, __func__); ; } while (0); if (dflag_exit == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "longjmp_exec(NEMU_EXEC_EXCEPTION)" "\33[0m\n", "src/cpu/cpu-exec.c", 111, __func__); ; } while (0); } while (0);
  longjmp_exec(NEMU_EXEC_EXCEPTION);
}


static 
# 116 "src/cpu/cpu-exec.c" 3 4
      _Bool 
# 116 "src/cpu/cpu-exec.c"
           manual_cpt_quit = 
# 116 "src/cpu/cpu-exec.c" 3 4
                             0
# 116 "src/cpu/cpu-exec.c"
                                  ;
# 163 "src/cpu/cpu-exec.c"
static const void **g_exec_table;

Decode* tcache_jr_fetch(Decode *s, vaddr_t jpc);
Decode* tcache_decode(Decode *s);
void tcache_handle_exception(vaddr_t jpc);
Decode* tcache_handle_flush(vaddr_t snpc);

static inline
Decode* jr_fetch(Decode *s, vaddr_t target) {
  if (__builtin_expect(s->tnext->pc == target, 1)) return s->tnext;
  if (__builtin_expect(s->ntnext->pc == target, 1)) return s->ntnext;
  return tcache_jr_fetch(s, target);
}
static inline void debug_difftest(Decode *_this, Decode *next) {
  ;
  ;
  ;
  ;
  ;
}
uint64_t per_bb_profile(Decode *prev_s, Decode *s, 
# 183 "src/cpu/cpu-exec.c" 3 4
                                                  _Bool 
# 183 "src/cpu/cpu-exec.c"
                                                       control_taken) {
  uint64_t abs_inst_count = get_abs_instr_count();
  if (profiling_state == SimpointProfiling && profiling_started) {
    simpoint_profiling(prev_s->pc, 
# 186 "src/cpu/cpu-exec.c" 3 4
                                  1
# 186 "src/cpu/cpu-exec.c"
                                      , abs_inst_count);
    simpoint_profiling(s->pc, 
# 187 "src/cpu/cpu-exec.c" 3 4
                             0
# 187 "src/cpu/cpu-exec.c"
                                  , abs_inst_count);
  }




  extern 
# 193 "src/cpu/cpu-exec.c" 3 4
        _Bool 
# 193 "src/cpu/cpu-exec.c"
             able_to_take_cpt();
  
# 194 "src/cpu/cpu-exec.c" 3 4
 _Bool 
# 194 "src/cpu/cpu-exec.c"
      able_to_take = able_to_take_cpt() || force_cpt_mmode;

  able_to_take=
# 196 "src/cpu/cpu-exec.c" 3 4
              1
# 196 "src/cpu/cpu-exec.c"
                  ;
  if (checkpoint_taking && able_to_take &&
      ((recvd_manual_oneshot_cpt && !manual_cpt_quit) || profiling_started)) {

    cpu.pc = s->pc;
    extern 
# 201 "src/cpu/cpu-exec.c" 3 4
          _Bool 
# 201 "src/cpu/cpu-exec.c"
               try_take_cpt(uint64_t icount);
    
# 202 "src/cpu/cpu-exec.c" 3 4
   _Bool 
# 202 "src/cpu/cpu-exec.c"
        taken = try_take_cpt(abs_inst_count);
    if (taken) {
      do { printf("\33[1;34m[%s:%d,%s] " "Have taken checkpoint on pc 0x%lx" "\33[0m\n", "src/cpu/cpu-exec.c", 204, __func__, s->pc); ; } while (0);
      if (recvd_manual_oneshot_cpt) {
        do { printf("\33[1;34m[%s:%d,%s] " "Quit after taken manual cpt\n" "\33[0m\n", "src/cpu/cpu-exec.c", 206, __func__); ; } while (0);
        nemu_state.state = NEMU_QUIT;
        manual_cpt_quit = 
# 208 "src/cpu/cpu-exec.c" 3 4
                         1
# 208 "src/cpu/cpu-exec.c"
                             ;
      }
    }
  }
  return abs_inst_count;
}

static int execute(int n) {
  do { if (dflag_trace_bb == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "Will execute %i instrs\n" "\33[0m\n", "src/cpu/cpu-exec.c", 216, __func__, n); ; } while (0); if (dflag_trace_bb == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "Will execute %i instrs\n" "\33[0m\n", "src/cpu/cpu-exec.c", 216, __func__, n); ; } while (0); if (dflag_trace_bb == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "Will execute %i instrs\n" "\33[0m\n", "src/cpu/cpu-exec.c", 216, __func__, n); ; } while (0); if (dflag_trace_bb == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "Will execute %i instrs\n" "\33[0m\n", "src/cpu/cpu-exec.c", 216, __func__, n); ; } while (0); if (dflag_trace_bb == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "Will execute %i instrs\n" "\33[0m\n", "src/cpu/cpu-exec.c", 216, __func__, n); ; } while (0); if (dflag_trace_bb == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Will execute %i instrs\n" "\33[0m\n", "src/cpu/cpu-exec.c", 216, __func__, n); ; } while (0); if (dflag_trace_bb == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "Will execute %i instrs\n" "\33[0m\n", "src/cpu/cpu-exec.c", 216, __func__, n); ; } while (0); if (dflag_trace_bb == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Will execute %i instrs\n" "\33[0m\n", "src/cpu/cpu-exec.c", 216, __func__, n); ; } while (0); if (dflag_trace_bb == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Will execute %i instrs\n" "\33[0m\n", "src/cpu/cpu-exec.c", 216, __func__, n); ; } while (0); if (dflag_trace_bb == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Will execute %i instrs\n" "\33[0m\n", "src/cpu/cpu-exec.c", 216, __func__, n); ; } while (0); } while (0);
  static const void* local_exec_table[(0 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 )] = {
    [EXEC_ID_inv] = &&exec_inv, [EXEC_ID_rt_inv] = &&exec_rt_inv, [EXEC_ID_nemu_trap] = &&exec_nemu_trap, [EXEC_ID_fence_i] = &&exec_fence_i, [EXEC_ID_fence] = &&exec_fence, [EXEC_ID_p_ret] = &&exec_p_ret, [EXEC_ID_p_li_0] = &&exec_p_li_0, [EXEC_ID_p_li_1] = &&exec_p_li_1, [EXEC_ID_lui] = &&exec_lui, [EXEC_ID_auipc] = &&exec_auipc, [EXEC_ID_jal] = &&exec_jal, [EXEC_ID_ld] = &&exec_ld, [EXEC_ID_lw] = &&exec_lw, [EXEC_ID_lh] = &&exec_lh, [EXEC_ID_lb] = &&exec_lb, [EXEC_ID_lwu] = &&exec_lwu, [EXEC_ID_lhu] = &&exec_lhu, [EXEC_ID_lbu] = &&exec_lbu, [EXEC_ID_sd] = &&exec_sd, [EXEC_ID_sw] = &&exec_sw, [EXEC_ID_sh] = &&exec_sh, [EXEC_ID_sb] = &&exec_sb, [EXEC_ID_c_j] = &&exec_c_j, [EXEC_ID_p_jal] = &&exec_p_jal, [EXEC_ID_c_jr] = &&exec_c_jr, [EXEC_ID_c_jalr] = &&exec_c_jalr, [EXEC_ID_c_beqz] = &&exec_c_beqz, [EXEC_ID_c_bnez] = &&exec_c_bnez, [EXEC_ID_c_mv] = &&exec_c_mv, [EXEC_ID_p_sext_w] = &&exec_p_sext_w, [EXEC_ID_clz] = &&exec_clz, [EXEC_ID_clzw] = &&exec_clzw, [EXEC_ID_ctz] = &&exec_ctz, [EXEC_ID_ctzw] = &&exec_ctzw, [EXEC_ID_cpop] = &&exec_cpop, [EXEC_ID_cpopw] = &&exec_cpopw, [EXEC_ID_orc_b] = &&exec_orc_b, [EXEC_ID_rev8] = &&exec_rev8, [EXEC_ID_revb] = &&exec_revb, [EXEC_ID_sext_b] = &&exec_sext_b, [EXEC_ID_sext_h] = &&exec_sext_h, [EXEC_ID_zext_h] = &&exec_zext_h, [EXEC_ID_aes64im] = &&exec_aes64im, [EXEC_ID_sm3p0] = &&exec_sm3p0, [EXEC_ID_sm3p1] = &&exec_sm3p1, [EXEC_ID_sha256sig0] = &&exec_sha256sig0, [EXEC_ID_sha256sig1] = &&exec_sha256sig1, [EXEC_ID_sha256sum0] = &&exec_sha256sum0, [EXEC_ID_sha256sum1] = &&exec_sha256sum1, [EXEC_ID_sha512sig0] = &&exec_sha512sig0, [EXEC_ID_sha512sig1] = &&exec_sha512sig1, [EXEC_ID_sha512sum0] = &&exec_sha512sum0, [EXEC_ID_sha512sum1] = &&exec_sha512sum1, [EXEC_ID_ld_mmu] = &&exec_ld_mmu, [EXEC_ID_lw_mmu] = &&exec_lw_mmu, [EXEC_ID_lh_mmu] = &&exec_lh_mmu, [EXEC_ID_lb_mmu] = &&exec_lb_mmu, [EXEC_ID_lwu_mmu] = &&exec_lwu_mmu, [EXEC_ID_lhu_mmu] = &&exec_lhu_mmu, [EXEC_ID_lbu_mmu] = &&exec_lbu_mmu, [EXEC_ID_sd_mmu] = &&exec_sd_mmu, [EXEC_ID_sw_mmu] = &&exec_sw_mmu, [EXEC_ID_sh_mmu] = &&exec_sh_mmu, [EXEC_ID_sb_mmu] = &&exec_sb_mmu, [EXEC_ID_flw] = &&exec_flw, [EXEC_ID_fsw] = &&exec_fsw, [EXEC_ID_flw_mmu] = &&exec_flw_mmu, [EXEC_ID_fsw_mmu] = &&exec_fsw_mmu, [EXEC_ID_fsqrts] = &&exec_fsqrts, [EXEC_ID_fles] = &&exec_fles, [EXEC_ID_flts] = &&exec_flts, [EXEC_ID_feqs] = &&exec_feqs, [EXEC_ID_fcvt_s_w] = &&exec_fcvt_s_w, [EXEC_ID_fcvt_s_wu] = &&exec_fcvt_s_wu, [EXEC_ID_fcvt_s_l] = &&exec_fcvt_s_l, [EXEC_ID_fcvt_s_lu] = &&exec_fcvt_s_lu, [EXEC_ID_fcvt_w_s] = &&exec_fcvt_w_s, [EXEC_ID_fcvt_wu_s] = &&exec_fcvt_wu_s, [EXEC_ID_fcvt_l_s] = &&exec_fcvt_l_s, [EXEC_ID_fcvt_lu_s] = &&exec_fcvt_lu_s, [EXEC_ID_fsgnjs] = &&exec_fsgnjs, [EXEC_ID_fsgnjns] = &&exec_fsgnjns, [EXEC_ID_fsgnjxs] = &&exec_fsgnjxs, [EXEC_ID_fmv_x_w] = &&exec_fmv_x_w, [EXEC_ID_fmv_w_x] = &&exec_fmv_w_x, [EXEC_ID_fclasss] = &&exec_fclasss, [EXEC_ID_fclassd] = &&exec_fclassd, [EXEC_ID_fld] = &&exec_fld, [EXEC_ID_fsd] = &&exec_fsd, [EXEC_ID_fld_mmu] = &&exec_fld_mmu, [EXEC_ID_fsd_mmu] = &&exec_fsd_mmu, [EXEC_ID_fsqrtd] = &&exec_fsqrtd, [EXEC_ID_fled] = &&exec_fled, [EXEC_ID_fltd] = &&exec_fltd, [EXEC_ID_feqd] = &&exec_feqd, [EXEC_ID_fcvt_d_w] = &&exec_fcvt_d_w, [EXEC_ID_fcvt_d_wu] = &&exec_fcvt_d_wu, [EXEC_ID_fcvt_d_l] = &&exec_fcvt_d_l, [EXEC_ID_fcvt_d_lu] = &&exec_fcvt_d_lu, [EXEC_ID_fcvt_w_d] = &&exec_fcvt_w_d, [EXEC_ID_fcvt_wu_d] = &&exec_fcvt_wu_d, [EXEC_ID_fcvt_l_d] = &&exec_fcvt_l_d, [EXEC_ID_fcvt_lu_d] = &&exec_fcvt_lu_d, [EXEC_ID_fsgnjd] = &&exec_fsgnjd, [EXEC_ID_fsgnjnd] = &&exec_fsgnjnd, [EXEC_ID_fsgnjxd] = &&exec_fsgnjxd, [EXEC_ID_fmv_x_d] = &&exec_fmv_x_d, [EXEC_ID_fmv_d_x] = &&exec_fmv_d_x, [EXEC_ID_fcvt_d_s] = &&exec_fcvt_d_s, [EXEC_ID_fcvt_s_d] = &&exec_fcvt_s_d, [EXEC_ID_add] = &&exec_add, [EXEC_ID_sll] = &&exec_sll, [EXEC_ID_srl] = &&exec_srl, [EXEC_ID_slt] = &&exec_slt, [EXEC_ID_sltu] = &&exec_sltu, [EXEC_ID_xor] = &&exec_xor, [EXEC_ID_or] = &&exec_or, [EXEC_ID_sub] = &&exec_sub, [EXEC_ID_sra] = &&exec_sra, [EXEC_ID_and] = &&exec_and, [EXEC_ID_addi] = &&exec_addi, [EXEC_ID_slli] = &&exec_slli, [EXEC_ID_srli] = &&exec_srli, [EXEC_ID_slti] = &&exec_slti, [EXEC_ID_sltui] = &&exec_sltui, [EXEC_ID_xori] = &&exec_xori, [EXEC_ID_ori] = &&exec_ori, [EXEC_ID_srai] = &&exec_srai, [EXEC_ID_andi] = &&exec_andi, [EXEC_ID_addw] = &&exec_addw, [EXEC_ID_sllw] = &&exec_sllw, [EXEC_ID_srlw] = &&exec_srlw, [EXEC_ID_subw] = &&exec_subw, [EXEC_ID_sraw] = &&exec_sraw, [EXEC_ID_addiw] = &&exec_addiw, [EXEC_ID_slliw] = &&exec_slliw, [EXEC_ID_srliw] = &&exec_srliw, [EXEC_ID_sraiw] = &&exec_sraiw, [EXEC_ID_jalr] = &&exec_jalr, [EXEC_ID_beq] = &&exec_beq, [EXEC_ID_bne] = &&exec_bne, [EXEC_ID_blt] = &&exec_blt, [EXEC_ID_bge] = &&exec_bge, [EXEC_ID_bltu] = &&exec_bltu, [EXEC_ID_bgeu] = &&exec_bgeu, [EXEC_ID_mul] = &&exec_mul, [EXEC_ID_mulh] = &&exec_mulh, [EXEC_ID_mulhu] = &&exec_mulhu, [EXEC_ID_mulhsu] = &&exec_mulhsu, [EXEC_ID_div] = &&exec_div, [EXEC_ID_divu] = &&exec_divu, [EXEC_ID_rem] = &&exec_rem, [EXEC_ID_remu] = &&exec_remu, [EXEC_ID_mulw] = &&exec_mulw, [EXEC_ID_divw] = &&exec_divw, [EXEC_ID_divuw] = &&exec_divuw, [EXEC_ID_remw] = &&exec_remw, [EXEC_ID_remuw] = &&exec_remuw, [EXEC_ID_c_li] = &&exec_c_li, [EXEC_ID_c_addi] = &&exec_c_addi, [EXEC_ID_c_slli] = &&exec_c_slli, [EXEC_ID_c_srli] = &&exec_c_srli, [EXEC_ID_c_srai] = &&exec_c_srai, [EXEC_ID_c_andi] = &&exec_c_andi, [EXEC_ID_c_addiw] = &&exec_c_addiw, [EXEC_ID_c_add] = &&exec_c_add, [EXEC_ID_c_and] = &&exec_c_and, [EXEC_ID_c_or] = &&exec_c_or, [EXEC_ID_c_xor] = &&exec_c_xor, [EXEC_ID_c_sub] = &&exec_c_sub, [EXEC_ID_c_addw] = &&exec_c_addw, [EXEC_ID_c_subw] = &&exec_c_subw, [EXEC_ID_p_blez] = &&exec_p_blez, [EXEC_ID_p_bgez] = &&exec_p_bgez, [EXEC_ID_p_bltz] = &&exec_p_bltz, [EXEC_ID_p_bgtz] = &&exec_p_bgtz, [EXEC_ID_p_inc] = &&exec_p_inc, [EXEC_ID_p_dec] = &&exec_p_dec, [EXEC_ID_atomic] = &&exec_atomic, [EXEC_ID_system] = &&exec_system, [EXEC_ID_fadds] = &&exec_fadds, [EXEC_ID_fsubs] = &&exec_fsubs, [EXEC_ID_fmuls] = &&exec_fmuls, [EXEC_ID_fdivs] = &&exec_fdivs, [EXEC_ID_fmins] = &&exec_fmins, [EXEC_ID_fmaxs] = &&exec_fmaxs, [EXEC_ID_faddd] = &&exec_faddd, [EXEC_ID_fsubd] = &&exec_fsubd, [EXEC_ID_fmuld] = &&exec_fmuld, [EXEC_ID_fdivd] = &&exec_fdivd, [EXEC_ID_fmind] = &&exec_fmind, [EXEC_ID_fmaxd] = &&exec_fmaxd, [EXEC_ID_fmadds] = &&exec_fmadds, [EXEC_ID_fmsubs] = &&exec_fmsubs, [EXEC_ID_fnmsubs] = &&exec_fnmsubs, [EXEC_ID_fnmadds] = &&exec_fnmadds, [EXEC_ID_fmaddd] = &&exec_fmaddd, [EXEC_ID_fmsubd] = &&exec_fmsubd, [EXEC_ID_fnmsubd] = &&exec_fnmsubd, [EXEC_ID_fnmaddd] = &&exec_fnmaddd, [EXEC_ID_andn] = &&exec_andn, [EXEC_ID_orn] = &&exec_orn, [EXEC_ID_xnor] = &&exec_xnor, [EXEC_ID_min] = &&exec_min, [EXEC_ID_minu] = &&exec_minu, [EXEC_ID_max] = &&exec_max, [EXEC_ID_maxu] = &&exec_maxu, [EXEC_ID_bclr] = &&exec_bclr, [EXEC_ID_bset] = &&exec_bset, [EXEC_ID_binv] = &&exec_binv, [EXEC_ID_bext] = &&exec_bext, [EXEC_ID_bclri] = &&exec_bclri, [EXEC_ID_bseti] = &&exec_bseti, [EXEC_ID_binvi] = &&exec_binvi, [EXEC_ID_bexti] = &&exec_bexti, [EXEC_ID_clmul] = &&exec_clmul, [EXEC_ID_clmulr] = &&exec_clmulr, [EXEC_ID_clmulh] = &&exec_clmulh, [EXEC_ID_rol] = &&exec_rol, [EXEC_ID_rolw] = &&exec_rolw, [EXEC_ID_ror] = &&exec_ror, [EXEC_ID_rori] = &&exec_rori, [EXEC_ID_rorw] = &&exec_rorw, [EXEC_ID_roriw] = &&exec_roriw, [EXEC_ID_sh1add] = &&exec_sh1add, [EXEC_ID_sh2add] = &&exec_sh2add, [EXEC_ID_sh3add] = &&exec_sh3add, [EXEC_ID_sh1adduw] = &&exec_sh1adduw, [EXEC_ID_sh2adduw] = &&exec_sh2adduw, [EXEC_ID_sh3adduw] = &&exec_sh3adduw, [EXEC_ID_pack] = &&exec_pack, [EXEC_ID_packh] = &&exec_packh, [EXEC_ID_packw] = &&exec_packw, [EXEC_ID_xpermn] = &&exec_xpermn, [EXEC_ID_xpermb] = &&exec_xpermb, [EXEC_ID_adduw] = &&exec_adduw, [EXEC_ID_slliuw] = &&exec_slliuw, [EXEC_ID_aes64es] = &&exec_aes64es, [EXEC_ID_aes64esm] = &&exec_aes64esm, [EXEC_ID_aes64ds] = &&exec_aes64ds, [EXEC_ID_aes64dsm] = &&exec_aes64dsm, [EXEC_ID_aes64ks1i] = &&exec_aes64ks1i, [EXEC_ID_aes64ks2] = &&exec_aes64ks2, [EXEC_ID_sm4ks] = &&exec_sm4ks, [EXEC_ID_sm4ed] = &&exec_sm4ed,
  };
  static int init_flag = 0;
  Decode *s = prev_s;

  if (__builtin_expect(init_flag == 0, 1)) {
    g_exec_table = local_exec_table;
    extern Decode* tcache_init(const void *exec_nemu_decode, vaddr_t reset_vector);
    s = tcache_init(&&exec_nemu_decode, cpu.pc);
    hosttlb_init();
    init_flag = 1;
  }

  __attribute__((unused)) Decode *this_s = 
# 231 "src/cpu/cpu-exec.c" 3 4
                                          ((void *)0)
# 231 "src/cpu/cpu-exec.c"
                                              ;
  __attribute__((unused)) 
# 232 "src/cpu/cpu-exec.c" 3 4
                         _Bool 
# 232 "src/cpu/cpu-exec.c"
                              br_taken = 
# 232 "src/cpu/cpu-exec.c" 3 4
                                         0
# 232 "src/cpu/cpu-exec.c"
                                              ;
  __attribute__((unused)) 
# 233 "src/cpu/cpu-exec.c" 3 4
                         _Bool 
# 233 "src/cpu/cpu-exec.c"
                              is_ctrl = 
# 233 "src/cpu/cpu-exec.c" 3 4
                                        0
# 233 "src/cpu/cpu-exec.c"
                                             ;




  while (
# 238 "src/cpu/cpu-exec.c" 3 4
        1
# 238 "src/cpu/cpu-exec.c"
            ) {



    __attribute__((unused)) rtlreg_t ls0, ls1, ls2;
    br_taken = 
# 243 "src/cpu/cpu-exec.c" 3 4
              0
# 243 "src/cpu/cpu-exec.c"
                   ;

    goto *(s->EHelper);
# 254 "src/cpu/cpu-exec.c"
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-exec.h" 1
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h" 1
# 26 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h"
s ++; goto exec_finish; exec_p_sext_w: {
  rtl_addwi(s, ((&s->dest)->preg), ((&s->src1)->preg), 0);
}

s ++; goto exec_finish; exec_p_blez: {
  do { n -= s->idx_in_bb; is_ctrl = 
# 31 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h" 3 4
 1
# 31 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h"
 ; if (interpret_relop(RELOP_GE, *(&rzero), *((&s->src2)->preg))) { s = s->tnext; br_taken = 
# 31 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h" 3 4
 1
# 31 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h"
 ; } else s = s->ntnext; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_p_bgtz: {
  do { n -= s->idx_in_bb; is_ctrl = 
# 35 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h" 3 4
 1
# 35 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h"
 ; if (interpret_relop(RELOP_LT, *(&rzero), *((&s->src2)->preg))) { s = s->tnext; br_taken = 
# 35 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h" 3 4
 1
# 35 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h"
 ; } else s = s->ntnext; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_p_bltz: {
  do { n -= s->idx_in_bb; is_ctrl = 
# 39 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h" 3 4
 1
# 39 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h"
 ; if (interpret_relop(RELOP_LT, *((&s->src1)->preg), *(&rzero))) { s = s->tnext; br_taken = 
# 39 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h" 3 4
 1
# 39 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h"
 ; } else s = s->ntnext; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_p_bgez: {
  do { n -= s->idx_in_bb; is_ctrl = 
# 43 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h" 3 4
 1
# 43 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h"
 ; if (interpret_relop(RELOP_GE, *((&s->src1)->preg), *(&rzero))) { s = s->tnext; br_taken = 
# 43 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h" 3 4
 1
# 43 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h"
 ; } else s = s->ntnext; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_p_jal: {
  rtl_li(s, &cpu.gpr[1]._64, (&s->src2)->imm);
  do { n -= s->idx_in_bb; s = s->tnext; is_ctrl = 
# 48 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h" 3 4
 1
# 48 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h"
 ; br_taken = 
# 48 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h" 3 4
 1
# 48 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h"
 ; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_p_ret: {

  difftest_skip_dut(1, 2);
  do { n -= s->idx_in_bb; s = jr_fetch(s, *(&cpu.gpr[1]._64)); is_ctrl = 
# 54 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h" 3 4
 1
# 54 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h"
 ; br_taken = 
# 54 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h" 3 4
 1
# 54 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/pseudo.h"
 ; goto end_of_bb; } while (0);
}



s ++; goto exec_finish; exec_p_li_0: {
  rtl_li(s, ((&s->dest)->preg), 0);
}

s ++; goto exec_finish; exec_p_li_1: {
  rtl_li(s, ((&s->dest)->preg), 1);
}

s ++; goto exec_finish; exec_p_inc: {
  rtl_addi(s, ((&s->dest)->preg), ((&s->dest)->preg), 1);
}

s ++; goto exec_finish; exec_p_dec: {
  rtl_subi(s, ((&s->dest)->preg), ((&s->dest)->preg), 1);
}
# 2 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-exec.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/exec.h" 1
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/compute.h" 1
s ++; goto exec_finish; exec_add: {
  rtl_add(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_sub: {
  rtl_sub(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_sll: {
  rtl_shl(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_sra: {
  rtl_sar(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_srl: {
  rtl_shr(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_slt: {
  rtl_setrelop(s, RELOP_LT, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_sltu: {
  rtl_setrelop(s, RELOP_LTU, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_xor: {
  rtl_xor(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_or: {
  rtl_or(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_and: {
  rtl_and(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_addi: {
  rtl_addi(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_slli: {
  rtl_shli(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_srai: {
  rtl_sari(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_srli: {
  rtl_shri(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_slti: {
  rtl_setrelopi(s, RELOP_LT, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_sltui: {
  rtl_setrelopi(s, RELOP_LTU, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_xori: {
  rtl_xori(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_ori: {
  rtl_ori(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_andi: {
  rtl_andi(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_auipc: {
  rtl_li(s, ((&s->dest)->preg), (&s->src1)->imm);
}

s ++; goto exec_finish; exec_lui: {
  rtl_li(s, ((&s->dest)->preg), (&s->src1)->imm);
}

s ++; goto exec_finish; exec_addw: {
  rtl_addw(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_subw: {
  rtl_subw(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_sllw: {
  rtl_shlw(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_srlw: {
  rtl_shrw(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_sraw: {
  rtl_sarw(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_addiw: {
  rtl_addwi(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_slliw: {
  rtl_shlwi(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_srliw: {
  rtl_shrwi(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_sraiw: {
  rtl_sarwi(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm);
}
# 2 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/exec.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/ldst.h" 1
# 19 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/ldst.h"
s ++; goto exec_finish; exec_ld: { rtl_lms (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 8, MMU_DIRECT); } s ++; goto exec_finish; exec_lw: { rtl_lms (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 4, MMU_DIRECT); } s ++; goto exec_finish; exec_lh: { rtl_lms (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 2, MMU_DIRECT); } s ++; goto exec_finish; exec_lb: { rtl_lms (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 1, MMU_DIRECT); } s ++; goto exec_finish; exec_lwu: { rtl_lm (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 4, MMU_DIRECT); } s ++; goto exec_finish; exec_lhu: { rtl_lm (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 2, MMU_DIRECT); } s ++; goto exec_finish; exec_lbu: { rtl_lm (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 1, MMU_DIRECT); } s ++; goto exec_finish; exec_sd: { rtl_sm (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 8, MMU_DIRECT); } s ++; goto exec_finish; exec_sw: { rtl_sm (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 4, MMU_DIRECT); } s ++; goto exec_finish; exec_sh: { rtl_sm (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 2, MMU_DIRECT); } s ++; goto exec_finish; exec_sb: { rtl_sm (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 1, MMU_DIRECT); }
s ++; goto exec_finish; exec_ld_mmu: { rtl_lms (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 8, MMU_TRANSLATE); } s ++; goto exec_finish; exec_lw_mmu: { rtl_lms (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 4, MMU_TRANSLATE); } s ++; goto exec_finish; exec_lh_mmu: { rtl_lms (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 2, MMU_TRANSLATE); } s ++; goto exec_finish; exec_lb_mmu: { rtl_lms (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 1, MMU_TRANSLATE); } s ++; goto exec_finish; exec_lwu_mmu: { rtl_lm (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 4, MMU_TRANSLATE); } s ++; goto exec_finish; exec_lhu_mmu: { rtl_lm (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 2, MMU_TRANSLATE); } s ++; goto exec_finish; exec_lbu_mmu: { rtl_lm (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 1, MMU_TRANSLATE); } s ++; goto exec_finish; exec_sd_mmu: { rtl_sm (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 8, MMU_TRANSLATE); } s ++; goto exec_finish; exec_sw_mmu: { rtl_sm (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 4, MMU_TRANSLATE); } s ++; goto exec_finish; exec_sh_mmu: { rtl_sm (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 2, MMU_TRANSLATE); } s ++; goto exec_finish; exec_sb_mmu: { rtl_sm (s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 1, MMU_TRANSLATE); }
# 3 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/exec.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 1
s ++; goto exec_finish; exec_jal: {
  rtl_li(s, ((&s->dest)->preg), (&s->src2)->imm);
  do { n -= s->idx_in_bb; s = s->tnext; is_ctrl = 
# 3 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 3 4
 1
# 3 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
 ; br_taken = 
# 3 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 3 4
 1
# 3 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
 ; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_jalr: {
  rtl_addi(s, &ls0, ((&s->src1)->preg), (&s->src2)->imm);
# 16 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
  rtl_li(s, ((&s->dest)->preg), s->snpc);

  difftest_skip_dut(1, 2);
  do { n -= s->idx_in_bb; s = jr_fetch(s, *(&ls0)); is_ctrl = 
# 19 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 3 4
 1
# 19 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
 ; br_taken = 
# 19 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 3 4
 1
# 19 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
 ; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_beq: {
  do { n -= s->idx_in_bb; is_ctrl = 
# 23 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 3 4
 1
# 23 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
 ; if (interpret_relop(RELOP_EQ, *((&s->src1)->preg), *((&s->src2)->preg))) { s = s->tnext; br_taken = 
# 23 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 3 4
 1
# 23 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
 ; } else s = s->ntnext; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_bne: {
  do { n -= s->idx_in_bb; is_ctrl = 
# 27 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 3 4
 1
# 27 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
 ; if (interpret_relop(RELOP_NE, *((&s->src1)->preg), *((&s->src2)->preg))) { s = s->tnext; br_taken = 
# 27 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 3 4
 1
# 27 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
 ; } else s = s->ntnext; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_blt: {
  do { n -= s->idx_in_bb; is_ctrl = 
# 31 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 3 4
 1
# 31 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
 ; if (interpret_relop(RELOP_LT, *((&s->src1)->preg), *((&s->src2)->preg))) { s = s->tnext; br_taken = 
# 31 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 3 4
 1
# 31 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
 ; } else s = s->ntnext; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_bge: {
  do { n -= s->idx_in_bb; is_ctrl = 
# 35 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 3 4
 1
# 35 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
 ; if (interpret_relop(RELOP_GE, *((&s->src1)->preg), *((&s->src2)->preg))) { s = s->tnext; br_taken = 
# 35 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 3 4
 1
# 35 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
 ; } else s = s->ntnext; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_bltu: {
  do { n -= s->idx_in_bb; is_ctrl = 
# 39 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 3 4
 1
# 39 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
 ; if (interpret_relop(RELOP_LTU, *((&s->src1)->preg), *((&s->src2)->preg))) { s = s->tnext; br_taken = 
# 39 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 3 4
 1
# 39 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
 ; } else s = s->ntnext; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_bgeu: {
  do { n -= s->idx_in_bb; is_ctrl = 
# 43 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 3 4
 1
# 43 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
 ; if (interpret_relop(RELOP_GEU, *((&s->src1)->preg), *((&s->src2)->preg))) { s = s->tnext; br_taken = 
# 43 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h" 3 4
 1
# 43 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/control.h"
 ; } else s = s->ntnext; goto end_of_bb; } while (0);
}
# 4 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/exec.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/fence.h" 1
s ++; goto exec_finish; exec_fence_i: {
  difftest_skip_dut(1, 2);
  rtl_hostcall(s, HOSTCALL_PRIV, 
# 3 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/fence.h" 3 4
                                ((void *)0)
# 3 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/fence.h"
                                    , 
# 3 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/fence.h" 3 4
                                      ((void *)0)
# 3 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/fence.h"
                                          , 
# 3 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/fence.h" 3 4
                                            ((void *)0)
# 3 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/fence.h"
                                                , -1);
  do { if (g_sys_state_flag) { s = (g_sys_state_flag & SYS_STATE_FLUSH_TCACHE) ? tcache_handle_flush(s->snpc) : s + 1; g_sys_state_flag = 0; goto end_of_loop; } } while (0);
}

s ++; goto exec_finish; exec_fence: {
  difftest_skip_dut(1, 2);
}
# 4 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvi/exec.h" 2
# 3 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-exec.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h" 1
# 19 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h"
s ++; goto exec_finish; exec_c_j: {
  do { n -= s->idx_in_bb; s = s->tnext; is_ctrl = 
# 20 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h" 3 4
 1
# 20 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h"
 ; br_taken = 
# 20 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h" 3 4
 1
# 20 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h"
 ; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_c_jr: {

  difftest_skip_dut(1, 2);
  do { n -= s->idx_in_bb; s = jr_fetch(s, *(((&s->src1)->preg))); is_ctrl = 
# 26 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h" 3 4
 1
# 26 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h"
 ; br_taken = 
# 26 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h" 3 4
 1
# 26 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h"
 ; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_c_jalr: {

  rtl_li(s, &cpu.gpr[1]._64, s->snpc);
  difftest_skip_dut(1, 2);
  do { n -= s->idx_in_bb; s = jr_fetch(s, *(((&s->src1)->preg))); is_ctrl = 
# 33 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h" 3 4
 1
# 33 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h"
 ; br_taken = 
# 33 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h" 3 4
 1
# 33 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h"
 ; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_c_beqz: {
  do { n -= s->idx_in_bb; is_ctrl = 
# 37 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h" 3 4
 1
# 37 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h"
 ; if (interpret_relop(RELOP_EQ, *((&s->src1)->preg), *(&rzero))) { s = s->tnext; br_taken = 
# 37 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h" 3 4
 1
# 37 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h"
 ; } else s = s->ntnext; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_c_bnez: {
  do { n -= s->idx_in_bb; is_ctrl = 
# 41 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h" 3 4
 1
# 41 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h"
 ; if (interpret_relop(RELOP_NE, *((&s->src1)->preg), *(&rzero))) { s = s->tnext; br_taken = 
# 41 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h" 3 4
 1
# 41 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvc/exec.h"
 ; } else s = s->ntnext; goto end_of_bb; } while (0);
}

s ++; goto exec_finish; exec_c_li: {
  rtl_li(s, ((&s->dest)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_c_addi: {
  rtl_addi(s, ((&s->dest)->preg), ((&s->dest)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_c_addiw: {
  rtl_addwi(s, ((&s->dest)->preg), ((&s->dest)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_c_slli: {
  rtl_shli(s, ((&s->dest)->preg), ((&s->dest)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_c_srli: {
  rtl_shri(s, ((&s->dest)->preg), ((&s->dest)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_c_srai: {
  rtl_sari(s, ((&s->dest)->preg), ((&s->dest)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_c_andi: {
  rtl_andi(s, ((&s->dest)->preg), ((&s->dest)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_c_mv: {
  rtl_mv(s, ((&s->dest)->preg), ((&s->src1)->preg));
}

s ++; goto exec_finish; exec_c_add: {
  rtl_add(s, ((&s->dest)->preg), ((&s->dest)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_c_and: {
  rtl_and(s, ((&s->dest)->preg), ((&s->dest)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_c_or: {
  rtl_or(s, ((&s->dest)->preg), ((&s->dest)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_c_xor: {
  rtl_xor(s, ((&s->dest)->preg), ((&s->dest)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_c_sub: {
  rtl_sub(s, ((&s->dest)->preg), ((&s->dest)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_c_addw: {
  rtl_addw(s, ((&s->dest)->preg), ((&s->dest)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_c_subw: {
  rtl_subw(s, ((&s->dest)->preg), ((&s->dest)->preg), ((&s->src2)->preg));
}
# 4 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-exec.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvm/exec.h" 1
s ++; goto exec_finish; exec_mul: {
  rtl_mulu_lo(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_mulh: {
  rtl_muls_hi(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_mulhu: {
  rtl_mulu_hi(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_mulhsu: {
# 28 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvm/exec.h"
  rtl_sari(s, &ls0, ((&s->src1)->preg), 63);
  rtl_and(s, &ls0, ((&s->src2)->preg), &ls0);
  rtl_mulu_hi(s, &ls1, ((&s->src1)->preg), ((&s->src2)->preg));
  rtl_sub(s, ((&s->dest)->preg), &ls1, &ls0);
}

s ++; goto exec_finish; exec_div: {

  if (*((&s->src2)->preg) == 0) {
    rtl_li(s, ((&s->dest)->preg), ~0lu);
  } else if (*((&s->src1)->preg) == 0x8000000000000000LL && *((&s->src2)->preg) == ~(word_t)0) {
    rtl_mv(s, ((&s->dest)->preg), ((&s->src1)->preg));
  } else

    rtl_divs_q(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_divu: {

  if (*((&s->src2)->preg) == 0) {
    rtl_li(s, ((&s->dest)->preg), ~0lu);
  } else

    rtl_divu_q(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_rem: {

  if (*((&s->src2)->preg) == 0) {
    rtl_mv(s, ((&s->dest)->preg), ((&s->src1)->preg));
  } else if (*((&s->src1)->preg) == 0x8000000000000000LL && *((&s->src2)->preg) == ~(word_t)0) {
    rtl_mv(s, ((&s->dest)->preg), (&rzero));
  } else

    rtl_divs_r(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_remu: {

  if (*((&s->src2)->preg) == 0) {
    rtl_mv(s, ((&s->dest)->preg), ((&s->src1)->preg));
  } else

    rtl_divu_r(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_mulw: {
  rtl_mulw(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
}

s ++; goto exec_finish; exec_divw: {

  rtl_sext(s, &ls0, ((&s->src1)->preg), 4);
  rtl_sext(s, &ls1, ((&s->src2)->preg), 4);
  if (*&ls1 == 0) {
    rtl_li(s, &ls0, ~0lu);
  } else if (*&ls0 == 0x80000000 && *&ls1 == ~(word_t)0) {

  } else {
    rtl_divs_q(s, &ls0, &ls0, &ls1);
  }
  rtl_sext(s, ((&s->dest)->preg), &ls0, 4);



}

s ++; goto exec_finish; exec_remw: {

  rtl_sext(s, &ls0, ((&s->src1)->preg), 4);
  rtl_sext(s, &ls1, ((&s->src2)->preg), 4);
  if (*&ls1 == 0) {

  } else if (*&ls0 == 0x80000000 && *&ls1 == ~(word_t)0) {
    rtl_mv(s, &ls0, (&rzero));
  } else {
    rtl_divs_r(s, &ls0, &ls0, &ls1);
  }
  rtl_sext(s, ((&s->dest)->preg), &ls0, 4);



}

s ++; goto exec_finish; exec_divuw: {

  rtl_zext(s, &ls0, ((&s->src1)->preg), 4);
  rtl_zext(s, &ls1, ((&s->src2)->preg), 4);
  if (*&ls1 == 0) {
    rtl_li(s, &ls0, ~0lu);
  } else {
    rtl_divu_q(s, &ls0, &ls0, &ls1);
  }
  rtl_sext(s, ((&s->dest)->preg), &ls0, 4);



}

s ++; goto exec_finish; exec_remuw: {

  rtl_zext(s, &ls0, ((&s->src1)->preg), 4);
  rtl_zext(s, &ls1, ((&s->src2)->preg), 4);
  if (*&ls1 == 0) {

  } else {
    rtl_divu_r(s, &ls0, &ls0, &ls1);
  }
  rtl_sext(s, ((&s->dest)->preg), &ls0, 4);



}
# 5 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-exec.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvf/exec.h" 1


void rtl_fclass(Decode *s, rtlreg_t *, rtlreg_t *, int);

s ++; goto exec_finish; exec_flw: {
  rtl_lm(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 4, MMU_DIRECT);
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32);
}

s ++; goto exec_finish; exec_fsw: {
  rtl_sm(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 4, MMU_DIRECT);
}

s ++; goto exec_finish; exec_flw_mmu: {
  rtl_lm(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 4, MMU_TRANSLATE);
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32);
}

s ++; goto exec_finish; exec_fsw_mmu: {
  rtl_funbox(s, &ls0, ((&s->dest)->preg));
  rtl_sm(s, &ls0, ((&s->src1)->preg), (&s->src2)->imm, 4, MMU_TRANSLATE);
}







s ++; goto exec_finish; exec_fadds: { rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_ADD) << 16) | (FPCALL_W32))); rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32); }
s ++; goto exec_finish; exec_fsubs: { rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_SUB) << 16) | (FPCALL_W32))); rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32); }
s ++; goto exec_finish; exec_fmuls: { rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_MUL) << 16) | (FPCALL_W32))); rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32); }
s ++; goto exec_finish; exec_fdivs: { rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_DIV) << 16) | (FPCALL_W32))); rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32); }
s ++; goto exec_finish; exec_fmins: { rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_MIN) << 16) | (FPCALL_W32))); rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32); }
s ++; goto exec_finish; exec_fmaxs: { rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_MAX) << 16) | (FPCALL_W32))); rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32); }

s ++; goto exec_finish; exec_fsqrts: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_SQRT) << 16) | (FPCALL_W32)));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32);
}

s ++; goto exec_finish; exec_fmadds: {
  rtl_mv(s, &ls0, &(cpu.fpr[check_reg_index(s->isa.instr.fp.funct5)]._64));
  rtl_hostcall(s, HOSTCALL_FP, &ls0, ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_MADD) << 16) | (FPCALL_W32)));
  rtl_fsr(s, ((&s->dest)->preg), &ls0, FPCALL_W32);
}

s ++; goto exec_finish; exec_fmsubs: {
  rtl_mv(s, &ls0, &(cpu.fpr[check_reg_index(s->isa.instr.fp.funct5)]._64));
  rtl_xori(s, &ls0, &ls0, ((uint64_t)1 << 31));
  rtl_hostcall(s, HOSTCALL_FP, &ls0, ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_MADD) << 16) | (FPCALL_W32)));
  rtl_fsr(s, ((&s->dest)->preg), &ls0, FPCALL_W32);
}

s ++; goto exec_finish; exec_fnmsubs: {
  rtl_mv(s, &ls0, &(cpu.fpr[check_reg_index(s->isa.instr.fp.funct5)]._64));
  rtl_xori(s, &ls1, ((&s->src1)->preg), ((uint64_t)1 << 31));
  rtl_hostcall(s, HOSTCALL_FP, &ls0, &ls1, ((&s->src2)->preg), (((FPCALL_MADD) << 16) | (FPCALL_W32)));
  rtl_fsr(s, ((&s->dest)->preg), &ls0, FPCALL_W32);
}

s ++; goto exec_finish; exec_fnmadds: {
  rtl_mv(s, &ls0, &(cpu.fpr[check_reg_index(s->isa.instr.fp.funct5)]._64));
  rtl_xori(s, &ls1, ((&s->src1)->preg), ((uint64_t)1 << 31));
  rtl_xori(s, &ls0, &ls0, ((uint64_t)1 << 31));
  rtl_hostcall(s, HOSTCALL_FP, &ls0, &ls1, ((&s->src2)->preg), (((FPCALL_MADD) << 16) | (FPCALL_W32)));
  rtl_fsr(s, ((&s->dest)->preg), &ls0, FPCALL_W32);
}

s ++; goto exec_finish; exec_fles: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_LE) << 16) | (FPCALL_W32)));
}

s ++; goto exec_finish; exec_flts: {
  rtl_mv(s, ((&s->dest)->preg), ((&s->src1)->preg));
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_LT) << 16) | (FPCALL_W32)));
}

s ++; goto exec_finish; exec_feqs: {
  rtl_mv(s, ((&s->dest)->preg), ((&s->src1)->preg));
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_EQ) << 16) | (FPCALL_W32)));
}

s ++; goto exec_finish; exec_fcvt_s_w: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_I32ToF) << 16) | (FPCALL_W32)));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32);
}

s ++; goto exec_finish; exec_fcvt_s_wu: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_U32ToF) << 16) | (FPCALL_W32)));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32);
}

s ++; goto exec_finish; exec_fcvt_s_l: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_I64ToF) << 16) | (FPCALL_W32)));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32);
}

s ++; goto exec_finish; exec_fcvt_s_lu: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_U64ToF) << 16) | (FPCALL_W32)));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32);
}

s ++; goto exec_finish; exec_fcvt_w_s: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_FToI32) << 16) | (FPCALL_W32)));
  rtl_sext(s, ((&s->dest)->preg), ((&s->dest)->preg), 4);
}

s ++; goto exec_finish; exec_fcvt_wu_s: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_FToU32) << 16) | (FPCALL_W32)));
  rtl_sext(s, ((&s->dest)->preg), ((&s->dest)->preg), 4);
}

s ++; goto exec_finish; exec_fcvt_l_s: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_FToI64) << 16) | (FPCALL_W32)));
}

s ++; goto exec_finish; exec_fcvt_lu_s: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_FToU64) << 16) | (FPCALL_W32)));
}

s ++; goto exec_finish; exec_fsgnjs: {
  rtl_funbox(s, &ls0, ((&s->src1)->preg));
  rtl_funbox(s, ((&s->dest)->preg), ((&s->src2)->preg));
  rtl_andi(s, &ls0, &ls0, ~((uint64_t)1 << 31));
  rtl_andi(s, ((&s->dest)->preg), ((&s->dest)->preg), ((uint64_t)1 << 31));
  rtl_or(s, ((&s->dest)->preg), &ls0, ((&s->dest)->preg));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32);
}

s ++; goto exec_finish; exec_fsgnjns: {
  rtl_funbox(s, &ls0, ((&s->src1)->preg));
  rtl_funbox(s, ((&s->dest)->preg), ((&s->src2)->preg));
  rtl_andi(s, &ls0, &ls0, ~((uint64_t)1 << 31));
  rtl_xori(s, ((&s->dest)->preg), ((&s->dest)->preg), ((uint64_t)1 << 31));
  rtl_andi(s, ((&s->dest)->preg), ((&s->dest)->preg), ((uint64_t)1 << 31));
  rtl_or(s, ((&s->dest)->preg), &ls0, ((&s->dest)->preg));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32);
}

s ++; goto exec_finish; exec_fsgnjxs: {
  rtl_funbox(s, &ls0, ((&s->src1)->preg));
  rtl_funbox(s, ((&s->dest)->preg), ((&s->src2)->preg));
  rtl_xor(s, ((&s->dest)->preg), &ls0, ((&s->dest)->preg));
  rtl_andi(s, &ls0, &ls0, ~((uint64_t)1 << 31));
  rtl_andi(s, ((&s->dest)->preg), ((&s->dest)->preg), ((uint64_t)1 << 31));
  rtl_or(s, ((&s->dest)->preg), &ls0, ((&s->dest)->preg));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32);
}

s ++; goto exec_finish; exec_fmv_x_w: {
  rtl_sext(s, ((&s->dest)->preg), ((&s->src1)->preg), 4);
}

s ++; goto exec_finish; exec_fmv_w_x: {
  rtl_fsr(s, ((&s->dest)->preg), ((&s->src1)->preg), FPCALL_W32);
}

s ++; goto exec_finish; exec_fclasss: {
  rtl_fclass(s, ((&s->dest)->preg), ((&s->src1)->preg), FPCALL_W32);
}
# 6 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-exec.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvd/exec.h" 1


s ++; goto exec_finish; exec_fld: {
  rtl_lm(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 8, MMU_DIRECT);
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64);
}

s ++; goto exec_finish; exec_fsd: {
  rtl_sm(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 8, MMU_DIRECT);
}

s ++; goto exec_finish; exec_fld_mmu: {
  rtl_lm(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 8, MMU_TRANSLATE);
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64);
}

s ++; goto exec_finish; exec_fsd_mmu: {
  rtl_sm(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, 8, MMU_TRANSLATE);
}

s ++; goto exec_finish; exec_faddd: { rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_ADD) << 16) | (FPCALL_W64))); rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64); }
s ++; goto exec_finish; exec_fsubd: { rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_SUB) << 16) | (FPCALL_W64))); rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64); }
s ++; goto exec_finish; exec_fmuld: { rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_MUL) << 16) | (FPCALL_W64))); rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64); }
s ++; goto exec_finish; exec_fdivd: { rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_DIV) << 16) | (FPCALL_W64))); rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64); }
s ++; goto exec_finish; exec_fmaxd: { rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_MAX) << 16) | (FPCALL_W64))); rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64); }
s ++; goto exec_finish; exec_fmind: { rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_MIN) << 16) | (FPCALL_W64))); rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64); }

s ++; goto exec_finish; exec_fsqrtd: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_SQRT) << 16) | (FPCALL_W64)));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64);
}

s ++; goto exec_finish; exec_fmaddd: {
  rtl_mv(s, &ls0, &(cpu.fpr[check_reg_index(s->isa.instr.fp.funct5)]._64));
  rtl_hostcall(s, HOSTCALL_FP, &ls0, ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_MADD) << 16) | (FPCALL_W64)));
  rtl_fsr(s, ((&s->dest)->preg), &ls0, FPCALL_W64);
}

s ++; goto exec_finish; exec_fmsubd: {
  rtl_mv(s, &ls0, &(cpu.fpr[check_reg_index(s->isa.instr.fp.funct5)]._64));
  rtl_xori(s, &ls0, &ls0, ((uint64_t)1 << 63));
  rtl_hostcall(s, HOSTCALL_FP, &ls0, ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_MADD) << 16) | (FPCALL_W64)));
  rtl_fsr(s, ((&s->dest)->preg), &ls0, FPCALL_W64);
}

s ++; goto exec_finish; exec_fnmsubd: {
  rtl_mv(s, &ls0, &(cpu.fpr[check_reg_index(s->isa.instr.fp.funct5)]._64));
  rtl_xori(s, &ls1, ((&s->src1)->preg), ((uint64_t)1 << 63));
  rtl_hostcall(s, HOSTCALL_FP, &ls0, &ls1, ((&s->src2)->preg), (((FPCALL_MADD) << 16) | (FPCALL_W64)));
  rtl_fsr(s, ((&s->dest)->preg), &ls0, FPCALL_W64);
}

s ++; goto exec_finish; exec_fnmaddd: {
  rtl_mv(s, &ls0, &(cpu.fpr[check_reg_index(s->isa.instr.fp.funct5)]._64));
  rtl_xori(s, &ls1, ((&s->src1)->preg), ((uint64_t)1 << 63));
  rtl_xori(s, &ls0, &ls0, ((uint64_t)1 << 63));
  rtl_hostcall(s, HOSTCALL_FP, &ls0, &ls1, ((&s->src2)->preg), (((FPCALL_MADD) << 16) | (FPCALL_W64)));
  rtl_fsr(s, ((&s->dest)->preg), &ls0, FPCALL_W64);
}

s ++; goto exec_finish; exec_fled: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_LE) << 16) | (FPCALL_W64)));
}

s ++; goto exec_finish; exec_fltd: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_LT) << 16) | (FPCALL_W64)));
}

s ++; goto exec_finish; exec_feqd: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg), (((FPCALL_EQ) << 16) | (FPCALL_W64)));
}

s ++; goto exec_finish; exec_fcvt_d_w: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_I32ToF) << 16) | (FPCALL_W64)));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64);
}

s ++; goto exec_finish; exec_fcvt_d_wu: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_U32ToF) << 16) | (FPCALL_W64)));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64);
}

s ++; goto exec_finish; exec_fcvt_d_l: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_I64ToF) << 16) | (FPCALL_W64)));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64);
}

s ++; goto exec_finish; exec_fcvt_d_lu: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_U64ToF) << 16) | (FPCALL_W64)));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64);
}

s ++; goto exec_finish; exec_fcvt_w_d: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_FToI32) << 16) | (FPCALL_W64)));
  rtl_sext(s, ((&s->dest)->preg), ((&s->dest)->preg), 4);
}

s ++; goto exec_finish; exec_fcvt_wu_d: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_FToU32) << 16) | (FPCALL_W64)));
  rtl_sext(s, ((&s->dest)->preg), ((&s->dest)->preg), 4);
}

s ++; goto exec_finish; exec_fcvt_l_d: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_FToI64) << 16) | (FPCALL_W64)));
}

s ++; goto exec_finish; exec_fcvt_lu_d: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_FToU64) << 16) | (FPCALL_W64)));
}

s ++; goto exec_finish; exec_fcvt_d_s: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_F32ToF64) << 16) | (FPCALL_W64)));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64);
}

s ++; goto exec_finish; exec_fcvt_s_d: {
  rtl_hostcall(s, HOSTCALL_FP, ((&s->dest)->preg), ((&s->src1)->preg), (&rzero), (((FPCALL_F64ToF32) << 16) | (FPCALL_W64)));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W32);
}

s ++; goto exec_finish; exec_fsgnjd: {
  rtl_andi(s, &ls0, ((&s->src1)->preg), ~((uint64_t)1 << 63));
  rtl_andi(s, ((&s->dest)->preg), ((&s->src2)->preg), ((uint64_t)1 << 63));
  rtl_or(s, ((&s->dest)->preg), &ls0, ((&s->dest)->preg));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64);
}

s ++; goto exec_finish; exec_fsgnjnd: {
  rtl_andi(s, &ls0, ((&s->src1)->preg), ~((uint64_t)1 << 63));
  rtl_xori(s, ((&s->dest)->preg), ((&s->src2)->preg), ((uint64_t)1 << 63));
  rtl_andi(s, ((&s->dest)->preg), ((&s->dest)->preg), ((uint64_t)1 << 63));
  rtl_or(s, ((&s->dest)->preg), &ls0, ((&s->dest)->preg));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64);
}

s ++; goto exec_finish; exec_fsgnjxd: {
  rtl_andi(s, &ls0, ((&s->src1)->preg), ~((uint64_t)1 << 63));
  rtl_xor(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg));
  rtl_andi(s, ((&s->dest)->preg), ((&s->dest)->preg), ((uint64_t)1 << 63));
  rtl_or(s, ((&s->dest)->preg), &ls0, ((&s->dest)->preg));
  rtl_fsr(s, ((&s->dest)->preg), ((&s->dest)->preg), FPCALL_W64);
}

s ++; goto exec_finish; exec_fmv_x_d: {
  rtl_sext(s, ((&s->dest)->preg), ((&s->src1)->preg), 8);
}

s ++; goto exec_finish; exec_fmv_d_x: {
  rtl_fsr(s, ((&s->dest)->preg), ((&s->src1)->preg), FPCALL_W64);
}

s ++; goto exec_finish; exec_fclassd: {
  rtl_fclass(s, ((&s->dest)->preg), ((&s->src1)->preg), FPCALL_W64);
}
# 7 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-exec.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rva/exec.h" 1
# 24 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rva/exec.h"
s ++; goto exec_finish; exec_atomic: { extern void rtl_amo_slow_path(Decode *s, rtlreg_t *dest, const rtlreg_t *src1, const rtlreg_t *src2); rtl_amo_slow_path(s, ((&s->dest)->preg), ((&s->src1)->preg), ((&s->src2)->preg)); }
# 8 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-exec.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/priv/exec.h" 1
# 23 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/priv/exec.h"
s ++; goto exec_finish; exec_system: { extern int rtl_sys_slow_path(Decode *s, rtlreg_t *dest, const rtlreg_t *src1, uint32_t id, rtlreg_t *jpc); int jmp = rtl_sys_slow_path(s, ((&s->dest)->preg), ((&s->src1)->preg), (&s->src2)->imm, &ls0); if (jmp) do { n -= s->idx_in_bb; s = jr_fetch(s, *(&ls0)); if (g_sys_state_flag & SYS_STATE_FLUSH_TCACHE) { s = tcache_handle_flush(s->pc); g_sys_state_flag = 0; } goto end_of_loop; } while (0); else do { if (g_sys_state_flag) { s = (g_sys_state_flag & SYS_STATE_FLUSH_TCACHE) ? tcache_handle_flush(s->snpc) : s + 1; g_sys_state_flag = 0; goto end_of_loop; } } while (0); }
# 9 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-exec.h" 2

# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvb/exec.h" 1

# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvb/rvintrin.h" 1
# 38 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvb/rvintrin.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 1 3 4
# 194 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 26 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/limits.h" 2 3 4
# 183 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 184 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 188 "/usr/include/limits.h" 2 3 4
# 195 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 2 3 4
# 39 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvb/rvintrin.h" 2


int32_t _rv32_clz(int32_t rs1) { return rs1 ? __builtin_clz(rs1) : 32; }
int64_t _rv64_clz(int64_t rs1) { return rs1 ? __builtin_clzll(rs1) : 64; }
int32_t _rv32_ctz(int32_t rs1) { return rs1 ? __builtin_ctz(rs1) : 32; }
int64_t _rv64_ctz(int64_t rs1) { return rs1 ? __builtin_ctzll(rs1) : 64; }
int32_t _rv32_cpop(int32_t rs1) { return __builtin_popcount(rs1); }
int64_t _rv64_cpop(int64_t rs1) { return __builtin_popcountll(rs1); }

int64_t _rv64_sext_b(int64_t rs1) { return rs1 << (64-8) >> (64-8); }
int64_t _rv64_sext_h(int64_t rs1) { return rs1 << (64-16) >> (64-16); }
int64_t _rv64_zext_h(int64_t rs1) { return (uint64_t)rs1 << (64-16) >> (64-16); }

int64_t _rv64_min (int64_t rs1, int64_t rs2) { return rs1 < rs2 ? rs1 : rs2; }
int64_t _rv64_minu(int64_t rs1, int64_t rs2) { return (uint64_t)rs1 < (uint64_t)rs2 ? rs1 : rs2; }
int64_t _rv64_max (int64_t rs1, int64_t rs2) { return rs1 > rs2 ? rs1 : rs2; }
int64_t _rv64_maxu(int64_t rs1, int64_t rs2) { return (uint64_t)rs1 > (uint64_t)rs2 ? rs1 : rs2; }

int64_t _rv64_bset (int64_t rs1, int64_t rs2) { return rs1 | (1LL << (rs2 & 63)); }
int64_t _rv64_bclr (int64_t rs1, int64_t rs2) { return rs1 & ~(1LL << (rs2 & 63)); }
int64_t _rv64_binv (int64_t rs1, int64_t rs2) { return rs1 ^ (1LL << (rs2 & 63)); }
int64_t _rv64_bext (int64_t rs1, int64_t rs2) { return 1LL & (rs1 >> (rs2 & 63)); }

int64_t _rv64_sll (int64_t rs1, int64_t rs2) { return rs1 << (rs2 & 63); }
int64_t _rv64_srl (int64_t rs1, int64_t rs2) { return (uint64_t)rs1 >> (rs2 & 63); }
int64_t _rv64_rol (int64_t rs1, int64_t rs2) { return _rv64_sll(rs1, rs2) | _rv64_srl(rs1, -rs2); }
int64_t _rv64_ror (int64_t rs1, int64_t rs2) { return _rv64_srl(rs1, rs2) | _rv64_sll(rs1, -rs2); }

int32_t _rv32_sll (int32_t rs1, int32_t rs2) { return rs1 << (rs2 & 31); }
int32_t _rv32_srl (int32_t rs1, int32_t rs2) { return (uint32_t)rs1 >> (rs2 & 31); }
int32_t _rv32_rol (int32_t rs1, int32_t rs2) { return _rv32_sll(rs1, rs2) | _rv32_srl(rs1, -rs2); }
int32_t _rv32_ror (int32_t rs1, int32_t rs2) { return _rv32_srl(rs1, rs2) | _rv32_sll(rs1, -rs2); }

int32_t _rv32_pack(int32_t rs1, int32_t rs2) { return (rs1 & 0x0000ffff) | (rs2 << 16); }
int64_t _rv64_pack(int64_t rs1, int64_t rs2) { return (rs1 & 0xffffffffLL) | (rs2 << 32); }
int64_t _rv64_packh(int64_t rs1, int64_t rs2) { return (rs1 & 0xff) | ((rs2 & 0xff) << 8); }

int64_t _rv64_grev(int64_t rs1, int64_t rs2)
{
 uint64_t x = rs1;
 int shamt = rs2 & 63;
 if (shamt & 1) x = ((x & 0x5555555555555555LL) << 1) | ((x & 0xAAAAAAAAAAAAAAAALL) >> 1);
 if (shamt & 2) x = ((x & 0x3333333333333333LL) << 2) | ((x & 0xCCCCCCCCCCCCCCCCLL) >> 2);
 if (shamt & 4) x = ((x & 0x0F0F0F0F0F0F0F0FLL) << 4) | ((x & 0xF0F0F0F0F0F0F0F0LL) >> 4);
 if (shamt & 8) x = ((x & 0x00FF00FF00FF00FFLL) << 8) | ((x & 0xFF00FF00FF00FF00LL) >> 8);
 if (shamt & 16) x = ((x & 0x0000FFFF0000FFFFLL) << 16) | ((x & 0xFFFF0000FFFF0000LL) >> 16);
 if (shamt & 32) x = ((x & 0x00000000FFFFFFFFLL) << 32) | ((x & 0xFFFFFFFF00000000LL) >> 32);
 return x;
}

int64_t _rv64_gorc(int64_t rs1, int64_t rs2)
{
 uint64_t x = rs1;
 int shamt = rs2 & 63;
 if (shamt & 1) x |= ((x & 0x5555555555555555LL) << 1) | ((x & 0xAAAAAAAAAAAAAAAALL) >> 1);
 if (shamt & 2) x |= ((x & 0x3333333333333333LL) << 2) | ((x & 0xCCCCCCCCCCCCCCCCLL) >> 2);
 if (shamt & 4) x |= ((x & 0x0F0F0F0F0F0F0F0FLL) << 4) | ((x & 0xF0F0F0F0F0F0F0F0LL) >> 4);
 if (shamt & 8) x |= ((x & 0x00FF00FF00FF00FFLL) << 8) | ((x & 0xFF00FF00FF00FF00LL) >> 8);
 if (shamt & 16) x |= ((x & 0x0000FFFF0000FFFFLL) << 16) | ((x & 0xFFFF0000FFFF0000LL) >> 16);
 if (shamt & 32) x |= ((x & 0x00000000FFFFFFFFLL) << 32) | ((x & 0xFFFFFFFF00000000LL) >> 32);
 return x;
}


int64_t _rv64_clmul(int64_t rs1, int64_t rs2)
{
 uint64_t a = rs1, b = rs2, x = 0;
 for (int i = 0; i < 64; i++)
  if ((b >> i) & 1)
   x ^= a << i;
 return x;
}

int64_t _rv64_clmulh(int64_t rs1, int64_t rs2)
{
 uint64_t a = rs1, b = rs2, x = 0;
 for (int i = 1; i < 64; i++)
  if ((b >> i) & 1)
   x ^= a >> (64-i);
 return x;
}

int64_t _rv64_clmulr(int64_t rs1, int64_t rs2)
{
 uint64_t a = rs1, b = rs2, x = 0;
 for (int i = 0; i < 64; i++)
  if ((b >> i) & 1)
   x ^= a >> (63-i);
 return x;
}

int64_t xperm(int64_t rs1, int64_t rs2, int sz_log2)
{
 int64_t r = 0;
 int64_t sz = 1LL << sz_log2;
 int64_t mask = (1LL << sz) - 1;
 for (int i = 0; i < 64; i += sz) {
  int64_t pos = ((rs2 >> i) & mask) << sz_log2;
  if (pos < 64)
  r |= ((rs1 >> pos) & mask) << i;
 }
 return r;
}
int64_t _rv64_xpermn (int64_t rs1, int64_t rs2) { return xperm(rs1, rs2, 2); }
int64_t _rv64_xpermb (int64_t rs1, int64_t rs2) { return xperm(rs1, rs2, 3); }



long _rv_andn(long rs1, long rs2) { return rs1 & ~rs2; }
long _rv_orn (long rs1, long rs2) { return rs1 | ~rs2; }
long _rv_xnor(long rs1, long rs2) { return rs1 ^ ~rs2; }

long _rv_clz (long rs1) { return _rv64_clz (rs1); }
long _rv_ctz (long rs1) { return _rv64_ctz (rs1); }
long _rv_cpop (long rs1) { return _rv64_cpop (rs1); }
long _rv_sext_b (long rs1) { return _rv64_sext_b (rs1); }
long _rv_sext_h (long rs1) { return _rv64_sext_h (rs1); }
long _rv_zext_h (long rs1) { return _rv64_zext_h (rs1); }

long _rv_min (long rs1, long rs2) { return _rv64_min (rs1, rs2); }
long _rv_minu (long rs1, long rs2) { return _rv64_minu (rs1, rs2); }
long _rv_max (long rs1, long rs2) { return _rv64_max (rs1, rs2); }
long _rv_maxu (long rs1, long rs2) { return _rv64_maxu (rs1, rs2); }
long _rv_bset (long rs1, long rs2) { return _rv64_bset (rs1, rs2); }
long _rv_bclr (long rs1, long rs2) { return _rv64_bclr (rs1, rs2); }
long _rv_binv (long rs1, long rs2) { return _rv64_binv (rs1, rs2); }
long _rv_bext (long rs1, long rs2) { return _rv64_bext (rs1, rs2); }

long _rv_rol (long rs1, long rs2) { return _rv64_rol (rs1, rs2); }
long _rv_ror (long rs1, long rs2) { return _rv64_ror (rs1, rs2); }
long _rv_grev (long rs1, long rs2) { return _rv64_grev (rs1, rs2); }
long _rv_gorc (long rs1, long rs2) { return _rv64_gorc (rs1, rs2); }

long _rv_clmul (long rs1, long rs2) { return _rv64_clmul (rs1, rs2); }
long _rv_clmulh (long rs1, long rs2) { return _rv64_clmulh (rs1, rs2); }
long _rv_clmulr (long rs1, long rs2) { return _rv64_clmulr (rs1, rs2); }

long _rv_pack (long rs1, long rs2) { return _rv64_pack (rs1, rs2); }
long _rv_packh (long rs1, long rs2) { return _rv64_packh (rs1, rs2); }
long _rv_xpermn (long rs1, long rs2) { return _rv64_xpermn (rs1, rs2); }
long _rv_xpermb (long rs1, long rs2) { return _rv64_xpermb (rs1, rs2); }






long _rv_rev8(long rs1) { return _rv_grev (rs1, 56); }
long _rv_revb(long rs1) { return _rv_grev (rs1, 7); }





long _rv_orc_b(long rs1) { return _rv_gorc (rs1, 7); }
# 3 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvb/exec.h" 2

s ++; goto exec_finish; exec_clz: {
  *((&s->dest)->preg) = _rv_clz(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_ctz: {
  *((&s->dest)->preg) = _rv_ctz(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_cpop: {
  *((&s->dest)->preg) = _rv_cpop(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_sext_b: {
  *((&s->dest)->preg) = _rv_sext_b(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_sext_h: {
  *((&s->dest)->preg) = _rv_sext_h(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_zext_h: {
  *((&s->dest)->preg) = _rv_zext_h(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_rev8: {
  *((&s->dest)->preg) = _rv_rev8(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_revb: {
  *((&s->dest)->preg) = _rv_revb(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_orc_b: {
  *((&s->dest)->preg) = _rv_orc_b(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_clzw: {
  *((&s->dest)->preg) = _rv32_clz(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_ctzw: {
  *((&s->dest)->preg) = _rv32_ctz(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_cpopw: {
  *((&s->dest)->preg) = _rv32_cpop(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_andn: {
  *((&s->dest)->preg) = _rv_andn(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_orn: {
  *((&s->dest)->preg) = _rv_orn(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_xnor: {
  *((&s->dest)->preg) = _rv_xnor(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_rol: {
  *((&s->dest)->preg) = _rv_rol(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_rolw: {
  *((&s->dest)->preg) = _rv32_rol(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_ror: {
  *((&s->dest)->preg) = _rv_ror(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_rori: {
  *((&s->dest)->preg) = _rv_ror(*((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_rorw: {
  *((&s->dest)->preg) = _rv32_ror(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_roriw: {
  *((&s->dest)->preg) = _rv32_ror(*((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_bclr: {
  *((&s->dest)->preg) = _rv_bclr(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_bclri: {
  *((&s->dest)->preg) = _rv_bclr(*((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_bset: {
  *((&s->dest)->preg) = _rv_bset(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_bseti: {
  *((&s->dest)->preg) = _rv_bset(*((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_binv: {
  *((&s->dest)->preg) = _rv_binv(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_binvi: {
  *((&s->dest)->preg) = _rv_binv(*((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_bext: {
  *((&s->dest)->preg) = _rv_bext(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_bexti: {
  *((&s->dest)->preg) = _rv_bext(*((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_clmul: {
  *((&s->dest)->preg) = _rv_clmul(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_clmulr: {
  *((&s->dest)->preg) = _rv_clmulr(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_clmulh: {
  *((&s->dest)->preg) = _rv_clmulh(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_min: {
  *((&s->dest)->preg) = _rv_min(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_minu: {
  *((&s->dest)->preg) = _rv_minu(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_max: {
  *((&s->dest)->preg) = _rv_max(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_maxu: {
  *((&s->dest)->preg) = _rv_maxu(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_pack: {
  *((&s->dest)->preg) = _rv_pack(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_packw: {
  *((&s->dest)->preg) = _rv32_pack(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_packh: {
  *((&s->dest)->preg) = _rv_packh(*((&s->src1)->preg), *((&s->src2)->preg));
}


s ++; goto exec_finish; exec_xpermn: {
  *((&s->dest)->preg) = _rv_xpermn(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_xpermb: {
  *((&s->dest)->preg) = _rv_xpermb(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_adduw: {
  *((&s->dest)->preg) = *((&s->src2)->preg) + (uint64_t)(uint32_t)*((&s->src1)->preg);
}

s ++; goto exec_finish; exec_slliuw: {
  *((&s->dest)->preg) = (uint64_t)(uint32_t)*((&s->src1)->preg) << ((&s->src2)->imm & 0x1f);
}

s ++; goto exec_finish; exec_sh1add: {
  *((&s->dest)->preg) = (*((&s->src1)->preg) << 1) + *((&s->src2)->preg);
}

s ++; goto exec_finish; exec_sh2add: {
  *((&s->dest)->preg) = (*((&s->src1)->preg) << 2) + *((&s->src2)->preg);
}

s ++; goto exec_finish; exec_sh3add: {
  *((&s->dest)->preg) = (*((&s->src1)->preg) << 3) + *((&s->src2)->preg);
}

s ++; goto exec_finish; exec_sh1adduw: {
  *((&s->dest)->preg) = ((uint64_t)(uint32_t)*((&s->src1)->preg) << 1) + *((&s->src2)->preg);
}

s ++; goto exec_finish; exec_sh2adduw: {
  *((&s->dest)->preg) = ((uint64_t)(uint32_t)*((&s->src1)->preg) << 2) + *((&s->src2)->preg);
}

s ++; goto exec_finish; exec_sh3adduw: {
  *((&s->dest)->preg) = ((uint64_t)(uint32_t)*((&s->src1)->preg) << 3) + *((&s->src2)->preg);
}
# 11 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-exec.h" 2


# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvk/exec.h" 1


# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvk/crypto_impl.h" 1



# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 1 3 4
# 5 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvk/crypto_impl.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvk/aes_common.h" 1

uint8_t AES_ENC_SBOX[]= {
  0x63, 0x7C, 0x77, 0x7B, 0xF2, 0x6B, 0x6F, 0xC5,
  0x30, 0x01, 0x67, 0x2B, 0xFE, 0xD7, 0xAB, 0x76,
  0xCA, 0x82, 0xC9, 0x7D, 0xFA, 0x59, 0x47, 0xF0,
  0xAD, 0xD4, 0xA2, 0xAF, 0x9C, 0xA4, 0x72, 0xC0,
  0xB7, 0xFD, 0x93, 0x26, 0x36, 0x3F, 0xF7, 0xCC,
  0x34, 0xA5, 0xE5, 0xF1, 0x71, 0xD8, 0x31, 0x15,
  0x04, 0xC7, 0x23, 0xC3, 0x18, 0x96, 0x05, 0x9A,
  0x07, 0x12, 0x80, 0xE2, 0xEB, 0x27, 0xB2, 0x75,
  0x09, 0x83, 0x2C, 0x1A, 0x1B, 0x6E, 0x5A, 0xA0,
  0x52, 0x3B, 0xD6, 0xB3, 0x29, 0xE3, 0x2F, 0x84,
  0x53, 0xD1, 0x00, 0xED, 0x20, 0xFC, 0xB1, 0x5B,
  0x6A, 0xCB, 0xBE, 0x39, 0x4A, 0x4C, 0x58, 0xCF,
  0xD0, 0xEF, 0xAA, 0xFB, 0x43, 0x4D, 0x33, 0x85,
  0x45, 0xF9, 0x02, 0x7F, 0x50, 0x3C, 0x9F, 0xA8,
  0x51, 0xA3, 0x40, 0x8F, 0x92, 0x9D, 0x38, 0xF5,
  0xBC, 0xB6, 0xDA, 0x21, 0x10, 0xFF, 0xF3, 0xD2,
  0xCD, 0x0C, 0x13, 0xEC, 0x5F, 0x97, 0x44, 0x17,
  0xC4, 0xA7, 0x7E, 0x3D, 0x64, 0x5D, 0x19, 0x73,
  0x60, 0x81, 0x4F, 0xDC, 0x22, 0x2A, 0x90, 0x88,
  0x46, 0xEE, 0xB8, 0x14, 0xDE, 0x5E, 0x0B, 0xDB,
  0xE0, 0x32, 0x3A, 0x0A, 0x49, 0x06, 0x24, 0x5C,
  0xC2, 0xD3, 0xAC, 0x62, 0x91, 0x95, 0xE4, 0x79,
  0xE7, 0xC8, 0x37, 0x6D, 0x8D, 0xD5, 0x4E, 0xA9,
  0x6C, 0x56, 0xF4, 0xEA, 0x65, 0x7A, 0xAE, 0x08,
  0xBA, 0x78, 0x25, 0x2E, 0x1C, 0xA6, 0xB4, 0xC6,
  0xE8, 0xDD, 0x74, 0x1F, 0x4B, 0xBD, 0x8B, 0x8A,
  0x70, 0x3E, 0xB5, 0x66, 0x48, 0x03, 0xF6, 0x0E,
  0x61, 0x35, 0x57, 0xB9, 0x86, 0xC1, 0x1D, 0x9E,
  0xE1, 0xF8, 0x98, 0x11, 0x69, 0xD9, 0x8E, 0x94,
  0x9B, 0x1E, 0x87, 0xE9, 0xCE, 0x55, 0x28, 0xDF,
  0x8C, 0xA1, 0x89, 0x0D, 0xBF, 0xE6, 0x42, 0x68,
  0x41, 0x99, 0x2D, 0x0F, 0xB0, 0x54, 0xBB, 0x16
};

uint8_t AES_DEC_SBOX[] = {
  0x52, 0x09, 0x6A, 0xD5, 0x30, 0x36, 0xA5, 0x38,
  0xBF, 0x40, 0xA3, 0x9E, 0x81, 0xF3, 0xD7, 0xFB,
  0x7C, 0xE3, 0x39, 0x82, 0x9B, 0x2F, 0xFF, 0x87,
  0x34, 0x8E, 0x43, 0x44, 0xC4, 0xDE, 0xE9, 0xCB,
  0x54, 0x7B, 0x94, 0x32, 0xA6, 0xC2, 0x23, 0x3D,
  0xEE, 0x4C, 0x95, 0x0B, 0x42, 0xFA, 0xC3, 0x4E,
  0x08, 0x2E, 0xA1, 0x66, 0x28, 0xD9, 0x24, 0xB2,
  0x76, 0x5B, 0xA2, 0x49, 0x6D, 0x8B, 0xD1, 0x25,
  0x72, 0xF8, 0xF6, 0x64, 0x86, 0x68, 0x98, 0x16,
  0xD4, 0xA4, 0x5C, 0xCC, 0x5D, 0x65, 0xB6, 0x92,
  0x6C, 0x70, 0x48, 0x50, 0xFD, 0xED, 0xB9, 0xDA,
  0x5E, 0x15, 0x46, 0x57, 0xA7, 0x8D, 0x9D, 0x84,
  0x90, 0xD8, 0xAB, 0x00, 0x8C, 0xBC, 0xD3, 0x0A,
  0xF7, 0xE4, 0x58, 0x05, 0xB8, 0xB3, 0x45, 0x06,
  0xD0, 0x2C, 0x1E, 0x8F, 0xCA, 0x3F, 0x0F, 0x02,
  0xC1, 0xAF, 0xBD, 0x03, 0x01, 0x13, 0x8A, 0x6B,
  0x3A, 0x91, 0x11, 0x41, 0x4F, 0x67, 0xDC, 0xEA,
  0x97, 0xF2, 0xCF, 0xCE, 0xF0, 0xB4, 0xE6, 0x73,
  0x96, 0xAC, 0x74, 0x22, 0xE7, 0xAD, 0x35, 0x85,
  0xE2, 0xF9, 0x37, 0xE8, 0x1C, 0x75, 0xDF, 0x6E,
  0x47, 0xF1, 0x1A, 0x71, 0x1D, 0x29, 0xC5, 0x89,
  0x6F, 0xB7, 0x62, 0x0E, 0xAA, 0x18, 0xBE, 0x1B,
  0xFC, 0x56, 0x3E, 0x4B, 0xC6, 0xD2, 0x79, 0x20,
  0x9A, 0xDB, 0xC0, 0xFE, 0x78, 0xCD, 0x5A, 0xF4,
  0x1F, 0xDD, 0xA8, 0x33, 0x88, 0x07, 0xC7, 0x31,
  0xB1, 0x12, 0x10, 0x59, 0x27, 0x80, 0xEC, 0x5F,
  0x60, 0x51, 0x7F, 0xA9, 0x19, 0xB5, 0x4A, 0x0D,
  0x2D, 0xE5, 0x7A, 0x9F, 0x93, 0xC9, 0x9C, 0xEF,
  0xA0, 0xE0, 0x3B, 0x4D, 0xAE, 0x2A, 0xF5, 0xB0,
  0xC8, 0xEB, 0xBB, 0x3C, 0x83, 0x53, 0x99, 0x61,
  0x17, 0x2B, 0x04, 0x7E, 0xBA, 0x77, 0xD6, 0x26,
  0xE1, 0x69, 0x14, 0x63, 0x55, 0x21, 0x0C, 0x7D
};
# 6 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvk/crypto_impl.h" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvk/sm4_common.h" 1


static const uint8_t sm4_sbox[256] = {
 0xD6, 0x90, 0xE9, 0xFE, 0xCC, 0xE1, 0x3D, 0xB7, 0x16, 0xB6, 0x14, 0xC2,
 0x28, 0xFB, 0x2C, 0x05, 0x2B, 0x67, 0x9A, 0x76, 0x2A, 0xBE, 0x04, 0xC3,
 0xAA, 0x44, 0x13, 0x26, 0x49, 0x86, 0x06, 0x99, 0x9C, 0x42, 0x50, 0xF4,
 0x91, 0xEF, 0x98, 0x7A, 0x33, 0x54, 0x0B, 0x43, 0xED, 0xCF, 0xAC, 0x62,
 0xE4, 0xB3, 0x1C, 0xA9, 0xC9, 0x08, 0xE8, 0x95, 0x80, 0xDF, 0x94, 0xFA,
 0x75, 0x8F, 0x3F, 0xA6, 0x47, 0x07, 0xA7, 0xFC, 0xF3, 0x73, 0x17, 0xBA,
 0x83, 0x59, 0x3C, 0x19, 0xE6, 0x85, 0x4F, 0xA8, 0x68, 0x6B, 0x81, 0xB2,
 0x71, 0x64, 0xDA, 0x8B, 0xF8, 0xEB, 0x0F, 0x4B, 0x70, 0x56, 0x9D, 0x35,
 0x1E, 0x24, 0x0E, 0x5E, 0x63, 0x58, 0xD1, 0xA2, 0x25, 0x22, 0x7C, 0x3B,
 0x01, 0x21, 0x78, 0x87, 0xD4, 0x00, 0x46, 0x57, 0x9F, 0xD3, 0x27, 0x52,
 0x4C, 0x36, 0x02, 0xE7, 0xA0, 0xC4, 0xC8, 0x9E, 0xEA, 0xBF, 0x8A, 0xD2,
 0x40, 0xC7, 0x38, 0xB5, 0xA3, 0xF7, 0xF2, 0xCE, 0xF9, 0x61, 0x15, 0xA1,
 0xE0, 0xAE, 0x5D, 0xA4, 0x9B, 0x34, 0x1A, 0x55, 0xAD, 0x93, 0x32, 0x30,
 0xF5, 0x8C, 0xB1, 0xE3, 0x1D, 0xF6, 0xE2, 0x2E, 0x82, 0x66, 0xCA, 0x60,
 0xC0, 0x29, 0x23, 0xAB, 0x0D, 0x53, 0x4E, 0x6F, 0xD5, 0xDB, 0x37, 0x45,
 0xDE, 0xFD, 0x8E, 0x2F, 0x03, 0xFF, 0x6A, 0x72, 0x6D, 0x6C, 0x5B, 0x51,
 0x8D, 0x1B, 0xAF, 0x92, 0xBB, 0xDD, 0xBC, 0x7F, 0x11, 0xD9, 0x5C, 0x41,
 0x1F, 0x10, 0x5A, 0xD8, 0x0A, 0xC1, 0x31, 0x88, 0xA5, 0xCD, 0x7B, 0xBD,
 0x2D, 0x74, 0xD0, 0x12, 0xB8, 0xE5, 0xB4, 0xB0, 0x89, 0x69, 0x97, 0x4A,
 0x0C, 0x96, 0x77, 0x7E, 0x65, 0xB9, 0xF1, 0x09, 0xC5, 0x6E, 0xC6, 0x84,
 0x18, 0xF0, 0x7D, 0xEC, 0x3A, 0xDC, 0x4D, 0x20, 0x79, 0xEE, 0x5F, 0x3E,
 0xD7, 0xCB, 0x39, 0x48
};
# 7 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvk/crypto_impl.h" 2


int32_t sha256sum0 (int32_t rs1) { return _rv32_ror(rs1, 2) ^ _rv32_ror(rs1, 13) ^ _rv32_ror(rs1, 22); }
int32_t sha256sum1 (int32_t rs1) { return _rv32_ror(rs1, 6) ^ _rv32_ror(rs1, 11) ^ _rv32_ror(rs1, 25); }
int32_t sha256sig0 (int32_t rs1) { return _rv32_ror(rs1, 7) ^ _rv32_ror(rs1, 18) ^ ((uint32_t)rs1 >> 3); }
int32_t sha256sig1 (int32_t rs1) { return _rv32_ror(rs1, 17) ^ _rv32_ror(rs1, 19) ^ ((uint32_t)rs1 >> 10); }

int64_t sha512sum0 (int64_t rs1) { return _rv64_ror(rs1, 28) ^ _rv64_ror(rs1, 34) ^ _rv64_ror(rs1, 39); }
int64_t sha512sum1 (int64_t rs1) { return _rv64_ror(rs1, 14) ^ _rv64_ror(rs1, 18) ^ _rv64_ror(rs1, 41); }
int64_t sha512sig0 (int64_t rs1) { return _rv64_ror(rs1, 1) ^ _rv64_ror(rs1, 8) ^ ((uint64_t)rs1 >> 7); }
int64_t sha512sig1 (int64_t rs1) { return _rv64_ror(rs1, 19) ^ _rv64_ror(rs1, 61) ^ ((uint64_t)rs1 >> 6); }

int32_t sm3p0 (int32_t rs1) { return rs1 ^ _rv32_rol(rs1, 9) ^ _rv32_rol(rs1, 17); }
int32_t sm3p1 (int32_t rs1) { return rs1 ^ _rv32_rol(rs1, 15) ^ _rv32_rol(rs1, 23); }

int64_t aes64es (int64_t rs1, int64_t rs2)
{
    uint64_t temp = ( (((rs1 >> 24) & 0xFF) << 56) | (((rs2 >> 48) & 0xFF) << 48) | (((rs2 >> 8) & 0xFF) << 40) | (((rs1 >> 32) & 0xFF) << 32) | (((rs2 >> 56) & 0xFF) << 24) | (((rs2 >> 16) & 0xFF) << 16) | (((rs1 >> 40) & 0xFF) << 8) | (((rs1 >> 0) & 0xFF) << 0) );
    return ((uint64_t)AES_ENC_SBOX[(temp >> 0) & 0xFF] << 0) |
            ((uint64_t)AES_ENC_SBOX[(temp >> 8) & 0xFF] << 8) |
            ((uint64_t)AES_ENC_SBOX[(temp >> 16) & 0xFF] << 16) |
            ((uint64_t)AES_ENC_SBOX[(temp >> 24) & 0xFF] << 24) |
            ((uint64_t)AES_ENC_SBOX[(temp >> 32) & 0xFF] << 32) |
            ((uint64_t)AES_ENC_SBOX[(temp >> 40) & 0xFF] << 40) |
            ((uint64_t)AES_ENC_SBOX[(temp >> 48) & 0xFF] << 48) |
            ((uint64_t)AES_ENC_SBOX[(temp >> 56) & 0xFF] << 56) ;
}

int64_t aes64esm (int64_t rs1, int64_t rs2)
{
    uint64_t temp = aes64es(rs1, rs2);
    uint32_t col_0 = temp & 0xFFFFFFFF;
    uint32_t col_1 = temp >> 32;
    col_0 = ( ( ((col_0 >> (8*2)) & 0xFF) ^ ((col_0 >> (8*1)) & 0xFF) ^ (( ( ( (3) & 0x1 ) ? (((col_0 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (3) & 0x2 ) ? ((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (3) & 0x4 ) ? ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (3) & 0x8 ) ? ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (2) & 0x1 ) ? (((col_0 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (2) & 0x2 ) ? ((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (2) & 0x4 ) ? ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (2) & 0x8 ) ? ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 24 | ( ((col_0 >> (8*1)) & 0xFF) ^ ((col_0 >> (8*0)) & 0xFF) ^ (( ( ( (3) & 0x1 ) ? (((col_0 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (3) & 0x2 ) ? ((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (3) & 0x4 ) ? ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (3) & 0x8 ) ? ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (2) & 0x1 ) ? (((col_0 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (2) & 0x2 ) ? ((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (2) & 0x4 ) ? ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (2) & 0x8 ) ? ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 16 | ( ((col_0 >> (8*0)) & 0xFF) ^ ((col_0 >> (8*3)) & 0xFF) ^ (( ( ( (3) & 0x1 ) ? (((col_0 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (3) & 0x2 ) ? ((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (3) & 0x4 ) ? ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (3) & 0x8 ) ? ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (2) & 0x1 ) ? (((col_0 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (2) & 0x2 ) ? ((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (2) & 0x4 ) ? ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (2) & 0x8 ) ? ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 8 | ( ((col_0 >> (8*3)) & 0xFF) ^ ((col_0 >> (8*2)) & 0xFF) ^ (( ( ( (3) & 0x1 ) ? (((col_0 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (3) & 0x2 ) ? ((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (3) & 0x4 ) ? ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (3) & 0x8 ) ? ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (2) & 0x1 ) ? (((col_0 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (2) & 0x2 ) ? ((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (2) & 0x4 ) ? ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (2) & 0x8 ) ? ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 0 );
    col_1 = ( ( ((col_1 >> (8*2)) & 0xFF) ^ ((col_1 >> (8*1)) & 0xFF) ^ (( ( ( (3) & 0x1 ) ? (((col_1 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (3) & 0x2 ) ? ((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (3) & 0x4 ) ? ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (3) & 0x8 ) ? ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (2) & 0x1 ) ? (((col_1 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (2) & 0x2 ) ? ((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (2) & 0x4 ) ? ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (2) & 0x8 ) ? ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 24 | ( ((col_1 >> (8*1)) & 0xFF) ^ ((col_1 >> (8*0)) & 0xFF) ^ (( ( ( (3) & 0x1 ) ? (((col_1 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (3) & 0x2 ) ? ((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (3) & 0x4 ) ? ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (3) & 0x8 ) ? ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (2) & 0x1 ) ? (((col_1 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (2) & 0x2 ) ? ((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (2) & 0x4 ) ? ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (2) & 0x8 ) ? ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 16 | ( ((col_1 >> (8*0)) & 0xFF) ^ ((col_1 >> (8*3)) & 0xFF) ^ (( ( ( (3) & 0x1 ) ? (((col_1 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (3) & 0x2 ) ? ((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (3) & 0x4 ) ? ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (3) & 0x8 ) ? ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (2) & 0x1 ) ? (((col_1 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (2) & 0x2 ) ? ((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (2) & 0x4 ) ? ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (2) & 0x8 ) ? ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 8 | ( ((col_1 >> (8*3)) & 0xFF) ^ ((col_1 >> (8*2)) & 0xFF) ^ (( ( ( (3) & 0x1 ) ? (((col_1 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (3) & 0x2 ) ? ((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (3) & 0x4 ) ? ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (3) & 0x8 ) ? ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (2) & 0x1 ) ? (((col_1 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (2) & 0x2 ) ? ((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (2) & 0x4 ) ? ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (2) & 0x8 ) ? ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 0 );
    return ((uint64_t)col_1 << 32) | col_0;
}

int64_t aes64ds (int64_t rs1, int64_t rs2)
{
    uint64_t temp = ( (((rs2 >> 24) & 0xFF) << 56) | (((rs2 >> 48) & 0xFF) << 48) | (((rs1 >> 8) & 0xFF) << 40) | (((rs1 >> 32) & 0xFF) << 32) | (((rs1 >> 56) & 0xFF) << 24) | (((rs2 >> 16) & 0xFF) << 16) | (((rs2 >> 40) & 0xFF) << 8) | (((rs1 >> 0) & 0xFF) << 0) );
    return ((uint64_t)AES_DEC_SBOX[(temp >> 0) & 0xFF] << 0) |
            ((uint64_t)AES_DEC_SBOX[(temp >> 8) & 0xFF] << 8) |
            ((uint64_t)AES_DEC_SBOX[(temp >> 16) & 0xFF] << 16) |
            ((uint64_t)AES_DEC_SBOX[(temp >> 24) & 0xFF] << 24) |
            ((uint64_t)AES_DEC_SBOX[(temp >> 32) & 0xFF] << 32) |
            ((uint64_t)AES_DEC_SBOX[(temp >> 40) & 0xFF] << 40) |
            ((uint64_t)AES_DEC_SBOX[(temp >> 48) & 0xFF] << 48) |
            ((uint64_t)AES_DEC_SBOX[(temp >> 56) & 0xFF] << 56) ;
}

int64_t aes64dsm (int64_t rs1, int64_t rs2)
{
    uint64_t temp = aes64ds(rs1, rs2);
    uint32_t col_0 = temp & 0xFFFFFFFF;
    uint32_t col_1 = temp >> 32;
    col_0 = ( ( (( ( ( (0x9) & 0x1 ) ? (((col_0 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (0x9) & 0x2 ) ? ((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x4 ) ? ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x8 ) ? ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xd) & 0x1 ) ? (((col_0 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (0xd) & 0x2 ) ? ((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x4 ) ? ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x8 ) ? ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xb) & 0x1 ) ? (((col_0 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (0xb) & 0x2 ) ? ((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x4 ) ? ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x8 ) ? ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xe) & 0x1 ) ? (((col_0 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (0xe) & 0x2 ) ? ((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x4 ) ? ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x8 ) ? ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 24 | ( (( ( ( (0x9) & 0x1 ) ? (((col_0 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (0x9) & 0x2 ) ? ((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x4 ) ? ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x8 ) ? ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xd) & 0x1 ) ? (((col_0 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (0xd) & 0x2 ) ? ((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x4 ) ? ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x8 ) ? ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xb) & 0x1 ) ? (((col_0 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (0xb) & 0x2 ) ? ((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x4 ) ? ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x8 ) ? ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xe) & 0x1 ) ? (((col_0 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (0xe) & 0x2 ) ? ((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x4 ) ? ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x8 ) ? ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 16 | ( (( ( ( (0x9) & 0x1 ) ? (((col_0 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (0x9) & 0x2 ) ? ((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x4 ) ? ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x8 ) ? ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xd) & 0x1 ) ? (((col_0 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (0xd) & 0x2 ) ? ((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x4 ) ? ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x8 ) ? ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xb) & 0x1 ) ? (((col_0 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (0xb) & 0x2 ) ? ((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x4 ) ? ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x8 ) ? ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xe) & 0x1 ) ? (((col_0 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (0xe) & 0x2 ) ? ((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x4 ) ? ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x8 ) ? ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 8 | ( (( ( ( (0x9) & 0x1 ) ? (((col_0 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (0x9) & 0x2 ) ? ((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x4 ) ? ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x8 ) ? ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xd) & 0x1 ) ? (((col_0 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (0xd) & 0x2 ) ? ((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x4 ) ? ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x8 ) ? ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xb) & 0x1 ) ? (((col_0 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (0xb) & 0x2 ) ? ((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x4 ) ? ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x8 ) ? ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xe) & 0x1 ) ? (((col_0 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (0xe) & 0x2 ) ? ((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x4 ) ? ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x8 ) ? ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 0 );
    col_1 = ( ( (( ( ( (0x9) & 0x1 ) ? (((col_1 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (0x9) & 0x2 ) ? ((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x4 ) ? ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x8 ) ? ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xd) & 0x1 ) ? (((col_1 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (0xd) & 0x2 ) ? ((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x4 ) ? ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x8 ) ? ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xb) & 0x1 ) ? (((col_1 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (0xb) & 0x2 ) ? ((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x4 ) ? ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x8 ) ? ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xe) & 0x1 ) ? (((col_1 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (0xe) & 0x2 ) ? ((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x4 ) ? ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x8 ) ? ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 24 | ( (( ( ( (0x9) & 0x1 ) ? (((col_1 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (0x9) & 0x2 ) ? ((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x4 ) ? ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x8 ) ? ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xd) & 0x1 ) ? (((col_1 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (0xd) & 0x2 ) ? ((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x4 ) ? ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x8 ) ? ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xb) & 0x1 ) ? (((col_1 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (0xb) & 0x2 ) ? ((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x4 ) ? ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x8 ) ? ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xe) & 0x1 ) ? (((col_1 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (0xe) & 0x2 ) ? ((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x4 ) ? ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x8 ) ? ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 16 | ( (( ( ( (0x9) & 0x1 ) ? (((col_1 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (0x9) & 0x2 ) ? ((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x4 ) ? ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x8 ) ? ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xd) & 0x1 ) ? (((col_1 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (0xd) & 0x2 ) ? ((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x4 ) ? ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x8 ) ? ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xb) & 0x1 ) ? (((col_1 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (0xb) & 0x2 ) ? ((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x4 ) ? ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x8 ) ? ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xe) & 0x1 ) ? (((col_1 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (0xe) & 0x2 ) ? ((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x4 ) ? ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x8 ) ? ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 8 | ( (( ( ( (0x9) & 0x1 ) ? (((col_1 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (0x9) & 0x2 ) ? ((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x4 ) ? ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x8 ) ? ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xd) & 0x1 ) ? (((col_1 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (0xd) & 0x2 ) ? ((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x4 ) ? ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x8 ) ? ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xb) & 0x1 ) ? (((col_1 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (0xb) & 0x2 ) ? ((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x4 ) ? ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x8 ) ? ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xe) & 0x1 ) ? (((col_1 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (0xe) & 0x2 ) ? ((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x4 ) ? ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x8 ) ? ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 0 );
    return ((uint64_t)col_1 << 32) | col_0;
}

int64_t aes64im (int64_t rs1)
{
    uint32_t col_0 = rs1 & 0xFFFFFFFF;
    uint32_t col_1 = rs1 >> 32;
    col_0 = ( ( (( ( ( (0x9) & 0x1 ) ? (((col_0 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (0x9) & 0x2 ) ? ((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x4 ) ? ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x8 ) ? ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xd) & 0x1 ) ? (((col_0 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (0xd) & 0x2 ) ? ((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x4 ) ? ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x8 ) ? ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xb) & 0x1 ) ? (((col_0 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (0xb) & 0x2 ) ? ((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x4 ) ? ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x8 ) ? ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xe) & 0x1 ) ? (((col_0 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (0xe) & 0x2 ) ? ((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x4 ) ? ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x8 ) ? ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 24 | ( (( ( ( (0x9) & 0x1 ) ? (((col_0 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (0x9) & 0x2 ) ? ((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x4 ) ? ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x8 ) ? ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xd) & 0x1 ) ? (((col_0 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (0xd) & 0x2 ) ? ((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x4 ) ? ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x8 ) ? ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xb) & 0x1 ) ? (((col_0 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (0xb) & 0x2 ) ? ((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x4 ) ? ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x8 ) ? ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xe) & 0x1 ) ? (((col_0 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (0xe) & 0x2 ) ? ((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x4 ) ? ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x8 ) ? ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 16 | ( (( ( ( (0x9) & 0x1 ) ? (((col_0 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (0x9) & 0x2 ) ? ((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x4 ) ? ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x8 ) ? ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xd) & 0x1 ) ? (((col_0 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (0xd) & 0x2 ) ? ((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x4 ) ? ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x8 ) ? ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xb) & 0x1 ) ? (((col_0 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (0xb) & 0x2 ) ? ((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x4 ) ? ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x8 ) ? ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xe) & 0x1 ) ? (((col_0 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (0xe) & 0x2 ) ? ((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x4 ) ? ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x8 ) ? ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 8 | ( (( ( ( (0x9) & 0x1 ) ? (((col_0 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (0x9) & 0x2 ) ? ((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x4 ) ? ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x8 ) ? ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*3)) & 0xFF) << 1) ^ ((((col_0 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xd) & 0x1 ) ? (((col_0 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (0xd) & 0x2 ) ? ((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x4 ) ? ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x8 ) ? ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*2)) & 0xFF) << 1) ^ ((((col_0 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xb) & 0x1 ) ? (((col_0 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (0xb) & 0x2 ) ? ((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x4 ) ? ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x8 ) ? ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*1)) & 0xFF) << 1) ^ ((((col_0 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xe) & 0x1 ) ? (((col_0 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (0xe) & 0x2 ) ? ((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x4 ) ? ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x8 ) ? ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_0 >> (8*0)) & 0xFF) << 1) ^ ((((col_0 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 0 );
    col_1 = ( ( (( ( ( (0x9) & 0x1 ) ? (((col_1 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (0x9) & 0x2 ) ? ((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x4 ) ? ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x8 ) ? ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xd) & 0x1 ) ? (((col_1 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (0xd) & 0x2 ) ? ((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x4 ) ? ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x8 ) ? ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xb) & 0x1 ) ? (((col_1 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (0xb) & 0x2 ) ? ((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x4 ) ? ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x8 ) ? ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xe) & 0x1 ) ? (((col_1 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (0xe) & 0x2 ) ? ((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x4 ) ? ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x8 ) ? ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 24 | ( (( ( ( (0x9) & 0x1 ) ? (((col_1 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (0x9) & 0x2 ) ? ((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x4 ) ? ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x8 ) ? ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xd) & 0x1 ) ? (((col_1 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (0xd) & 0x2 ) ? ((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x4 ) ? ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x8 ) ? ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xb) & 0x1 ) ? (((col_1 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (0xb) & 0x2 ) ? ((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x4 ) ? ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x8 ) ? ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xe) & 0x1 ) ? (((col_1 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (0xe) & 0x2 ) ? ((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x4 ) ? ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x8 ) ? ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 16 | ( (( ( ( (0x9) & 0x1 ) ? (((col_1 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (0x9) & 0x2 ) ? ((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x4 ) ? ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x8 ) ? ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xd) & 0x1 ) ? (((col_1 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (0xd) & 0x2 ) ? ((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x4 ) ? ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x8 ) ? ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xb) & 0x1 ) ? (((col_1 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (0xb) & 0x2 ) ? ((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x4 ) ? ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x8 ) ? ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xe) & 0x1 ) ? (((col_1 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (0xe) & 0x2 ) ? ((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x4 ) ? ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x8 ) ? ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 8 | ( (( ( ( (0x9) & 0x1 ) ? (((col_1 >> (8*3)) & 0xFF)) : 0 ) ^ ( ( (0x9) & 0x2 ) ? ((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x4 ) ? ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0x9) & 0x8 ) ? ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*3)) & 0xFF) << 1) ^ ((((col_1 >> (8*3)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xd) & 0x1 ) ? (((col_1 >> (8*2)) & 0xFF)) : 0 ) ^ ( ( (0xd) & 0x2 ) ? ((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x4 ) ? ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xd) & 0x8 ) ? ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*2)) & 0xFF) << 1) ^ ((((col_1 >> (8*2)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xb) & 0x1 ) ? (((col_1 >> (8*1)) & 0xFF)) : 0 ) ^ ( ( (0xb) & 0x2 ) ? ((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x4 ) ? ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xb) & 0x8 ) ? ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*1)) & 0xFF) << 1) ^ ((((col_1 >> (8*1)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ^ (( ( ( (0xe) & 0x1 ) ? (((col_1 >> (8*0)) & 0xFF)) : 0 ) ^ ( ( (0xe) & 0x2 ) ? ((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x4 ) ? ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) ^ ( ( (0xe) & 0x8 ) ? ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) << 1) ^ ((((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0)) << 1) ^ ((((((col_1 >> (8*0)) & 0xFF) << 1) ^ ((((col_1 >> (8*0)) & 0xFF)&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0))&0x80) ? 0x1b : 0)) : 0 ) )&0xFF) ) << 0 );
    return ((uint64_t)col_1 << 32) | col_0;
}

int64_t aes64ks1i (int64_t rs1, int64_t rs2)
{
    uint8_t round_consts [10] = {
        0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36
    };

    uint32_t temp = (rs1 >> 32) & 0xFFFFFFFF;
    uint8_t enc_rcon = rs2 & 0xF;
    uint8_t rcon = 0;

    if(enc_rcon != 0xA) {
        temp = (temp >> 8) | (temp << 24);
        rcon = round_consts[enc_rcon];
    }

    temp = ((uint32_t)AES_ENC_SBOX[(temp >> 24) & 0xFF] << 24) |
            ((uint32_t)AES_ENC_SBOX[(temp >> 16) & 0xFF] << 16) |
            ((uint32_t)AES_ENC_SBOX[(temp >> 8) & 0xFF] << 8) |
            ((uint32_t)AES_ENC_SBOX[(temp >> 0) & 0xFF] << 0) ;

    temp ^= rcon;
    return ((uint64_t)temp << 32) | temp;
}

int64_t aes64ks2 (int64_t rs1, int64_t rs2)
{
    uint32_t lo = (rs1 >> 32) ^ rs2;
    uint32_t hi = (rs2 >> 32) ^ lo;
    return ((uint64_t)hi << 32) | lo;
}

int32_t sm4ed (int32_t rs1, int32_t rs2, uint8_t funct7)
{
    uint8_t bs = (funct7 >> 5) << 3;
    uint32_t sb_in = ((uint32_t)rs2 >> bs) & 0xFF;
    uint32_t sb_out = sm4_sbox[sb_in];

    uint32_t linear = sb_out ^ (sb_out << 8) ^
                                (sb_out << 2) ^
                                (sb_out << 18) ^
                                ((sb_out & 0x3f) << 26) ^
                                ((sb_out & 0xC0) << 10) ;

    uint32_t rotl = (linear << bs) | (linear >> (32-bs));

    return rotl ^ rs1;
}

int32_t sm4ks (int32_t rs1, int32_t rs2, uint8_t funct7)
{
    uint8_t bs = (funct7 >> 5) << 3;
    uint32_t sb_in = ((uint32_t)rs2 >> bs) & 0xFF;
    uint32_t sb_out = sm4_sbox[sb_in];

    uint32_t linear = sb_out ^ ((sb_out & 0x07) << 29) ^
                               ((sb_out & 0xFE) << 7) ^
                               ((sb_out & 0x01) << 23) ^
                               ((sb_out & 0xF8) << 13) ;

    uint32_t rotl = (linear << bs) | (linear >> (32-bs));

    return rotl ^ rs1;
}
# 4 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/rvk/exec.h" 2

s ++; goto exec_finish; exec_aes64es: {
  *((&s->dest)->preg) = aes64es(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_aes64esm: {
  *((&s->dest)->preg) = aes64esm(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_aes64ds: {
  *((&s->dest)->preg) = aes64ds(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_aes64dsm: {
  *((&s->dest)->preg) = aes64dsm(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_aes64im: {
  *((&s->dest)->preg) = aes64im(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_aes64ks1i: {
  *((&s->dest)->preg) = aes64ks1i(*((&s->src1)->preg), (&s->src2)->imm);
}

s ++; goto exec_finish; exec_aes64ks2: {
  *((&s->dest)->preg) = aes64ks2(*((&s->src1)->preg), *((&s->src2)->preg));
}

s ++; goto exec_finish; exec_sha256sum0: {
  *((&s->dest)->preg) = sha256sum0(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_sha256sum1: {
  *((&s->dest)->preg) = sha256sum1(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_sha256sig0: {
  *((&s->dest)->preg) = sha256sig0(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_sha256sig1: {
  *((&s->dest)->preg) = sha256sig1(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_sha512sum0: {
  *((&s->dest)->preg) = sha512sum0(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_sha512sum1: {
  *((&s->dest)->preg) = sha512sum1(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_sha512sig0: {
  *((&s->dest)->preg) = sha512sig0(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_sha512sig1: {
  *((&s->dest)->preg) = sha512sig1(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_sm3p0: {
  *((&s->dest)->preg) = sm3p0(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_sm3p1: {
  *((&s->dest)->preg) = sm3p1(*((&s->src1)->preg));
}

s ++; goto exec_finish; exec_sm4ed: {
  *((&s->dest)->preg) = sm4ed(*((&s->src1)->preg), *((&s->src2)->preg), s->isa.instr.r.funct7);
}

s ++; goto exec_finish; exec_sm4ks: {
  *((&s->dest)->preg) = sm4ks(*((&s->src1)->preg), *((&s->src2)->preg), s->isa.instr.r.funct7);
}
# 14 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-exec.h" 2




# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/special.h" 1
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/../local-include/intr.h" 1





enum {
  EX_IAM,
  EX_IAF,
  EX_II,
  EX_BP,
  EX_LAM,
  EX_LAF,
  EX_SAM,
  EX_SAF,
  EX_ECU,
  EX_ECS,
  EX_RS0,
  EX_ECM,
  EX_IPF,
  EX_LPF,
  EX_RS1,
  EX_SPF,
};





word_t raise_intr(word_t NO, vaddr_t epc);


# 31 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/../local-include/intr.h" 3 4
_Bool 
# 31 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/../local-include/intr.h"
    intr_deleg_S(word_t exceptionNO);
# 2 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/special.h" 2


s ++; goto exec_finish; exec_inv: {
  save_globals(s);
  rtl_hostcall(s, HOSTCALL_INV, 
# 6 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/special.h" 3 4
                               ((void *)0)
# 6 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/special.h"
                                   , 
# 6 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/special.h" 3 4
                                     ((void *)0)
# 6 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/special.h"
                                         , 
# 6 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/special.h" 3 4
                                           ((void *)0)
# 6 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/special.h"
                                               , 0);
  longjmp_exec(NEMU_EXEC_END);
}

s ++; goto exec_finish; exec_rt_inv: {
  save_globals(s);
  longjmp_exception(EX_II);
}

s ++; goto exec_finish; exec_nemu_trap: {
  save_globals(s);
  if (cpu.gpr[10]._64 == 0x100) {
      extern void disable_time_intr();
      disable_time_intr();
  } else if (cpu.gpr[10]._64 == 0x101) {
    if (!profiling_started && !wait_manual_uniform_cpt) {
      reset_inst_counters();
    }

  } else {
      rtl_hostcall(s, HOSTCALL_EXIT,
# 26 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/special.h" 3 4
                                   ((void *)0)
# 26 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/special.h"
                                       , &cpu.gpr[10]._64, 
# 26 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/special.h" 3 4
                                                           ((void *)0)
# 26 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../instr/special.h"
                                                               , 0);
      longjmp_exec(NEMU_EXEC_END);
  }
}
# 18 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/isa-exec.h" 2
# 255 "src/cpu/cpu-exec.c" 2



s ++; goto exec_finish; exec_nemu_decode: {
  s = tcache_decode(s);
  continue;
}

end_of_bb:
    n_remain = n;
    ;


    if (is_ctrl) {
      uint64_t abs_inst_count = per_bb_profile(prev_s, s, br_taken);
      do { if (dflag_trace_bb == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "prev pc = 0x%lx, pc = 0x%lx" "\33[0m\n", "src/cpu/cpu-exec.c", 270, __func__, prev_s->pc, s->pc); ; } while (0); if (dflag_trace_bb == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "prev pc = 0x%lx, pc = 0x%lx" "\33[0m\n", "src/cpu/cpu-exec.c", 270, __func__, prev_s->pc, s->pc); ; } while (0); if (dflag_trace_bb == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "prev pc = 0x%lx, pc = 0x%lx" "\33[0m\n", "src/cpu/cpu-exec.c", 270, __func__, prev_s->pc, s->pc); ; } while (0); if (dflag_trace_bb == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "prev pc = 0x%lx, pc = 0x%lx" "\33[0m\n", "src/cpu/cpu-exec.c", 270, __func__, prev_s->pc, s->pc); ; } while (0); if (dflag_trace_bb == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "prev pc = 0x%lx, pc = 0x%lx" "\33[0m\n", "src/cpu/cpu-exec.c", 270, __func__, prev_s->pc, s->pc); ; } while (0); if (dflag_trace_bb == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "prev pc = 0x%lx, pc = 0x%lx" "\33[0m\n", "src/cpu/cpu-exec.c", 270, __func__, prev_s->pc, s->pc); ; } while (0); if (dflag_trace_bb == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "prev pc = 0x%lx, pc = 0x%lx" "\33[0m\n", "src/cpu/cpu-exec.c", 270, __func__, prev_s->pc, s->pc); ; } while (0); if (dflag_trace_bb == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "prev pc = 0x%lx, pc = 0x%lx" "\33[0m\n", "src/cpu/cpu-exec.c", 270, __func__, prev_s->pc, s->pc); ; } while (0); if (dflag_trace_bb == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "prev pc = 0x%lx, pc = 0x%lx" "\33[0m\n", "src/cpu/cpu-exec.c", 270, __func__, prev_s->pc, s->pc); ; } while (0); if (dflag_trace_bb == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "prev pc = 0x%lx, pc = 0x%lx" "\33[0m\n", "src/cpu/cpu-exec.c", 270, __func__, prev_s->pc, s->pc); ; } while (0); } while (0);
      do { if (dflag_trace_bb == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executed %ld instructions in total, pc: 0x%lx\n" "\33[0m\n", "src/cpu/cpu-exec.c", 271, __func__, (int64_t) abs_inst_count, prev_s->pc); ; } while (0); if (dflag_trace_bb == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executed %ld instructions in total, pc: 0x%lx\n" "\33[0m\n", "src/cpu/cpu-exec.c", 271, __func__, (int64_t) abs_inst_count, prev_s->pc); ; } while (0); if (dflag_trace_bb == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executed %ld instructions in total, pc: 0x%lx\n" "\33[0m\n", "src/cpu/cpu-exec.c", 271, __func__, (int64_t) abs_inst_count, prev_s->pc); ; } while (0); if (dflag_trace_bb == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executed %ld instructions in total, pc: 0x%lx\n" "\33[0m\n", "src/cpu/cpu-exec.c", 271, __func__, (int64_t) abs_inst_count, prev_s->pc); ; } while (0); if (dflag_trace_bb == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executed %ld instructions in total, pc: 0x%lx\n" "\33[0m\n", "src/cpu/cpu-exec.c", 271, __func__, (int64_t) abs_inst_count, prev_s->pc); ; } while (0); if (dflag_trace_bb == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executed %ld instructions in total, pc: 0x%lx\n" "\33[0m\n", "src/cpu/cpu-exec.c", 271, __func__, (int64_t) abs_inst_count, prev_s->pc); ; } while (0); if (dflag_trace_bb == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executed %ld instructions in total, pc: 0x%lx\n" "\33[0m\n", "src/cpu/cpu-exec.c", 271, __func__, (int64_t) abs_inst_count, prev_s->pc); ; } while (0); if (dflag_trace_bb == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executed %ld instructions in total, pc: 0x%lx\n" "\33[0m\n", "src/cpu/cpu-exec.c", 271, __func__, (int64_t) abs_inst_count, prev_s->pc); ; } while (0); if (dflag_trace_bb == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executed %ld instructions in total, pc: 0x%lx\n" "\33[0m\n", "src/cpu/cpu-exec.c", 271, __func__, (int64_t) abs_inst_count, prev_s->pc); ; } while (0); if (dflag_trace_bb == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executed %ld instructions in total, pc: 0x%lx\n" "\33[0m\n", "src/cpu/cpu-exec.c", 271, __func__, (int64_t) abs_inst_count, prev_s->pc); ; } while (0); } while (0);
    }

    if (__builtin_expect(n <= 0, 0)) break;
    if (__builtin_expect(manual_cpt_quit, 0)) break;



    exec_finish:;
# 295 "src/cpu/cpu-exec.c"
    is_ctrl = 
# 295 "src/cpu/cpu-exec.c" 3 4
             0
# 295 "src/cpu/cpu-exec.c"
                  ;


    save_globals(s);
    debug_difftest(this_s, s);
  }

end_of_loop:

  do { if (dflag_exit == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "end_of_loop: prev pc = 0x%lx, pc = 0x%lx, total insts: %lu, remain: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 305, __func__, prev_s->pc, s->pc, get_abs_instr_count(), n_remain_total); ; } while (0); if (dflag_exit == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "end_of_loop: prev pc = 0x%lx, pc = 0x%lx, total insts: %lu, remain: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 305, __func__, prev_s->pc, s->pc, get_abs_instr_count(), n_remain_total); ; } while (0); if (dflag_exit == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "end_of_loop: prev pc = 0x%lx, pc = 0x%lx, total insts: %lu, remain: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 305, __func__, prev_s->pc, s->pc, get_abs_instr_count(), n_remain_total); ; } while (0); if (dflag_exit == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "end_of_loop: prev pc = 0x%lx, pc = 0x%lx, total insts: %lu, remain: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 305, __func__, prev_s->pc, s->pc, get_abs_instr_count(), n_remain_total); ; } while (0); if (dflag_exit == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "end_of_loop: prev pc = 0x%lx, pc = 0x%lx, total insts: %lu, remain: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 305, __func__, prev_s->pc, s->pc, get_abs_instr_count(), n_remain_total); ; } while (0); if (dflag_exit == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "end_of_loop: prev pc = 0x%lx, pc = 0x%lx, total insts: %lu, remain: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 305, __func__, prev_s->pc, s->pc, get_abs_instr_count(), n_remain_total); ; } while (0); if (dflag_exit == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "end_of_loop: prev pc = 0x%lx, pc = 0x%lx, total insts: %lu, remain: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 305, __func__, prev_s->pc, s->pc, get_abs_instr_count(), n_remain_total); ; } while (0); if (dflag_exit == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "end_of_loop: prev pc = 0x%lx, pc = 0x%lx, total insts: %lu, remain: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 305, __func__, prev_s->pc, s->pc, get_abs_instr_count(), n_remain_total); ; } while (0); if (dflag_exit == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "end_of_loop: prev pc = 0x%lx, pc = 0x%lx, total insts: %lu, remain: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 305, __func__, prev_s->pc, s->pc, get_abs_instr_count(), n_remain_total); ; } while (0); if (dflag_exit == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "end_of_loop: prev pc = 0x%lx, pc = 0x%lx, total insts: %lu, remain: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 305, __func__, prev_s->pc, s->pc, get_abs_instr_count(), n_remain_total); ; } while (0); } while (0)
                                                                ;
  if (is_ctrl) {
    per_bb_profile(prev_s, s, br_taken);
  }

  debug_difftest(this_s, s);
  prev_s = s;
  return n;
}
# 346 "src/cpu/cpu-exec.c"
void fetch_decode(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  ;
  int idx = isa_fetch_decode(s);
  do { if (dflag_trace_inst_dasm == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "0x%016lx" ":   %s%*.s%s" "\33[0m\n", "src/cpu/cpu-exec.c", 352, __func__, s->pc, log_bytebuf, 50 - (12 + 3 * (int)(s->snpc - s->pc)), "", log_asmbuf); ; } while (0); if (dflag_trace_inst_dasm == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "0x%016lx" ":   %s%*.s%s" "\33[0m\n", "src/cpu/cpu-exec.c", 352, __func__, s->pc, log_bytebuf, 50 - (12 + 3 * (int)(s->snpc - s->pc)), "", log_asmbuf); ; } while (0); if (dflag_trace_inst_dasm == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "0x%016lx" ":   %s%*.s%s" "\33[0m\n", "src/cpu/cpu-exec.c", 352, __func__, s->pc, log_bytebuf, 50 - (12 + 3 * (int)(s->snpc - s->pc)), "", log_asmbuf); ; } while (0); if (dflag_trace_inst_dasm == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "0x%016lx" ":   %s%*.s%s" "\33[0m\n", "src/cpu/cpu-exec.c", 352, __func__, s->pc, log_bytebuf, 50 - (12 + 3 * (int)(s->snpc - s->pc)), "", log_asmbuf); ; } while (0); if (dflag_trace_inst_dasm == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "0x%016lx" ":   %s%*.s%s" "\33[0m\n", "src/cpu/cpu-exec.c", 352, __func__, s->pc, log_bytebuf, 50 - (12 + 3 * (int)(s->snpc - s->pc)), "", log_asmbuf); ; } while (0); if (dflag_trace_inst_dasm == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "0x%016lx" ":   %s%*.s%s" "\33[0m\n", "src/cpu/cpu-exec.c", 352, __func__, s->pc, log_bytebuf, 50 - (12 + 3 * (int)(s->snpc - s->pc)), "", log_asmbuf); ; } while (0); if (dflag_trace_inst_dasm == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "0x%016lx" ":   %s%*.s%s" "\33[0m\n", "src/cpu/cpu-exec.c", 352, __func__, s->pc, log_bytebuf, 50 - (12 + 3 * (int)(s->snpc - s->pc)), "", log_asmbuf); ; } while (0); if (dflag_trace_inst_dasm == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "0x%016lx" ":   %s%*.s%s" "\33[0m\n", "src/cpu/cpu-exec.c", 352, __func__, s->pc, log_bytebuf, 50 - (12 + 3 * (int)(s->snpc - s->pc)), "", log_asmbuf); ; } while (0); if (dflag_trace_inst_dasm == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "0x%016lx" ":   %s%*.s%s" "\33[0m\n", "src/cpu/cpu-exec.c", 352, __func__, s->pc, log_bytebuf, 50 - (12 + 3 * (int)(s->snpc - s->pc)), "", log_asmbuf); ; } while (0); if (dflag_trace_inst_dasm == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "0x%016lx" ":   %s%*.s%s" "\33[0m\n", "src/cpu/cpu-exec.c", 352, __func__, s->pc, log_bytebuf, 50 - (12 + 3 * (int)(s->snpc - s->pc)), "", log_asmbuf); ; } while (0); } while (0)
                                                                                   ;
 
                                                                                    ;
  s->EHelper = g_exec_table[idx];
}


static void update_global() {
  update_instr_cnt();
  cpu.pc = prev_s->pc;
}



void cpu_exec(uint64_t n) {
  ;
  g_print_step = (n < 10);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default:
      nemu_state.state = NEMU_RUNNING;
      do { if (dflag_exit == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "Setting NEMU state to RUNNING" "\33[0m\n", "src/cpu/cpu-exec.c", 375, __func__); ; } while (0); if (dflag_exit == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "Setting NEMU state to RUNNING" "\33[0m\n", "src/cpu/cpu-exec.c", 375, __func__); ; } while (0); if (dflag_exit == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "Setting NEMU state to RUNNING" "\33[0m\n", "src/cpu/cpu-exec.c", 375, __func__); ; } while (0); if (dflag_exit == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "Setting NEMU state to RUNNING" "\33[0m\n", "src/cpu/cpu-exec.c", 375, __func__); ; } while (0); if (dflag_exit == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "Setting NEMU state to RUNNING" "\33[0m\n", "src/cpu/cpu-exec.c", 375, __func__); ; } while (0); if (dflag_exit == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Setting NEMU state to RUNNING" "\33[0m\n", "src/cpu/cpu-exec.c", 375, __func__); ; } while (0); if (dflag_exit == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "Setting NEMU state to RUNNING" "\33[0m\n", "src/cpu/cpu-exec.c", 375, __func__); ; } while (0); if (dflag_exit == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Setting NEMU state to RUNNING" "\33[0m\n", "src/cpu/cpu-exec.c", 375, __func__); ; } while (0); if (dflag_exit == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Setting NEMU state to RUNNING" "\33[0m\n", "src/cpu/cpu-exec.c", 375, __func__); ; } while (0); if (dflag_exit == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Setting NEMU state to RUNNING" "\33[0m\n", "src/cpu/cpu-exec.c", 375, __func__); ; } while (0); } while (0);
  }
  uint64_t timer_start = get_time();
  n_remain_total = n;
  do { if (dflag_exit == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "cpu_exec will exec %lu instrunctions" "\33[0m\n", "src/cpu/cpu-exec.c", 379, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "cpu_exec will exec %lu instrunctions" "\33[0m\n", "src/cpu/cpu-exec.c", 379, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "cpu_exec will exec %lu instrunctions" "\33[0m\n", "src/cpu/cpu-exec.c", 379, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "cpu_exec will exec %lu instrunctions" "\33[0m\n", "src/cpu/cpu-exec.c", 379, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "cpu_exec will exec %lu instrunctions" "\33[0m\n", "src/cpu/cpu-exec.c", 379, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "cpu_exec will exec %lu instrunctions" "\33[0m\n", "src/cpu/cpu-exec.c", 379, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "cpu_exec will exec %lu instrunctions" "\33[0m\n", "src/cpu/cpu-exec.c", 379, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "cpu_exec will exec %lu instrunctions" "\33[0m\n", "src/cpu/cpu-exec.c", 379, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "cpu_exec will exec %lu instrunctions" "\33[0m\n", "src/cpu/cpu-exec.c", 379, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "cpu_exec will exec %lu instrunctions" "\33[0m\n", "src/cpu/cpu-exec.c", 379, __func__, n_remain_total); ; } while (0); } while (0);
  int cause;
  debug_fd = fopen("./build/nemu.debug", "w");
  if ((cause = 
# 382 "src/cpu/cpu-exec.c" 3 4
              _setjmp (
# 382 "src/cpu/cpu-exec.c"
              jbuf_exec
# 382 "src/cpu/cpu-exec.c" 3 4
              )
# 382 "src/cpu/cpu-exec.c"
                               )) {
    n_remain -= prev_s->idx_in_bb - 1;


    update_global();

    do { if (dflag_exit == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "After update_global, n_remain: %i, n_remain_total: %li" "\33[0m\n", "src/cpu/cpu-exec.c", 388, __func__, n_remain, n_remain_total); ; } while (0); if (dflag_exit == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "After update_global, n_remain: %i, n_remain_total: %li" "\33[0m\n", "src/cpu/cpu-exec.c", 388, __func__, n_remain, n_remain_total); ; } while (0); if (dflag_exit == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "After update_global, n_remain: %i, n_remain_total: %li" "\33[0m\n", "src/cpu/cpu-exec.c", 388, __func__, n_remain, n_remain_total); ; } while (0); if (dflag_exit == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "After update_global, n_remain: %i, n_remain_total: %li" "\33[0m\n", "src/cpu/cpu-exec.c", 388, __func__, n_remain, n_remain_total); ; } while (0); if (dflag_exit == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "After update_global, n_remain: %i, n_remain_total: %li" "\33[0m\n", "src/cpu/cpu-exec.c", 388, __func__, n_remain, n_remain_total); ; } while (0); if (dflag_exit == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "After update_global, n_remain: %i, n_remain_total: %li" "\33[0m\n", "src/cpu/cpu-exec.c", 388, __func__, n_remain, n_remain_total); ; } while (0); if (dflag_exit == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "After update_global, n_remain: %i, n_remain_total: %li" "\33[0m\n", "src/cpu/cpu-exec.c", 388, __func__, n_remain, n_remain_total); ; } while (0); if (dflag_exit == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "After update_global, n_remain: %i, n_remain_total: %li" "\33[0m\n", "src/cpu/cpu-exec.c", 388, __func__, n_remain, n_remain_total); ; } while (0); if (dflag_exit == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "After update_global, n_remain: %i, n_remain_total: %li" "\33[0m\n", "src/cpu/cpu-exec.c", 388, __func__, n_remain, n_remain_total); ; } while (0); if (dflag_exit == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "After update_global, n_remain: %i, n_remain_total: %li" "\33[0m\n", "src/cpu/cpu-exec.c", 388, __func__, n_remain, n_remain_total); ; } while (0); } while (0);
  }
  while (nemu_state.state == NEMU_RUNNING &&
      n_remain_total > 0) {

    extern void device_update();
    device_update();

    if (cause == NEMU_EXEC_EXCEPTION) {
      do { if (dflag_exit == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "Handle NEMU_EXEC_EXCEPTION" "\33[0m\n", "src/cpu/cpu-exec.c", 397, __func__); ; } while (0); if (dflag_exit == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "Handle NEMU_EXEC_EXCEPTION" "\33[0m\n", "src/cpu/cpu-exec.c", 397, __func__); ; } while (0); if (dflag_exit == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "Handle NEMU_EXEC_EXCEPTION" "\33[0m\n", "src/cpu/cpu-exec.c", 397, __func__); ; } while (0); if (dflag_exit == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "Handle NEMU_EXEC_EXCEPTION" "\33[0m\n", "src/cpu/cpu-exec.c", 397, __func__); ; } while (0); if (dflag_exit == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "Handle NEMU_EXEC_EXCEPTION" "\33[0m\n", "src/cpu/cpu-exec.c", 397, __func__); ; } while (0); if (dflag_exit == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Handle NEMU_EXEC_EXCEPTION" "\33[0m\n", "src/cpu/cpu-exec.c", 397, __func__); ; } while (0); if (dflag_exit == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "Handle NEMU_EXEC_EXCEPTION" "\33[0m\n", "src/cpu/cpu-exec.c", 397, __func__); ; } while (0); if (dflag_exit == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Handle NEMU_EXEC_EXCEPTION" "\33[0m\n", "src/cpu/cpu-exec.c", 397, __func__); ; } while (0); if (dflag_exit == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Handle NEMU_EXEC_EXCEPTION" "\33[0m\n", "src/cpu/cpu-exec.c", 397, __func__); ; } while (0); if (dflag_exit == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Handle NEMU_EXEC_EXCEPTION" "\33[0m\n", "src/cpu/cpu-exec.c", 397, __func__); ; } while (0); } while (0);
      cause = 0;
      cpu.pc = raise_intr(g_ex_cause, prev_s->pc);
      tcache_handle_exception(cpu.pc);
      ;
    } else {
      word_t intr = isa_query_intr();
      if (intr != ((word_t)-1)) {
        do { if (dflag_exit == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU raise intr" "\33[0m\n", "src/cpu/cpu-exec.c", 405, __func__); ; } while (0); if (dflag_exit == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU raise intr" "\33[0m\n", "src/cpu/cpu-exec.c", 405, __func__); ; } while (0); if (dflag_exit == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU raise intr" "\33[0m\n", "src/cpu/cpu-exec.c", 405, __func__); ; } while (0); if (dflag_exit == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU raise intr" "\33[0m\n", "src/cpu/cpu-exec.c", 405, __func__); ; } while (0); if (dflag_exit == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU raise intr" "\33[0m\n", "src/cpu/cpu-exec.c", 405, __func__); ; } while (0); if (dflag_exit == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU raise intr" "\33[0m\n", "src/cpu/cpu-exec.c", 405, __func__); ; } while (0); if (dflag_exit == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU raise intr" "\33[0m\n", "src/cpu/cpu-exec.c", 405, __func__); ; } while (0); if (dflag_exit == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU raise intr" "\33[0m\n", "src/cpu/cpu-exec.c", 405, __func__); ; } while (0); if (dflag_exit == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU raise intr" "\33[0m\n", "src/cpu/cpu-exec.c", 405, __func__); ; } while (0); if (dflag_exit == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU raise intr" "\33[0m\n", "src/cpu/cpu-exec.c", 405, __func__); ; } while (0); } while (0);
        cpu.pc = raise_intr(intr, cpu.pc);
        ;
        tcache_handle_exception(cpu.pc);
      }
    }
    int n_batch = n_remain_total >= 65536 ? 65536 : n_remain_total;
    n_remain = execute(n_batch);


    update_global(cpu.pc);
    do { if (dflag_exit == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "n_remain_total: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 416, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "n_remain_total: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 416, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "n_remain_total: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 416, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "n_remain_total: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 416, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "n_remain_total: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 416, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "n_remain_total: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 416, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "n_remain_total: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 416, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "n_remain_total: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 416, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "n_remain_total: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 416, __func__, n_remain_total); ; } while (0); if (dflag_exit == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "n_remain_total: %lu" "\33[0m\n", "src/cpu/cpu-exec.c", 416, __func__, n_remain_total); ; } while (0); } while (0);



  }

  if (nemu_state.state == NEMU_RUNNING) {
    nemu_state.state = NEMU_QUIT;
  }
  fclose(debug_fd);
  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;
  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP;
      do { if (dflag_exit == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU stopped when running" "\33[0m\n", "src/cpu/cpu-exec.c", 430, __func__); ; } while (0); if (dflag_exit == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU stopped when running" "\33[0m\n", "src/cpu/cpu-exec.c", 430, __func__); ; } while (0); if (dflag_exit == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU stopped when running" "\33[0m\n", "src/cpu/cpu-exec.c", 430, __func__); ; } while (0); if (dflag_exit == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU stopped when running" "\33[0m\n", "src/cpu/cpu-exec.c", 430, __func__); ; } while (0); if (dflag_exit == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU stopped when running" "\33[0m\n", "src/cpu/cpu-exec.c", 430, __func__); ; } while (0); if (dflag_exit == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU stopped when running" "\33[0m\n", "src/cpu/cpu-exec.c", 430, __func__); ; } while (0); if (dflag_exit == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU stopped when running" "\33[0m\n", "src/cpu/cpu-exec.c", 430, __func__); ; } while (0); if (dflag_exit == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU stopped when running" "\33[0m\n", "src/cpu/cpu-exec.c", 430, __func__); ; } while (0); if (dflag_exit == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU stopped when running" "\33[0m\n", "src/cpu/cpu-exec.c", 430, __func__); ; } while (0); if (dflag_exit == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "NEMU stopped when running" "\33[0m\n", "src/cpu/cpu-exec.c", 430, __func__); ; } while (0); } while (0);
      if (0) {
        monitor_statistic();
      }
      break;

    case NEMU_END: case NEMU_ABORT:
      do { printf("\33[1;34m[%s:%d,%s] " "nemu: %s\33[0m at pc = " "0x%016lx" "\33[0m\n", "src/cpu/cpu-exec.c", 440, __func__, (nemu_state.state == NEMU_ABORT ? "\33[1;31mABORT" : (nemu_state.halt_ret == 0 ? "\33[1;32mHIT GOOD TRAP" : "\33[1;31mHIT BAD TRAP")), nemu_state.halt_pc); ; } while (0)


                             ;
      do { printf("\33[1;34m[%s:%d,%s] " "trap code:%d" "\33[0m\n", "src/cpu/cpu-exec.c", 441, __func__, nemu_state.halt_ret); ; } while (0);
      monitor_statistic();
      if (nemu_state.state == NEMU_END) {
        beta_on_exit();
      }
      break;
    case NEMU_QUIT:

      monitor_statistic();
      beta_on_exit();
      extern char *mapped_cpt_file;
      if (mapped_cpt_file != 
# 452 "src/cpu/cpu-exec.c" 3 4
                            ((void *)0)
# 452 "src/cpu/cpu-exec.c"
                                ) {
        extern void serialize_reg_to_mem();
        serialize_reg_to_mem();
      }



    }
}
