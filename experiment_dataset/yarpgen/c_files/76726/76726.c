/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((arr_2 [i_0 + 1]) + 2147483647)) >> (var_5 - 969854390)));

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_20 = (~var_17);

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    arr_11 [i_0] [i_1 + 1] [i_1 + 1] [i_3 - 1] [i_3 + 1] [0] = (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_1]) : ((5673749817777518664 ? (arr_10 [i_3]) : (arr_9 [i_0] [i_0] [8] [i_2] [3])))));
                    var_21 = -2072906201;

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_22 |= ((var_11 == ((142 ? 331822106310435777 : -1098827647))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] |= var_0;
                    }
                }
                arr_16 [4] [i_2] = var_15;
                var_23 = 331822106310435771;
            }
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                var_24 = (arr_6 [i_1 + 2] [i_1] [i_1]);
                var_25 ^= (var_16 >= var_17);
            }
            for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                {
                    var_26 = (min(var_26, ((716973346 ? var_14 : -2072906216))));
                    var_27 = (min(var_27, -13788));
                    var_28 = ((var_8 / (arr_4 [i_0 + 1])));
                    arr_26 [i_0] [i_0] [i_1] [i_6] [i_7] = (var_6 / var_18);
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        var_29 = 1921677239;
                        var_30 = (~var_19);
                        var_31 = (max(var_31, var_11));
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_33 [0] [i_1 + 1] [i_8] [i_1 + 1] [i_8] [i_8] |= (!var_9);
                        var_32 ^= (((var_10 != 2) ? (var_7 / var_2) : 28736));
                        arr_34 [i_0] [i_1 + 1] [i_6] [i_1 + 1] [i_10] [i_1 + 1] = (var_10 - var_2);
                        arr_35 [i_0] [i_1] [i_6] = 1227655157;
                    }
                    arr_36 [i_6] [i_1] [i_6] [i_8] = 243;
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_33 = ((var_11 ? var_1 : 1208733166013573585));
                            var_34 = (!132);
                            var_35 = 240;
                        }
                    }
                }
                arr_42 [i_0] [i_6] = (((arr_27 [i_0] [i_6] [i_0 + 2] [i_0 + 2]) ? var_18 : ((((arr_17 [i_0 - 1] [i_1] [i_6] [i_6]) ? 100 : var_10)))));
                var_36 = (arr_4 [i_1 - 1]);
            }
            for (int i_13 = 2; i_13 < 16;i_13 += 1) /* same iter space */
            {
                var_37 = var_0;
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        {
                            var_38 = (min(var_38, (((arr_13 [14] [14] [i_0 + 1] [i_0 + 1] [i_1 + 2]) ? 22 : var_11))));
                            var_39 = (max(var_39, -16711680));
                        }
                    }
                }
                arr_52 [i_0] [i_0] [5] = var_12;
            }
            var_40 = (((arr_1 [i_1 - 1]) - (arr_1 [i_1 - 2])));
            arr_53 [i_0 - 1] = var_19;
        }
        var_41 = (min(var_41, 1227655135));

        for (int i_16 = 2; i_16 < 16;i_16 += 1)
        {
            var_42 ^= (((arr_47 [i_16 - 2] [i_16] [i_0 + 1] [i_16] [i_16]) ? var_1 : var_14));
            var_43 = var_0;
        }
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            var_44 = (var_2 ? var_1 : (arr_21 [i_17]));
            var_45 = var_13;
            var_46 = 13980422248783424913;
            arr_60 [i_0] [i_17] = var_17;
        }
    }
    /* vectorizable */
    for (int i_18 = 2; i_18 < 15;i_18 += 1) /* same iter space */
    {
        var_47 = (max(var_47, ((150 ? var_9 : (var_15 - -145230266)))));
        var_48 = var_12;
        var_49 = (max(var_49, var_11));
        var_50 = var_9;
        /* LoopNest 2 */
        for (int i_19 = 3; i_19 < 16;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 17;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 17;i_22 += 1)
                        {
                            {
                                var_51 = (max(var_51, (arr_25 [i_22] [i_22] [i_22] [i_19 - 3])));
                                arr_73 [i_18 - 2] [5] [5] = var_7;
                            }
                        }
                    }
                    arr_74 [i_18 + 1] [4] [i_18 + 2] [i_18] = (90 - (arr_64 [i_18] [i_20]));
                    arr_75 [i_18] [i_18] [i_18] = var_7;
                }
            }
        }
    }
    var_52 = ((var_3 ? (var_10 / 220) : (83 / 2147483638)));
    #pragma endscop
}
