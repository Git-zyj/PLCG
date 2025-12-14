/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7015
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = var_1;
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_19 ^= ((/* implicit */short) ((((/* implicit */int) (signed char)124)) - (((/* implicit */int) (_Bool)1))));
        var_20 = ((/* implicit */short) arr_4 [i_1] [i_1]);
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
    var_22 = ((/* implicit */int) 79889579U);
}
