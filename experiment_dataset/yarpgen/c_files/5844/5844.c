/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_16 = (((arr_9 [i_0 + 1] [i_0 + 2] [i_0 + 2]) >= (((arr_5 [i_1]) ? 105 : var_13))));
                arr_11 [i_2] [i_2] = (arr_7 [i_0 - 1] [i_0 + 1] [i_0] [0]);
            }
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_17 = (min(var_17, 32767));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_18 = (arr_14 [i_0 + 2] [i_0 - 1] [i_0 + 1]);
                            var_19 = ((((32767 ? (arr_16 [7] [9] [9] [7]) : 1462898304)) | (arr_17 [i_4] [i_4] [i_0] [i_0 - 1] [i_0 + 2])));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    arr_21 [3] [i_0] [i_3] [i_1] [i_1] [i_0] &= (!(-1 ^ var_14));
                    var_20 = (max(var_20, ((~(arr_8 [i_6] [i_1] [i_1] [i_0])))));
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    arr_24 [i_7] [i_3] [0] [i_1] [12] [i_0] = arr_7 [i_0 - 2] [i_3] [i_1] [i_0 - 2];
                    arr_25 [0] [i_1] [i_0 + 1] = (arr_17 [i_7] [i_7] [i_3] [i_1] [i_0]);

                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_21 = -124;
                        arr_28 [i_8] [i_8] [7] [i_1] [7] [i_1] [i_0] = ((32767 ? 14761 : 33488896));
                        arr_29 [i_8] [i_7] [i_3] [i_1] [i_0] [i_0] = (((arr_16 [i_0] [i_7] [i_1] [i_0]) ? 181 : (32767 % 2949885243)));
                        arr_30 [i_8] [i_7] [i_1] [i_1] [i_1] [i_1] [i_0] = ((13493 ? 200 : (arr_8 [i_0 - 1] [i_1] [i_1] [i_0])));
                    }
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    var_22 -= (arr_17 [i_0] [i_9] [i_3] [i_1] [i_0]);
                    var_23 = ((-(arr_14 [i_0 - 3] [i_0] [i_0])));
                    arr_33 [i_3] [i_1] = (arr_6 [i_9] [i_0 + 2]);
                    arr_34 [i_9] [i_3] [i_1] = ((+(((arr_26 [i_9] [i_0] [i_0] [0] [3] [i_0]) * 1462898316))));
                }
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_24 = (arr_14 [i_0] [i_1] [i_0]);
                arr_37 [i_10] = (((arr_2 [i_0 + 1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 + 2])));
                var_25 = (((((arr_36 [i_1] [i_1]) * (arr_22 [5] [i_0] [i_1] [i_0]))) * (((arr_14 [i_0] [i_1] [i_0]) ? 17 : (-32767 - 1)))));
            }
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                arr_40 [i_11] [i_1] [i_0] = (arr_5 [i_0]);
                var_26 ^= (var_13 == ((200 | (arr_1 [i_0]))));
            }
            var_27 = ((56 ? (arr_18 [i_0 + 2] [i_0 - 1] [i_0 - 3]) : (arr_4 [i_0 + 1] [i_0 - 1])));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 9;i_13 += 1)
                {
                    {
                        arr_45 [i_12] [i_0] = (arr_36 [0] [i_0 - 3]);
                        var_28 = (((arr_10 [i_13 - 1] [i_0 + 1] [i_0 - 1]) ? (arr_10 [i_13 + 4] [i_0 - 2] [i_0 - 2]) : (arr_10 [i_13 - 1] [i_0 - 2] [i_0 - 2])));

                        for (int i_14 = 1; i_14 < 12;i_14 += 1)
                        {
                            var_29 = ((-90 ? 1 : (arr_15 [i_14] [i_13] [i_12] [i_1] [i_0])));
                            var_30 = (min(var_30, ((((arr_1 [i_14 + 1]) && (arr_1 [i_0 + 2]))))));
                            var_31 = (32767 | -13489);
                            var_32 = (((arr_42 [i_14 + 1] [i_14 + 1] [i_13 + 2] [i_0 - 3]) ? (arr_42 [i_0 - 3] [i_14 + 1] [i_13 + 2] [i_0 - 3]) : 268435424));
                        }
                        for (int i_15 = 4; i_15 < 10;i_15 += 1)
                        {
                            arr_50 [5] [i_15] [i_0] [i_12] [i_15] [i_0] = (((arr_7 [7] [7] [i_15 + 3] [i_13 + 4]) / (arr_48 [i_15] [i_13] [i_13] [i_12] [i_0] [i_0])));
                            var_33 &= 13493;
                        }
                        var_34 = (((arr_31 [i_1] [i_0] [i_1] [i_0]) - (arr_31 [i_13] [i_12] [i_1] [i_0])));
                    }
                }
            }
            arr_51 [8] [i_0] = ((-(var_15 || 32767)));
            var_35 = (!1044);
        }
        var_36 = (min(var_36, ((((arr_39 [i_0 - 1]) ? (arr_39 [i_0 - 1]) : (arr_22 [6] [6] [i_0 + 1] [i_0 + 1]))))));
        var_37 = (!-1);
    }
    var_38 = (((var_13 % var_10) % ((var_9 ? (var_3 | 4294967295) : (13494 <= 1)))));
    #pragma endscop
}
