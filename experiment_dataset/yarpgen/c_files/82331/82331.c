/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = var_4;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [12] = (((((arr_4 [i_0] [i_0 + 3] [i_0]) ? (((max(0, 116)))) : ((var_5 ? (arr_1 [i_2]) : (arr_2 [i_1])))))) ? (min((((var_4 != (arr_5 [i_0] [i_0] [i_1] [i_2])))), 18446744073709551615)) : (!9223372036854775807));
                    arr_7 [i_0] [i_1] [i_1] [7] = var_1;
                }
            }
        }
        arr_8 [i_0] [i_0] = (arr_0 [i_0 + 1]);
        arr_9 [i_0] = ((!(((((max(17284, var_1))) ? 15768806226110235401 : (arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 3]))))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_13 [i_3] = (~var_5);
        arr_14 [i_3] = (!17287);
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                {
                    arr_19 [i_3] [i_3] [i_4] [i_5 + 1] = ((!(arr_4 [i_3] [i_4 - 1] [i_5])));
                    arr_20 [i_3] [i_3] [i_5] = ((var_8 >= ((((arr_11 [i_4]) || ((!(arr_12 [i_3]))))))));
                    arr_21 [i_3] [i_4] [i_5] = (min((max((arr_11 [i_4]), var_0)), ((max((max(var_6, var_13)), var_0)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 16;i_6 += 1)
    {
        arr_24 [i_6 - 3] [i_6 - 3] = (var_4 * 116);
        arr_25 [i_6 - 2] = var_8;
        arr_26 [i_6] = arr_3 [i_6 - 2] [i_6 - 2];
        arr_27 [i_6 + 2] = (-122 && 51252);
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    arr_38 [i_8] [i_8] [i_7] = (!15815151995761740876);
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 0;i_11 += 1)
                        {
                            {
                                arr_45 [i_8] |= (arr_41 [i_7] [8] [11] [i_7]);
                                arr_46 [i_10] [i_8] [i_8] [i_8] [i_8] [i_8] = var_8;
                                arr_47 [i_11 + 1] [i_10] [i_10] [i_10] [i_7] [i_7] = ((((max(116, 1))) % var_14));
                                arr_48 [i_7] [i_8] [i_9] [i_7] [i_10] = (arr_28 [i_9] [i_9]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_54 [i_13] [i_12] [i_7] [i_8] [i_7] = ((!(((1784193833 << (32766 - 32756))))));
                                arr_55 [4] [i_8] [i_9] [i_12] [i_13 - 1] = 32767;
                                arr_56 [0] [i_9] = (!1);
                                arr_57 [i_7] [i_8] [i_9] [i_7] [i_13] = (max(2510773461, 127));
                                arr_58 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = (((((arr_43 [i_13 - 3] [i_13] [i_13 - 1] [i_13 - 3] [i_13 - 1]) ? (arr_43 [i_13 - 3] [i_13 - 1] [i_13 - 1] [i_13] [i_13 - 1]) : (arr_43 [i_13 - 3] [i_13] [i_13 - 1] [i_13 - 1] [i_13 - 1])))) ? (arr_43 [i_13 - 3] [i_13 - 1] [i_13 - 1] [i_13] [i_13 - 1]) : (((arr_43 [i_13 - 3] [i_13] [i_13 - 1] [3] [i_13 - 1]) / (arr_43 [i_13 - 3] [i_13 - 1] [i_13 - 1] [i_13] [i_13 - 1]))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_14 = 3; i_14 < 18;i_14 += 1)
        {
            arr_61 [18] = 127;
            arr_62 [i_7] [i_14] [i_7] = (max(((var_10 ? 1 : 2009170232761736409)), 0));
            arr_63 [i_14] [i_14 + 2] [i_14] = (!0);
        }
        arr_64 [9] = var_8;
    }
    #pragma endscop
}
