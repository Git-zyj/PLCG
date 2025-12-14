/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86368
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
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((var_13) <= (var_1))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_19 ^= ((((unsigned int) (signed char)-112)) % ((~((~(4294967295U))))));
        arr_2 [4U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9U))));
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (var_14))))));
    }
}
