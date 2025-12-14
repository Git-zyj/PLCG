/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84049
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0])) ? (((((/* implicit */unsigned long long int) arr_0 [i_0])) * (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7))))));
        var_17 += ((/* implicit */short) var_10);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)-104);
    }
    var_18 = ((/* implicit */_Bool) max((((/* implicit */signed char) var_11)), (var_1)));
    var_19 = ((/* implicit */signed char) (-(((((/* implicit */int) (short)25040)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)-25041)))))))));
    var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((var_2) << (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) -1573434172)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (!(var_16)))))) : (var_9)));
}
