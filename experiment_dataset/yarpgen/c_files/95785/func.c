/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95785
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_18 = var_6;
                arr_5 [i_0] = ((/* implicit */signed char) ((1500889993) & (((/* implicit */int) var_0))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_15);
}
