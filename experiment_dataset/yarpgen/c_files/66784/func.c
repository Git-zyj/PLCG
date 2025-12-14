/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66784
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_16))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max(((+(var_9))), (((((/* implicit */int) var_11)) + (((/* implicit */int) var_19))))))) * (((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) & (arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_16)) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_23 |= ((/* implicit */unsigned char) ((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_15))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))))));
    }
    var_26 = ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_2)))));
}
