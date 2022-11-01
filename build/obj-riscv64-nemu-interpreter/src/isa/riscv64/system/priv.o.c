# 1 "src/isa/riscv64/system/priv.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "src/isa/riscv64/system/priv.c"
# 1 "src/isa/riscv64/system/../local-include/csr.h" 1



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
# 5 "src/isa/riscv64/system/../local-include/csr.h" 2
# 73 "src/isa/riscv64/system/../local-include/csr.h"

# 73 "src/isa/riscv64/system/../local-include/csr.h"
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
# 203 "src/isa/riscv64/system/../local-include/csr.h"
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
# 316 "src/isa/riscv64/system/../local-include/csr.h"
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
# 418 "src/isa/riscv64/system/../local-include/csr.h"
extern mstatus_t* const mstatus; extern misa_t* const misa; extern medeleg_t* const medeleg; extern mideleg_t* const mideleg; extern mie_t* const mie; extern mtvec_t* const mtvec; extern mcounteren_t* const mcounteren; extern mscratch_t* const mscratch; extern mepc_t* const mepc; extern mcause_t* const mcause; extern mtval_t* const mtval; extern mip_t* const mip; extern pmpcfg0_t* const pmpcfg0; extern pmpcfg1_t* const pmpcfg1; extern pmpcfg2_t* const pmpcfg2; extern pmpcfg3_t* const pmpcfg3; extern pmpaddr0_t* const pmpaddr0; extern pmpaddr1_t* const pmpaddr1; extern pmpaddr2_t* const pmpaddr2; extern pmpaddr3_t* const pmpaddr3; extern pmpaddr4_t* const pmpaddr4; extern pmpaddr5_t* const pmpaddr5; extern pmpaddr6_t* const pmpaddr6; extern pmpaddr7_t* const pmpaddr7; extern pmpaddr8_t* const pmpaddr8; extern pmpaddr9_t* const pmpaddr9; extern pmpaddr10_t* const pmpaddr10; extern pmpaddr11_t* const pmpaddr11; extern pmpaddr12_t* const pmpaddr12; extern pmpaddr13_t* const pmpaddr13; extern pmpaddr14_t* const pmpaddr14; extern pmpaddr15_t* const pmpaddr15; extern mhartid_t* const mhartid; extern sstatus_t* const sstatus; extern sie_t* const sie; extern stvec_t* const stvec; extern scounteren_t* const scounteren; extern sscratch_t* const sscratch; extern sepc_t* const sepc; extern scause_t* const scause; extern stval_t* const stval; extern sip_t* const sip; extern satp_t* const satp; extern srnctl_t* const srnctl; extern fflags_t* const fflags; extern frm_t* const frm; extern fcsr_t* const fcsr; extern mtime_t* const mtime; extern cycle_t* const cycle; extern minstret_t* const minstret;




word_t csrid_read(uint32_t csrid);


uint8_t pmpcfg_from_index(int idx);
word_t pmpaddr_from_index(int idx);
word_t pmpaddr_from_csrid(int id);
word_t pmp_tor_mask();
# 2 "src/isa/riscv64/system/priv.c" 2
# 1 "src/isa/riscv64/system/../local-include/rtl.h" 1



# 1 "/home/user/ecpt/work/simpoint_nemu/include/rtl/rtl.h" 1



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
# 5 "src/isa/riscv64/system/../local-include/rtl.h" 2
# 1 "src/isa/riscv64/system/../local-include/reg.h" 1





static inline int check_reg_index(int index) {
  
# 7 "src/isa/riscv64/system/../local-include/reg.h" 3 4
 ((void) sizeof ((
# 7 "src/isa/riscv64/system/../local-include/reg.h"
 index >= 0 && index < 32
# 7 "src/isa/riscv64/system/../local-include/reg.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 7 "src/isa/riscv64/system/../local-include/reg.h"
 index >= 0 && index < 32
# 7 "src/isa/riscv64/system/../local-include/reg.h" 3 4
 ) ; else __assert_fail (
# 7 "src/isa/riscv64/system/../local-include/reg.h"
 "index >= 0 && index < 32"
# 7 "src/isa/riscv64/system/../local-include/reg.h" 3 4
 , "src/isa/riscv64/system/../local-include/reg.h", 7, __extension__ __PRETTY_FUNCTION__); }))
# 7 "src/isa/riscv64/system/../local-include/reg.h"
                                                         ;
  return index;
}



