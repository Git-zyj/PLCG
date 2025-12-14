/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (((!1934872926) ? ((~(arr_1 [2] [2]))) : ((max((((!(arr_0 [i_0] [i_0])))), (arr_0 [20] [20]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = ((6144 ? ((min((((arr_1 [4] [4]) - (arr_3 [i_1]))), (arr_5 [i_1] [i_1])))) : var_0));

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_16 = (!var_9);
                        arr_10 [i_2] [i_1] [i_1] [i_0] = (((~((-(arr_1 [19] [i_0]))))));
                    }
                    for (int i_4 = 3; i_4 < 24;i_4 += 1)
                    {
                        var_17 -= ((1 || (((arr_9 [i_4] [i_2 + 1] [i_1] [i_0]) >= ((((var_9 != (arr_0 [i_4 - 3] [i_2])))))))));
                        var_18 = (max(var_12, ((-6152 ? var_11 : (arr_14 [i_1] [24] [17] [i_1])))));
                        var_19 = ((!(arr_5 [i_1] [i_1])));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_1] [i_4 - 1] [i_2] [i_0] [i_1] = (arr_13 [i_5] [i_4 - 3] [i_2 - 2] [i_0]);
                            var_20 = ((((min((arr_11 [i_1]), (arr_11 [i_1])))) ? ((min(238, (arr_14 [i_1] [1] [i_1] [i_1])))) : ((min(6118, (arr_14 [i_1] [i_2 + 1] [i_2] [i_1]))))));
                            var_21 = (min(((1 != (((arr_1 [i_1] [i_0]) / (arr_9 [i_5] [i_4] [i_2] [i_1]))))), var_11));
                            var_22 = 3152315626;
                            arr_18 [i_5] [i_1] [0] [i_0] [i_1] [i_0] = (arr_0 [i_5] [i_0]);
                        }
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            arr_21 [i_6] [i_4] [i_4] [i_1] [17] [i_0] [i_0] = ((((((arr_12 [i_2 - 1] [22] [i_2 - 1] [i_1] [i_1] [i_0]) <= (arr_1 [i_6 + 1] [14])))) >= (arr_15 [i_2] [i_4] [i_4 - 3] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 2])));
                            arr_22 [8] [8] [8] &= (~0);
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_23 = (arr_6 [i_7] [i_4] [i_2] [i_0]);
                            var_24 = (min(var_24, ((((max(var_10, var_10))) != (arr_0 [i_4 - 3] [i_2 - 2])))));
                            arr_25 [i_1] [i_1] = var_12;
                            arr_26 [23] [i_7] [i_1] [i_1] [15] [1] = (max((arr_20 [i_1] [i_1]), ((max((arr_4 [i_1] [i_1]), (arr_0 [i_4 - 3] [i_2 + 1]))))));
                        }
                    }
                }
            }
        }
        var_25 = (max(var_25, (arr_23 [12] [12])));
    }
    for (int i_8 = 2; i_8 < 21;i_8 += 1)
    {
        arr_30 [i_8] [i_8] = (arr_4 [i_8] [i_8]);
        var_26 = (max(((max((-1934872927 | 1934872917), (arr_19 [i_8] [12] [i_8 + 1] [i_8] [5])))), (arr_28 [18] [18])));
        var_27 = (min((((arr_24 [i_8] [i_8 + 1] [i_8]) ? (arr_14 [i_8] [i_8] [i_8] [i_8]) : (arr_24 [i_8] [i_8 - 1] [i_8]))), (((var_6 != (arr_11 [i_8]))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 21;i_10 += 1)
            {
                {
                    var_28 = (max(var_28, ((-(arr_3 [24])))));

                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 20;i_11 += 1)
                    {
                        arr_40 [i_11 - 2] [i_8] [i_8] = -10413;
                        var_29 = (arr_3 [i_8]);
                        arr_41 [i_11] [i_8] [i_9] [i_8] [i_8 - 1] = (arr_19 [i_11] [i_10] [i_10] [i_9] [i_8 - 2]);

                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            var_30 = (min(var_30, (((~(arr_29 [i_11] [i_11]))))));
                            arr_44 [i_8] [i_11] [i_10 + 1] [i_9] [i_8] = (arr_39 [i_12] [i_11 - 1] [i_9] [i_8]);
                        }
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_31 = ((+((13 ? (arr_43 [i_13] [i_11] [i_8] [i_9] [i_8]) : (arr_15 [i_13] [i_10] [i_11] [i_10 + 1] [i_10] [i_8] [i_8])))));
                            arr_47 [i_8] [i_11] [i_10] [i_8] [i_8] = var_10;
                        }
                        for (int i_14 = 2; i_14 < 21;i_14 += 1)
                        {
                            var_32 = (((arr_20 [i_8] [i_8]) ? (arr_20 [i_8] [i_8]) : (arr_4 [i_8] [i_8])));
                            arr_50 [i_8] [i_8] = (arr_8 [i_8] [i_8]);
                        }
                    }

                    for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
                    {
                        arr_53 [i_8] [i_9] [i_8] = (((~var_1) ? (max((arr_23 [i_8] [i_8]), (max(var_6, (arr_42 [i_15] [i_9] [i_9] [i_9] [i_8 - 1]))))) : (((!(arr_1 [14] [14]))))));
                        var_33 = (min(var_33, -104));
                    }
                    for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
                    {

                        for (int i_17 = 0; i_17 < 22;i_17 += 1)
                        {
                            var_34 = (arr_43 [i_17] [i_8] [i_8] [i_8] [i_8]);
                            var_35 = (~var_13);
                            var_36 = 6119;
                            arr_58 [i_8] [i_16] [i_10] [i_8] = ((~((-(((arr_43 [9] [i_16] [i_8] [i_8] [i_8]) ? -26 : (arr_38 [i_8])))))));
                        }
                        var_37 = var_4;
                        arr_59 [i_8] [i_10 + 1] [i_8 - 1] [i_8] = (arr_23 [i_8] [i_8]);
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
                    {

                        for (int i_19 = 3; i_19 < 21;i_19 += 1)
                        {
                            var_38 = ((-(((arr_49 [i_8] [i_18] [i_10] [i_9] [i_8]) ? (arr_24 [i_8] [i_9] [i_8]) : (arr_39 [i_18] [14] [10] [i_8])))));
                            arr_65 [i_8] [14] [i_18] [i_10] [1] [i_8] = (arr_34 [20] [i_8] [i_8] [i_10 - 1]);
                            arr_66 [i_8] [i_18] [i_10] [i_8] [i_8] = arr_51 [i_10 - 1] [i_18] [i_10 - 1] [i_8] [i_8] [i_8];
                        }
                        for (int i_20 = 3; i_20 < 21;i_20 += 1)
                        {
                            var_39 = (max(var_39, (arr_8 [14] [14])));
                            var_40 = 1048064;
                            arr_70 [i_8] [10] [i_8] = (arr_56 [i_8] [i_10] [i_10 - 1] [i_8 + 1] [i_8]);
                        }
                        arr_71 [i_8] [i_10] [i_9] [i_8] = 6119;
                        arr_72 [i_8] [i_8] = (arr_1 [i_18] [i_9]);

                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            arr_76 [6] [i_18] [i_10] [2] [6] &= (~var_13);
                            var_41 = (!(arr_11 [i_8]));
                        }
                        for (int i_22 = 4; i_22 < 20;i_22 += 1)
                        {
                            var_42 = ((-(((arr_5 [i_8] [i_8]) ? (arr_20 [i_8] [i_8]) : (arr_68 [13] [i_9] [i_18] [i_10] [i_9] [1])))));
                            var_43 = (min(var_43, (arr_5 [i_22] [i_22])));
                        }
                        var_44 -= (96 == 1732199379);
                    }
                    var_45 = ((~(arr_20 [i_8] [i_8])));
                }
            }
        }
    }
    var_46 = var_9;
    #pragma endscop
}
