/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((!(!var_11)))), var_3));

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_4 [4] |= ((((min((min(-78130580, 78130580)), (-48 || 78130580)))) ? -78130581 : var_12));
        arr_5 [i_0] = (((arr_3 [i_0 - 1]) - (((var_6 ? var_12 : var_9)))));
        var_20 = ((78130580 ? (((((((arr_3 [i_0]) & var_9))) ? ((78130580 ? (arr_2 [i_0]) : 51061529)) : (((-13959 ? -13959 : var_2)))))) : ((((min(0, -7591258124168514694))) ? (((arr_1 [i_0 + 1]) ? (arr_3 [i_0]) : 24)) : ((min((arr_1 [i_0]), 1906384396)))))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1 + 1] = var_7;
        var_21 = ((((min(-var_6, (var_12 + -7591258124168514687)))) - (((arr_3 [i_1 + 1]) ? var_18 : (arr_3 [i_1 + 1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_22 -= ((((min(26793, (!4243905744)))) && -7591258124168514694));
        var_23 ^= 1906384385;
        arr_12 [i_2] = ((var_10 > (((arr_1 [i_2]) ? (arr_6 [i_2]) : ((var_2 ? 7591258124168514686 : (arr_7 [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_15 [i_3] = (-9223372036854775807 - 1);
        var_24 = (min(((max(var_9, (78130565 - var_0)))), var_11));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                arr_21 [i_4] [i_4] = ((((max(-78130579, var_0))) ? (min((arr_20 [i_4]), var_14)) : (~32577)));
                arr_22 [i_4] [i_5] [7] = ((~(((0 && 78130565) + 78130580))));
            }
        }
    }
    #pragma endscop
}
