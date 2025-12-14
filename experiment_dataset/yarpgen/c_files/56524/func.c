/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56524
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
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 + 2])))), (((/* implicit */int) arr_4 [i_0] [i_1]))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
    var_12 &= var_4;
}
