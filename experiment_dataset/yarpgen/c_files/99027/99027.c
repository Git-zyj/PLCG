/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = 25172;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = ((-(max(2627, -var_7))));
                    var_20 += ((!((max(42182, (arr_5 [4]))))));
                    var_21 = (((max(((max(42182, (arr_5 [i_0])))), (3024317414894873709 & 1068522274425644299)))) ? (min(var_16, ((-6699490517923172160 ? var_8 : 48)))) : ((min((~var_10), (arr_3 [i_2 + 2] [i_2 - 2] [i_2 - 1])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    {
                        var_22 = (max(var_22, (max(-6699490517923172160, 576460751766552576))));
                        arr_15 [i_0] [i_0] [i_0] = var_9;
                        arr_16 [i_0] [i_0] [i_0] [i_3] [i_4] [i_5 + 3] = (min((((!(arr_1 [i_4 + 1])))), (arr_12 [i_3] [i_3] [i_0])));
                        arr_17 [i_0] [i_3] &= ((134217472 ? (max((min(187720387, var_4)), ((max(8190, 21418))))) : (((((~(arr_1 [i_4]))) & (arr_12 [i_5 - 1] [i_4 + 1] [i_4]))))));
                    }
                }
            }
        }
        arr_18 [i_0] = var_0;
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    arr_25 [i_7] [3] [i_0] = (arr_22 [i_7] [i_6 - 3] [i_6] [i_0]);
                    arr_26 [i_7] [i_7] [i_0] [i_0] = 19703;
                    var_23 += max((((57345 ? ((var_10 ? 59 : var_1)) : 558196389))), ((var_16 ? (max(var_8, var_6)) : (!var_5))));
                    arr_27 [i_0] [i_6] [i_6] [i_6] = max(187720397, 337175550820448272);
                    var_24 ^= 52360;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            arr_39 [i_8] [i_9] [i_9] [i_10] [i_8] [i_10] = max(var_4, var_3);
                            arr_40 [i_8] [i_8] [i_8] [i_8] [i_10] [i_11] = (((arr_3 [10] [7] [i_10]) ? (arr_31 [i_8] [i_9] [i_9]) : var_1));
                            var_25 = (min(var_25, (-71 - 127)));

                            for (int i_12 = 0; i_12 < 16;i_12 += 1)
                            {
                                var_26 = (min(var_26, ((max((max(32734, -1)), (((var_8 & -80) & var_5)))))));
                                var_27 = ((max(((-6699490517923172160 ? (arr_31 [i_8] [6] [i_8]) : (arr_20 [i_8] [i_8]))), (((var_0 ? var_15 : (arr_5 [i_8])))))));
                                arr_44 [i_12] [2] = var_6;
                                arr_45 [i_10] [i_11] [i_9] [i_10] [i_9] [11] = (min(var_15, var_10));
                                var_28 = ((var_14 ? (min(var_16, 57373)) : ((var_17 ? (arr_28 [i_8]) : var_13))));
                            }
                            for (int i_13 = 2; i_13 < 14;i_13 += 1)
                            {
                                var_29 = (arr_38 [i_13 + 2] [i_13 - 1] [i_13 + 1] [i_13 - 1]);
                                var_30 = var_14;
                            }
                            for (int i_14 = 0; i_14 < 16;i_14 += 1)
                            {
                                var_31 = ((3024317414894873709 ? (-4089450557622308202 & -29897) : (((((815159865 / (arr_7 [i_8])))) ? var_15 : ((var_11 ? 127 : var_14))))));
                                arr_52 [i_8] = ((!((((((var_14 ? (arr_19 [i_8] [i_8] [i_8]) : var_13))) ? (var_4 / var_14) : (arr_43 [i_9] [i_14]))))));
                            }
                        }
                    }
                }
                arr_53 [i_8] [i_8] [i_8] = (arr_34 [i_8] [i_8]);
                var_32 += (((((245 ? -7171934573631597501 : -18949172))) ? ((((((3607221198530941368 ? 38326 : var_18))) ? var_15 : 52383))) : ((-(var_13 & var_8)))));
            }
        }
    }
    #pragma endscop
}
