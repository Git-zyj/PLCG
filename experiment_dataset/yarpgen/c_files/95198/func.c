/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95198
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
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) var_8);
        var_16 |= ((/* implicit */int) min((13771949122847427442ULL), (18446744073709551593ULL)));
    }
    var_17 = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) var_6)), (var_13)))));
}
