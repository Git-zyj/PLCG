/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1 + 2] = ((var_6 ? (arr_4 [i_0] [i_1 - 1] [i_0]) : (~var_7)));
            var_21 *= -22;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_8 [i_0] = -var_14;
            arr_9 [i_0] [i_0] [i_0] = var_16;
            arr_10 [i_0] [i_0] [i_0] = arr_2 [i_0] [i_2];
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_22 = (min(var_22, var_18));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_18 [i_0] [1] [i_4] [i_0] = (((arr_4 [i_0] [i_3] [i_5]) * (arr_4 [i_0] [i_3] [i_3])));
                        arr_19 [i_3] |= 24;
                        arr_20 [i_0] = ((var_9 + (arr_17 [i_0] [i_4 - 1] [i_4] [i_0] [i_5] [i_5])));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_25 [i_0] [i_3] [i_3] = (((arr_4 [i_0] [i_4 - 1] [i_0]) ? (arr_4 [i_0] [i_4 - 1] [i_0]) : (arr_4 [i_0] [i_4 - 1] [i_0])));
                            var_23 = 143;
                            arr_26 [i_0] [i_3] [i_0] [i_6] [i_0] [i_0] = arr_12 [i_3] [i_0];
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_24 -= (arr_28 [i_7] [i_5] [i_4 - 1] [i_4 - 1] [i_3] [i_3] [i_0]);
                            var_25 = var_5;
                            arr_31 [i_0] [i_3] [i_0] [i_5] = ((-(((arr_16 [i_7] [i_3] [i_7] [i_5]) + var_6))));
                        }
                    }
                }
            }
            var_26 = (((arr_13 [i_0]) - var_15));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    {
                        var_27 = (max(var_27, (arr_24 [i_9 + 1] [i_3] [i_8] [i_3] [i_3] [i_0] [i_3])));
                        var_28 *= (var_4 >= 31);
                        arr_37 [i_3] [i_3] [i_8] [i_8] &= (arr_22 [i_8] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]);
                        var_29 = (min(var_29, (((18165 ? (arr_36 [i_9 + 1] [i_9] [i_9] [i_9] [i_9 + 1] [i_9 + 1]) : (arr_14 [i_0] [i_0] [i_3]))))));
                    }
                }
            }
        }
        var_30 += var_0;

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_31 += (((arr_29 [i_0] [2] [i_0] [i_0] [i_10] [i_10]) ? 1 : (arr_29 [i_0] [8] [i_0] [i_0] [8] [i_0])));
            arr_42 [i_0] [i_10] = ((!(arr_39 [i_0])));

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_32 = (min(var_32, var_2));
                arr_46 [i_0] [i_0] [i_0] [i_10] = ((-(arr_2 [i_0] [i_0])));
                var_33 -= (var_16 <= var_3);
            }
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                var_34 *= ((-(arr_35 [1] [i_10] [2] [6] [i_10])));
                var_35 |= (((1 ? 1131407780034846300 : 1)));
                arr_49 [i_0] = (~var_7);
            }
        }
    }
    #pragma endscop
}
