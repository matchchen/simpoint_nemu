# 1 "src/memory/paddr.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "src/memory/paddr.c"
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
# 2 "src/memory/paddr.c" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h" 1





static inline word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: 
# 12 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h" 3 4
            ((void) sizeof ((
# 12 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h"
            0
# 12 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h" 3 4
            ) ? 1 : 0), __extension__ ({ if (
# 12 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h"
            0
# 12 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h" 3 4
            ) ; else __assert_fail (
# 12 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h"
            "0"
# 12 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h" 3 4
            , "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h", 12, __extension__ __PRETTY_FUNCTION__); }))
# 12 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h"
                                                        ;
  }
}

static inline void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    case 8: *(uint64_t *)addr = data; return;
    default: 
# 22 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h" 3 4
   ((void) sizeof ((
# 22 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h"
   0
# 22 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h" 3 4
   ) ? 1 : 0), __extension__ ({ if (
# 22 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h"
   0
# 22 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h" 3 4
   ) ; else __assert_fail (
# 22 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h"
   "0"
# 22 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h" 3 4
   , "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h", 22, __extension__ __PRETTY_FUNCTION__); }))
# 22 "/home/user/ecpt/work/simpoint_nemu/include/memory/host.h"
                                             ;
  }
}
# 3 "src/memory/paddr.c" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/include/memory/paddr.h" 1
# 14 "/home/user/ecpt/work/simpoint_nemu/include/memory/paddr.h"
void init_mem();
# 23 "/home/user/ecpt/work/simpoint_nemu/include/memory/paddr.h"
uint8_t* guest_to_host(paddr_t paddr);

paddr_t host_to_guest(uint8_t *haddr);

static inline 
# 27 "/home/user/ecpt/work/simpoint_nemu/include/memory/paddr.h" 3 4
             _Bool 
# 27 "/home/user/ecpt/work/simpoint_nemu/include/memory/paddr.h"
                  in_pmem(paddr_t addr) {
  paddr_t mbase_mask = 0x800a0000 - 1;
  paddr_t msize_mask = 0x50000000 - 1;
  
# 30 "/home/user/ecpt/work/simpoint_nemu/include/memory/paddr.h" 3 4
 _Bool 
# 30 "/home/user/ecpt/work/simpoint_nemu/include/memory/paddr.h"
      mbase_align = (0x800a0000 & mbase_mask) == 0;
  
# 31 "/home/user/ecpt/work/simpoint_nemu/include/memory/paddr.h" 3 4
 _Bool 
# 31 "/home/user/ecpt/work/simpoint_nemu/include/memory/paddr.h"
      msize_align = (0x50000000 & msize_mask) == 0;
  
# 32 "/home/user/ecpt/work/simpoint_nemu/include/memory/paddr.h" 3 4
 _Bool 
# 32 "/home/user/ecpt/work/simpoint_nemu/include/memory/paddr.h"
      msize_inside_mbase = msize_mask <= mbase_mask;
  if (mbase_align && msize_align && msize_inside_mbase) {
    return (addr & ~msize_mask) == 0x800a0000;
  } else {
    return (addr >= 0x800a0000) && (addr < (paddr_t)0x800a0000 + 0x50000000);
  }
}

word_t paddr_read(paddr_t addr, int len, int type, int mode, vaddr_t vaddr);
void paddr_write(paddr_t addr, int len, word_t data, int mode, vaddr_t vaddr);
uint8_t *get_pmem();
# 4 "src/memory/paddr.c" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/include/device/mmio.h" 1





word_t mmio_read(paddr_t addr, int len);
void mmio_write(paddr_t addr, int len, word_t data);
# 5 "src/memory/paddr.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 26 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 328 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4

# 328 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef int wchar_t;
# 32 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 40 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 55 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 121 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 56 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 97 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 176 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 360 "/usr/include/stdlib.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) atoi (const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__nothrow__ , __leaf__)) atol (const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}


