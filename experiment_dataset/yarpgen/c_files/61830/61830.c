/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((-1197116061 ? 2025469799 : -10)) ^ (((!var_6) ? (min(var_1, var_11)) : (var_8 / var_4))));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (var_2 == var_11);
        arr_3 [i_0] = (((min((arr_1 [i_0 - 2]), var_14))) ? 2147467264 : (var_13 + -2147483642));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                var_16 = (max(var_16, (arr_4 [i_0] [i_0])));

                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    var_17 += (var_1 >= var_2);

                    for (int i_4 = 4; i_4 < 13;i_4 += 1)
                    {
                        var_18 = var_9;
                        var_19 = (max(var_19, ((-(arr_12 [i_0 - 2] [i_2] [i_2 + 2] [i_4 + 1] [i_2] [i_2 + 2])))));
                        var_20 = (max(var_20, ((var_1 ? (((arr_10 [7] [7] [4]) ? var_11 : (arr_7 [i_0] [13] [i_0] [i_0]))) : (-2147483647 - 1)))));
                        arr_15 [i_0] [i_1] [i_1] = (((arr_5 [i_1] [i_1]) / var_14));
                    }
                    var_21 = (-(arr_8 [i_0 - 1] [i_3 + 3] [i_2 + 3]));
                    var_22 = (min(var_22, (((!(((-1 ? var_1 : -2147483644))))))));
                    var_23 |= -3;
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_24 = (max(var_24, var_3));
                    var_25 = ((!-6) * (arr_13 [i_0 - 1]));
                    var_26 ^= arr_12 [i_2] [i_2] [i_2 - 1] [0] [i_2] [i_2 - 1];
                    var_27 = (min(var_27, (arr_1 [i_5])));
                    arr_18 [i_2 + 2] [i_2 + 2] [i_1] [i_0] = var_12;
                }
                for (int i_6 = 4; i_6 < 13;i_6 += 1)
                {
                    var_28 = (8 ^ 50331648);
                    var_29 = (min(var_29, (~var_4)));
                }
                for (int i_7 = 3; i_7 < 12;i_7 += 1)
                {
                    var_30 = ((arr_19 [i_7] [i_7 - 3] [2] [i_7]) ^ (arr_17 [i_0] [i_0] [i_2] [i_0]));
                    arr_24 [13] [i_0] [i_1] [i_1] [i_0] [i_0] = (-var_3 / (arr_22 [4] [i_2 + 1] [13] [i_2 + 1] [13] [i_2 + 1]));
                }
                arr_25 [2] [2] [i_0] [i_0] = var_13;
            }
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_31 = (arr_12 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10 - 3]);
                            var_32 += (!-9);
                            var_33 = (var_10 / 871969827);
                        }
                    }
                }
                var_34 ^= 16777208;
            }
            var_35 = var_5;
        }

        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        {
                            var_36 = arr_40 [i_11] [i_11];
                            var_37 = (max(var_37, (((min((~-1440132359), (!-18))) ^ (((0 > -33554432) % 16777207))))));
                        }
                    }
                }
            }
            var_38 = (min(var_38, (arr_7 [i_0 - 1] [i_11] [i_11] [i_0 - 1])));
            var_39 = 253952;
        }
        for (int i_15 = 4; i_15 < 13;i_15 += 1)
        {
            var_40 = ((var_14 ? (arr_14 [i_15 + 1] [i_0 + 1] [i_0 - 1] [i_0] [4]) : (arr_14 [12] [i_0 - 3] [i_0 - 2] [i_0 - 1] [i_0 - 2])));
            var_41 = (min(var_41, var_12));
        }
        for (int i_16 = 1; i_16 < 13;i_16 += 1)
        {
            var_42 = (min(var_42, (min((max(-22, 262128)), ((((arr_29 [i_0] [i_16] [i_0] [i_16] [10]) ? -1743920526 : var_12)))))));
            var_43 = ((-23 <= (max(var_3, (arr_12 [i_0] [i_16] [0] [8] [i_0 + 1] [i_0 + 1])))));
        }
        /* vectorizable */
        for (int i_17 = 1; i_17 < 10;i_17 += 1)
        {
            arr_51 [i_0] = 19;

            for (int i_18 = 1; i_18 < 13;i_18 += 1)
            {
                arr_54 [i_18] [i_17 + 2] [i_17] = ((var_4 + 2147483647) << (((var_11 + 423229791) - 21)));
                var_44 = (-5 - 536739840);
                var_45 = (min(var_45, (((arr_49 [i_18 - 1] [i_18] [i_18]) ? (arr_49 [i_18 + 1] [i_18 + 1] [i_18 + 1]) : -2075138503))));
                var_46 = (arr_49 [i_18] [i_17] [i_0 + 1]);
                var_47 = var_6;
            }
        }
    }
    #pragma endscop
}