static inline const char* reg_name(int index, int width) {
  extern const char* regsl[];
  
# 15 "src/isa/riscv64/system/../local-include/reg.h" 3 4
 ((void) sizeof ((
# 15 "src/isa/riscv64/system/../local-include/reg.h"
 index >= 0 && index < 32
# 15 "src/isa/riscv64/system/../local-include/reg.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 15 "src/isa/riscv64/system/../local-include/reg.h"
 index >= 0 && index < 32
# 15 "src/isa/riscv64/system/../local-include/reg.h" 3 4
 ) ; else __assert_fail (
# 15 "src/isa/riscv64/system/../local-include/reg.h"
 "index >= 0 && index < 32"
# 15 "src/isa/riscv64/system/../local-include/reg.h" 3 4
 , "src/isa/riscv64/system/../local-include/reg.h", 15, __extension__ __PRETTY_FUNCTION__); }))
# 15 "src/isa/riscv64/system/../local-include/reg.h"
                                                         ;
  return regsl[index];
}




static inline const char* fpreg_name(int index, int width){
  extern const char* fpregsl[];
  
# 24 "src/isa/riscv64/system/../local-include/reg.h" 3 4
 ((void) sizeof ((
# 24 "src/isa/riscv64/system/../local-include/reg.h"
 index >= 0 && index < 32
# 24 "src/isa/riscv64/system/../local-include/reg.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 24 "src/isa/riscv64/system/../local-include/reg.h"
 index >= 0 && index < 32
# 24 "src/isa/riscv64/system/../local-include/reg.h" 3 4
 ) ; else __assert_fail (
# 24 "src/isa/riscv64/system/../local-include/reg.h"
 "index >= 0 && index < 32"
# 24 "src/isa/riscv64/system/../local-include/reg.h" 3 4
 , "src/isa/riscv64/system/../local-include/reg.h", 24, __extension__ __PRETTY_FUNCTION__); }))
# 24 "src/isa/riscv64/system/../local-include/reg.h"
                                                         ;
  return fpregsl[index];
}
# 6 "src/isa/riscv64/system/../local-include/rtl.h" 2
# 1 "src/isa/riscv64/system/../local-include/csr.h" 1
# 7 "src/isa/riscv64/system/../local-include/rtl.h" 2





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
# 27 "src/isa/riscv64/system/../local-include/rtl.h" 3 4
      ((void) sizeof ((
# 27 "src/isa/riscv64/system/../local-include/rtl.h"
      0
# 27 "src/isa/riscv64/system/../local-include/rtl.h" 3 4
      ) ? 1 : 0), __extension__ ({ if (
# 27 "src/isa/riscv64/system/../local-include/rtl.h"
      0
# 27 "src/isa/riscv64/system/../local-include/rtl.h" 3 4
      ) ; else __assert_fail (
# 27 "src/isa/riscv64/system/../local-include/rtl.h"
      "0"
# 27 "src/isa/riscv64/system/../local-include/rtl.h" 3 4
      , "src/isa/riscv64/system/../local-include/rtl.h", 27, __extension__ __PRETTY_FUNCTION__); }))
# 27 "src/isa/riscv64/system/../local-include/rtl.h"
               ;
  void fp_set_dirty();
  fp_set_dirty();
}
# 3 "src/isa/riscv64/system/priv.c" 2
# 1 "src/isa/riscv64/system/../local-include/intr.h" 1





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


# 31 "src/isa/riscv64/system/../local-include/intr.h" 3 4
_Bool 
# 31 "src/isa/riscv64/system/../local-include/intr.h"
    intr_deleg_S(word_t exceptionNO);
# 4 "src/isa/riscv64/system/priv.c" 2
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
# 5 "src/isa/riscv64/system/priv.c" 2
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
# 6 "src/isa/riscv64/system/priv.c" 2
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
# 7 "src/isa/riscv64/system/priv.c" 2

int update_mmu_state();
uint64_t clint_uptime();
void fp_set_dirty();
void fp_update_rm_cache(uint32_t rm);

rtlreg_t csr_array[4096] = {};



