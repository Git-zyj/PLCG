#ifndef _35343112121_00_H
#define _35343112121_00_H
/* params start */
# define PB_N (long long)30
# define PB_M (long long)40
# define PB_L (long long)40
# define PB_P (long long)30
# define PB_Q (long long)30
/* params end */
# define xA PB_N
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define xD PB_M
# define xF PB_L
# define xG PB_N
# define yG PB_M
# define zG PB_L
# define xH PB_N
# define yH PB_M
# define zH PB_L
# define xI PB_M
# define yI PB_P
# define zI PB_Q
# if !defined(DATA_TYPE_IS_FLOAT) && !defined(DATA_TYPE_IS_DOUBLE)
#  define DATA_TYPE_IS_DOUBLE
# endif
#ifdef DATA_TYPE_IS_FLOAT
#  define DATA_TYPE float
#  define DATA_PRINTF_MODIFIER "%f "
#  define SCALAR_VAL(x) x##f
#  define SQRT_FUN(x) sqrtf(x)
#  define EXP_FUN(x) expf(x)
#  define POW_FUN(x,y) powf(x,y)
# endif
#ifdef DATA_TYPE_IS_DOUBLE
#  define DATA_TYPE double
#  define DATA_PRINTF_MODIFIER "%lf "
#  define SCALAR_VAL(x) x
#  define SQRT_FUN(x) sqrt(x)
#  define EXP_FUN(x) exp(x)
#  define POW_FUN(x,y) pow(x,y)
# endif
# endif

