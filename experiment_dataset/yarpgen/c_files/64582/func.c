/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64582
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) var_10);
        var_13 = ((/* implicit */_Bool) (-(max((max((7346193843252555066ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)7251))))))));
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_9))));
        arr_2 [i_0] = ((/* implicit */signed char) max((max((max((var_2), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))))), (var_2)));
    }
    var_15 = ((/* implicit */unsigned int) var_8);
}