mstatus_t* const mstatus = (mstatus_t *)&csr_array[0x300]; misa_t* const misa = (misa_t *)&csr_array[0x301]; medeleg_t* const medeleg = (medeleg_t *)&csr_array[0x302]; mideleg_t* const mideleg = (mideleg_t *)&csr_array[0x303]; mie_t* const mie = (mie_t *)&csr_array[0x304]; mtvec_t* const mtvec = (mtvec_t *)&csr_array[0x305]; mcounteren_t* const mcounteren = (mcounteren_t *)&csr_array[0x306]; mscratch_t* const mscratch = (mscratch_t *)&csr_array[0x340]; mepc_t* const mepc = (mepc_t *)&csr_array[0x341]; mcause_t* const mcause = (mcause_t *)&csr_array[0x342]; mtval_t* const mtval = (mtval_t *)&csr_array[0x343]; mip_t* const mip = (mip_t *)&csr_array[0x344]; pmpcfg0_t* const pmpcfg0 = (pmpcfg0_t *)&csr_array[0x3a0]; pmpcfg1_t* const pmpcfg1 = (pmpcfg1_t *)&csr_array[0x3a1]; pmpcfg2_t* const pmpcfg2 = (pmpcfg2_t *)&csr_array[0x3a2]; pmpcfg3_t* const pmpcfg3 = (pmpcfg3_t *)&csr_array[0x3a3]; pmpaddr0_t* const pmpaddr0 = (pmpaddr0_t *)&csr_array[0x3b0]; pmpaddr1_t* const pmpaddr1 = (pmpaddr1_t *)&csr_array[0x3b1]; pmpaddr2_t* const pmpaddr2 = (pmpaddr2_t *)&csr_array[0x3b2]; pmpaddr3_t* const pmpaddr3 = (pmpaddr3_t *)&csr_array[0x3b3]; pmpaddr4_t* const pmpaddr4 = (pmpaddr4_t *)&csr_array[0x3b4]; pmpaddr5_t* const pmpaddr5 = (pmpaddr5_t *)&csr_array[0x3b5]; pmpaddr6_t* const pmpaddr6 = (pmpaddr6_t *)&csr_array[0x3b6]; pmpaddr7_t* const pmpaddr7 = (pmpaddr7_t *)&csr_array[0x3b7]; pmpaddr8_t* const pmpaddr8 = (pmpaddr8_t *)&csr_array[0x3b8]; pmpaddr9_t* const pmpaddr9 = (pmpaddr9_t *)&csr_array[0x3b9]; pmpaddr10_t* const pmpaddr10 = (pmpaddr10_t *)&csr_array[0x3ba]; pmpaddr11_t* const pmpaddr11 = (pmpaddr11_t *)&csr_array[0x3bb]; pmpaddr12_t* const pmpaddr12 = (pmpaddr12_t *)&csr_array[0x3bc]; pmpaddr13_t* const pmpaddr13 = (pmpaddr13_t *)&csr_array[0x3bd]; pmpaddr14_t* const pmpaddr14 = (pmpaddr14_t *)&csr_array[0x3be]; pmpaddr15_t* const pmpaddr15 = (pmpaddr15_t *)&csr_array[0x3bf]; mhartid_t* const mhartid = (mhartid_t *)&csr_array[0xf14]; sstatus_t* const sstatus = (sstatus_t *)&csr_array[0x100]; sie_t* const sie = (sie_t *)&csr_array[0x104]; stvec_t* const stvec = (stvec_t *)&csr_array[0x105]; scounteren_t* const scounteren = (scounteren_t *)&csr_array[0x106]; sscratch_t* const sscratch = (sscratch_t *)&csr_array[0x140]; sepc_t* const sepc = (sepc_t *)&csr_array[0x141]; scause_t* const scause = (scause_t *)&csr_array[0x142]; stval_t* const stval = (stval_t *)&csr_array[0x143]; sip_t* const sip = (sip_t *)&csr_array[0x144]; satp_t* const satp = (satp_t *)&csr_array[0x180]; srnctl_t* const srnctl = (srnctl_t *)&csr_array[0x5c4]; fflags_t* const fflags = (fflags_t *)&csr_array[0x001]; frm_t* const frm = (frm_t *)&csr_array[0x002]; fcsr_t* const fcsr = (fcsr_t *)&csr_array[0x003]; mtime_t* const mtime = (mtime_t *)&csr_array[0xc01]; cycle_t* const cycle = (cycle_t *)&csr_array[0xc00]; minstret_t* const minstret = (minstret_t *)&csr_array[0xb02];





static 
# 23 "src/isa/riscv64/system/priv.c" 3 4
      _Bool 
# 23 "src/isa/riscv64/system/priv.c"
           csr_exist[4096] = {};
void init_csr() {
  csr_exist[0x300] = 1; csr_exist[0x301] = 1; csr_exist[0x302] = 1; csr_exist[0x303] = 1; csr_exist[0x304] = 1; csr_exist[0x305] = 1; csr_exist[0x306] = 1; csr_exist[0x340] = 1; csr_exist[0x341] = 1; csr_exist[0x342] = 1; csr_exist[0x343] = 1; csr_exist[0x344] = 1; csr_exist[0x3a0] = 1; csr_exist[0x3a1] = 1; csr_exist[0x3a2] = 1; csr_exist[0x3a3] = 1; csr_exist[0x3b0] = 1; csr_exist[0x3b1] = 1; csr_exist[0x3b2] = 1; csr_exist[0x3b3] = 1; csr_exist[0x3b4] = 1; csr_exist[0x3b5] = 1; csr_exist[0x3b6] = 1; csr_exist[0x3b7] = 1; csr_exist[0x3b8] = 1; csr_exist[0x3b9] = 1; csr_exist[0x3ba] = 1; csr_exist[0x3bb] = 1; csr_exist[0x3bc] = 1; csr_exist[0x3bd] = 1; csr_exist[0x3be] = 1; csr_exist[0x3bf] = 1; csr_exist[0xf14] = 1; csr_exist[0x100] = 1; csr_exist[0x104] = 1; csr_exist[0x105] = 1; csr_exist[0x106] = 1; csr_exist[0x140] = 1; csr_exist[0x141] = 1; csr_exist[0x142] = 1; csr_exist[0x143] = 1; csr_exist[0x144] = 1; csr_exist[0x180] = 1; csr_exist[0x5c4] = 1; csr_exist[0x001] = 1; csr_exist[0x002] = 1; csr_exist[0x003] = 1; csr_exist[0xc01] = 1; csr_exist[0xc00] = 1; csr_exist[0xb02] = 1;



};

