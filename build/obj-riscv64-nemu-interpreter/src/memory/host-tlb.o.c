# 1 "src/memory/host-tlb.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "src/memory/host-tlb.c"
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
# 2 "src/memory/host-tlb.c" 2
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
# 3 "src/memory/host-tlb.c" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/include/memory/vaddr.h" 1





struct Decode;
word_t vaddr_ifetch(vaddr_t addr, int len);
word_t vaddr_read(struct Decode *s, vaddr_t addr, int len, int mmu_mode);
void vaddr_write(struct Decode *s, vaddr_t addr, int len, word_t data, int mmu_mode);

word_t vaddr_read_safe(vaddr_t addr, int len);





int force_raise_pf(vaddr_t vaddr, int type);
# 4 "src/memory/host-tlb.c" 2
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
# 5 "src/memory/host-tlb.c" 2
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
# 6 "src/memory/host-tlb.c" 2
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
# 7 "src/memory/host-tlb.c" 2
# 1 "/home/user/ecpt/work/simpoint_nemu/include/profiling/inst_profiling.h" 1







void recordMem(uint64_t pc, uint64_t vaddr, uint64_t paddr, 
# 8 "/home/user/ecpt/work/simpoint_nemu/include/profiling/inst_profiling.h" 3 4
                                                           _Bool 
# 8 "/home/user/ecpt/work/simpoint_nemu/include/profiling/inst_profiling.h"
                                                                is_write);
void recordFetch(uint64_t pc, uint64_t vaddr, uint64_t inst_paddr);
# 8 "src/memory/host-tlb.c" 2




typedef struct {
  uint8_t *offset;
  vaddr_t gvpn;
  paddr_t gppbase;
} HostTLBEntry;

static HostTLBEntry hosttlb[(1 << 12) * 2];
static HostTLBEntry* const hostrtlb = &hosttlb[0];
static HostTLBEntry* const hostwtlb = &hosttlb[(1 << 12)];

static inline vaddr_t hosttlb_vpn(vaddr_t vaddr) {
  return (vaddr >> 12);
}

static inline int hosttlb_idx(vaddr_t vaddr) {
  return (hosttlb_vpn(vaddr) % (1 << 12));
}

void hosttlb_flush(vaddr_t vaddr) {
  if (vaddr == 0) {
    memset(hosttlb, -1, sizeof(hosttlb));
  } else {
    vaddr_t gvpn = hosttlb_vpn(vaddr);
    int idx = hosttlb_idx(vaddr);
    if (hostrtlb[idx].gvpn == gvpn) hostrtlb[idx].gvpn = (sword_t)-1;
    if (hostwtlb[idx].gvpn == gvpn) hostwtlb[idx].gvpn = (sword_t)-1;
  }
}

void hosttlb_init() {
  hosttlb_flush(0);
}

static paddr_t va2pa(struct Decode *s, vaddr_t vaddr, int len, int type) {
  if (type != MEM_TYPE_IFETCH) save_globals(s);
  int ret = isa_mmu_check(vaddr, len, type);
  if (ret == MMU_DIRECT) return vaddr;
  paddr_t pg_base = isa_mmu_translate(vaddr, len, type);
  ret = pg_base & ((1ul << 12) - 1);
  
# 51 "src/memory/host-tlb.c" 3 4
 ((void) sizeof ((
# 51 "src/memory/host-tlb.c"
 ret == MEM_RET_OK
# 51 "src/memory/host-tlb.c" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 51 "src/memory/host-tlb.c"
 ret == MEM_RET_OK
# 51 "src/memory/host-tlb.c" 3 4
 ) ; else __assert_fail (
# 51 "src/memory/host-tlb.c"
 "ret == MEM_RET_OK"
# 51 "src/memory/host-tlb.c" 3 4
 , "src/memory/host-tlb.c", 51, __extension__ __PRETTY_FUNCTION__); }))
# 51 "src/memory/host-tlb.c"
                          ;
  return pg_base | (vaddr & ((1ul << 12) - 1));
}

