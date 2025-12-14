/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86260
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
    var_16 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        arr_3 [i_0] |= ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        var_17 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_0 [i_0] [i_0 - 1]) / (arr_0 [i_0 + 1] [i_0 + 2]))))));
    }
}
