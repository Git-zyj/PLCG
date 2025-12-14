/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_1;
    var_11 ^= ((1 ? 40 : -11));
    var_12 = var_2;
    var_13 = (((((((24007 ? var_3 : var_0)) & 53))) ? (((364113966 <= ((var_4 ? 536869888 : 1))))) : var_7));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = arr_1 [i_0] [i_0];
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, (((1749316096 ? 13913968774604212452 : 1)))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_3 + 3] = ((var_4 ? (((arr_0 [i_0] [i_3 + 2]) / (((arr_9 [i_0] [i_0] [i_2] [i_3] [i_2 + 1]) ? var_7 : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((arr_9 [i_3] [i_1 - 1] [i_3] [i_0] [i_3]) ? var_7 : (((arr_0 [i_0] [i_1]) ? var_5 : (arr_1 [i_0] [i_0])))))));
                        var_15 = (arr_6 [i_2] [i_2] [i_2] [i_2]);
                    }
                }
            }
        }
        var_16 = (min(var_16, (((!((max(var_0, (arr_6 [i_0] [i_0] [i_0] [i_0])))))))));
        var_17 = var_7;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_15 [i_4] = ((var_1 ? var_8 : (arr_14 [i_4])));
        var_18 = ((var_0 ? 78 : 1));
        var_19 = ((!(arr_4 [i_4])));
        arr_16 [i_4] = (-55 < 1);
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_20 = (max(var_20, -var_4));

        /* vectorizable */
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            var_21 = ((481277476 ? ((1 ? 17454747090944 : 481277455)) : 1));
            arr_23 [i_5] [i_5] = ((-var_8 ? 1060844486 : 14680064));
        }
    }
    #pragma endscop
}
