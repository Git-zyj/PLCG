/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94782
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
    var_19 -= ((var_15) ? (((((/* implicit */_Bool) var_3)) ? (((((var_7) + (9223372036854775807LL))) >> (((/* implicit */int) var_15)))) : (((/* implicit */long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_12))))))) : (((/* implicit */long long int) 7U)));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_10))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 2]))));
        arr_4 [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) ((-2073764179993983072LL) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2])))))) : (((/* implicit */int) arr_2 [i_0 - 1]))));
        arr_5 [i_0] [i_0] = var_3;
        arr_6 [i_0 - 2] = ((/* implicit */int) var_11);
        var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0]))));
    }
}
