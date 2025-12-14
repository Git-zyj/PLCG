/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94238
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)113);
        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [(signed char)15]) : (((/* implicit */int) var_17))));
    }
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_3))));
}
