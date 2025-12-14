/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_10 = (min(var_10, (((~(arr_4 [8] [i_1] [8]))))));
            arr_5 [i_0] [i_1] = (arr_4 [i_0] [i_1] [i_0]);
            var_11 = var_0;
            var_12 = (min(var_12, var_5));
            arr_6 [i_0] [i_0] = (arr_4 [i_1] [i_1] [1]);
        }
        for (int i_2 = 4; i_2 < 10;i_2 += 1)
        {
            var_13 = max((arr_4 [8] [i_2 + 1] [5]), var_6);
            var_14 |= max((arr_0 [8]), (((~((min(var_0, (arr_8 [i_2] [i_0]))))))));

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_15 = var_6;
                            var_16 = (arr_4 [i_0] [8] [i_0]);
                            var_17 = (min(var_17, (arr_16 [3] [3] [i_3] [i_3] [i_5] [11])));
                        }
                    }
                }
                arr_18 [i_3] [1] [i_3] = (max((max(var_9, (arr_16 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3]))), (max((arr_10 [i_0] [i_0]), (min((arr_1 [i_3]), (arr_0 [i_3])))))));
                var_18 = var_4;
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_19 &= (arr_20 [i_2] [i_3]);
                            var_20 = var_6;
                        }
                    }
                }
                var_21 &= min(var_5, (max(((min((arr_2 [i_0]), (arr_15 [i_0] [i_0] [i_2] [1] [2])))), (min((arr_16 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3]), var_1)))));
            }
        }
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            var_22 *= (arr_21 [i_0] [i_0] [i_0] [i_8] [i_0] [1]);

            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                arr_29 [i_8] [i_8] = ((-(arr_19 [i_8])));

                for (int i_10 = 3; i_10 < 12;i_10 += 1)
                {
                    var_23 = (max(var_23, ((max((arr_13 [i_10] [i_9] [i_0] [i_0]), ((~(min(-348974600, 1854291164)))))))));
                    var_24 &= var_8;
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        arr_36 [9] [i_8] [i_8] [i_11] [i_0] = (arr_11 [i_0] [i_8 - 1] [i_9] [i_11] [i_9]);
                        var_25 = (arr_31 [i_0] [i_8] [i_8] [i_9] [i_11] [4]);
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        arr_40 [i_8] [i_8] [i_8] [i_8] [i_11] [i_8] [i_13] = (max((min(((max(var_0, var_6))), (max(var_0, var_7)))), (arr_4 [i_9] [i_11] [i_11])));
                        var_26 = min((arr_9 [i_11] [i_9] [i_8]), var_4);
                        var_27 = var_9;
                        arr_41 [i_0] [i_8] [i_9] [i_11] [i_13] [1] = (min(var_5, 513767978277500793));
                        var_28 = (max((min((min(var_7, (arr_8 [2] [i_11]))), (arr_23 [i_8] [i_8] [i_9] [i_11] [i_13] [i_13]))), (!var_4)));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        var_29 = -var_4;
                        arr_44 [i_0] [i_8] [i_9] [i_9] = -var_2;
                    }
                    var_30 = (arr_23 [i_8] [i_8] [i_8] [i_9] [i_8] [i_8]);
                    var_31 &= (max(-var_0, (arr_16 [i_0] [7] [7] [i_9] [i_9] [1])));

                    for (int i_15 = 1; i_15 < 12;i_15 += 1)
                    {
                        var_32 = (min((max(((min(var_9, (arr_9 [i_9] [i_9] [i_15 - 1])))), (min(var_7, (arr_33 [i_8] [i_8] [i_11]))))), -var_0));
                        var_33 = var_3;
                        var_34 |= (arr_35 [i_0] [i_8] [i_9] [i_8] [i_0]);
                    }
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        var_35 |= min(var_6, var_0);
                        var_36 = (min(var_36, ((max(var_5, var_3)))));
                        var_37 = (arr_7 [0] [0] [i_9]);
                        var_38 = (max(var_38, var_8));
                    }
                }
            }
            /* vectorizable */
            for (int i_17 = 1; i_17 < 12;i_17 += 1)
            {
                arr_51 [i_8] = (arr_19 [i_8]);
                var_39 = var_5;
                var_40 = var_2;
            }
        }
        var_41 = (arr_1 [i_0]);

        /* vectorizable */
        for (int i_18 = 0; i_18 < 13;i_18 += 1)
        {
            var_42 = (min(var_42, var_5));
            var_43 = (min(var_43, (((~(((!(arr_28 [i_0] [i_0] [i_0] [i_0])))))))));
            var_44 = (arr_14 [i_18]);
        }
        for (int i_19 = 0; i_19 < 13;i_19 += 1)
        {
            arr_57 [10] [10] = (max(var_1, (arr_3 [9])));
            arr_58 [i_19] |= (arr_37 [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_45 = (min((min(var_6, (max(var_7, (arr_54 [i_0] [i_19] [i_0]))))), (min((min(var_7, (arr_8 [i_0] [i_19]))), (arr_17 [i_0] [4] [i_19])))));
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    {
                        var_46 = (max(var_46, -var_5));
                        var_47 = arr_26 [i_20] [i_20] [10];
                        var_48 *= (min((max((max(var_7, (arr_35 [i_0] [i_19] [i_19] [i_20] [i_21]))), (arr_17 [i_20] [i_19] [i_20]))), (arr_3 [i_0])));
                    }
                }
            }
        }
        for (int i_22 = 4; i_22 < 10;i_22 += 1)
        {
            /* LoopNest 3 */
            for (int i_23 = 0; i_23 < 13;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 13;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 13;i_25 += 1)
                    {
                        {
                            var_49 *= (arr_71 [i_25] [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_0]);
                            var_50 = (min((arr_33 [i_22] [i_22] [i_22]), (max(var_1, (max(var_2, var_2))))));
                            arr_75 [i_0] [i_22] [i_23] [i_22] [i_24] [i_25] = (~var_1);
                            var_51 = (max(((min((arr_28 [i_0] [i_0] [i_0] [i_24]), (((-(arr_12 [i_0] [i_23] [i_24] [i_22]))))))), (max(var_7, var_1))));
                        }
                    }
                }
            }
            var_52 *= (max(((min(((max(var_9, (arr_70 [i_0])))), (min((arr_38 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_69 [i_0] [4] [1] [i_0])))))), ((~(arr_3 [3])))));
            arr_76 [i_0] [i_22 - 1] [i_22] = (min(var_7, (((~(min(var_1, (arr_19 [i_0]))))))));
            var_53 = (arr_33 [i_0] [i_0] [i_0]);
        }
    }
    var_54 = min((min(var_6, (min(var_3, var_2)))), (max((min(var_0, var_2)), var_3)));
    #pragma endscop
}