__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__nothrow__ , __leaf__)) atoll (const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}
# 385 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;
# 70 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __mode_t mode_t;




typedef __nlink_t nlink_t;
# 104 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __id_t id_t;
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 128 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4






typedef __time_t time_t;
# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 178 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 62 "/usr/include/endian.h" 2 3 4
# 195 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
# 9 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
# 40 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 101 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 113 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);





# 1 "/usr/include/x86_64-linux-gnu/bits/select2.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/select2.h" 3 4
extern long int __fdelt_chk (long int __d);
extern long int __fdelt_warn (long int __d)
  __attribute__((__warning__ ("bit outside of fd_set selected")));
# 124 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



# 198 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 41 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sysmacros.h" 1 3 4
# 42 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 2 3 4
# 71 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4


extern unsigned int gnu_dev_major (__dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern unsigned int gnu_dev_minor (__dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __dev_t gnu_dev_makedev (unsigned int __major, unsigned int __minor) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int __attribute__ ((__nothrow__ , __leaf__)) gnu_dev_major (__dev_t __dev) { unsigned int __major; __major = ((__dev & (__dev_t) 0x00000000000fff00u) >> 8); __major |= ((__dev & (__dev_t) 0xfffff00000000000u) >> 32); return __major; }
__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int __attribute__ ((__nothrow__ , __leaf__)) gnu_dev_minor (__dev_t __dev) { unsigned int __minor; __minor = ((__dev & (__dev_t) 0x00000000000000ffu) >> 0); __minor |= ((__dev & (__dev_t) 0x00000ffffff00000u) >> 12); return __minor; }
__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) __dev_t __attribute__ ((__nothrow__ , __leaf__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor) { __dev_t __dev; __dev = (((__dev_t) (__major & 0x00000fffu)) << 8); __dev |= (((__dev_t) (__major & 0xfffff000u)) << 32); __dev |= (((__dev_t) (__minor & 0x000000ffu)) << 0); __dev |= (((__dev_t) (__minor & 0xffffff00u)) << 12); return __dev; }




# 206 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4






typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 254 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 77 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 99 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
};
# 78 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 118 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
struct __pthread_mutex_s
{
  int __lock ;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;
# 148 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
  int __kind;
 




  short __spins; short __elision;
  __pthread_list_t __list;
# 165 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
 
};




struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 255 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 395 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 563 "/usr/include/stdlib.h" 3 4
extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));


# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 567 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) __attribute__ ((__warn_unused_result__));



extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 644 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 672 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 685 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 707 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 728 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 781 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) __attribute__ ((__warn_unused_result__));
# 797 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






typedef int (*__compar_fn_t) (const void *, const void *);
# 817 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) __attribute__ ((__warn_unused_result__));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 return (void *) __p;
    }

  return ((void *)0);
}
# 823 "/usr/include/stdlib.h" 2 3 4




extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 837 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
# 869 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));







extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 954 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__warn_unused_result__));
# 1006 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1016 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__nothrow__ , __leaf__)) atof (const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}
# 1017 "/usr/include/stdlib.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3 4
extern char *__realpath_chk (const char *__restrict __name,
        char *__restrict __resolved,
        size_t __resolvedlen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *__realpath_alias (const char *__restrict __name, char *__restrict __resolved) __asm__ ("" "realpath") __attribute__ ((__nothrow__ , __leaf__))

                                                 __attribute__ ((__warn_unused_result__));
extern char *__realpath_chk_warn (const char *__restrict __name, char *__restrict __resolved, size_t __resolvedlen) __asm__ ("" "__realpath_chk") __attribute__ ((__nothrow__ , __leaf__))


                                                __attribute__ ((__warn_unused_result__))
     __attribute__((__warning__ ("second argument of realpath must be either NULL or at " "least PATH_MAX bytes long buffer")))
                                      ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) realpath (const char *__restrict __name, char *__restrict __resolved)
{
  if (__builtin_object_size (__resolved, 2 > 1) != (size_t) -1)
    {




      return __realpath_chk (__name, __resolved, __builtin_object_size (__resolved, 2 > 1));
    }

  return __realpath_alias (__name, __resolved);
}


