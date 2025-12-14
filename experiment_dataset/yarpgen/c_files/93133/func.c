/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93133
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
    var_18 += ((/* implicit */int) (~(max((((/* implicit */long long int) min((((/* implicit */signed char) var_2)), (var_17)))), (min((((/* implicit */long long int) (signed char)(-127 - 1))), (-7009101666858003595LL)))))));
    var_19 = ((/* implicit */unsigned long long int) ((long long int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) & (var_13)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) 3385460706U)) : (arr_1 [i_0]))) << (((((((/* implicit */int) (short)-7100)) + (7151))) - (21)))));
        var_20 ^= ((/* implicit */int) arr_1 [i_0]);
    }
}
