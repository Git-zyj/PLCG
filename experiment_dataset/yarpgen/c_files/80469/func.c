/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80469
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
    var_12 = ((/* implicit */long long int) ((int) ((short) var_8)));
    var_13 = ((((/* implicit */_Bool) (~(var_7)))) ? (((((/* implicit */_Bool) var_2)) ? (((9223372036854775807LL) | (-8707023656353273802LL))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) -2690489477588628975LL)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)2048))))) : (var_4))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(arr_3 [i_0])));
            var_14 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (var_0))))));
            arr_8 [i_0] = ((/* implicit */unsigned short) ((short) arr_3 [i_0]));
        }
        arr_9 [i_0] = ((/* implicit */short) ((arr_2 [i_0]) + (((/* implicit */long long int) ((((/* implicit */_Bool) (short)30720)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0])))))));
        var_15 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */short) 536805376);
        arr_13 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((long long int) arr_2 [i_2])) : (((/* implicit */long long int) (+(((/* implicit */int) min((arr_4 [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) (short)-24874))))))))));
    }
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) -1738107063))));
}
