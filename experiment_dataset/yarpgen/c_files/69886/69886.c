/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_5;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_20 *= (min(((((arr_0 [i_0 + 1] [i_0 + 1]) >= (arr_1 [14] [14])))), (((arr_0 [i_0 - 1] [8]) + var_17))));
        var_21 ^= (min((((~-1) + (min((arr_1 [16] [16]), 1110521152091638955)))), (!-8262562906103864506)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_22 = ((!((((((min((arr_1 [12] [i_1]), (arr_1 [1] [4]))))) * 2097151)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_12 [i_3] [i_2] [10] = var_1;
                    var_23 = (max(var_23, 4292870167));
                    arr_13 [1] [i_2] = arr_1 [i_3] [i_3];
                    var_24 = -9165716801791608315;
                    arr_14 [i_1] [i_1] = (max(((5299995547670327103 + ((((var_1 >= (arr_6 [i_1] [i_1] [i_1]))))))), ((((arr_9 [i_3] [i_2] [i_3]) >> (((max((arr_11 [i_3]), (arr_2 [i_3]))) - 1007873455)))))));
                }
            }
        }
        arr_15 [i_1] = ((~(arr_0 [i_1] [i_1])));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_25 = (((arr_5 [i_4]) != (arr_4 [0])));

        /* vectorizable */
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_26 *= (((((arr_28 [i_5 - 2] [i_5 - 2] [2] [i_5 - 3]) + 9223372036854775807)) >> (((arr_28 [i_5 + 2] [i_5 - 3] [8] [i_5 - 1]) + 4446200455038465416))));
                            arr_33 [i_4] [i_5 - 3] [i_4] [i_7 + 1] = (arr_30 [i_4] [i_7] [11] [11] [i_4]);
                        }
                    }
                }
                arr_34 [i_4] [9] [i_4] = ((arr_21 [i_4] [i_5] [i_5]) >= (((~(arr_23 [1] [1] [i_6])))));

                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    arr_39 [0] [i_5 + 1] [i_4] [i_9] = (arr_30 [i_4] [i_5] [i_6] [i_6] [i_4]);
                    arr_40 [7] [i_4] = (arr_9 [i_9] [i_6] [i_4]);
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_27 *= var_7;
                            arr_46 [i_4] [i_4] [i_4] [i_10] [1] = (arr_36 [i_4] [i_5 - 2] [i_5 - 2] [i_5 - 2]);
                            var_28 -= (arr_37 [i_11]);
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
            {
                arr_49 [7] [i_4] [i_4] = var_11;
                arr_50 [i_4] [i_4] [i_5 - 2] [i_4] = 2097151;
                var_29 = var_12;
                var_30 -= 1;
            }

            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    arr_55 [i_4] = 4292870145;
                    arr_56 [i_4] = -var_14;
                    arr_57 [i_4] = ((!(arr_54 [i_13] [i_5 - 2] [i_4] [i_4] [i_4] [i_4])));
                }
                var_31 -= ((~(arr_32 [i_5 - 1] [i_5 - 2] [1])));
            }
            for (int i_15 = 4; i_15 < 11;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    var_32 = (min(var_32, 2097146));
                    var_33 = (((arr_24 [i_4] [i_5 - 2] [i_4] [i_15 - 3]) + (arr_26 [i_4] [i_5 - 1] [i_15 - 4] [i_4])));
                }
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        arr_68 [i_18] [10] |= 4292870148;
                        var_34 = var_2;
                    }
                    arr_69 [10] [i_5 + 1] [i_5 - 2] [i_4] [i_5] = (((arr_31 [i_4] [i_4] [i_5 - 2] [i_15 - 1] [i_17] [i_17]) + (arr_31 [i_4] [i_5 + 1] [i_15] [i_15 - 4] [i_17] [i_17])));
                    arr_70 [i_4] [1] [i_15] [1] [i_4] [0] = ((~(arr_22 [i_15 - 3] [i_5] [i_5] [i_17])));
                    arr_71 [i_4] [i_5 - 1] [i_4] [i_4] = var_1;
                }
                for (int i_19 = 0; i_19 < 12;i_19 += 1) /* same iter space */
                {
                    arr_76 [i_4] [8] [i_19] [i_4] [6] [i_5] = (arr_59 [i_4] [i_15] [1]);
                    arr_77 [i_4] [i_5] [5] [i_4] [i_19] = (((arr_9 [i_15 - 2] [1] [3]) != (arr_9 [i_15 - 3] [3] [3])));
                }
                for (int i_20 = 0; i_20 < 12;i_20 += 1) /* same iter space */
                {
                    var_35 ^= (((((4270794607 >> (4292870150 - 4292870120)))) ? (arr_8 [i_4] [i_5]) : (arr_65 [i_4] [10] [i_15 - 3] [i_20])));
                    var_36 *= (arr_0 [6] [i_4]);
                }
                var_37 = (min(var_37, (arr_75 [i_15])));
            }
        }
        for (int i_21 = 0; i_21 < 12;i_21 += 1)
        {
            arr_83 [i_4] [i_4] [i_21] = (arr_2 [10]);
            var_38 = (arr_22 [i_4] [i_21] [i_21] [i_4]);
        }
        arr_84 [i_4] = (arr_32 [i_4] [i_4] [i_4]);
    }
    var_39 |= var_7;
    #pragma endscop
}