__attribute__((noinline))
static word_t hosttlb_read_slowpath(struct Decode *s, vaddr_t vaddr, int len, int type) {
  paddr_t paddr = va2pa(s, vaddr, len, type);
  if (__builtin_expect(in_pmem(paddr), 1)) {
    HostTLBEntry *e = &hostrtlb[hosttlb_idx(vaddr)];
    e->offset = guest_to_host(paddr) - vaddr;
    e->gvpn = hosttlb_vpn(vaddr);
    e->gppbase = paddr & (~(uint64_t)((1ul << 12) - 1));
  }
# 72 "src/memory/host-tlb.c"
  do { if (dflag_translate == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "Slowpath, vaddr " "0x%016lx" " --> paddr: " "0x%08x" "\33[0m\n", "src/memory/host-tlb.c", 72, __func__, vaddr, paddr); ; } while (0); if (dflag_translate == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "Slowpath, vaddr " "0x%016lx" " --> paddr: " "0x%08x" "\33[0m\n", "src/memory/host-tlb.c", 72, __func__, vaddr, paddr); ; } while (0); if (dflag_translate == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "Slowpath, vaddr " "0x%016lx" " --> paddr: " "0x%08x" "\33[0m\n", "src/memory/host-tlb.c", 72, __func__, vaddr, paddr); ; } while (0); if (dflag_translate == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "Slowpath, vaddr " "0x%016lx" " --> paddr: " "0x%08x" "\33[0m\n", "src/memory/host-tlb.c", 72, __func__, vaddr, paddr); ; } while (0); if (dflag_translate == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "Slowpath, vaddr " "0x%016lx" " --> paddr: " "0x%08x" "\33[0m\n", "src/memory/host-tlb.c", 72, __func__, vaddr, paddr); ; } while (0); if (dflag_translate == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Slowpath, vaddr " "0x%016lx" " --> paddr: " "0x%08x" "\33[0m\n", "src/memory/host-tlb.c", 72, __func__, vaddr, paddr); ; } while (0); if (dflag_translate == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "Slowpath, vaddr " "0x%016lx" " --> paddr: " "0x%08x" "\33[0m\n", "src/memory/host-tlb.c", 72, __func__, vaddr, paddr); ; } while (0); if (dflag_translate == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Slowpath, vaddr " "0x%016lx" " --> paddr: " "0x%08x" "\33[0m\n", "src/memory/host-tlb.c", 72, __func__, vaddr, paddr); ; } while (0); if (dflag_translate == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Slowpath, vaddr " "0x%016lx" " --> paddr: " "0x%08x" "\33[0m\n", "src/memory/host-tlb.c", 72, __func__, vaddr, paddr); ; } while (0); if (dflag_translate == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Slowpath, vaddr " "0x%016lx" " --> paddr: " "0x%08x" "\33[0m\n", "src/memory/host-tlb.c", 72, __func__, vaddr, paddr); ; } while (0); } while (0);
  return paddr_read(paddr, len, MEM_TYPE_READ, MODE_S, vaddr);
}

__attribute__((noinline))
static void hosttlb_write_slowpath(struct Decode *s, vaddr_t vaddr, int len, word_t data) {
  paddr_t paddr = va2pa(s, vaddr, len, MEM_TYPE_WRITE);
  if (__builtin_expect(in_pmem(paddr), 1)) {
    HostTLBEntry *e = &hostwtlb[hosttlb_idx(vaddr)];
    e->offset = guest_to_host(paddr) - vaddr;
    e->gvpn = hosttlb_vpn(vaddr);
    e->gppbase = paddr & (~(uint64_t)((1ul << 12) - 1));
  }






  paddr_write(paddr, len, data, MODE_S, vaddr);
}

