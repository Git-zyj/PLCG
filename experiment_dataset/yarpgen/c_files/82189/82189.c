/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_8);
    var_18 = (min(var_18, (~var_7)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        var_19 = (-9223372036854775807 - 1);
                        arr_11 [i_2] [i_2] [i_2] &= ((3709967618998027610 / (641704824 * var_2)));
                        var_20 = (min((arr_9 [i_1] [i_1] [i_1] [i_1] [i_2]), (max(((3322897246724012947 / (arr_8 [i_3 - 2]))), var_0))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_16 [i_4] = (arr_3 [i_2] [1] [i_2]);
                        arr_17 [i_4] [i_4] [i_2] [i_2] [i_0] [i_0] &= arr_12 [14] [11] [12] [i_4];
                    }
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_21 = ((arr_4 [i_2]) & (arr_21 [3] [3] [i_2] [i_2] [i_2] [i_2]));
                            var_22 = (-(arr_15 [i_0] [i_0] [i_0]));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_23 = (((arr_21 [i_5 + 2] [i_7] [i_7] [i_7] [7] [i_7]) ? ((var_12 ? (arr_21 [i_5 - 1] [i_5] [i_7] [i_7] [i_7] [i_7]) : (arr_21 [i_5 - 1] [i_7] [i_7] [i_7] [i_7] [i_7]))) : (arr_21 [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_7] [i_7])));
                            arr_25 [15] [i_1] [i_5] [i_1] [i_1] [i_1] = (((var_15 * ((-3709967618998027610 ? var_9 : 1444608029)))));
                            var_24 = var_16;
                            arr_26 [i_0] [i_0] [i_0 + 1] [i_0] [i_5] = arr_5 [i_5] [i_1] [i_1];
                        }
                        arr_27 [i_5] = ((((min((arr_0 [i_0 - 1] [i_5 + 2]), 520192))) ? ((((arr_7 [i_2] [i_2] [i_2]) == (arr_23 [i_5] [i_5 - 1])))) : 1));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_31 [i_0] = ((var_8 ? 1444608029 : -var_10));
                        arr_32 [0] [i_2] [i_1] [i_1] [i_0] = (!var_7);
                        arr_33 [9] [i_1] = var_6;
                    }
                    arr_34 [3] |= (-2147483647 - 1);
                    arr_35 [i_0] [i_0] [i_2] = (arr_19 [i_0] [i_1] [i_0 - 1] [i_1] [i_1]);

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_25 = ((-(arr_30 [i_0] [i_1] [i_1] [i_0] [i_0] [i_9])));
                        var_26 -= (((max((arr_20 [i_1]), (arr_0 [i_0 + 2] [i_9]))) >= -262144));
                        arr_39 [5] [5] |= (arr_15 [i_0 - 1] [i_1] [i_2]);
                        var_27 = (arr_1 [12]);
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_28 = var_6;
                        arr_44 [i_0] [13] [13] [i_10] |= (max(var_14, ((2705564373 ? (arr_7 [i_0] [i_0] [i_0 + 1]) : (arr_7 [4] [1] [i_10])))));

                        for (int i_11 = 4; i_11 < 15;i_11 += 1)
                        {
                            arr_48 [i_0] [i_1] [i_2] [i_2] [i_11] = ((-8628069034337288856 ? (min(4294967289, var_7) : ((-3240207548997980140 ? 4294967289 : var_9)))));
                            var_29 = var_14;
                        }
                    }
                }
            }
        }
    }
    var_30 = var_9;

    for (int i_12 = 3; i_12 < 10;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                {
                    var_31 += (min(5029429401533154729, var_9));
                    var_32 = var_13;
                }
            }
        }
        var_33 = var_12;
        var_34 = var_7;
        arr_57 [2] &= (min(var_14, var_9));
    }
    #pragma endscop
}
