/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64882
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    var_15 = (-(((((/* implicit */_Bool) arr_7 [(short)9] [i_2 + 2] [(short)9])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
                    arr_11 [i_0 - 1] [i_0] [i_0 - 1] [(_Bool)1] = ((/* implicit */_Bool) (~(var_13)));
                }
            } 
        } 
    } 
    var_16 = var_9;
}
