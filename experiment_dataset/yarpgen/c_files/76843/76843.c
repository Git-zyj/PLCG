/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    var_16 = (max(var_16, (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 3] [i_1 + 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_3] [i_3] [i_3] [i_1] [i_1] = -1356648815;
                                arr_13 [i_3] [i_1] = (((arr_9 [i_1 + 2] [i_1] [i_2 - 1]) ? -2 : var_2));
                                var_17 = ((var_1 ? 0 : var_6));
                                var_18 = ((+(((arr_3 [i_2] [i_4]) ? var_7 : var_15))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 6;i_5 += 1)
                    {
                        var_19 = (arr_0 [i_2 + 1]);
                        arr_16 [i_0] [i_0] [6] [i_0] [i_0] [i_0] = 0;
                    }

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_20 = (arr_2 [i_0]);
                        var_21 = (arr_14 [6] [0] [i_2] [i_2] [i_2]);
                    }
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        arr_21 [i_2] [i_1] [i_2 + 2] [i_1] [i_0] [i_7 - 1] = (arr_4 [i_0] [i_1] [i_2]);
                        var_22 = (arr_8 [i_2 + 2] [i_7]);
                        arr_22 [i_0] [i_0] [i_2] = ((~(arr_19 [i_0] [i_1 + 4] [i_0] [i_7])));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_26 [i_2 + 2] [i_2] [i_2] [2] = ((~(arr_10 [i_2 - 1] [i_2 - 1])));
                        var_23 = (!var_4);
                        var_24 = (var_15 & var_9);
                    }
                    var_25 = (((var_0 ^ (arr_3 [i_0] [i_2]))));
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_26 = (min(var_26, (~1)));
                        var_27 = (max(var_27, ((max(((((arr_18 [i_0] [i_1 + 1] [1] [i_1] [8]) <= var_2))), (~-2))))));
                        var_28 ^= (((((~(arr_11 [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_10] [i_1 + 4])))) ? 1824580623 : -545173048));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            var_29 = ((~(((!((var_4 >= (arr_32 [i_0] [i_0] [8] [i_0] [i_0] [i_0]))))))));
                            arr_36 [i_0] [1] [i_0] [9] [i_0] = (max((min(3, (((arr_29 [i_9] [6] [i_9] [i_9] [i_9]) ? (arr_20 [i_0]) : 3654798665)))), var_8));
                        }
                        arr_37 [i_0] = var_0;

                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            var_30 = var_8;
                            arr_40 [1] [i_1] [i_9] [i_9] [2] [i_11] [5] = (arr_19 [i_1] [i_1] [i_1] [i_1]);
                            var_31 = (arr_0 [i_1 - 1]);
                            arr_41 [i_0] = var_12;
                            var_32 -= (arr_25 [i_11] [5] [i_1] [i_0] [i_11]);
                        }
                        for (int i_14 = 1; i_14 < 9;i_14 += 1)
                        {
                            var_33 += (arr_17 [i_0]);
                            var_34 = (!306463919765191580);
                            var_35 = (arr_3 [5] [i_1]);
                        }
                        var_36 = (min(var_36, (arr_29 [i_1] [5] [i_1] [i_1 - 1] [i_1 + 3])));
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            {
                                var_37 *= var_7;
                                var_38 = (-2580718843079036683 & 503316480);
                            }
                        }
                    }
                    var_39 = var_13;
                }
                for (int i_17 = 0; i_17 < 10;i_17 += 1) /* same iter space */
                {
                    var_40 = (max(var_40, (arr_9 [i_0] [0] [i_0])));
                    var_41 = (max(var_41, (169 | 8717147692906045418)));
                    arr_53 [i_0] [i_17] [i_0] = 545173056;
                }
                var_42 = -var_4;
                var_43 |= ((var_12 ? (arr_9 [i_0] [i_0] [i_1 - 1]) : (arr_9 [i_1] [i_0] [i_1 + 3])));
                var_44 = ((~(max(18140280153944360048, 4294967295))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_18 = 3; i_18 < 13;i_18 += 1)
    {
        for (int i_19 = 1; i_19 < 1;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 1; i_21 < 14;i_21 += 1)
                    {
                        for (int i_22 = 3; i_22 < 12;i_22 += 1)
                        {
                            {
                                var_45 = var_9;
                                arr_70 [i_18 + 3] [i_19 - 1] [i_19] [i_19] [i_20] = (arr_67 [1] [i_21] [1] [i_21 - 1] [i_21] [i_19] [i_21 + 1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 16;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 16;i_24 += 1)
                        {
                            {
                                var_46 = ((-(arr_58 [i_24] [10] [i_19])));
                                arr_76 [1] [i_19] [i_20] [i_23] [i_23] [i_18] = min(21, -545173048);
                                arr_77 [i_18] [i_19] [1] [i_18] [i_18 - 1] = -var_1;
                                arr_78 [i_19] [i_18] = var_9;
                                var_47 = (max((!var_12), var_15));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
