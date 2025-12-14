/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77745
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
    var_15 = var_3;
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_3 [i_1]))) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) : ((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
            var_17 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        }
        var_18 = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_13))));
}
