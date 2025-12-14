/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75077
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
    var_14 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_1 [(unsigned short)4] [i_0])) * (((/* implicit */int) arr_0 [i_0]))))));
        arr_2 [6U] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) var_12);
        var_16 = ((/* implicit */unsigned short) ((var_3) ? (((/* implicit */int) arr_3 [i_1 + 3])) : (((/* implicit */int) arr_4 [i_1 + 4]))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 + 3])) ? (((/* implicit */int) arr_4 [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1 + 4]))));
        var_18 = arr_4 [i_1];
    }
}
