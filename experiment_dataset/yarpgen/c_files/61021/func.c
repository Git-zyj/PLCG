/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61021
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
    for (short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) arr_1 [(_Bool)1])) : (773551289U))) : (((/* implicit */unsigned int) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_0 [i_0])))) + (((var_8) - (((/* implicit */int) arr_0 [i_0]))))));
    }
    var_19 = ((unsigned long long int) ((((/* implicit */_Bool) ((var_5) / (((/* implicit */unsigned long long int) var_0))))) ? (var_0) : (((((/* implicit */int) (short)6443)) / (var_0)))));
    var_20 = ((((unsigned int) var_8)) / (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (var_9))));
}