rtlreg_t csr_perf;

static inline 
# 33 "src/isa/riscv64/system/priv.c" 3 4
             _Bool 
# 33 "src/isa/riscv64/system/priv.c"
                  csr_is_legal(uint32_t addr) {
  
# 34 "src/isa/riscv64/system/priv.c" 3 4
 ((void) sizeof ((
# 34 "src/isa/riscv64/system/priv.c"
 addr < 4096
# 34 "src/isa/riscv64/system/priv.c" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 34 "src/isa/riscv64/system/priv.c"
 addr < 4096
# 34 "src/isa/riscv64/system/priv.c" 3 4
 ) ; else __assert_fail (
# 34 "src/isa/riscv64/system/priv.c"
 "addr < 4096"
# 34 "src/isa/riscv64/system/priv.c" 3 4
 , "src/isa/riscv64/system/priv.c", 34, __extension__ __PRETTY_FUNCTION__); }))
# 34 "src/isa/riscv64/system/priv.c"
                    ;

  if(!csr_exist[addr]) {



    return 
# 40 "src/isa/riscv64/system/priv.c" 3 4
          0
# 40 "src/isa/riscv64/system/priv.c"
               ;
  }

  int lowest_access_priv_level = (addr & 0b11 << 8) >> 8;
  if (!(cpu.mode >= lowest_access_priv_level)) {
    return 
# 45 "src/isa/riscv64/system/priv.c" 3 4
          0
# 45 "src/isa/riscv64/system/priv.c"
               ;
  }
  return 
# 47 "src/isa/riscv64/system/priv.c" 3 4
        1
# 47 "src/isa/riscv64/system/priv.c"
            ;
}

static inline word_t* csr_decode(uint32_t addr) {
  
# 51 "src/isa/riscv64/system/priv.c" 3 4
 ((void) sizeof ((
# 51 "src/isa/riscv64/system/priv.c"
 addr < 4096
# 51 "src/isa/riscv64/system/priv.c" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 51 "src/isa/riscv64/system/priv.c"
 addr < 4096
# 51 "src/isa/riscv64/system/priv.c" 3 4
 ) ; else __assert_fail (
# 51 "src/isa/riscv64/system/priv.c"
 "addr < 4096"
# 51 "src/isa/riscv64/system/priv.c" 3 4
 , "src/isa/riscv64/system/priv.c", 51, __extension__ __PRETTY_FUNCTION__); }))
# 51 "src/isa/riscv64/system/priv.c"
                    ;





  if ((addr >= 0xb00 && addr <= 0xb1f) || (addr >= 0x320 && addr <= 0x33f)) {
    return &csr_perf;
  }
  return &csr_array[addr];
}
# 89 "src/isa/riscv64/system/priv.c"
uint8_t pmpcfg_from_index(int idx) {
  int xlen = 64;
  uint8_t *cfg_base = (uint8_t *)&csr_array[0x3a0];
  int cfgPerCSR = xlen / 8;
  return *(cfg_base + ((xlen / 32) * (idx / cfgPerCSR)) * cfgPerCSR + (idx % cfgPerCSR));
}

word_t pmpaddr_from_index(int idx) {
  return csr_array[0x3b0 + idx];
}

word_t pmpaddr_from_csrid(int id) {
  return csr_array[id];
}

word_t inline pmp_tor_mask() {
  return -((word_t)1 << (12 - 2));
}

static inline void update_mstatus_sd() {

  if (0 && mstatus->fs) { mstatus->fs = 3; }
  mstatus->sd = (mstatus->fs == 3);
}

