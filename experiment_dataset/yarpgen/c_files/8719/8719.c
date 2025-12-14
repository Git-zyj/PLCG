/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((min(-1634444089, -0)), var_3));
    var_15 = ((-(((var_9 - var_5) ? ((1 ? 1634444100 : 14965139967172999612)) : -var_9))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] = (((arr_1 [i_0]) ? (((arr_2 [i_0] [i_0] [11]) ? 1634444111 : 655253105)) : (0 != 1634444100)));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_15 [19] [i_2] [i_2] [i_1] [i_0] [i_0] = var_7;
                            var_16 = (arr_1 [i_4]);
                        }
                    }
                }
            }

            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                var_17 += 1634444100;

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_18 = (((arr_0 [i_5 + 1]) ? 655253097 : (arr_0 [i_5 + 1])));
                    var_19 = (min(var_19, (((var_2 ? 655253105 : (arr_8 [i_6] [i_6] [i_5 - 2] [i_5 - 2]))))));
                    var_20 = (~32246);
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_21 = (min(var_21, (0 == 1)));
                    var_22 = 1634444090;
                    var_23 = (-1634444090 / (arr_4 [1]));
                }
                for (int i_8 = 3; i_8 < 21;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_29 [i_9] [i_1] [i_5 + 2] [1] [i_9] = -var_9;
                        var_24 = (arr_14 [i_1] [i_1] [i_5 - 2] [i_5 - 3] [i_8 - 1]);
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        arr_33 [i_0] [i_1] [i_10] [i_8 + 1] [i_10] = (arr_1 [9]);
                        arr_34 [i_10] [i_10] [i_5 + 1] [i_10] [i_10] [11] = var_2;
                    }
                    arr_35 [i_0] [i_0] [1] [19] [i_5] [i_8] = var_11;
                    var_25 = ((arr_19 [i_5 - 1]) ? (arr_19 [i_5 - 1]) : (arr_19 [i_5 + 1]));
                    var_26 = -1;
                    arr_36 [i_0] [i_0] [i_5 + 1] [i_8] [i_0] [18] = (arr_6 [i_0] [i_1] [5] [0]);
                }
                var_27 = (!655253116);
            }
            for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_28 = var_7;
                        var_29 += var_6;
                    }
                    arr_45 [i_0] [i_1] [i_11] [i_11] [i_0] = (arr_9 [i_11] [i_1] [i_11] [i_12] [i_12]);
                }
                var_30 = var_3;

                for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                {
                    var_31 += var_12;

                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_32 += (arr_12 [i_15] [i_14] [i_0] [i_0] [i_0]);
                        var_33 = (min(var_33, var_9));
                        var_34 = -1634444118;
                        var_35 -= ((1 ? 1634444093 : -1634444064));
                    }
                    arr_50 [i_14] [i_11] [i_0] [i_0] = (~32218);
                    arr_51 [i_0] [i_1] [i_11] [1] = (((((~(arr_40 [i_0] [i_1] [i_0] [i_14] [i_0] [1])))) ? (arr_42 [i_0] [i_0] [1] [i_0] [i_14]) : (arr_43 [2] [i_11] [i_0] [i_14])));

                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        var_36 = (3639714217 != 84);
                        var_37 = (min(var_37, (((-(arr_52 [3] [i_11] [i_11] [3] [i_11] [3]))))));
                        arr_55 [i_0] [0] [0] [i_0] [i_0] [i_0] = (((arr_32 [i_0] [i_1] [i_0] [i_16]) ? (arr_32 [i_16] [10] [17] [i_0]) : 33843));
                        var_38 = (((arr_27 [i_16] [i_14] [i_11] [i_1] [5]) ? (arr_27 [i_0] [i_0] [3] [i_14] [i_14]) : (arr_27 [i_0] [i_1] [i_11] [i_14] [i_16])));
                    }
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        arr_60 [i_0] [i_17] [i_0] [i_17] [i_17] [i_14] &= (arr_6 [i_0] [i_11] [i_14] [i_17]);
                        arr_61 [i_17] = (((arr_31 [i_0] [i_0] [i_0] [i_1] [i_14] [12]) > (arr_31 [i_11] [i_1] [i_17] [i_14] [i_17] [12])));
                    }
                }
                for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
                {
                    var_39 = (~33275);
                    arr_64 [20] [20] [20] [i_1] [20] = (((arr_3 [i_0] [i_1]) ? (arr_21 [i_0] [i_1]) : (arr_13 [i_1] [i_11] [i_18])));
                }
                arr_65 [21] [i_1] [i_0] [21] = (arr_4 [i_11]);
            }
            for (int i_19 = 0; i_19 < 22;i_19 += 1) /* same iter space */
            {
                var_40 = (655253097 / 1);
                var_41 = var_5;
            }
            arr_69 [i_1] = (((arr_10 [i_0] [21] [i_1] [i_0] [i_1]) ? -var_1 : (arr_67 [i_0] [i_1])));
        }
        for (int i_20 = 0; i_20 < 22;i_20 += 1)
        {
            arr_72 [i_0] = 1;
            arr_73 [i_20] [i_0] = ((var_7 ? (arr_14 [i_20] [6] [i_0] [15] [i_0]) : (arr_14 [i_20] [1] [11] [i_0] [i_0])));
        }
        var_42 = (~-1634444100);
    }
    for (int i_21 = 0; i_21 < 22;i_21 += 1) /* same iter space */
    {
        arr_76 [13] = ((((max((arr_68 [i_21] [i_21] [i_21]), 33290))) ? (((((!(arr_7 [i_21] [12] [i_21])))) / (arr_19 [i_21]))) : (arr_27 [i_21] [1] [i_21] [i_21] [i_21])));
        var_43 = (min(var_43, var_7));
    }
    #pragma endscop
}
