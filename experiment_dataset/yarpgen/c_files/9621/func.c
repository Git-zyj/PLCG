/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9621
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
    var_16 = var_12;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 -= ((/* implicit */_Bool) min((((var_9) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0])))))), (((/* implicit */int) max((arr_2 [i_0 + 1]), (var_10))))));
        var_18 ^= var_12;
    }
    var_19 = var_5;
    var_20 = ((/* implicit */_Bool) min((((/* implicit */int) var_7)), (max(((+(((/* implicit */int) var_2)))), (((var_2) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))));
}
