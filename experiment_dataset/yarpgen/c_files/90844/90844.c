/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = (min(var_17, 1));
    var_18 = (min((var_1 == -303), ((-(var_13 == var_5)))));
    var_19 = (max(var_19, var_4));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_20 = ((((arr_1 [12]) ? (arr_0 [i_0]) : 65535)));
        arr_2 [i_0] = (((arr_0 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = (((arr_1 [i_1]) * (var_5 / 192)));
            var_21 = var_14;
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_22 -= (((arr_1 [i_2]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0])));
            var_23 = (-var_3 / var_3);
        }
        for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_24 = var_11;
            var_25 = var_13;
        }
        for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_26 = (((arr_9 [1] [i_4 + 3]) ? (arr_12 [i_0] [i_0]) : (arr_6 [i_0 - 1] [1] [i_0 - 1])));
            arr_13 [i_4] [1] = (~(((arr_8 [i_0 - 2] [i_0]) + var_0)));
        }
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 4; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_26 [i_5] = (((var_11 ? (((arr_17 [i_8 + 1] [i_8] [i_5]) ? var_6 : var_6)) : ((var_15 ? var_12 : (arr_0 [i_8]))))));
                            arr_27 [i_5] [i_5] = (arr_15 [i_5] [i_5]);
                            var_27 *= 1;
                            var_28 = var_10;
                        }
                    }
                }
            }
            var_29 = (max(var_29, ((((((((((1 | (arr_1 [i_5])))) ? (~var_2) : -20)) + 2147483647)) >> ((((max(var_2, (arr_8 [i_5] [i_6 - 1])))) << ((min((arr_20 [i_5] [0]), 1))))))))));
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            arr_31 [i_5] = (((((((arr_14 [i_5]) + (arr_1 [i_5]))) * ((255 ? 1 : 638321767)))) % 1));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    {
                        arr_37 [i_5] [i_12] = 9223372036854775794;
                        arr_38 [i_5] [i_5] = (min((arr_16 [i_5 + 2] [i_10] [i_12]), (((arr_16 [i_5 - 1] [i_11] [i_12]) ? (arr_24 [i_5 - 1] [i_5 - 1] [i_10] [i_11] [i_10]) : var_14))));
                        var_30 = (min(var_30, (((max((arr_4 [i_11] [i_10]), -638321767)) & (arr_16 [3] [i_10] [i_11])))));
                        var_31 |= ((((((arr_30 [i_5] [i_5] [i_5]) ? ((var_2 + (arr_4 [i_5] [i_5]))) : ((9598 / (arr_4 [15] [14])))))) ? (((((((arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1]) / 1))) ? (arr_3 [i_5 + 1] [i_5 + 1] [i_5 + 1]) : var_8))) : (((arr_7 [i_5 + 2]) ? (arr_29 [i_5] [i_5 + 2] [i_5]) : (arr_19 [i_12])))));
                    }
                }
            }
            arr_39 [i_5] = ((((max((arr_32 [i_5] [i_10] [i_10]), (max(var_13, var_10))))) ? (arr_29 [i_5 + 2] [5] [3]) : (((arr_14 [i_5 - 1]) - (arr_7 [i_5 - 1])))));
            arr_40 [i_5] [i_5] [i_5] = (arr_25 [i_5]);
        }
        var_32 = (((-10 / -530777102) ? 20 : ((-((var_4 ? 255 : 15))))));
        var_33 = (min(var_33, (max(19, 9223372036854775779))));

        for (int i_13 = 2; i_13 < 10;i_13 += 1)
        {
            arr_44 [i_5] [i_5] = 1;
            var_34 ^= (min((~-1), (((arr_21 [i_13] [4] [i_5] [i_5] [4] [i_5]) * (((var_14 >> (109 - 85))))))));
        }
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            var_35 = 0;
            arr_47 [i_5] = (min(((~((var_2 ? var_1 : var_15)))), ((1 | ((120 ? (arr_3 [i_5] [i_5] [i_14]) : (arr_34 [i_5] [i_5] [i_14] [i_14])))))));
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    {

                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            var_36 = (max((((var_7 >= ((~(arr_42 [1] [1])))))), ((((min(7794778522144853815, -638321785))) ? var_8 : (((arr_34 [i_5] [i_5] [i_5] [i_5 + 1]) - (arr_50 [6] [6] [i_5])))))));
                            arr_58 [i_15] [i_5] [i_15 + 1] [i_16] [i_17] [i_17] = 9223372036854775794;
                        }
                        for (int i_18 = 3; i_18 < 10;i_18 += 1)
                        {
                            var_37 = (min(1, -var_1));
                            var_38 = 1222023642;
                        }
                        /* vectorizable */
                        for (int i_19 = 1; i_19 < 12;i_19 += 1)
                        {
                            var_39 = (arr_3 [i_19] [i_16] [i_14]);
                            var_40 = (((arr_42 [i_5 + 1] [i_15 + 1]) ? (arr_42 [i_5 - 1] [i_15 - 1]) : (arr_42 [i_5 - 1] [i_15 + 3])));
                        }
                        var_41 = (1 >= -638321783);
                        var_42 = (arr_7 [i_15 + 3]);
                        var_43 = 4177920;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 13;i_22 += 1)
                    {
                        {
                            var_44 = (min(var_44, (arr_23 [i_5] [i_5] [i_5] [i_5])));
                            arr_75 [i_5] [i_20] [5] [i_22] = (max((min((min(var_0, 2406789080166668566)), ((min(1, 1))))), ((max((((30 || (arr_63 [i_5] [i_5] [i_5] [i_5 + 1] [i_5] [i_5] [i_5])))), var_14)))));
                        }
                    }
                }
            }
            arr_76 [12] [12] [i_14] |= (((((((arr_16 [i_5 + 1] [i_14] [i_14]) > (arr_16 [i_5 + 2] [i_5 + 2] [i_5]))))) < 2406789080166668571));
        }
    }
    for (int i_23 = 2; i_23 < 24;i_23 += 1)
    {
        var_45 = ((((max((((arr_79 [i_23 - 2]) - 1)), (~99)))) ? ((((arr_77 [i_23 - 1]) > var_14))) : (~127)));

        for (int i_24 = 2; i_24 < 22;i_24 += 1)
        {
            arr_82 [i_23] [i_23] [i_23] = (min(((min((((arr_77 [i_24]) / 2147483647)), 25))), ((0 & (max(9223372036854775794, (arr_81 [18])))))));
            var_46 = var_10;
        }
    }
    #pragma endscop
}
