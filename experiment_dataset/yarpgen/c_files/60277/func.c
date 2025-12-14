/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60277
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [11U]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((min((arr_1 [i_0]), (arr_1 [i_0]))), (((/* implicit */short) arr_0 [i_0])))))) : (4294967295U))))));
        var_11 = ((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]));
    }
    for (signed char i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        arr_4 [i_1] &= (_Bool)1;
        var_12 = ((/* implicit */unsigned int) arr_0 [10]);
    }
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_2))));
}
