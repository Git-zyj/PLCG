/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = 240;
        var_10 = (arr_1 [i_0] [i_0]);
    }
    var_11 = (max(var_11, var_7));
    var_12 = ((7208734007307768198 ? var_5 : (var_0 / var_6)));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    {

                        for (int i_5 = 3; i_5 < 22;i_5 += 1)
                        {
                            arr_16 [i_1] [20] [i_1] [i_1] [i_5] [i_1] [i_1] = 46086;
                            arr_17 [7] [i_3] [9] [i_4] [i_5] [i_5] [i_5] = ((2495739402372769151 ? 19450 : 1972136931));
                            arr_18 [i_5] = ((-5 != (arr_11 [i_4 + 1])));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_13 = var_7;
                            var_14 = (!(arr_11 [i_4 - 1]));
                            arr_22 [i_6] [i_2] [i_2] [i_2] [15] [i_2] [i_2] = 7208734007307768198;
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (!var_9);
                            arr_28 [i_3] [i_3] [i_3] [i_4] [i_7] = ((((arr_1 [18] [i_1]) * (arr_6 [i_3] [i_4] [1]))) <= (arr_3 [i_4 - 2] [i_4 - 3]));
                            arr_29 [i_1] [i_1] [i_1] [i_1] [9] [i_1] [2] = (arr_20 [i_4 + 1] [i_4 + 1]);
                        }

                        for (int i_8 = 4; i_8 < 19;i_8 += 1)
                        {
                            var_15 ^= 65535;
                            var_16 = ((((((arr_14 [i_1] [i_2] [22] [i_4] [i_8 + 4] [i_8]) % 1))) + -var_3));
                            arr_33 [i_1] [i_2] [11] [17] [19] = (arr_14 [i_8] [i_8 - 4] [i_8] [i_8] [i_8 - 4] [i_8]);
                        }
                    }
                }
            }
        }
        var_17 &= ((((-7208734007307768198 ? (arr_11 [17]) : 26395))) && (arr_8 [i_1]));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {

        for (int i_10 = 2; i_10 < 22;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        var_18 = -var_8;
                        arr_46 [i_10] = (((!var_3) * 7208734007307768198));
                        var_19 = (((arr_14 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10] [i_10 - 1]) < (((arr_14 [1] [i_10] [i_11] [i_12] [i_12] [13]) ? (arr_42 [i_12] [i_10] [i_11] [i_11]) : 1))));
                    }
                }
            }
            var_20 = (min(var_20, 1));
        }

        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            arr_51 [i_13] [i_9] = (((arr_8 [i_13]) ? (arr_8 [i_9]) : (arr_34 [i_13])));
            var_21 = (min(var_21, -2147483631));
        }
        arr_52 [22] = (arr_43 [8] [i_9] [i_9] [i_9]);
        var_22 = (min(var_22, 0));
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 20;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_23 *= (arr_25 [i_14 + 2] [i_14 + 2]);
            arr_58 [i_14 + 2] [i_15] [i_15] = (arr_39 [22]);
            arr_59 [i_14] [i_15] = var_2;
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    {
                        arr_65 [i_16] = var_0;
                        var_24 *= (2040651251 != 1);
                    }
                }
            }
            arr_66 [i_14] [i_15] [i_15] = (arr_54 [i_15]);
        }
        var_25 -= (arr_61 [18]);
        arr_67 [i_14 - 1] [i_14] = (arr_24 [i_14] [i_14]);
    }
    for (int i_18 = 1; i_18 < 20;i_18 += 1) /* same iter space */
    {
        var_26 *= var_6;
        arr_70 [i_18] = ((var_9 ? 20288 : ((var_1 << (arr_23 [i_18 + 1] [i_18 + 2] [i_18] [i_18 + 2] [i_18] [i_18 + 2])))));

        for (int i_19 = 0; i_19 < 22;i_19 += 1)
        {
            arr_74 [i_19] [i_19] = 11034833639360182093;
            arr_75 [i_18] [i_18] [i_18] = (arr_13 [i_18] [i_18] [i_18 - 1] [i_19] [i_19] [i_18] [i_19]);
            var_27 = var_7;
        }
        for (int i_20 = 0; i_20 < 22;i_20 += 1)
        {
            arr_78 [i_18] [i_18] = ((max((arr_71 [i_18 + 2]), (arr_71 [i_18 + 1]))));
            var_28 *= (!13180271939294456304);
            var_29 = (arr_56 [15]);
        }
        arr_79 [i_18] [i_18] = arr_37 [6];
        var_30 = (max(var_30, (((!(!var_3))))));
    }
    #pragma endscop
}