word_t hosttlb_read(struct Decode *s, vaddr_t vaddr, int len, int type) {
  do { if (dflag_mem == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "hosttlb_reading " "0x%016lx" "\33[0m\n", "src/memory/host-tlb.c", 95, __func__, vaddr); ; } while (0); if (dflag_mem == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "hosttlb_reading " "0x%016lx" "\33[0m\n", "src/memory/host-tlb.c", 95, __func__, vaddr); ; } while (0); if (dflag_mem == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "hosttlb_reading " "0x%016lx" "\33[0m\n", "src/memory/host-tlb.c", 95, __func__, vaddr); ; } while (0); if (dflag_mem == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "hosttlb_reading " "0x%016lx" "\33[0m\n", "src/memory/host-tlb.c", 95, __func__, vaddr); ; } while (0); if (dflag_mem == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "hosttlb_reading " "0x%016lx" "\33[0m\n", "src/memory/host-tlb.c", 95, __func__, vaddr); ; } while (0); if (dflag_mem == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "hosttlb_reading " "0x%016lx" "\33[0m\n", "src/memory/host-tlb.c", 95, __func__, vaddr); ; } while (0); if (dflag_mem == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "hosttlb_reading " "0x%016lx" "\33[0m\n", "src/memory/host-tlb.c", 95, __func__, vaddr); ; } while (0); if (dflag_mem == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "hosttlb_reading " "0x%016lx" "\33[0m\n", "src/memory/host-tlb.c", 95, __func__, vaddr); ; } while (0); if (dflag_mem == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "hosttlb_reading " "0x%016lx" "\33[0m\n", "src/memory/host-tlb.c", 95, __func__, vaddr); ; } while (0); if (dflag_mem == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "hosttlb_reading " "0x%016lx" "\33[0m\n", "src/memory/host-tlb.c", 95, __func__, vaddr); ; } while (0); } while (0);
  vaddr_t gvpn = hosttlb_vpn(vaddr);
  HostTLBEntry *e = &hostrtlb[hosttlb_idx(vaddr)];
  if (__builtin_expect(e->gvpn != gvpn, 0)) {
    do { if (dflag_mem == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB slow path" "\33[0m\n", "src/memory/host-tlb.c", 99, __func__); ; } while (0); if (dflag_mem == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB slow path" "\33[0m\n", "src/memory/host-tlb.c", 99, __func__); ; } while (0); if (dflag_mem == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB slow path" "\33[0m\n", "src/memory/host-tlb.c", 99, __func__); ; } while (0); if (dflag_mem == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB slow path" "\33[0m\n", "src/memory/host-tlb.c", 99, __func__); ; } while (0); if (dflag_mem == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB slow path" "\33[0m\n", "src/memory/host-tlb.c", 99, __func__); ; } while (0); if (dflag_mem == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB slow path" "\33[0m\n", "src/memory/host-tlb.c", 99, __func__); ; } while (0); if (dflag_mem == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB slow path" "\33[0m\n", "src/memory/host-tlb.c", 99, __func__); ; } while (0); if (dflag_mem == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB slow path" "\33[0m\n", "src/memory/host-tlb.c", 99, __func__); ; } while (0); if (dflag_mem == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB slow path" "\33[0m\n", "src/memory/host-tlb.c", 99, __func__); ; } while (0); if (dflag_mem == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB slow path" "\33[0m\n", "src/memory/host-tlb.c", 99, __func__); ; } while (0); } while (0);
    return hosttlb_read_slowpath(s, vaddr, len, type);
  } else {
    do { if (dflag_mem == dflag_mem && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB fast path" "\33[0m\n", "src/memory/host-tlb.c", 102, __func__); ; } while (0); if (dflag_mem == dflag_translate && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB fast path" "\33[0m\n", "src/memory/host-tlb.c", 102, __func__); ; } while (0); if (dflag_mem == dflag_trace_inst && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB fast path" "\33[0m\n", "src/memory/host-tlb.c", 102, __func__); ; } while (0); if (dflag_mem == dflag_trace_inst_dasm && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB fast path" "\33[0m\n", "src/memory/host-tlb.c", 102, __func__); ; } while (0); if (dflag_mem == dflag_trace_bb && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB fast path" "\33[0m\n", "src/memory/host-tlb.c", 102, __func__); ; } while (0); if (dflag_mem == dflag_betapoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB fast path" "\33[0m\n", "src/memory/host-tlb.c", 102, __func__); ; } while (0); if (dflag_mem == dflag_exit && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB fast path" "\33[0m\n", "src/memory/host-tlb.c", 102, __func__); ; } while (0); if (dflag_mem == dflag_memprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB fast path" "\33[0m\n", "src/memory/host-tlb.c", 102, __func__); ; } while (0); if (dflag_mem == dflag_ctrlprof && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB fast path" "\33[0m\n", "src/memory/host-tlb.c", 102, __func__); ; } while (0); if (dflag_mem == dflag_simpoint && 0) do { printf("\33[1;34m[%s:%d,%s] " "Host TLB fast path" "\33[0m\n", "src/memory/host-tlb.c", 102, __func__); ; } while (0); } while (0);
# 114 "src/memory/host-tlb.c"
    return host_read(e->offset + vaddr, len);
  }
}

void hosttlb_write(struct Decode *s, vaddr_t vaddr, int len, word_t data) {
  vaddr_t gvpn = hosttlb_vpn(vaddr);
  HostTLBEntry *e = &hostwtlb[hosttlb_idx(vaddr)];
  if (__builtin_expect(e->gvpn != gvpn, 0)) {
    hosttlb_write_slowpath(s, vaddr, len, data);
    return;
  }







  host_write(e->offset + vaddr, len, data);
}
