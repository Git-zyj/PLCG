/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55643
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) arr_1 [i_0 + 1] [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) max((var_11), (((/* implicit */unsigned long long int) (~(1026512781U))))));
    }
    var_14 += ((/* implicit */_Bool) var_3);
}
