/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = (((~var_4) & (((27989 ? var_5 : var_3)))));
                    var_21 = max((min((var_10 | var_5), ((max(37546, 1))))), (min(913657288, (~27995))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_22 = ((max(var_15, var_7)));
                    var_23 -= 1;
                    arr_17 [i_4] [i_4] [i_5] [i_5] = (min(-31, 37540));
                    arr_18 [i_4] [i_4] [14] [i_4] = (((((max(var_11, 35484)))) ? (max((~var_8), ((var_8 ? -913657279 : var_8)))) : ((max((!2147483647), (!var_16))))));
                }
            }
        }
    }
    var_24 = (max(var_9, ((((max(var_6, var_3))) ? -var_9 : var_14))));
    #pragma endscop
}
