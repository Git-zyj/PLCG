/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = -0;
        arr_4 [i_0] = (((arr_0 [i_0 - 2] [i_0 - 1]) / (arr_2 [i_0 + 3])));

        for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_20 += (arr_10 [i_0 + 1] [i_3 - 3] [i_4 - 2]);
                            arr_19 [i_0] [i_0] [i_2] [i_0] [i_4] = ((var_7 ? 28301 : (arr_1 [i_0] [i_1])));
                        }
                    }
                }
            }

            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                var_21 = var_8;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_27 [i_0] [i_0] [i_5] = ((var_8 ? (arr_22 [i_0] [i_1] [i_1] [i_6] [i_0]) : (arr_22 [i_0 - 1] [19] [i_1 - 2] [i_0] [i_0])));
                            arr_28 [i_0] [i_0] [i_5] [i_6] [i_7] = (~var_9);
                        }
                    }
                }
            }
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                arr_31 [i_0] = ((var_0 ? 1159619999 : 5));
                arr_32 [i_0] [i_1] [i_1] [i_1 - 2] = (arr_20 [i_0] [i_0] [i_1 - 2]);
                var_22 = ((5 >> (-31 + 50)));
                var_23 ^= (!11);
            }
            var_24 ^= (((9223372036854775807 ? -1203909920611941937 : var_1)));
            var_25 = (max(var_25, (((-1203909920611941937 ? (((arr_11 [i_0] [8]) + (arr_14 [i_0] [i_1] [i_0] [5]))) : (arr_25 [8] [i_1 - 2] [i_1] [i_1] [i_1] [6] [8]))))));
            var_26 = var_7;
        }
        for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
        {
            arr_36 [20] [i_0] = ((-7503573727722005965 + (!var_19)));
            arr_37 [i_0] [i_9] [i_0] = 1;
        }
        for (int i_10 = 2; i_10 < 21;i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    {
                        arr_47 [i_0] = -64;
                        arr_48 [i_0] [i_0] [i_11] [i_11] = (arr_15 [i_0 + 4] [i_0] [i_0] [i_0] [i_10 + 1]);
                        arr_49 [i_0] = (((!(arr_45 [i_0] [i_0]))));
                        var_27 = (((!var_14) + (var_3 > var_0)));
                    }
                }
            }
            var_28 *= ((-1091048416484794340 ? 6704275248217038196 : 10042));
        }
        for (int i_13 = 2; i_13 < 21;i_13 += 1) /* same iter space */
        {
            arr_52 [i_0] [i_0] [i_0] = ((var_12 ? 0 : 1));
            arr_53 [i_0] [i_13] = 10473750722531649629;
            arr_54 [i_13] [i_0] [18] = (((arr_44 [i_13] [i_0] [i_0 + 3]) ? (arr_44 [6] [i_0] [i_13 - 1]) : (arr_44 [i_0] [i_0] [i_13 - 1])));
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                {
                    arr_61 [i_0] [i_14] [i_14] = (!6212994826162355936);
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        for (int i_17 = 3; i_17 < 20;i_17 += 1)
                        {
                            {
                                var_29 = (max(var_29, -1203909920611941937));
                                var_30 ^= (!var_7);
                                var_31 = (((arr_30 [12] [i_14] [i_0 - 1]) - (arr_30 [i_0 + 3] [i_14] [i_0 + 4])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 22;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 22;i_19 += 1)
                        {
                            {
                                var_32 = ((var_13 != (arr_35 [i_0 + 1] [i_18])));
                                var_33 ^= 32767;
                            }
                        }
                    }
                    var_34 = (max(var_34, (0 - -21046)));
                }
            }
        }
    }
    var_35 = (!(~var_10));
    var_36 = -1203909920611941931;
    var_37 = (min((((var_12 ? (-127 - 1) : ((min(4615, 1)))))), (((var_9 ? var_15 : var_4)))));
    #pragma endscop
}
