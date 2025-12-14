/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93584
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
    var_15 = (+(((((/* implicit */_Bool) ((int) var_0))) ? ((+(var_13))) : (((-1) / (var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_16 &= (+((~(var_13))));
                var_17 = (+(((/* implicit */int) ((3) <= (arr_3 [i_1 + 1] [i_1] [i_1])))));
                var_18 = ((67108860) << (((67108863) - (67108859))));
                var_19 = min((max((var_5), ((+(arr_0 [i_0]))))), (arr_2 [i_0]));
            }
        } 
    } 
    var_20 = ((int) ((int) ((int) var_4)));
}
