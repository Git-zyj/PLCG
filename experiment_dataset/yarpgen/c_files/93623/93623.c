/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    var_21 = ((((((var_19 >= 0) == var_6))) >> (var_1 - 9017441567794076256)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = (((!1) < (arr_2 [i_0])));
        arr_5 [i_0] = (min((((arr_0 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))), ((20 - (arr_0 [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [i_0] = var_14;

                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            var_22 |= -95;
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] |= (((arr_9 [i_4 - 1] [i_3 + 2] [9]) + (arr_10 [2] [2])));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_23 = -106;
                            var_24 = ((~(arr_3 [i_1])));
                        }
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            var_25 = ((112 / 6588588922344262078) << (var_4 - 105));
                            arr_24 [i_6] [i_6] [i_6] [i_6] [i_6] = ((~((var_16 ? var_15 : (arr_3 [i_2])))));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_26 ^= (~1);
                            arr_28 [i_7] [i_7] [i_1] [i_1] [i_1] [i_0] [i_0] = (arr_16 [i_0] [i_0] [i_0]);
                        }

                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            arr_32 [i_0] [i_1] [2] [i_3] [i_8] = 1;
                            var_27 = (((arr_20 [i_8 - 1] [i_8] [i_8] [i_8] [i_8]) <= (arr_20 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1])));
                        }

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_37 [i_0] [i_0] [2] [i_0] |= (((arr_9 [i_9] [i_3 + 1] [i_1]) ? 1 : (arr_6 [i_3 - 1])));
                            arr_38 [i_2] [i_2] [i_2] = (((arr_31 [i_0] [i_2] [i_0]) <= (arr_33 [i_0] [i_0] [i_0] [i_0])));
                            var_28 = (arr_27 [i_3 - 3] [i_3 + 2] [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3]);
                            var_29 += (arr_15 [i_0]);
                        }
                    }
                }
            }
            var_30 += ((arr_35 [i_0] [i_0] [i_0] [i_1] [i_0]) <= (arr_35 [i_0] [i_1] [i_0] [i_1] [i_1]));
            arr_39 [i_0] = var_11;

            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                var_31 = 149;
                var_32 = (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
            for (int i_11 = 2; i_11 < 13;i_11 += 1) /* same iter space */
            {
                var_33 = -96;
                var_34 = (arr_41 [i_0] [i_11] [i_11]);
                arr_44 [i_11 - 2] [6] [i_0] [i_0] = ((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) >= (arr_29 [i_0] [i_11 + 1] [i_11 + 1] [i_11 + 1] [11] [i_11]));
                var_35 = 5227693517344707960;
            }
            for (int i_12 = 2; i_12 < 13;i_12 += 1) /* same iter space */
            {
                arr_47 [10] [i_0] [i_1] [i_0] = (((arr_6 [i_12 + 1]) == (arr_43 [i_0] [i_0])));
                arr_48 [i_0] = var_13;
            }
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    {
                        var_36 = (max(-119, (~var_12)));
                        var_37 = ((~((min((arr_12 [i_14 + 1] [i_14 - 2] [i_14] [i_14 + 1] [i_14 + 1]), (arr_12 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 2] [i_14 - 2]))))));

                        for (int i_16 = 1; i_16 < 11;i_16 += 1)
                        {
                            var_38 = (((arr_46 [i_0] [i_13] [i_14 - 1]) - (min((min(-339385672, var_0)), (arr_3 [i_0])))));
                            arr_62 [i_0] [i_0] = arr_45 [i_14 - 1] [i_16 - 1] [i_16 + 2] [i_16 - 1];
                        }
                        var_39 = (((arr_27 [i_14] [i_14 - 2] [i_14 + 2] [i_14 - 2] [i_14] [i_14 + 1]) ^ 4817199973102784447));
                        var_40 = 1;
                    }
                }
            }
            arr_63 [i_0] [i_0] = ((+((((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) > 13629544100606767168)))));
        }
        var_41 ^= (!61);
        var_42 = (max((112 - 250), (arr_46 [i_0] [i_0] [i_0])));
    }
    #pragma endscop
}
