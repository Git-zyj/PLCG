#ifndef _33341112121_00_H
#define _33341112121_00_H
/* params start */
# define PB_N (long long)50
# define PB_M (long long)40
# define PB_L (long long)40
# define PB_P (long long)50
# define PB_Q (long long)50
/* params end */
# define xA PB_M
# define yA PB_L
# define xB PB_M
# define xC PB_N
# define yC PB_M
# define zC PB_L
# define xD PB_M
# define xE PB_M
# define yE PB_P
# define zE PB_Q
# define vE PB_Q
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

