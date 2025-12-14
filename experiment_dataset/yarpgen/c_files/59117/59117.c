/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_16 - var_2) ? var_4 : (((~var_10) ? -var_15 : -94))));
    var_20 = (max(var_20, ((((((((max(var_4, var_18))) ? (min(var_14, var_14)) : (~var_5)))) ? (((((min(var_4, -112))) ? var_16 : (87 > 1184)))) : (((!var_10) ? var_18 : var_18)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = ((((max(247, (arr_0 [i_0])))) ? var_0 : (arr_3 [i_0] [i_0])));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_0] [12] [i_1 - 1] [i_0] = (((((arr_0 [i_0 + 2]) <= (-31184 ^ var_11))) ? ((~(((arr_7 [18] [1] [i_3]) ? var_18 : var_6)))) : (((((var_13 / 18662) != var_11))))));
                        arr_12 [i_0] [i_3] [i_0] [i_3] = ((((arr_4 [i_0]) ? ((-(arr_1 [1] [7]))) : ((max((arr_0 [i_0]), -1209))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] = var_14;
                        var_22 = (max(var_22, (!var_14)));

                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            var_23 = -35389;
                            var_24 = ((-((((((arr_3 [i_1] [i_1]) % (arr_17 [i_1] [i_1] [4]))) < (!var_7))))));
                            arr_18 [i_2] [i_1] [i_2] [12] [i_4 - 2] |= (arr_9 [i_4] [i_0 + 1] [i_1] [i_1] [i_4]);
                            var_25 *= (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            var_26 = ((~((((arr_8 [i_4 - 1] [i_1 + 2]) == (arr_8 [i_4 - 2] [i_1 - 2]))))));
                        }
                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            var_27 *= ((-(((((-94 != (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) << (((min((arr_3 [5] [i_1]), (arr_17 [i_3] [18] [20]))) - 63))))));
                            arr_21 [i_1] [i_1] [i_2] [i_0] [i_2] [i_2] = var_7;
                            var_28 = (i_0 % 2 == 0) ? (((!2) << ((~(arr_14 [i_0] [3] [i_3] [i_0] [i_5]))))) : (((!2) << ((((~(arr_14 [i_0] [3] [i_3] [i_0] [i_5]))) + 115))));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_24 [i_6] [i_0] [i_0] [12] = 1;
                        arr_25 [i_0] [i_0] [i_6] [i_0] [i_2] [14] = (((arr_7 [i_2] [i_1 - 1] [i_0 - 3]) | 2));
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_28 [i_0] [i_1] [i_2] [i_2] = (((((~(arr_15 [i_0 - 2] [14] [i_0] [11] [i_7])))) ? ((max((((!(arr_4 [i_0])))), (min(var_2, 32634))))) : (arr_5 [i_0] [i_7])));
                        var_29 = (max(var_29, (1192 < -1)));
                    }
                    var_30 = ((18662 ? 1 : 18662));
                    arr_29 [i_0] = ((1 ? (((-var_12 | (arr_27 [i_1])))) : var_16));
                    var_31 = (((((-31207 ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (((arr_2 [i_0]) ? var_2 : -18663)) : ((max((arr_2 [i_0]), 18690)))));
                    var_32 = (((((arr_26 [i_0 - 2] [i_1] [i_2] [i_0] [i_2] [i_1]) ? (arr_26 [i_0 - 3] [3] [i_0 - 3] [i_1] [i_0 - 3] [i_2]) : (arr_14 [i_0 + 1] [16] [i_0] [i_0] [7]))) - ((-((min(var_2, (arr_22 [i_1] [i_2] [i_0] [i_1] [i_0]))))))));
                }
            }
        }
    }
    var_33 = ((-var_1 ? (((((var_2 * var_5) == (var_10 >= var_9))))) : (max(var_18, var_10))));
    #pragma endscop
}
