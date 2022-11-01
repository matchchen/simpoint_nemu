# 1 "src/checkpoint/cpt_env.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "src/checkpoint/cpt_env.c"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4

# 149 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 328 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef int wchar_t;
# 426 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 437 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
} max_align_t;
# 2 "src/checkpoint/cpt_env.c" 2


# 3 "src/checkpoint/cpt_env.c"
char *output_base_dir = 
# 3 "src/checkpoint/cpt_env.c" 3 4
                       ((void *)0)
# 3 "src/checkpoint/cpt_env.c"
                           ;
char *config_name = 
# 4 "src/checkpoint/cpt_env.c" 3 4
                   ((void *)0)
# 4 "src/checkpoint/cpt_env.c"
                       ;
char *workload_name = 
# 5 "src/checkpoint/cpt_env.c" 3 4
                     ((void *)0)
# 5 "src/checkpoint/cpt_env.c"
                         ;
char *simpoints_dir = 
# 6 "src/checkpoint/cpt_env.c" 3 4
                     ((void *)0)
# 6 "src/checkpoint/cpt_env.c"
                         ;
int cpt_id = -1;
char *cpt_file = 
# 8 "src/checkpoint/cpt_env.c" 3 4
                ((void *)0)
# 8 "src/checkpoint/cpt_env.c"
                    ;
char *restorer = 
# 9 "src/checkpoint/cpt_env.c" 3 4
                ((void *)0)
# 9 "src/checkpoint/cpt_env.c"
                    ;
