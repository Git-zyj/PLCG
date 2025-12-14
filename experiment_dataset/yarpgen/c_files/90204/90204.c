/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((min(((34651 ? -124 : var_0)), ((min(1, -51))))), (((var_3 && ((max(var_5, var_8))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_12 = (arr_1 [i_1 - 3]);

            for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_13 = (arr_6 [11] [i_1 - 3] [i_2]);
                    var_14 = (((((arr_2 [i_1 + 2]) < (arr_2 [i_1 - 3]))) || var_4));
                }
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_4] [i_4] = (min((min((arr_3 [i_0] [i_1 + 1] [i_2]), (min(20840, var_4)))), ((max(2001196133, (((!(arr_1 [i_0])))))))));
                        var_15 = (max((max((max((arr_9 [i_0] [i_4] [i_0] [i_0]), var_0)), (arr_4 [i_4] [0] [1]))), (min(((min(var_3, -846537752))), (((arr_5 [i_0] [i_1]) * (arr_2 [i_2])))))));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_16 = (arr_20 [i_4]);
                        arr_22 [i_4] [i_1 - 2] [i_2] [i_6] = ((((var_4 ? (arr_15 [i_4 - 3] [i_0] [i_1 - 1] [i_4] [i_6]) : var_2))) ? (((~(((arr_4 [i_0] [i_1] [i_0]) / var_6))))) : ((-(arr_1 [0]))));
                        arr_23 [i_6] [i_6] [i_4] [4] [i_2] [i_1] [i_6] &= (arr_14 [i_2]);
                    }

                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        var_17 ^= (arr_8 [i_2] [i_2] [i_2] [i_2]);
                        var_18 = ((var_3 > ((var_9 ^ (arr_13 [i_0] [9] [i_0] [7] [i_4] [i_0] [i_1 - 2])))));
                        arr_26 [i_4] = ((7 == ((max(-2030153652, -1039873925)))));
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [i_1] [i_1] [i_4] [i_4] [i_4] = (arr_14 [i_0]);
                        arr_31 [i_1] [i_1] [i_1] [i_4] [12] = ((((max((!1039873915), 0))) ? ((min(-103, (arr_14 [i_0])))) : 3199689965));
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        var_19 = (max((((-(arr_8 [i_4] [i_1 - 3] [i_2] [i_4])))), (min((arr_20 [i_4]), var_6))));
                        arr_35 [i_4] [i_1 + 2] [i_2] [1] [i_9] [i_9] = ((-(arr_5 [i_1 + 1] [i_1 + 1])));
                        var_20 = 207;
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        arr_39 [i_0] [i_1 + 3] [i_0] [i_4] [i_0] [11] [i_4] = (((var_7 || var_10) ? (arr_3 [i_1] [i_4 + 2] [i_10]) : (max((arr_27 [i_0] [i_0] [i_4] [i_2] [i_1 + 2] [i_0]), var_3))));
                        var_21 |= min(var_6, (max((max((arr_11 [i_0] [i_1 - 2] [i_2] [i_0] [i_2]), var_6)), (!var_7))));
                        var_22 = var_5;
                        var_23 = (max(var_23, ((min((((min(var_4, 1)) | (((var_10 ? 165 : var_9))))), (~127))))));
                    }
                }
                var_24 = (~-1039873914);
            }
            for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
            {
                var_25 |= var_1;
                var_26 -= (max(((var_7 | (6951041681565898759 | 255))), ((max(0, 7)))));
            }
            arr_42 [i_0] = ((((max(var_5, (min(10343, var_1))))) ? ((var_7 ? var_6 : (arr_15 [i_0] [i_0] [i_0] [6] [i_1]))) : (max(((min(var_9, var_10))), (((arr_24 [2] [i_1 - 2] [2] [2] [i_0] [i_0]) & 0))))));
            arr_43 [i_1] [i_1] [i_0] = var_1;
            arr_44 [i_1 - 1] [i_0] = (min((((arr_38 [i_1 - 1] [i_1] [i_1 + 3] [i_1 + 1] [i_1 + 2]) * (arr_38 [i_1 + 3] [i_1 + 3] [i_1 - 3] [i_1] [i_1 + 2]))), (arr_38 [i_1 - 3] [i_1 - 3] [i_1 + 1] [9] [i_1])));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            var_27 |= (((arr_18 [i_0] [i_12] [i_0] [i_12] [i_12]) ? 44463 : (arr_18 [i_0] [i_12] [i_12] [i_0] [8])));

            for (int i_13 = 1; i_13 < 12;i_13 += 1)
            {
                arr_49 [i_13] = ((-(arr_3 [i_12] [i_12] [i_13 - 1])));
                var_28 = (((arr_12 [i_13 + 1] [i_13 - 1] [i_13 - 1]) || (arr_12 [i_13 + 1] [i_13] [i_13 - 1])));
                var_29 = 127;
                arr_50 [i_0] [i_0] [i_0] [i_13] = (arr_11 [i_0] [i_12] [10] [i_12] [i_13]);
            }
        }

        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            arr_53 [i_0] [0] = ((max(var_1, (arr_12 [i_0] [i_14] [i_14]))));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    {
                        arr_60 [i_0] [i_0] [i_15] [i_16] = ((((((-(arr_59 [i_0] [i_14])))) + (15744300950539446599 | var_7))));
                        var_30 = var_10;
                        var_31 = arr_46 [1] [5] [5];
                    }
                }
            }
        }
    }
    #pragma endscop
}
