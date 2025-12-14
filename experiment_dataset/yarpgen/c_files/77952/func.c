/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77952
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))))) != (min((max((((/* implicit */unsigned long long int) var_10)), (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_4)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((long long int) max((((/* implicit */int) var_6)), (arr_1 [i_0 - 4] [i_0])))))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0 - 3])))) - (((/* implicit */int) (!(((/* implicit */_Bool) (short)-11577)))))))) ? (max((((/* implicit */long long int) var_3)), (((-8897607426322636885LL) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) : ((-((~(-8897607426322636885LL)))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_1]))));
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 15; i_2 += 2) 
        {
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_9 [i_1] [i_2 + 3]))));
            var_18 &= ((/* implicit */long long int) (-(((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((/* implicit */int) var_10)) - (69)))))));
        }
    }
}