extern int __ptsname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_alias (int __fd, char *__buf, size_t __buflen) __asm__ ("" "ptsname_r") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__ptsname_r_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ptsname_r called with buflen bigger than " "size of buf")))
                   ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) ptsname_r (int __fd, char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __ptsname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __ptsname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __ptsname_r_alias (__fd, __buf, __buflen);
}


extern int __wctomb_chk (char *__s, wchar_t __wchar, size_t __buflen)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int __wctomb_alias (char *__s, wchar_t __wchar) __asm__ ("" "wctomb") __attribute__ ((__nothrow__ , __leaf__))
              __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) int
__attribute__ ((__nothrow__ , __leaf__)) wctomb (char *__s, wchar_t __wchar)
{







  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 && 16 > __builtin_object_size (__s, 2 > 1))
    return __wctomb_chk (__s, __wchar, __builtin_object_size (__s, 2 > 1));
  return __wctomb_alias (__s, __wchar);
}


extern size_t __mbstowcs_chk (wchar_t *__restrict __dst,
         const char *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__ , __leaf__));
extern size_t __mbstowcs_alias (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len) __asm__ ("" "mbstowcs") __attribute__ ((__nothrow__ , __leaf__))


                                  ;
extern size_t __mbstowcs_chk_warn (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__mbstowcs_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__((__warning__ ("mbstowcs called with dst buffer smaller than len " "* sizeof (wchar_t)")))
                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) mbstowcs (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len)

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __mbstowcs_chk (__dst, __src, __len,
          __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));

      if (__len > __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t))
 return __mbstowcs_chk_warn (__dst, __src, __len,
         __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));
    }
  return __mbstowcs_alias (__dst, __src, __len);
}


extern size_t __wcstombs_chk (char *__restrict __dst,
         const wchar_t *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__ , __leaf__));
extern size_t __wcstombs_alias (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len) __asm__ ("" "wcstombs") __attribute__ ((__nothrow__ , __leaf__))


                                  ;
extern size_t __wcstombs_chk_warn (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__wcstombs_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__((__warning__ ("wcstombs called with dst buffer smaller than len")));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) wcstombs (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len)

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __wcstombs_chk (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
      if (__len > __builtin_object_size (__dst, 2 > 1))
 return __wcstombs_chk_warn (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
    }
  return __wcstombs_alias (__dst, __src, __len);
}
# 1021 "/usr/include/stdlib.h" 2 3 4






# 6 "src/memory/paddr.c" 2
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 30 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 34 "/usr/include/time.h" 2 3 4





# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_tm.h" 1 3 4






struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};
# 40 "/usr/include/time.h" 2 3 4
# 48 "/usr/include/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h" 1 3 4







struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
# 49 "/usr/include/time.h" 2 3 4
struct sigevent;
# 68 "/usr/include/time.h" 3 4




extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));
# 104 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
# 119 "/usr/include/time.h" 3 4
extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));




extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));




extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));






extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) __attribute__ ((__nothrow__ , __leaf__));
# 196 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 211 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));





extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 307 "/usr/include/time.h" 3 4

# 7 "src/memory/paddr.c" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/include/cpu/cpu.h" 1






# 6 "/home/user/ecpt/work/simpoint_nemu/include/cpu/cpu.h"
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
# 8 "src/memory/paddr.c" 2
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
# 9 "src/memory/paddr.c" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/intr.h" 1



# 1 "/home/user/ecpt/work/simpoint_nemu/include/cpu/decode.h" 1







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
# 5 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/intr.h" 2

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


