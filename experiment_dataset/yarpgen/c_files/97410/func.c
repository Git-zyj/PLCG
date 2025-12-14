/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97410
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_12))));
    var_16 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) arr_1 [i_0] [i_1]);
                var_18 = ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_13);
}
