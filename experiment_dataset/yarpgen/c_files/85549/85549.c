/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_11 + 2147483647) >> (((max(((max(var_7, var_5))), var_13)) - 32026))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = arr_0 [0];

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_19 = (arr_7 [i_0] [i_0] [i_1] [i_2]);
                    var_20 = ((~((-((var_9 * (arr_4 [i_1])))))));
                    var_21 = ((((~(arr_1 [i_0] [i_1])))));
                    var_22 = var_4;
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_23 = var_12;

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_24 = (((~(arr_4 [i_0 - 1]))) - (min((min((arr_8 [i_1] [i_4]), var_6)), (arr_3 [i_0 - 1]))));
                        var_25 -= ((((((arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) ^ (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) + -2710867468442234867));
                        arr_13 [i_3] [i_3] = (arr_1 [i_3] [5]);
                    }
                    var_26 = var_2;
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0 - 1] [i_1] [i_5] [i_6] = var_16;

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_27 = 2710867468442234866;
                            var_28 = (min((((var_2 | var_15) + var_9)), (arr_11 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1])));
                            var_29 = ((~((((var_15 / var_7) || (arr_3 [i_0 + 1]))))));
                            arr_24 [i_7] [i_6] [i_6] [i_5] [i_1] [i_0] = var_6;
                            var_30 = 1;
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_31 = var_0;
                            var_32 = (min(var_32, var_0));
                            var_33 = (((arr_27 [i_0 - 1] [i_0 + 1]) ^ ((((arr_20 [i_0] [i_1] [i_5] [i_6] [i_6] [i_8]) > ((var_8 << (arr_18 [i_0 + 1] [i_5] [i_5] [i_5]))))))));
                            var_34 *= (arr_22 [i_0] [i_1] [16] [i_6]);
                        }
                        var_35 = (max(((((arr_23 [i_6] [12] [i_6] [i_6] [i_6] [i_6]) + ((((arr_4 [i_0]) || (arr_4 [i_1]))))))), (max(var_6, var_15))));
                        arr_28 [i_0] [i_0 + 1] [i_1] [5] [12] [i_6] = var_6;
                        var_36 = (arr_18 [i_6] [8] [i_0 - 1] [i_0 - 1]);
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                    {
                        var_37 = (max(((((((-2710867468442234867 < (arr_3 [4])))) * (arr_22 [i_0 + 1] [i_0 + 1] [6] [i_0 - 1])))), (arr_2 [i_0 + 1])));
                        var_38 = ((58 > (arr_27 [i_0 + 1] [i_0 + 1])));
                        var_39 = 0;
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        var_40 = (max(var_40, (((!(arr_23 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                        var_41 = ((-((var_7 / (arr_30 [11] [11] [i_5] [i_5] [i_5])))));

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_42 = (min(var_42, (arr_26 [8] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])));
                            var_43 = arr_0 [1];
                            var_44 = var_4;
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            arr_40 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0] = (arr_38 [i_0] [i_0 + 1] [i_0 + 1] [1] [i_0 - 1]);
                            var_45 ^= var_15;
                            var_46 = (min(var_46, var_14));
                            var_47 = (arr_5 [i_0] [i_1] [i_10] [i_12]);
                        }
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            var_48 = (arr_18 [i_13] [i_0 - 1] [6] [i_10]);
                            arr_43 [i_0] [i_0] [i_0] [i_13] [i_13] [i_1] = (!(((arr_15 [i_0]) >= (arr_11 [i_0] [i_0] [i_0] [i_0]))));
                            var_49 = (arr_6 [i_0] [4] [7] [i_0 + 1]);
                        }
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        var_50 = (~var_16);
                        arr_47 [16] [i_1] [i_5] [4] [i_14] = ((!(arr_39 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0])));
                    }
                    arr_48 [i_0 - 1] [i_0] [i_0 - 1] [16] = (arr_38 [i_5] [i_5] [i_5] [i_5] [i_5]);
                    var_51 = (max(((-(arr_27 [i_0] [i_0 - 1]))), ((((arr_32 [i_1] [i_0 - 1] [i_1] [i_1]) >= -8064048013574764992)))));
                    var_52 = (min(var_52, (arr_37 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
