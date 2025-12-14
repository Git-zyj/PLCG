/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95052
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
    var_17 &= var_9;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) arr_2 [i_0] [i_0]);
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) 0U))));
        arr_3 [i_0] = arr_1 [6LL] [i_0];
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */short) 18446744073709551615ULL);
        arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) * (var_6)));
        var_20 = ((/* implicit */int) ((unsigned int) (-(max((((/* implicit */int) arr_5 [1LL])), (arr_6 [i_1]))))));
        var_21 = ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1])));
    }
}