# 31 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/intr.h" 3 4
_Bool 
# 31 "/home/user/ecpt/work/simpoint_nemu/src/isa/riscv64/include/../local-include/intr.h"
    intr_deleg_S(word_t exceptionNO);
# 10 "src/memory/paddr.c" 2


# 1 "/usr/include/x86_64-linux-gnu/sys/mman.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/mman.h" 2 3 4
# 41 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mman.h" 1 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/mman.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mman-linux.h" 1 3 4
# 115 "/usr/include/x86_64-linux-gnu/bits/mman-linux.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mman-shared.h" 1 3 4
# 115 "/usr/include/x86_64-linux-gnu/bits/mman-linux.h" 2 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/mman.h" 2 3 4
# 42 "/usr/include/x86_64-linux-gnu/sys/mman.h" 2 3 4





# 57 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4

# 57 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
extern void *mmap (void *__addr, size_t __len, int __prot,
     int __flags, int __fd, __off_t __offset) __attribute__ ((__nothrow__ , __leaf__));
# 76 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
extern int munmap (void *__addr, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern int mprotect (void *__addr, size_t __len, int __prot) __attribute__ ((__nothrow__ , __leaf__));







extern int msync (void *__addr, size_t __len, int __flags);




extern int madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__ , __leaf__));



extern int posix_madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__ , __leaf__));




extern int mlock (const void *__addr, size_t __len) __attribute__ ((__nothrow__ , __leaf__));


