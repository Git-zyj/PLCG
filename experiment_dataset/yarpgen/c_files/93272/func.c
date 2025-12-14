/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93272
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))));
        var_10 = ((/* implicit */unsigned int) var_9);
    }
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))) ? (var_0) : (var_6)));
}
