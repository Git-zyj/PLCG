/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94441
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) 3732251571U);
                    arr_7 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((int) ((unsigned char) arr_5 [i_0] [i_1] [i_1] [i_2])));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)68)) + (((/* implicit */int) var_3))));
}
