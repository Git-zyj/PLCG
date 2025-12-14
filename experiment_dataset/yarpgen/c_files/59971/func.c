/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59971
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_2 [(short)20] [i_1]) : (arr_2 [i_0] [i_0])))) ? (min((((/* implicit */unsigned long long int) 5863291098046138998LL)), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((((-5863291098046138998LL) + (9223372036854775807LL))) >> (((var_14) - (7718947537554778342ULL))))))))));
                var_16 = max((((/* implicit */signed char) ((min((11677273362524863025ULL), (13281244050337813503ULL))) == (((/* implicit */unsigned long long int) 930830696U))))), (min((var_8), (((/* implicit */signed char) ((_Bool) (unsigned short)65527))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((var_6) && (((/* implicit */_Bool) max(((signed char)96), ((signed char)-104))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (-3332024496850907588LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) var_8))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 5863291098046138998LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))) : (((((/* implicit */_Bool) (unsigned short)23020)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5))))))));
}
