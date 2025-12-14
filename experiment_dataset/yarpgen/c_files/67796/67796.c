/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((!(((-(arr_4 [i_0]))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_20 = -13259;
                    var_21 = (min((arr_5 [i_0] [17]), (((-1 ? (arr_7 [i_0] [i_0] [i_2]) : ((min(0, var_3))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = var_15;
                                var_23 = (max((arr_13 [i_3] [i_3] [i_3 - 2]), ((63 ? (arr_13 [i_3] [i_3] [i_3 - 2]) : (arr_13 [i_4] [i_3 - 1] [i_3 - 1])))));
                                var_24 = ((-(arr_4 [11])));
                                var_25 ^= (max(var_8, (arr_0 [i_1])));
                            }
                        }
                    }
                    var_26 = 80;
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] [i_5] = (2 > -14);
                    var_27 = var_7;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_28 = (min((arr_11 [i_6] [i_6] [i_0] [i_0]), ((max((~1), 4294967295)))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_29 = (min(var_29, (((((((arr_16 [i_6] [i_0]) ? (~var_8) : (arr_13 [i_8] [i_8] [i_7 + 4])))) ? ((((arr_17 [i_1] [i_6] [i_7] [i_6]) % (arr_23 [i_0] [i_1] [i_6] [i_7 + 3])))) : (max((((arr_2 [i_0] [i_0]) ? 106095267 : 5978)), var_6)))))));
                                var_30 = ((+(max((~7340032), var_4))));
                                arr_25 [i_7] [i_0] [i_0] = (arr_13 [i_6] [i_1] [i_1]);
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_31 = ((var_16 ? (max((max((arr_16 [i_0] [i_0]), (arr_23 [i_0] [i_1] [i_0] [i_1]))), -var_18)) : -var_15));

                    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_32 += (((!((min(-1, (arr_32 [i_0] [i_0] [i_9] [i_10])))))));
                        var_33 = var_19;
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        var_34 = (((min(((((arr_27 [i_0] [i_0] [i_0] [i_11]) ? (arr_35 [i_11] [8] [i_1] [i_0]) : -26))), (arr_16 [i_0] [i_9]))) & ((max((var_0 / var_0), var_4)))));
                        var_35 = (arr_9 [i_0] [i_0] [i_1] [i_9] [i_11]);

                        for (int i_12 = 1; i_12 < 15;i_12 += 1)
                        {
                            var_36 = (min(((-(arr_35 [i_12] [i_0] [i_1] [i_0]))), -0));
                            var_37 = (((((arr_9 [i_12] [i_12 - 1] [i_12 + 3] [i_1] [i_1]) % (arr_9 [i_12] [i_12 - 1] [i_12 + 3] [i_1] [12])))) ? var_5 : 9223372036854775807);
                            var_38 = var_6;
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_39 = var_0;
                            var_40 = ((89 << (((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) + 69))));
                            arr_40 [i_13] [i_13] [i_13] [i_13] = ((var_12 & (((arr_36 [i_0] [i_1] [i_9] [i_11] [i_11]) & var_6))));
                            var_41 = var_18;
                        }
                        arr_41 [i_11] [i_11] [1] [i_1] [i_0] = (max(((min((arr_21 [i_0]), var_13))), (((arr_36 [i_0] [i_1] [i_0] [i_1] [i_1]) ? (arr_34 [i_9]) : (arr_16 [i_0] [i_0])))));
                    }
                    for (int i_14 = 2; i_14 < 18;i_14 += 1)
                    {
                        var_42 = (((-(arr_23 [i_0] [i_1] [i_9] [i_14]))));
                        arr_45 [i_0] [i_0] [i_0] [i_9] [i_14] = var_18;
                        var_43 = (min((arr_37 [i_0] [i_1] [i_1] [i_0] [16] [i_9] [i_1]), (((((((arr_14 [i_1] [i_1] [i_9]) || 185))) & ((~(arr_42 [i_1]))))))));
                        arr_46 [i_9] [i_9] [i_9] [i_14] [i_9] = ((((arr_0 [i_0]) ? var_10 : (arr_0 [i_14]))));
                    }
                    var_44 += (+((((arr_11 [i_0] [i_0] [i_0] [9]) < (((!(arr_9 [i_0] [i_0] [i_0] [i_9] [i_9]))))))));
                }
            }
        }
    }
    var_45 = (min((min(2769562947, (~1))), var_10));
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            {
                var_46 &= (~59539);
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 12;i_19 += 1)
                        {
                            {
                                var_47 = 7340032;
                                var_48 = (min(((~(arr_20 [i_16] [i_17] [i_17]))), var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
