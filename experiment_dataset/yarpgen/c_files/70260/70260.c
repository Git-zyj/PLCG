/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = arr_0 [i_0 - 2];
                    var_15 &= (((((arr_5 [9] [i_0] [i_0] [i_0]) ? (arr_2 [19] [19]) : (arr_6 [i_0] [1] [i_2]))) & var_5));
                    var_16 += ((((((arr_3 [i_0] [i_0]) ? 158 : var_9))) ? 61 : (arr_6 [i_1 + 2] [i_0 + 3] [i_0 + 3])));
                }
            }
        }
        var_17 = (arr_6 [i_0 + 1] [i_0 - 1] [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_18 = (-44 + var_0);
        var_19 = ((((arr_5 [i_3] [i_3] [i_3] [i_3]) ? (arr_7 [i_3]) : (arr_8 [i_3]))) - (((var_8 ? (arr_0 [i_3]) : 158))));
        var_20 = ((((arr_2 [i_3] [i_3]) && var_7)) || 2111802176);
    }
    var_21 = (min(((var_4 ? -var_9 : 36678)), (((min(var_2, var_13))))));
    #pragma endscop
}
