/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(var_3 < var_0)));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_11 = (-2 & 84);
        var_12 = (max(var_12, (~-var_4)));
        arr_2 [19] [i_0] = ((((~((var_3 >> (var_1 - 14208021122822018797))))) - var_6));
        var_13 = (((((43 ? (arr_0 [i_0 - 2]) : (arr_1 [i_0])))) ? (max((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1]))) : (arr_1 [i_0 + 1])));
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] = (arr_14 [i_2] [i_3] [i_4]);
                                arr_17 [i_1] = ((((arr_15 [i_1] [i_1] [i_1]) + (max((arr_4 [i_1] [i_1]), 16)))));
                                var_14 = ((min(2, 11)));
                                arr_18 [9] [i_1] [i_1] [i_1] [i_1] = (((~((2 ? -8 : -2)))));
                            }
                        }
                    }
                    var_15 = (min(var_15, (arr_15 [i_1] [i_2] [i_2])));
                }
            }
        }
        var_16 = (arr_15 [i_1] [15] [i_1]);
        var_17 = (((((arr_12 [i_1]) ? (((arr_7 [i_1] [i_1] [i_1]) ? (arr_0 [9]) : (arr_3 [i_1]))) : (arr_14 [i_1] [i_1] [i_1])))) || ((max((arr_1 [i_1]), (arr_7 [i_1] [i_1] [i_1])))));
        var_18 = (max(var_18, (!-3509440928698059826)));
        arr_19 [i_1] = ((var_4 ? ((1958764742 ? (arr_1 [i_1]) : (arr_1 [i_1]))) : ((-0 ? ((min(var_7, -9))) : (arr_1 [i_1])))));
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 20;i_6 += 1)
    {
        arr_24 [i_6] [i_6] = ((var_2 / (arr_21 [i_6 - 1])));
        var_19 = (((arr_21 [i_6 - 3]) - ((-(arr_23 [i_6] [i_6])))));
        arr_25 [i_6] = var_0;
    }
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        var_20 = (((((((min((arr_0 [i_7]), (arr_8 [i_7])))) ? (!var_4) : var_3))) ? var_1 : -6487998451929300314));
        var_21 = (max(var_21, (arr_14 [1] [i_7] [i_7])));
        var_22 = (min(var_22, (((max((arr_1 [i_7 - 1]), (arr_4 [16] [16])))))));
        var_23 &= ((((((arr_9 [i_7] [4] [i_7]) ? var_1 : -9))) ? (max((arr_0 [i_7]), (arr_13 [1] [i_7]))) : 5));
    }

    /* vectorizable */
    for (int i_8 = 1; i_8 < 17;i_8 += 1)
    {
        var_24 = (max(var_24, (((arr_10 [i_8 + 2] [i_8 + 2] [i_8 + 2]) && 24))));
        arr_31 [i_8] [i_8] = (arr_12 [i_8]);
        var_25 = (min(var_25, ((((var_2 ? var_2 : var_8))))));
    }
    var_26 -= var_3;
    #pragma endscop
}
