/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = (-(min(((-(arr_9 [i_2] [i_2] [1] [11]))), var_0)));
                                var_20 = var_4;
                                arr_14 [i_2] = ((~(arr_11 [i_0] [i_1] [i_3] [i_2])));
                                arr_15 [i_0] [i_2] [i_2] [i_2] = var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] [i_2] [i_2] [i_1] = (((((arr_7 [i_0] [i_1] [i_2] [1] [7]) >> (((arr_7 [i_0] [i_0] [i_2] [i_5] [i_0]) - 2163)))) == ((min((arr_7 [i_6 - 1] [i_5] [i_0] [i_1] [i_0]), (arr_7 [i_6 - 1] [9] [9] [i_0] [i_0]))))));
                                var_21 = (max(var_21, (min(((((arr_17 [0] [i_6 - 1] [0] [0]) || (arr_17 [i_0] [i_6 - 1] [8] [1])))), var_13))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_22 += (max(((((min(0, 1))) ^ (arr_21 [i_7]))), (((var_5 < (min((arr_22 [i_7] [i_7]), (arr_21 [3]))))))));
        arr_23 [i_7] [i_7] = (min(var_12, var_3));
        var_23 = (min(((min((1 << 1), (((arr_21 [i_7]) + (arr_21 [i_7])))))), var_11));
        arr_24 [i_7] [i_7] = (min((arr_21 [i_7]), (arr_21 [i_7])));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_24 = (min((arr_22 [i_8] [i_8]), (~var_1)));
        var_25 = var_16;
        var_26 = (arr_22 [i_8] [i_8]);
        arr_28 [7] [7] = (arr_21 [i_8]);

        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            arr_31 [i_9] [i_8] = var_16;
            arr_32 [i_8] [i_8] = var_0;
            arr_33 [i_8] [i_9] = (arr_29 [9] [9] [9]);
            var_27 = (arr_22 [i_8] [i_9]);
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 11;i_10 += 1)
        {
            arr_37 [3] [i_10] = var_8;
            arr_38 [5] [i_10 + 2] [i_8] = (((~var_1) | var_3));
            arr_39 [i_8] [i_8] [i_8] = (arr_35 [i_10 - 2] [i_10 - 2] [i_10 - 2]);
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        {
                            var_28 = var_13;
                            arr_49 [i_8] [i_8] [i_11] [i_8] [2] = (((arr_22 [6] [i_10 - 1]) == var_16));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    {
                        var_29 = (max(var_29, ((((arr_48 [i_8] [i_10 - 1]) + 1)))));

                        for (int i_16 = 4; i_16 < 11;i_16 += 1)
                        {
                            var_30 = (max(var_30, var_12));
                            arr_59 [3] [i_14] [3] [i_15] [3] [i_14] [i_15] = (((((arr_48 [i_8] [i_8]) ^ (arr_53 [i_14] [i_15] [8]))) ^ var_14));
                            arr_60 [i_14] [i_15] [i_14] [i_16 - 1] [i_15] = (var_1 >= var_13);
                            arr_61 [i_14] [1] [i_14] [i_10] [i_14] = -16237460214385820261;
                        }
                    }
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
    {
        var_31 = (arr_22 [i_17] [i_17]);
        arr_64 [i_17] &= ((((min((arr_51 [i_17] [i_17] [i_17] [i_17]), var_0))) ^ ((max((arr_51 [i_17] [i_17] [i_17] [i_17]), var_2)))));
    }
    #pragma endscop
}
