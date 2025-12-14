/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_15 = (((arr_2 [i_0] [i_2] [i_2]) ? (arr_2 [7] [i_1] [i_2]) : var_6));
                    var_16 = (arr_2 [i_0] [i_1] [i_2]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_9 [i_3] = var_7;
                    var_17 = 48;
                }
                arr_10 [i_0] [8] [i_0] = ((-(arr_3 [0] [i_1])));

                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    var_18 = (max((arr_8 [4] [i_1] [i_1] [10]), (max((var_7 == 37), ((var_9 ? var_4 : 26082))))));

                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        arr_17 [i_0] [i_1] [6] [i_5] = -var_11;
                        arr_18 [i_5] [1] = (((var_4 <= var_10) <= ((max(232, 26109)))));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_22 [i_6] [12] [i_6] [i_6] [i_1] [6] = 83;
                        arr_23 [i_1] [1] [i_6] = (arr_2 [1] [i_1] [i_4 + 1]);
                        var_19 -= ((var_12 ? ((var_14 ? ((max(var_9, var_5))) : var_14)) : var_2));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_1] = (39454 && 26084);
                            var_20 = ((-((var_2 >> (((var_6 | 39467) + 47))))));
                        }
                        for (int i_9 = 2; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_21 -= ((((max(var_12, -547971162))) ? (((arr_24 [i_0] [i_4 + 2] [i_4] [i_9 + 3]) - var_5)) : (arr_21 [2] [i_4 - 1] [i_0] [i_9])));
                            var_22 = (min(var_22, ((((!26077) - (arr_11 [i_4 + 1] [i_9 + 1] [3] [i_9 - 2]))))));
                            arr_34 [0] [i_1] [i_7] [3] = ((+(max(((var_3 ? (-32767 - 1) : var_3)), ((((arr_20 [i_7] [i_7] [14] [0] [i_7]) / (arr_15 [i_4] [i_4] [i_4 - 1]))))))));
                        }
                        arr_35 [i_1] = ((((max((arr_21 [i_0] [i_1] [i_7] [i_7]), (~var_12)))) ? var_8 : ((39463 >> (((((((arr_13 [i_1] [10] [i_7]) + 2147483647)) >> (arr_8 [i_0] [8] [i_4] [i_1]))) - 16371))))));
                        var_23 = var_5;
                        var_24 = 39459;
                    }
                }
            }
        }
    }
    var_25 -= var_8;
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 20;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            {
                                arr_48 [i_10 + 1] [3] [17] [i_11] [i_14] [12] = ((max(var_10, (arr_40 [i_12]))));
                                var_26 -= min(((-((var_12 ? 73 : var_13)))), var_1);
                                var_27 = (arr_44 [i_11]);
                            }
                        }
                    }

                    for (int i_15 = 3; i_15 < 21;i_15 += 1)
                    {
                        var_28 = var_12;

                        for (int i_16 = 3; i_16 < 18;i_16 += 1)
                        {
                            var_29 = (var_6 - var_14);
                            var_30 = ((((max(var_1, var_13))) > ((var_11 ? (arr_51 [i_11 - 1] [i_11] [i_11 + 1] [i_11] [5]) : -547971140))));
                            arr_53 [i_16 + 4] [i_11] [6] [17] [5] [i_11] [i_10 + 2] = ((!(-82 | 50116)));
                        }
                        for (int i_17 = 1; i_17 < 19;i_17 += 1)
                        {
                            arr_57 [i_10 + 2] [i_11] [i_15] [i_15] = 219;
                            arr_58 [11] [4] [i_11] [i_11] [11] [i_10 - 1] = (min((max((((var_7 >> (var_8 - 26922)))), var_3)), (arr_50 [i_15 - 3] [i_11 - 1] [i_11] [i_11] [i_10] [i_10 - 1])));
                            arr_59 [i_11] [i_11 - 1] [9] [7] [i_17 - 1] [11] = ((32767 ? 1 : -1525728756639572835));
                            arr_60 [i_11 - 1] [12] [i_11] [i_11] [i_11] = 26109;
                            var_31 = 37;
                        }
                        for (int i_18 = 1; i_18 < 21;i_18 += 1)
                        {
                            var_32 = (max(var_32, (((((((var_14 ? (arr_50 [i_10] [12] [i_12] [i_12] [i_15 + 1] [i_18 - 1]) : var_3)))) + 7)))));
                            arr_64 [i_11] [i_11 - 1] [i_12] [i_12] [i_15] [i_18] [11] = ((!((((arr_46 [i_10 - 1] [i_11] [1] [i_15 - 2] [i_12]) ? (arr_44 [i_11]) : var_7)))));
                            var_33 = (max(var_33, (var_12 / var_4)));
                            var_34 = var_10;
                        }
                        arr_65 [2] [i_11] [i_11] [1] = ((92 ? (((var_13 ? (arr_50 [i_10] [i_10 - 2] [i_11] [i_10] [i_10 - 2] [i_10 + 2]) : var_12))) : var_2));
                        arr_66 [i_10] [i_11] = ((((!(var_1 % var_9))) ? ((var_12 ? var_2 : (((var_11 ? 9 : var_7))))) : (arr_47 [15] [16] [i_11] [1])));
                    }
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        arr_70 [i_10 - 2] [i_11] [i_11] [i_19] [i_19] = 182;
                        var_35 = arr_42 [i_11 + 1] [i_11 + 1] [i_12];
                    }
                    /* vectorizable */
                    for (int i_20 = 2; i_20 < 18;i_20 += 1)
                    {
                        arr_73 [i_10] [i_10 + 2] [2] [i_10 + 2] [i_11] [i_10 + 2] = ((((var_4 ? var_11 : var_6)) / var_1));
                        arr_74 [19] [i_10] [19] [i_11] = (((arr_50 [12] [i_11] [i_11] [i_11 - 1] [15] [i_11 - 1]) ? (arr_50 [i_11 + 1] [i_11 - 1] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1]) : (-32767 - 1)));
                        var_36 = (((!var_4) == var_8));
                        arr_75 [8] [i_11 + 1] [14] [i_12] [i_11 - 1] [6] &= var_3;
                    }
                }
            }
        }
    }
    var_37 = (!var_11);
    #pragma endscop
}
