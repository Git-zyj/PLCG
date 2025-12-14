/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0 - 3] [i_1] = (~var_2);

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] = (min(((((arr_3 [i_1] [i_1]) > var_8))), (arr_7 [i_0] [i_1] [i_2])));
                    arr_9 [i_0] [i_2] = var_2;
                }
                var_13 = ((((max(249, (arr_2 [i_0] [i_1] [i_1])))) / (((arr_5 [i_0] [i_0] [i_1] [12]) ? var_9 : var_12))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] = (((((((arr_5 [i_0] [i_0] [i_3] [i_3]) ? var_7 : 133))) && (arr_13 [i_4] [i_4] [i_3] [i_0 + 1] [i_0 + 1]))));
                            var_14 = ((~(((((max((arr_1 [i_0 - 2] [i_0]), 255))) > ((min((arr_3 [i_0] [7]), var_8))))))));
                        }
                    }
                }
            }
        }
    }
    var_15 += (((!var_2) != -var_6));

    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        var_16 = (((((-(arr_17 [i_5 + 1] [i_5])))) ? (arr_18 [i_5]) : (((min((arr_16 [i_5 + 2]), (arr_16 [i_5 - 3])))))));
        var_17 = 13867581570402441147;
    }
    var_18 = var_2;

    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        var_19 = (arr_16 [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 21;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        arr_30 [i_6] = (min((((arr_21 [i_6]) ? (arr_21 [i_6]) : (arr_21 [i_6]))), ((max((arr_28 [i_6] [i_6 + 1]), (arr_28 [i_6] [i_6 + 2]))))));
                        arr_31 [i_6] [i_7] [i_6] [i_8 - 2] [i_8] = min(((max(129, (arr_19 [i_6])))), (arr_29 [i_6] [i_6] [23] [i_9]));
                    }

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_34 [i_6] [i_7] [i_6] [i_10] = ((+(((((arr_16 [i_8]) / 144))))));
                        arr_35 [19] [19] [i_8] [i_6] [i_8] [i_6] = (arr_15 [i_6 - 1]);
                        var_20 = (arr_27 [i_8 - 3] [i_8] [i_8] [i_10]);
                    }
                    for (int i_11 = 3; i_11 < 23;i_11 += 1)
                    {
                        var_21 = (((arr_37 [i_6] [i_6] [i_6 + 2] [i_8 + 2]) == ((13489 ? (arr_21 [i_6]) : (arr_26 [i_6 + 1] [i_8 - 3] [i_8 - 3])))));

                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            arr_41 [i_6] [i_7] [i_6 + 4] [i_6] [i_12] [i_12] [i_11] = ((!((min((arr_40 [i_8 + 1]), (arr_40 [i_8 + 1]))))));
                            var_22 = (min((arr_23 [i_6]), 92));
                        }
                    }
                    arr_42 [i_7] [i_6] = (arr_32 [i_6] [i_6] [i_7] [i_8]);
                    var_23 = min((arr_29 [i_6 + 4] [i_6] [i_6] [i_8]), var_10);
                }
            }
        }
        arr_43 [i_6] = ((((((arr_20 [i_6]) ? (arr_20 [i_6]) : (arr_38 [i_6 + 4] [i_6 - 1] [i_6 + 4] [i_6 + 4] [i_6])))) ? ((((!(arr_29 [i_6] [i_6] [i_6] [i_6]))))) : (((arr_15 [i_6]) ? (arr_15 [i_6]) : (arr_15 [i_6 + 1])))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        var_24 = ((-(arr_17 [14] [i_13])));

        for (int i_14 = 2; i_14 < 24;i_14 += 1)
        {
            var_25 = (((arr_18 [i_14]) == ((((!(arr_17 [i_13] [i_13])))))));

            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    arr_54 [i_13] [i_13] [i_14] [i_13] [i_16] = 4332502276718095603;
                    arr_55 [i_14] [i_15] = ((!(arr_48 [i_14 + 1] [i_14 + 1] [i_14 + 1])));
                    arr_56 [i_13] [i_13] [i_13] = (arr_53 [i_13] [i_13] [17] [4] [i_16] [i_16]);
                    arr_57 [i_13] [i_14] [i_13] [i_13] [i_15] [i_16] &= arr_50 [i_16] [i_15] [i_14];
                }
                arr_58 [i_14] [i_14] = var_12;
                var_26 = (((arr_17 [i_14 - 1] [i_14 + 1]) ? (arr_17 [i_14 + 1] [i_14 - 1]) : (arr_17 [i_14 - 2] [i_14 + 1])));
            }
        }
    }
    #pragma endscop
}
