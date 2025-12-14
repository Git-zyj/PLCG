/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76128
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
    }
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) var_9)))));
}
