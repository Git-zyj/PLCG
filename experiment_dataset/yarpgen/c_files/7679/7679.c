/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((17172077510334868566 != (((min((arr_0 [i_0 + 2]), var_12))))));
        arr_3 [i_0] = (-((var_5 ? (max(var_9, var_2)) : (max(var_4, var_8)))));
        arr_4 [0] &= (arr_0 [i_0 + 2]);
        arr_5 [i_0 + 2] [i_0] = (var_6 % var_12);
    }
    var_19 = var_18;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            {
                arr_10 [i_1] = var_4;

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_15 [i_2] [i_2] = ((((max(((((arr_6 [i_1]) ? var_5 : (arr_0 [i_2])))), (min((arr_11 [i_1] [i_1]), var_11))))) ? (arr_14 [i_1] [i_3] [15] [i_1]) : (arr_9 [i_2 - 1] [i_2 + 1])));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_20 [i_4] [i_2] [i_3] [i_2] [i_1] &= (arr_6 [i_2 - 1]);
                        arr_21 [i_1] [i_3] [i_1] = arr_12 [i_1] [5] [i_3];

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_26 [i_2] &= var_12;
                            arr_27 [i_2] = ((103 ? var_7 : (!var_10)));
                            arr_28 [i_3] [i_2 - 1] [i_3] [15] = (arr_9 [i_2 - 1] [i_2 - 2]);
                            arr_29 [i_1] [0] [i_3] [i_4] [i_3] = ((-(arr_25 [i_2 + 1] [9] [i_3] [i_4] [6])));
                            arr_30 [5] [i_5] [i_3] [i_4] [i_5] = (arr_19 [i_2 - 1] [i_2] [i_2] [i_3] [i_2 + 1]);
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_33 [i_2] = ((var_12 ? (arr_17 [i_1] [i_2 - 1] [6] [i_6]) : (arr_12 [i_1] [12] [i_3])));
                            arr_34 [i_6] [i_3] [i_4] [i_3] [i_3] [i_1] = var_5;
                            arr_35 [i_4] [i_2] [i_2 - 2] [i_4] [i_3] = 16384;
                            arr_36 [i_6] [i_6] [i_3] [i_6] [i_1] = ((!(arr_22 [i_1] [i_2] [i_3] [i_6] [0] [i_2] [i_3])));
                            arr_37 [i_1] [i_3] [i_3] [i_4] [i_6] = (var_11 / var_1);
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_40 [i_1] [i_3] [i_3] [3] [i_7] = 9054498491399870938;
                            arr_41 [i_1] [10] [10] [i_1] [i_4] [i_7] &= (((arr_31 [i_1] [i_2]) ? (arr_38 [13] [i_3] [i_3] [i_7]) : (arr_23 [i_3] [16] [i_3] [i_4] [i_7] [7])));
                            arr_42 [i_7] [i_1] [i_3] [14] [i_7] &= (((arr_19 [i_1] [i_2] [i_3] [i_4] [i_1]) ? (((-(arr_12 [7] [i_2 - 1] [i_2])))) : (arr_13 [i_2] [i_2 + 1] [i_2])));
                            arr_43 [i_1] [i_3] [i_3] [i_4] = (-(arr_39 [i_3] [i_4] [i_3] [5] [i_2] [i_1] [i_3]));
                        }
                        arr_44 [i_1] [16] [i_3] [i_3] = ((!(arr_24 [i_4] [i_3] [i_2 - 1] [i_3] [i_2 - 2])));

                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            arr_48 [15] [i_3] [i_3] [i_3] [i_4] [i_8] = (((((var_15 ? var_14 : var_13))) ? (((arr_47 [i_1] [10] [9] [i_1] [i_1] [i_1] [i_1]) / 9054498491399870950)) : (arr_1 [i_1])));
                            arr_49 [i_3] [i_3] [i_8] = (((var_6 ? var_4 : (arr_6 [13]))));
                            arr_50 [i_3] [i_2] [6] [i_3] [i_4] [12] = ((var_11 ? (arr_23 [i_2 + 1] [i_2] [14] [11] [i_4] [i_8 + 1]) : (arr_23 [i_2 + 1] [i_8] [i_8] [2] [i_8] [i_8 + 1])));
                            arr_51 [i_1] [i_1] [i_3] [2] [i_8] = ((-5 ? 8 : -101));
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            arr_55 [i_1] [i_3] [i_3] [15] [9] [i_9] = (arr_11 [i_1] [i_3]);
                            arr_56 [16] [i_4] [16] [i_4] [i_9] = (((var_16 > var_1) || var_9));
                            arr_57 [i_1] [i_2] [16] [i_4] [i_4] [i_3] = 4;
                            arr_58 [0] [i_1] = ((var_11 ? (arr_47 [i_1] [i_2 + 1] [i_1] [i_4] [i_9] [i_2] [i_2]) : var_8));
                            arr_59 [i_3] [i_2] [5] [0] [i_3] [i_4] [i_9] = (arr_9 [i_2 - 2] [i_2 + 1]);
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            arr_64 [i_10] = (((arr_47 [i_2 - 1] [1] [i_2] [i_2] [i_2 - 1] [i_4] [i_4]) ? var_13 : var_1));
                            arr_65 [i_1] [i_2 - 2] [i_10] [i_4] [4] = (var_8 <= var_14);
                            arr_66 [i_3] [i_4] [2] [i_2] [1] [i_3] = 17172077510334868578;
                        }
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                    {
                        arr_70 [i_1] [i_3] [13] [i_3] [i_11] [i_11] = 1274666563374683075;
                        arr_71 [i_2] [i_11] = (min((((-9054498491399870916 > (arr_63 [i_2 - 2])))), (arr_63 [i_2 + 1])));
                    }
                }
            }
        }
    }
    var_20 |= (((var_10 != var_13) ? (min((min(var_1, var_8)), (~var_17))) : (min(-1657718580447802344, ((var_15 ? var_8 : var_3))))));
    #pragma endscop
}