static inline word_t csr_read(word_t *src) {

  if ((src >= &(csr_array[0x3b0]) && src < (&(csr_array[0x3b0]) + 16))) {





    if (16 == 0) {
      do { printf("\33[1;34m[%s:%d,%s] " "pmp number is 0, raise illegal instr exception when read pmpaddr" "\33[0m\n", "src/isa/riscv64/system/priv.c", 123, __func__); ; } while (0);
      longjmp_exception(EX_II);
      return 0;
    }

    int idx = (src - &csr_array[0x3b0]);
    uint8_t cfg = pmpcfg_from_index(idx);






    if ((cfg & 0x18) >= 0x18)
      return *src | (~pmp_tor_mask() >> 1);
    else
      return *src & pmp_tor_mask();

  }

  if ((src == (void *)(mstatus)) || (src == (void *)(sstatus))) { update_mstatus_sd(); }

  if ((src == (void *)(sstatus))) { return mstatus->val & (((1 << 19) | (1 << 18) | (0x3 << 13) | (1 << 8) | (1 << 5) | (1 << 1)) | (0x3 << 15) | (1ull << 63) | (3ull << 32)); }
  else if ((src == (void *)(sie))) { return mie->val & (0x222 & mideleg->val); }
  else if ((src == (void *)(mtvec))) { return mtvec->val & ~(0x2UL); }
  else if ((src == (void *)(stvec))) { return stvec->val & ~(0x2UL); }
  else if ((src == (void *)(sip))) { difftest_skip_ref(); return mip->val & (0x222 & mideleg->val); }
  else if ((src == (void *)(fcsr))) { return fcsr->val & 0xff; }
  else if ((src == (void *)(fflags))) { return fcsr->fflags.val & 0x1f; }
  else if ((src == (void *)(frm))) { return fcsr->frm & 0x07; }

  else if ((src == (void *)(mtime))) { difftest_skip_ref(); return clint_uptime(); }

  if ((src == (void *)(mip))) { difftest_skip_ref(); }
  return *src;
}
# 167 "src/isa/riscv64/system/priv.c"
void disable_time_intr() {
    do { printf("\33[1;34m[%s:%d,%s] " "Disabled machine time interruption\n" "\33[0m\n", "src/isa/riscv64/system/priv.c", 168, __func__); ; } while (0);
    mie->val = (((mie->val) & ~((1 << 7))) | ((0) & ((1 << 7))));
}

