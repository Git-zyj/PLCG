/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92543
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] [6U] |= ((/* implicit */short) var_6);
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((int) arr_1 [(short)18])))));
        var_12 = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0]))));
        var_13 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_14 = ((/* implicit */unsigned int) ((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)32554))));
    }
    var_15 = ((/* implicit */unsigned int) var_4);
    var_16 = ((/* implicit */short) var_4);
    var_17 ^= ((/* implicit */_Bool) var_9);
    var_18 = ((/* implicit */unsigned int) var_0);
}
