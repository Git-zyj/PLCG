/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62774
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
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) (unsigned short)55802);
                arr_6 [i_0] [i_1] [i_1] = arr_3 [i_1] [15ULL];
            }
        } 
    } 
    var_18 &= ((/* implicit */_Bool) var_1);
}