static inline void csr_write(word_t *dest, word_t src) {

  if ((dest == (void *)(mstatus))) { mstatus->val = (((mstatus->val) & ~((0x7e79bbUL) | (1UL << 63))) | ((src) & ((0x7e79bbUL) | (1UL << 63)))); }
  else if ((dest == (void *)(sstatus))) { mstatus->val = (((mstatus->val) & ~(((1 << 19) | (1 << 18) | (0x3 << 13) | (1 << 8) | (1 << 5) | (1 << 1)))) | ((src) & (((1 << 19) | (1 << 18) | (0x3 << 13) | (1 << 8) | (1 << 5) | (1 << 1))))); }
  else if ((dest == (void *)(sie))) { mie->val = (((mie->val) & ~((0x222 & mideleg->val))) | ((src) & ((0x222 & mideleg->val)))); }
  else if ((dest == (void *)(mip))) { mip->val = (((mip->val) & ~(((1 << 9) | (1 << 8) | (1 << 5) | (1 << 4) | (1 << 1) | (1 << 0)))) | ((src) & (((1 << 9) | (1 << 8) | (1 << 5) | (1 << 4) | (1 << 1) | (1 << 0))))); }
  else if ((dest == (void *)(sip))) { mip->val = (((mip->val) & ~(((cpu.mode == MODE_S) ? 0x2 : (0x222 & mideleg->val)))) | ((src) & (((cpu.mode == MODE_S) ? 0x2 : (0x222 & mideleg->val))))); }
  else if ((dest == (void *)(mtvec))) { *dest = src & ~(0x2UL); }
  else if ((dest == (void *)(stvec))) { *dest = src & ~(0x2UL); }
  else if ((dest == (void *)(medeleg))) { *dest = src & 0xf3ff; }
  else if ((dest == (void *)(mideleg))) { *dest = src & 0x222; }
  else if ((dest == (void *)(fflags))) {
    *dest = src & 0x1f;
    fcsr->val = (frm->val)<<5 | fflags->val;

  }
  else if ((dest == (void *)(frm))) {
    *dest = src & 0x07;
    fcsr->val = (frm->val)<<5 | fflags->val;

  }
  else if ((dest == (void *)(fcsr))) {
    *dest = src & 0xff;
    fflags->val = src & 0x1f;
    frm->val = ((src)>>5) & 0x07;

  }
  else if ((dest >= &(csr_array[0x3b0]) && dest < (&(csr_array[0x3b0]) + 16))) {
    do { if (dflag_translate == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "Writing pmp addr" "\33[0m\n", "src/isa/riscv64/system/priv.c", 200, __func__); ; } while (0); if (dflag_translate == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "Writing pmp addr" "\33[0m\n", "src/isa/riscv64/system/priv.c", 200, __func__); ; } while (0); if (dflag_translate == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "Writing pmp addr" "\33[0m\n", "src/isa/riscv64/system/priv.c", 200, __func__); ; } while (0); if (dflag_translate == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "Writing pmp addr" "\33[0m\n", "src/isa/riscv64/system/priv.c", 200, __func__); ; } while (0); if (dflag_translate == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "Writing pmp addr" "\33[0m\n", "src/isa/riscv64/system/priv.c", 200, __func__); ; } while (0); if (dflag_translate == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Writing pmp addr" "\33[0m\n", "src/isa/riscv64/system/priv.c", 200, __func__); ; } while (0); if (dflag_translate == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "Writing pmp addr" "\33[0m\n", "src/isa/riscv64/system/priv.c", 200, __func__); ; } while (0); if (dflag_translate == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Writing pmp addr" "\33[0m\n", "src/isa/riscv64/system/priv.c", 200, __func__); ; } while (0); if (dflag_translate == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Writing pmp addr" "\33[0m\n", "src/isa/riscv64/system/priv.c", 200, __func__); ; } while (0); if (dflag_translate == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Writing pmp addr" "\33[0m\n", "src/isa/riscv64/system/priv.c", 200, __func__); ; } while (0); } while (0);






    if (16 == 0)
      return;

    do { if (dflag_translate == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "PMP updated\n" "\33[0m\n", "src/isa/riscv64/system/priv.c", 210, __func__); ; } while (0); if (dflag_translate == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "PMP updated\n" "\33[0m\n", "src/isa/riscv64/system/priv.c", 210, __func__); ; } while (0); if (dflag_translate == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "PMP updated\n" "\33[0m\n", "src/isa/riscv64/system/priv.c", 210, __func__); ; } while (0); if (dflag_translate == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "PMP updated\n" "\33[0m\n", "src/isa/riscv64/system/priv.c", 210, __func__); ; } while (0); if (dflag_translate == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "PMP updated\n" "\33[0m\n", "src/isa/riscv64/system/priv.c", 210, __func__); ; } while (0); if (dflag_translate == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "PMP updated\n" "\33[0m\n", "src/isa/riscv64/system/priv.c", 210, __func__); ; } while (0); if (dflag_translate == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "PMP updated\n" "\33[0m\n", "src/isa/riscv64/system/priv.c", 210, __func__); ; } while (0); if (dflag_translate == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "PMP updated\n" "\33[0m\n", "src/isa/riscv64/system/priv.c", 210, __func__); ; } while (0); if (dflag_translate == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "PMP updated\n" "\33[0m\n", "src/isa/riscv64/system/priv.c", 210, __func__); ; } while (0); if (dflag_translate == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "PMP updated\n" "\33[0m\n", "src/isa/riscv64/system/priv.c", 210, __func__); ; } while (0); } while (0);
    int idx = dest - &csr_array[0x3b0];
    word_t cfg = pmpcfg_from_index(idx);
    
# 213 "src/isa/riscv64/system/priv.c" 3 4
   _Bool 
# 213 "src/isa/riscv64/system/priv.c"
        locked = cfg & 0x80;
    
# 214 "src/isa/riscv64/system/priv.c" 3 4
   _Bool 
# 214 "src/isa/riscv64/system/priv.c"
        next_locked = idx < 16 && (pmpcfg_from_index(idx+1) & 0x80);
    
# 215 "src/isa/riscv64/system/priv.c" 3 4
   _Bool 
# 215 "src/isa/riscv64/system/priv.c"
        next_tor = idx < 16 && (pmpcfg_from_index(idx+1) & 0x18) == 0x08;
    if (idx < 16 && !locked && !(next_locked && next_tor)) {
      *dest = src & (((word_t)1 << (40 - 2)) - 1);
    }






    mmu_tlb_flush(0);

  }
  else if ((dest >= &(csr_array[0x3a0]) && dest < (&(csr_array[0x3a0]) + (16/4)))) {




    if (16 == 0)
      return;

    int xlen = 64;
    word_t cfg_data = 0;
    for (int i = 0; i < xlen / 8; i ++ ) {
      word_t cfg = ((src >> (i*8)) & 0xff) & (0x01 | 0x02 | 0x04 | 0x18 | 0x80);
      cfg &= ~0x02 | ((cfg & 0x01) ? 0x02 : 0);
      if (12 != 2 && (cfg & 0x18) == 0x10)
        cfg |= 0x18;
      cfg_data |= (cfg << (i*8));
    }







    *dest = cfg_data;

    mmu_tlb_flush(0);

  } else if ((dest == (void *)(satp))) {
    *dest = (((8UL << (16 + 44)) | (((1L << 16)-1) << 44) | ((1L << (40 -12))-1)) & src);
  } else { *dest = src; }

  
