/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95316
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
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) arr_3 [i_0]);
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)71)), (var_3)))))))));
    }
    var_14 ^= ((/* implicit */unsigned short) var_9);
    var_15 = ((/* implicit */_Bool) var_7);
}
