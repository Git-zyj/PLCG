/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 += ((!((((arr_1 [i_0]) ? (((arr_1 [1]) ? var_3 : var_1)) : var_9)))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_11 = arr_2 [i_0] [i_0];
            var_12 = (arr_1 [1]);

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                var_13 = ((((((max((arr_5 [i_2] [i_1] [i_2] [1]), (arr_0 [i_0] [i_1])))) * ((((arr_3 [i_0]) > (arr_1 [i_0])))))) * (arr_5 [i_0] [i_0] [i_1] [i_2])));

                /* vectorizable */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_11 [i_4] [i_0] [i_0] [i_0] = (arr_9 [i_0] [i_0] [i_2 + 1] [i_0] [i_4]);
                        arr_12 [i_0] [2] [i_1] [i_2] [i_0] [i_4] [i_4] = (arr_7 [i_0] [i_1] [i_3 - 1] [i_2] [i_2 + 1] [2]);
                    }
                    var_14 += (arr_4 [1] [4] [i_0]);
                    arr_13 [i_0] [i_2] [i_0] [i_0] = (-32767 - 1);
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_15 = 1;
                    var_16 = (min(var_16, (((max(((-(arr_0 [1] [i_5 - 1])), (((arr_16 [8]) ? var_4 : var_9)))))))));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] [1] [i_0] = max(25680, (min((arr_17 [i_2 + 1] [i_0] [i_5 - 1] [i_5] [i_6] [i_6] [i_6]), (arr_17 [i_2 + 1] [i_0] [i_5 - 1] [1] [i_5] [i_5] [i_6]))));
                        var_17 = (min(var_17, var_0));
                        var_18 = (max(var_18, (max(((!(arr_18 [i_1] [i_2 + 1] [i_5] [i_5 - 1] [8] [i_5 - 1]))), ((!((((arr_10 [i_0] [i_1] [i_2] [i_6] [i_6]) + var_3)))))))));
                        arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_0] = ((((max((arr_0 [i_0] [i_5 - 1]), var_9))) * (((!(arr_14 [i_6] [i_0] [i_6] [i_0] [i_5 - 1]))))));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_19 = (((((var_4 + (arr_1 [i_2 + 1])))) ? (arr_0 [i_0] [i_2 + 1]) : (((!(arr_1 [i_2 + 1]))))));
                        arr_23 [i_0] [i_1] [i_0] [i_0] = var_4;
                        var_20 = (arr_15 [i_0] [i_1] [i_2]);
                    }
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    arr_26 [i_0] [6] = ((((max((((arr_17 [i_0] [i_0] [1] [10] [i_0] [i_2] [i_8]) * var_3)), ((max(var_6, (arr_1 [i_0]))))))) ? ((-(arr_24 [i_0] [i_0] [i_1] [1] [i_8 - 1]))) : (arr_10 [i_0] [i_1] [i_2] [i_0] [i_1])));
                    var_21 = ((!(var_8 + var_8)));
                }
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {

                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    var_22 = (max(var_22, (((-5386 - 1) >= (arr_1 [i_10 - 1])))));
                    arr_33 [2] &= 1;
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_23 = arr_14 [i_0] [i_1] [i_1] [i_0] [i_1];
                    arr_36 [i_0] [i_0] [i_9] [i_11] [i_0] [i_0] = arr_21 [i_0] [i_0] [i_1] [i_0] [i_9] [i_11];
                    arr_37 [i_0] [2] [i_9] [i_11] = arr_31 [i_0] [i_1];
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_41 [i_0] [i_1] [i_9] [i_12] = ((-(arr_35 [i_0] [i_1] [i_9] [i_12])));

                    for (int i_13 = 0; i_13 < 0;i_13 += 1)
                    {
                        var_24 = 15617;
                        arr_44 [i_0] [i_1] [i_9] [i_12] [i_13 + 1] = (arr_30 [i_0]);
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_25 = (min(var_25, ((((arr_0 [0] [i_1]) - (arr_9 [i_0] [1] [i_9] [i_12] [i_14]))))));
                        var_26 = ((!(var_0 - var_0)));
                        var_27 = (!(arr_18 [i_14] [i_0] [i_9] [i_9] [i_0] [i_0]));
                    }
                    for (int i_15 = 0; i_15 < 0;i_15 += 1)
                    {
                        arr_50 [i_0] = var_0;
                        arr_51 [8] [i_0] [i_9] [i_15] [i_15] [i_15] [i_0] = (((arr_18 [i_12] [i_15] [1] [i_15 + 1] [i_0] [i_15 + 1]) * ((-((((arr_7 [i_0] [i_0] [i_0] [i_0] [1] [1]) >= (arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    }
                    var_28 = ((((((max(var_1, (arr_18 [i_0] [i_1] [i_0] [i_9] [i_0] [i_12])))) ? (!var_6) : -511)) > (arr_42 [i_0] [i_1] [i_12])));
                    var_29 = ((1 ? var_6 : (arr_29 [i_0] [i_1] [i_9] [i_12])));
                }
                var_30 = (min(var_30, (max((((!(!var_6)))), (min((!var_5), (max(var_7, var_3))))))));
                var_31 ^= ((1 ? -19937 : 6));
                var_32 = (min(var_32, (var_4 - var_1)));
            }
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                var_33 = (max(var_33, ((max((arr_10 [i_0] [1] [i_1] [i_1] [i_16]), (arr_10 [i_1] [1] [i_16] [i_0] [i_16]))))));
                arr_54 [i_0] [i_0] = (arr_15 [1] [i_1] [i_0]);
            }
            for (int i_17 = 1; i_17 < 12;i_17 += 1)
            {
                var_34 = min(((min((arr_10 [i_17 + 1] [i_17 + 1] [i_17] [i_0] [i_17]), (arr_40 [i_17 + 1] [i_17] [10] [i_17 + 1] [i_17 + 1])))), var_1);
                arr_57 [i_0] [i_0] [i_17] [i_0] = arr_10 [i_0] [i_0] [i_0] [i_0] [i_0];
            }
        }
        for (int i_18 = 3; i_18 < 11;i_18 += 1)
        {
            var_35 = (max(var_35, 1));
            var_36 &= (arr_56 [i_0] [6]);
        }
        /* vectorizable */
        for (int i_19 = 1; i_19 < 12;i_19 += 1)
        {
            arr_63 [i_0] [i_0] [i_0] = (arr_35 [i_0] [i_0] [i_19] [i_19]);
            arr_64 [i_19] [i_0] [i_19 - 1] = ((-(arr_21 [i_0] [i_0] [i_0] [i_0] [i_19 + 1] [i_19])));
            arr_65 [i_0] = (arr_1 [i_19 + 1]);
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 1;i_20 += 1)
    {
        var_37 = ((-(arr_66 [i_20])));
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_23 = 1; i_23 < 15;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 1;i_24 += 1)
                        {
                            {
                                arr_78 [i_20] [i_24] [i_22] [i_20] [i_23] = (((arr_73 [i_20] [i_23 + 3] [i_23 - 1] [i_20]) ? (arr_77 [i_23 - 1] [i_23 - 1] [i_23] [i_23 - 1] [i_23 + 2] [i_23] [i_23 + 1]) : (((!(arr_68 [i_22] [1]))))));
                                arr_79 [i_20] [12] [i_22] [i_20] [i_24] [i_24] [i_23] = (((arr_73 [i_20] [i_23 + 3] [i_22] [i_20]) + ((1 ? (arr_69 [i_20] [i_20]) : var_1))));
                            }
                        }
                    }
                    arr_80 [1] [i_20] [i_20] = var_6;
                }
            }
        }
        arr_81 [i_20] = (var_7 > var_7);
    }
    var_38 = (max(var_38, (((-var_1 ? ((var_2 ? var_3 : var_8)) : var_3)))));
    var_39 = (max(var_39, var_6));
    var_40 = (max(var_40, ((((((var_6 ? -1 : -var_5))) ? var_1 : var_4)))));
    #pragma endscop
}
