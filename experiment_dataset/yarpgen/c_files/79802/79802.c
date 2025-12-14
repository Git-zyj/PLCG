/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 -= var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_13 = ((((((arr_4 [i_0] [i_1]) ? var_10 : 249))) ? 7856964895868902779 : (arr_3 [i_0] [i_1])));
            var_14 -= ((arr_4 [i_0] [i_0]) - (arr_4 [i_0] [i_0]));
            var_15 = var_2;
            var_16 = 1278799307;
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_17 = ((((arr_6 [i_0] [i_0]) ? (arr_6 [i_2] [i_0]) : 32767)));
            var_18 = 33560;
            var_19 -= ((!(arr_7 [i_2] [i_2] [i_0])));
            var_20 = (var_3 | ((-1 ? 7856964895868902779 : (arr_2 [i_0]))));
            arr_8 [i_0] [i_0] [i_0] &= (((arr_1 [i_0]) % ((65522 & (arr_3 [i_0] [i_0])))));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_21 = var_0;
            var_22 = (max(var_22, (((~(arr_2 [i_0]))))));

            for (int i_4 = 4; i_4 < 14;i_4 += 1)
            {
                arr_15 [i_0] [i_3] [i_4] = -17052;

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_23 = (arr_9 [i_0] [i_0] [i_4 - 3]);
                    var_24 = (-(arr_11 [i_4 + 2] [i_4 - 3]));
                    var_25 = (-var_2 ? (arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 1]) : var_0);
                    arr_19 [i_0] [i_3] [i_3] [i_4] [i_5] [i_5] = (arr_10 [i_4] [i_3]);
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_26 = ((!(arr_17 [i_3] [i_6] [i_4 - 1] [i_6])));
                    var_27 = 204;
                    var_28 = -17052;
                    arr_22 [i_0] [i_3] [i_3] [i_3] = 1417;
                }
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    arr_25 [i_0] [i_3] [i_3] = -17051;
                    var_29 = ((-(arr_10 [i_0] [i_7 + 1])));
                }
                var_30 -= ((-6767 ? ((~(arr_24 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0]))) : (arr_21 [i_3] [i_4 - 3] [i_4] [i_4])));
                var_31 = (((-(arr_21 [i_4] [i_4] [i_4] [i_4]))));
                var_32 = 112;
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_30 [i_0] [i_8] = 31958;
            var_33 -= ((var_4 ^ (arr_27 [i_0])));

            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                var_34 = ((var_0 / (arr_24 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9 - 2])));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_35 = (min(var_35, var_9));
                            arr_40 [i_0] [i_8] [i_9] [i_10] [i_11] = var_10;
                            var_36 = ((var_9 ? (arr_5 [i_9 - 2] [i_10 + 1] [i_10 - 1]) : 32754));
                        }
                    }
                }
                var_37 |= (((arr_36 [i_9] [i_9] [i_9] [i_9 - 1] [i_9]) >> (var_8 + 209071044)));
            }
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 15;i_14 += 1)
                    {
                        {
                            arr_50 [i_0] [i_12] [i_12] [i_13 - 1] [i_14] [i_14] = (~var_1);
                            var_38 -= var_4;
                            arr_51 [i_0] [i_8] [i_0] [i_13] [i_13 - 2] [i_12] = ((~1) ? 17050 : var_6);
                            var_39 = (arr_28 [i_13 + 2] [i_13 + 2] [i_14 + 1]);
                        }
                    }
                }
                var_40 = (max(var_40, ((((arr_5 [i_0] [i_8] [i_12]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0]))))));
                var_41 = ((-((-27263 ? (arr_26 [i_0] [i_8]) : 36971))));
            }
        }

        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            var_42 += (~var_0);
            arr_54 [i_15] = (((arr_13 [i_0]) ? -8074 : (arr_42 [i_0] [i_0] [i_0])));
        }
        arr_55 [i_0] [i_0] |= (-2147483647 - 1);
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        arr_60 [i_16] = ((~(((arr_58 [i_16]) ? (arr_58 [i_16]) : -17036))));
        var_43 = (((2387189956 <= 7499458867207906366) << (((arr_56 [i_16]) - 64))));
    }
    var_44 = (~116);
    #pragma endscop
}