# 260 "src/isa/riscv64/system/priv.c" 3 4
 _Bool 
# 260 "src/isa/riscv64/system/priv.c"
      need_update_mstatus_sd = 
# 260 "src/isa/riscv64/system/priv.c" 3 4
                               0
# 260 "src/isa/riscv64/system/priv.c"
                                    ;
  if ((dest == (void *)(fflags)) || (dest == (void *)(frm)) || (dest == (void *)(fcsr))) {
    fp_set_dirty();
    fp_update_rm_cache(fcsr->frm);
    need_update_mstatus_sd = 
# 264 "src/isa/riscv64/system/priv.c" 3 4
                            1
# 264 "src/isa/riscv64/system/priv.c"
                                ;
  }

  if ((dest == (void *)(sstatus)) || (dest == (void *)(mstatus)) || need_update_mstatus_sd) {
    update_mstatus_sd();
  }

  if ((dest == (void *)(mstatus)) || (dest == (void *)(satp))) { update_mmu_state(); }
  if ((dest == (void *)(satp))) { mmu_tlb_flush(0); }
  if ((dest == (void *)(mstatus)) || (dest == (void *)(sstatus)) || (dest == (void *)(satp)) ||
      (dest == (void *)(mie)) || (dest == (void *)(sie)) || (dest == (void *)(mip)) || (dest == (void *)(sip))) {
    set_sys_state_flag(SYS_STATE_UPDATE);
  }
}

word_t csrid_read(uint32_t csrid) {
  return csr_read(csr_decode(csrid));
}

static void csrrw(rtlreg_t *dest, const rtlreg_t *src, uint32_t csrid) {
  if (!csr_is_legal(csrid)) {
    do { printf("\33[1;34m[%s:%d,%s] " "Illegal csr id %u" "\33[0m\n", "src/isa/riscv64/system/priv.c", 285, __func__, csrid); ; } while (0);
    longjmp_exception(EX_II);
    return;
  }
  word_t *csr = csr_decode(csrid);

  word_t tmp = (src != 
# 291 "src/isa/riscv64/system/priv.c" 3 4
                      ((void *)0) 
# 291 "src/isa/riscv64/system/priv.c"
                           ? *src : 0);
  if (dest != 
# 292 "src/isa/riscv64/system/priv.c" 3 4
             ((void *)0)
# 292 "src/isa/riscv64/system/priv.c"
                 ) { *dest = csr_read(csr); }
  if (src != 
# 293 "src/isa/riscv64/system/priv.c" 3 4
            ((void *)0)
# 293 "src/isa/riscv64/system/priv.c"
                ) { csr_write(csr, tmp); }
}