extern int munlock (const void *__addr, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern int mlockall (int __flags) __attribute__ ((__nothrow__ , __leaf__));



extern int munlockall (void) __attribute__ ((__nothrow__ , __leaf__));







extern int mincore (void *__start, size_t __len, unsigned char *__vec)
     __attribute__ ((__nothrow__ , __leaf__));
# 144 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
extern int shm_open (const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (const char *__name);


# 13 "src/memory/paddr.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };
# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 380 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4

# 454 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4

# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 78 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  };
# 79 "/usr/include/fcntl.h" 2 3 4
# 147 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 157 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 181 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 203 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 249 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) __attribute__ ((__nothrow__ , __leaf__));
# 271 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 290 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h" 3 4
extern int __open_2 (const char *__path, int __oflag) __attribute__ ((__nonnull__ (1)));
extern int __open_alias (const char *__path, int __oflag, ...) __asm__ ("" "open")
               __attribute__ ((__nonnull__ (1)));






extern void __open_too_many_args (void) __attribute__((__error__ ("open can be called either with 2 or 3 arguments, not more")))
                                                                  ;
extern void __open_missing_mode (void) __attribute__((__error__ ("open with O_CREAT or O_TMPFILE in second argument needs 3 arguments")))
                                                                            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
open (const char *__path, int __oflag, ...)
{
  if (__builtin_va_arg_pack_len () > 1)
    __open_too_many_args ();

  if (__builtin_constant_p (__oflag))
    {
      if ((((__oflag) & 0100) != 0 || ((__oflag) & (020000000 | 0200000)) == (020000000 | 0200000)) && __builtin_va_arg_pack_len () < 1)
 {
   __open_missing_mode ();
   return __open_2 (__path, __oflag);
 }
      return __open_alias (__path, __oflag, __builtin_va_arg_pack ());
    }

  if (__builtin_va_arg_pack_len () < 1)
    return __open_2 (__path, __oflag);

  return __open_alias (__path, __oflag, __builtin_va_arg_pack ());
}
# 98 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h" 3 4
extern int __openat_2 (int __fd, const char *__path, int __oflag)
     __attribute__ ((__nonnull__ (2)));
extern int __openat_alias (int __fd, const char *__path, int __oflag, ...) __asm__ ("" "openat")

     __attribute__ ((__nonnull__ (2)));
# 111 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h" 3 4
extern void __openat_too_many_args (void) __attribute__((__error__ ("openat can be called either with 3 or 4 arguments, not more")))
                                                                    ;
extern void __openat_missing_mode (void) __attribute__((__error__ ("openat with O_CREAT or O_TMPFILE in third argument needs 4 arguments")))
                                                                             ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
openat (int __fd, const char *__path, int __oflag, ...)
{
  if (__builtin_va_arg_pack_len () > 1)
    __openat_too_many_args ();

  if (__builtin_constant_p (__oflag))
    {
      if ((((__oflag) & 0100) != 0 || ((__oflag) & (020000000 | 0200000)) == (020000000 | 0200000)) && __builtin_va_arg_pack_len () < 1)
 {
   __openat_missing_mode ();
   return __openat_2 (__fd, __path, __oflag);
 }
      return __openat_alias (__fd, __path, __oflag, __builtin_va_arg_pack ());
    }

  if (__builtin_va_arg_pack_len () < 1)
    return __openat_2 (__fd, __path, __oflag);

  return __openat_alias (__fd, __path, __oflag, __builtin_va_arg_pack ());
}
# 291 "/usr/include/fcntl.h" 2 3 4



# 14 "src/memory/paddr.c" 2


# 15 "src/memory/paddr.c"
static uint8_t *pmem = (uint8_t *)0x100000000ul;





uint8_t *get_pmem()
{
  return pmem;
}

char *mapped_cpt_file = 
# 26 "src/memory/paddr.c" 3 4
                       ((void *)0)
# 26 "src/memory/paddr.c"
                           ;

# 27 "src/memory/paddr.c" 3 4
_Bool 
# 27 "src/memory/paddr.c"
    map_image_as_output_cpt = 
# 27 "src/memory/paddr.c" 3 4
                              0
# 27 "src/memory/paddr.c"
                                   ;

uint8_t* guest_to_host(paddr_t paddr) { return paddr + (uint8_t *)(pmem - 0x800a0000); }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - (uint8_t *)(pmem - 0x800a0000); }

static inline word_t pmem_read(paddr_t addr, int len) {
  return host_read(guest_to_host(addr), len);
}

static inline void pmem_write(paddr_t addr, int len, word_t data) {



  host_write(guest_to_host(addr), len, data);
}

void init_mem() {




  
# 48 "src/memory/paddr.c" 3 4
 _Bool 
# 48 "src/memory/paddr.c"
      named_mmap = mapped_cpt_file != 
# 48 "src/memory/paddr.c" 3 4
                                      ((void *)0) 
# 48 "src/memory/paddr.c"
                                           || map_image_as_output_cpt;
  void *mmap_ret = 
# 49 "src/memory/paddr.c" 3 4
                  ((void *)0)
# 49 "src/memory/paddr.c"
                      ;
  if (named_mmap) {
    do { printf("\33[1;34m[%s:%d,%s] " "mmap memory to named file %s" "\33[0m\n", "src/memory/paddr.c", 51, __func__, mapped_cpt_file); ; } while (0);
    if (!map_image_as_output_cpt) {
      int fd = open(mapped_cpt_file, 
# 53 "src/memory/paddr.c" 3 4
                                    02 
# 53 "src/memory/paddr.c"
                                           | 
# 53 "src/memory/paddr.c" 3 4
                                             01000 
# 53 "src/memory/paddr.c"
                                                     | 
# 53 "src/memory/paddr.c" 3 4
                                                       0100
# 53 "src/memory/paddr.c"
                                                              , (mode_t)0600);
      if (!fd) {
        do { if (!(0)) { fflush(
# 55 "src/memory/paddr.c" 3 4
       stdout
# 55 "src/memory/paddr.c"
       ); fprintf(
# 55 "src/memory/paddr.c" 3 4
       stderr
# 55 "src/memory/paddr.c"
       , "\33[1;31m"); fprintf(
# 55 "src/memory/paddr.c" 3 4
       stderr
# 55 "src/memory/paddr.c"
       , "Failed to create file %s", mapped_cpt_file); fprintf(
# 55 "src/memory/paddr.c" 3 4
       stderr
# 55 "src/memory/paddr.c"
       , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 55 "src/memory/paddr.c" 3 4
       ((void) sizeof ((
# 55 "src/memory/paddr.c"
       0
# 55 "src/memory/paddr.c" 3 4
       ) ? 1 : 0), __extension__ ({ if (
# 55 "src/memory/paddr.c"
       0
# 55 "src/memory/paddr.c" 3 4
       ) ; else __assert_fail (
# 55 "src/memory/paddr.c"
       "0"
# 55 "src/memory/paddr.c" 3 4
       , "src/memory/paddr.c", 55, __extension__ __PRETTY_FUNCTION__); }))
# 55 "src/memory/paddr.c"
       ; } } while (0);
      }
      int trunc_ret = ftruncate(fd, 0x50000000);
      if (trunc_ret == -1) {
        do { if (!(0)) { fflush(
# 59 "src/memory/paddr.c" 3 4
       stdout
# 59 "src/memory/paddr.c"
       ); fprintf(
# 59 "src/memory/paddr.c" 3 4
       stderr
# 59 "src/memory/paddr.c"
       , "\33[1;31m"); fprintf(
# 59 "src/memory/paddr.c" 3 4
       stderr
# 59 "src/memory/paddr.c"
       , "Failed to truncate file %s", mapped_cpt_file); fprintf(
# 59 "src/memory/paddr.c" 3 4
       stderr
# 59 "src/memory/paddr.c"
       , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 59 "src/memory/paddr.c" 3 4
       ((void) sizeof ((
# 59 "src/memory/paddr.c"
       0
# 59 "src/memory/paddr.c" 3 4
       ) ? 1 : 0), __extension__ ({ if (
# 59 "src/memory/paddr.c"
       0
# 59 "src/memory/paddr.c" 3 4
       ) ; else __assert_fail (
# 59 "src/memory/paddr.c"
       "0"
# 59 "src/memory/paddr.c" 3 4
       , "src/memory/paddr.c", 59, __extension__ __PRETTY_FUNCTION__); }))
# 59 "src/memory/paddr.c"
       ; } } while (0);
      } else {
        do { printf("\33[1;34m[%s:%d,%s] " "Truncate file %s to 0x%lx Bytes" "\33[0m\n", "src/memory/paddr.c", 61, __func__, mapped_cpt_file, 0x50000000); ; } while (0);
      }
      mmap_ret = mmap((void *)pmem, 0x50000000, 
# 63 "src/memory/paddr.c" 3 4
                                                 0x1 
# 63 "src/memory/paddr.c"
                                                           | 
# 63 "src/memory/paddr.c" 3 4
                                                             0x2
# 63 "src/memory/paddr.c"
                                                                       ,
          
# 64 "src/memory/paddr.c" 3 4
         0x01 
# 64 "src/memory/paddr.c"
                    | 
# 64 "src/memory/paddr.c" 3 4
                      0x10
# 64 "src/memory/paddr.c"
                               , fd, 0);

    } else {
      if (is_gz_file(mapped_cpt_file)) {
        do { if (!(0)) { fflush(
# 68 "src/memory/paddr.c" 3 4
       stdout
# 68 "src/memory/paddr.c"
       ); fprintf(
# 68 "src/memory/paddr.c" 3 4
       stderr
# 68 "src/memory/paddr.c"
       , "\33[1;31m"); fprintf(
# 68 "src/memory/paddr.c" 3 4
       stderr
# 68 "src/memory/paddr.c"
       , "Cannot map to gz file\n"); fprintf(
# 68 "src/memory/paddr.c" 3 4
       stderr
# 68 "src/memory/paddr.c"
       , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 68 "src/memory/paddr.c" 3 4
       ((void) sizeof ((
# 68 "src/memory/paddr.c"
       0
# 68 "src/memory/paddr.c" 3 4
       ) ? 1 : 0), __extension__ ({ if (
# 68 "src/memory/paddr.c"
       0
# 68 "src/memory/paddr.c" 3 4
       ) ; else __assert_fail (
# 68 "src/memory/paddr.c"
       "0"
# 68 "src/memory/paddr.c" 3 4
       , "src/memory/paddr.c", 68, __extension__ __PRETTY_FUNCTION__); }))
# 68 "src/memory/paddr.c"
       ; } } while (0);
      }
      int fd = open(mapped_cpt_file, 
# 70 "src/memory/paddr.c" 3 4
                                    02
# 70 "src/memory/paddr.c"
                                          );
      if (!fd) {
        do { if (!(0)) { fflush(
# 72 "src/memory/paddr.c" 3 4
       stdout
# 72 "src/memory/paddr.c"
       ); fprintf(
# 72 "src/memory/paddr.c" 3 4
       stderr
# 72 "src/memory/paddr.c"
       , "\33[1;31m"); fprintf(
# 72 "src/memory/paddr.c" 3 4
       stderr
# 72 "src/memory/paddr.c"
       , "Failed to open(R/W) file %s", mapped_cpt_file); fprintf(
# 72 "src/memory/paddr.c" 3 4
       stderr
# 72 "src/memory/paddr.c"
       , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 72 "src/memory/paddr.c" 3 4
       ((void) sizeof ((
# 72 "src/memory/paddr.c"
       0
# 72 "src/memory/paddr.c" 3 4
       ) ? 1 : 0), __extension__ ({ if (
# 72 "src/memory/paddr.c"
       0
# 72 "src/memory/paddr.c" 3 4
       ) ; else __assert_fail (
# 72 "src/memory/paddr.c"
       "0"
# 72 "src/memory/paddr.c" 3 4
       , "src/memory/paddr.c", 72, __extension__ __PRETTY_FUNCTION__); }))
# 72 "src/memory/paddr.c"
       ; } } while (0);
      } else {
        do { printf("\33[1;34m[%s:%d,%s] " "Execute directly on %s" "\33[0m\n", "src/memory/paddr.c", 74, __func__, mapped_cpt_file); ; } while (0);
      }
      mmap_ret = mmap((void *)pmem, 0x50000000, 
# 76 "src/memory/paddr.c" 3 4
                                                 0x1 
# 76 "src/memory/paddr.c"
                                                           | 
# 76 "src/memory/paddr.c" 3 4
                                                             0x2
# 76 "src/memory/paddr.c"
                                                                       ,
          
# 77 "src/memory/paddr.c" 3 4
         0x01 
# 77 "src/memory/paddr.c"
                    | 
# 77 "src/memory/paddr.c" 3 4
                      0x10
# 77 "src/memory/paddr.c"
                               , fd, 0);
    }

  } else {
    do { printf("\33[1;34m[%s:%d,%s] " "mmap memory to anonymous file" "\33[0m\n", "src/memory/paddr.c", 81, __func__); ; } while (0);
    mmap_ret = mmap((void *)pmem, 0x50000000, 
# 82 "src/memory/paddr.c" 3 4
                                               0x1 
# 82 "src/memory/paddr.c"
                                                         | 
# 82 "src/memory/paddr.c" 3 4
                                                           0x2
# 82 "src/memory/paddr.c"
                                                                     ,
        
# 83 "src/memory/paddr.c" 3 4
       0x20 
# 83 "src/memory/paddr.c"
                     | 
# 83 "src/memory/paddr.c" 3 4
                       0x02 
# 83 "src/memory/paddr.c"
                                   | 
# 83 "src/memory/paddr.c" 3 4
                                     0x10
# 83 "src/memory/paddr.c"
                                              , -1, 0);
  }
  if (mmap_ret != pmem) {
    perror("mmap");
    
# 87 "src/memory/paddr.c" 3 4
   ((void) sizeof ((
# 87 "src/memory/paddr.c"
   0
# 87 "src/memory/paddr.c" 3 4
   ) ? 1 : 0), __extension__ ({ if (
# 87 "src/memory/paddr.c"
   0
# 87 "src/memory/paddr.c" 3 4
   ) ; else __assert_fail (
# 87 "src/memory/paddr.c"
   "0"
# 87 "src/memory/paddr.c" 3 4
   , "src/memory/paddr.c", 87, __extension__ __PRETTY_FUNCTION__); }))
# 87 "src/memory/paddr.c"
            ;
  }
# 105 "src/memory/paddr.c"
}



word_t paddr_read(paddr_t addr, int len, int type, int mode, vaddr_t vaddr) {






  
# 116 "src/memory/paddr.c" 3 4
 ((void) sizeof ((
# 116 "src/memory/paddr.c"
 type == MEM_TYPE_READ || type == MEM_TYPE_IFETCH_READ || type == MEM_TYPE_IFETCH || type == MEM_TYPE_WRITE_READ
# 116 "src/memory/paddr.c" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 116 "src/memory/paddr.c"
 type == MEM_TYPE_READ || type == MEM_TYPE_IFETCH_READ || type == MEM_TYPE_IFETCH || type == MEM_TYPE_WRITE_READ
# 116 "src/memory/paddr.c" 3 4
 ) ; else __assert_fail (
# 116 "src/memory/paddr.c"
 "type == MEM_TYPE_READ || type == MEM_TYPE_IFETCH_READ || type == MEM_TYPE_IFETCH || type == MEM_TYPE_WRITE_READ"
# 116 "src/memory/paddr.c" 3 4
 , "src/memory/paddr.c", 116, __extension__ __PRETTY_FUNCTION__); }))
# 116 "src/memory/paddr.c"
                                                                                                                        ;
  if (!isa_pmp_check_permission(addr, len, type, mode)) {
    do { printf("\33[1;34m[%s:%d,%s] " "isa pmp check failed" "\33[0m\n", "src/memory/paddr.c", 118, __func__); ; } while (0);
    if (type == MEM_TYPE_IFETCH || type == MEM_TYPE_IFETCH_READ) {
      (*((intr_deleg_S(EX_IAF)) ? (word_t *)stval : (word_t *)mtval)) = vaddr;
      longjmp_exception(EX_IAF);
      return 
# 122 "src/memory/paddr.c" 3 4
            0
# 122 "src/memory/paddr.c"
                 ;
    } else if (cpu.amo || type == MEM_TYPE_WRITE_READ) {
      (*((intr_deleg_S(EX_SAF)) ? (word_t *)stval : (word_t *)mtval)) = vaddr;
      longjmp_exception(EX_SAF);
      return 
# 126 "src/memory/paddr.c" 3 4
            0
# 126 "src/memory/paddr.c"
                 ;
    } else {
      (*((intr_deleg_S(EX_LAF)) ? (word_t *)stval : (word_t *)mtval)) = vaddr;
      longjmp_exception(EX_LAF);
      return 
# 130 "src/memory/paddr.c" 3 4
            0
# 130 "src/memory/paddr.c"
                 ;
    }
  }

  if (__builtin_expect(in_pmem(addr), 1)) return pmem_read(addr, len);
  else return mmio_read(addr, len);
# 149 "src/memory/paddr.c"
}

void paddr_write(paddr_t addr, int len, word_t data, int mode, vaddr_t vaddr) {






  if (!isa_pmp_check_permission(addr, len, MEM_TYPE_WRITE, mode)) {
    (*((intr_deleg_S(EX_SAF)) ? (word_t *)stval : (word_t *)mtval)) = vaddr;
    longjmp_exception(EX_SAF);
    return ;
  }

  if (__builtin_expect(in_pmem(addr), 1)) pmem_write(addr, len, data);
  else mmio_write(addr, len, data);
# 176 "src/memory/paddr.c"
}