static word_t priv_instr(uint32_t op, const rtlreg_t *src) {
  switch (op) {

    case 0x102:
      mstatus->sie = mstatus->spie;
      mstatus->spie = (0 ? 0
          : 1);
      cpu.mode = mstatus->spp;
      if (mstatus->spp != MODE_M) { mstatus->mprv = 0; }
      mstatus->spp = MODE_U;
      return sepc->val;
    case 0x302:
      mstatus->mie = mstatus->mpie;
      mstatus->mpie = (0 ? 0
          : 1);
      cpu.mode = mstatus->mpp;
      if (mstatus->mpp != MODE_M) { mstatus->mprv = 0; }
      mstatus->mpp = MODE_U;
      update_mmu_state();
      do { if (dflag_exit == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executing mret to 0x%lx" "\33[0m\n", "src/isa/riscv64/system/priv.c", 315, __func__, mepc->val); ; } while (0); if (dflag_exit == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executing mret to 0x%lx" "\33[0m\n", "src/isa/riscv64/system/priv.c", 315, __func__, mepc->val); ; } while (0); if (dflag_exit == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executing mret to 0x%lx" "\33[0m\n", "src/isa/riscv64/system/priv.c", 315, __func__, mepc->val); ; } while (0); if (dflag_exit == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executing mret to 0x%lx" "\33[0m\n", "src/isa/riscv64/system/priv.c", 315, __func__, mepc->val); ; } while (0); if (dflag_exit == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executing mret to 0x%lx" "\33[0m\n", "src/isa/riscv64/system/priv.c", 315, __func__, mepc->val); ; } while (0); if (dflag_exit == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executing mret to 0x%lx" "\33[0m\n", "src/isa/riscv64/system/priv.c", 315, __func__, mepc->val); ; } while (0); if (dflag_exit == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executing mret to 0x%lx" "\33[0m\n", "src/isa/riscv64/system/priv.c", 315, __func__, mepc->val); ; } while (0); if (dflag_exit == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executing mret to 0x%lx" "\33[0m\n", "src/isa/riscv64/system/priv.c", 315, __func__, mepc->val); ; } while (0); if (dflag_exit == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executing mret to 0x%lx" "\33[0m\n", "src/isa/riscv64/system/priv.c", 315, __func__, mepc->val); ; } while (0); if (dflag_exit == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Executing mret to 0x%lx" "\33[0m\n", "src/isa/riscv64/system/priv.c", 315, __func__, mepc->val); ; } while (0); } while (0);
      return mepc->val;
      break;
    case 0x120:
      mmu_tlb_flush(*src);
      break;

    case 0x160:
      if (!srnctl->svinval) {
        longjmp_exception(EX_II);
      }
      mmu_tlb_flush(*src);
      break;
    case 0x180:
      if (!srnctl->svinval) {
        longjmp_exception(EX_II);
      }
      break;
    case 0x181:
      if (!srnctl->svinval) {
        longjmp_exception(EX_II);
      }
      break;

    case 0x105: break;

    case -1:
      set_sys_state_flag(SYS_STATE_FLUSH_TCACHE);
      break;
    default: do { if (!(0)) { fflush(
# 344 "src/isa/riscv64/system/priv.c" 3 4
            stdout
# 344 "src/isa/riscv64/system/priv.c"
            ); fprintf(
# 344 "src/isa/riscv64/system/priv.c" 3 4
            stderr
# 344 "src/isa/riscv64/system/priv.c"
            , "\33[1;31m"); fprintf(
# 344 "src/isa/riscv64/system/priv.c" 3 4
            stderr
# 344 "src/isa/riscv64/system/priv.c"
            , "Unsupported privilige operation = %d", op); fprintf(
# 344 "src/isa/riscv64/system/priv.c" 3 4
            stderr
# 344 "src/isa/riscv64/system/priv.c"
            , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 344 "src/isa/riscv64/system/priv.c" 3 4
            ((void) sizeof ((
# 344 "src/isa/riscv64/system/priv.c"
            0
# 344 "src/isa/riscv64/system/priv.c" 3 4
            ) ? 1 : 0), __extension__ ({ if (
# 344 "src/isa/riscv64/system/priv.c"
            0
# 344 "src/isa/riscv64/system/priv.c" 3 4
            ) ; else __assert_fail (
# 344 "src/isa/riscv64/system/priv.c"
            "0"
# 344 "src/isa/riscv64/system/priv.c" 3 4
            , "src/isa/riscv64/system/priv.c", 344, __extension__ __PRETTY_FUNCTION__); }))
# 344 "src/isa/riscv64/system/priv.c"
            ; } } while (0);
  }
  return 0;
}

void isa_hostcall(uint32_t id, rtlreg_t *dest, const rtlreg_t *src1,
    const rtlreg_t *src2, word_t imm) {
  word_t ret = 0;
  switch (id) {
    case HOSTCALL_CSR: csrrw(dest, src1, imm); return;
# 364 "src/isa/riscv64/system/priv.c"
    case HOSTCALL_TRAP: ret = raise_intr(imm, *src1); break;

    case HOSTCALL_PRIV: ret = priv_instr(imm, src1); break;
    default: do { if (!(0)) { fflush(
# 367 "src/isa/riscv64/system/priv.c" 3 4
            stdout
# 367 "src/isa/riscv64/system/priv.c"
            ); fprintf(
# 367 "src/isa/riscv64/system/priv.c" 3 4
            stderr
# 367 "src/isa/riscv64/system/priv.c"
            , "\33[1;31m"); fprintf(
# 367 "src/isa/riscv64/system/priv.c" 3 4
            stderr
# 367 "src/isa/riscv64/system/priv.c"
            , "Unsupported hostcall ID = %d", id); fprintf(
# 367 "src/isa/riscv64/system/priv.c" 3 4
            stderr
# 367 "src/isa/riscv64/system/priv.c"
            , "\33[0m\n"); extern void isa_reg_display(); extern void monitor_statistic(); isa_reg_display(); monitor_statistic(); 
# 367 "src/isa/riscv64/system/priv.c" 3 4
            ((void) sizeof ((
# 367 "src/isa/riscv64/system/priv.c"
            0
# 367 "src/isa/riscv64/system/priv.c" 3 4
            ) ? 1 : 0), __extension__ ({ if (
# 367 "src/isa/riscv64/system/priv.c"
            0
# 367 "src/isa/riscv64/system/priv.c" 3 4
            ) ; else __assert_fail (
# 367 "src/isa/riscv64/system/priv.c"
            "0"
# 367 "src/isa/riscv64/system/priv.c" 3 4
            , "src/isa/riscv64/system/priv.c", 367, __extension__ __PRETTY_FUNCTION__); }))
# 367 "src/isa/riscv64/system/priv.c"
            ; } } while (0);
  }
  if (dest) *dest = ret;
}
