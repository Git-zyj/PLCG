/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = (((var_9 + (max(var_14, var_10)))));
                                arr_14 [i_3] [i_2] [i_1] [i_3] = var_14;
                                arr_15 [i_3] [i_1] [i_2] [i_3] [i_4] [i_4] = (min((min((arr_13 [i_3] [i_3] [i_3] [1] [i_4] [i_0]), (max(11332099790630915589, (arr_9 [i_0] [i_0] [i_0] [i_0]))))), ((min((arr_8 [12] [12] [12]), (arr_8 [i_1] [i_2] [i_3]))))));
                                var_17 = ((var_12 & (max((arr_10 [i_1] [i_1] [i_3] [i_3] [i_4]), (max((arr_0 [i_0]), 11332099790630915588))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_1] [i_2] [i_5] = ((((max(((((arr_11 [i_2]) ? (arr_7 [i_0] [i_1] [i_2] [i_5]) : (arr_3 [i_5])))), (min(var_5, 7114644283078636026))))) ? (min(((var_9 ? var_10 : 18446744073709551615)), (max(var_15, 8176)))) : ((min(((var_10 ? 1 : (arr_0 [i_5]))), (arr_8 [i_0] [i_1] [i_1]))))));
                        arr_19 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (((((~(arr_8 [i_1] [i_1] [i_1]))) & (arr_3 [i_0]))));
                        arr_20 [i_0] [i_1] [i_1] [14] = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_1] [i_2] [i_6] [i_6] = (((min((((var_15 ? var_8 : var_13))), (min(1, 11332099790630915570))))) ? (45965 - var_12) : var_8);

                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            var_18 = (arr_4 [i_7 - 1]);
                            arr_28 [i_0] [i_1] [i_2] [i_6] [i_7] = (max(((min(var_12, (arr_21 [i_6] [i_7 + 1])))), ((~(arr_0 [i_2])))));
                        }
                        for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            var_19 = (max(-1480393664, var_14));
                            arr_31 [i_8] [7] [i_1] [i_8] = ((((-var_15 - ((var_2 ? var_15 : var_5)))) >= (((max(45965, (arr_1 [i_8 + 1])))))));
                            arr_32 [i_1] [i_0] [i_2] [i_8] [i_8] [i_0] = ((((min((arr_13 [i_8] [i_8] [i_8 + 2] [i_8 + 2] [i_8] [i_8 + 1]), var_6))) ? ((((var_3 < (arr_17 [i_8 - 1] [i_1]))))) : (!var_5)));
                            arr_33 [i_0] [i_1] [i_8] [i_6] = (((((min(((7114644283078636027 <= (arr_17 [i_6] [i_0]))), (arr_9 [i_0] [i_1] [i_2] [i_6]))))) % (arr_12 [i_0] [i_1] [i_1] [i_6] [i_8])));
                        }
                        for (int i_9 = 1; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            arr_37 [i_6] [i_6] [i_9] [i_2] [i_9] [i_1] [i_0] = (max(17713422195383802697, (((max((arr_10 [i_9] [i_6] [i_9] [i_1] [i_0]), (arr_25 [i_1] [i_1] [i_2] [i_2] [i_1] [i_2] [i_6])))))));
                            var_20 = 1;
                            arr_38 [i_0] [i_1] [i_2] [i_2] [i_9] = ((((((var_1 ? (arr_26 [i_0] [i_0] [i_2] [i_2] [i_0] [i_9]) : (~1))) + 2147483647)) << (((((((arr_30 [i_0] [i_0] [i_1] [i_2] [i_1] [i_9] [i_9 + 1]) + 2147483647)) >> (((arr_8 [i_6] [i_1] [i_2]) - 5450)))) - 23376579))));
                            arr_39 [i_9 - 1] [i_9 - 1] [i_9] [i_9] [i_0] [i_0] = var_6;
                        }
                        for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            arr_43 [i_0] [i_10] = arr_1 [i_10];
                            arr_44 [i_0] [i_1] [i_2] [i_6] [i_10] = (arr_30 [i_0] [i_1] [i_2] [i_6] [i_10 + 2] [i_6] [i_10 + 2]);
                            var_21 = ((-var_0 % ((var_2 ? (arr_35 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6] [i_10]) : var_5))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        arr_49 [1] [i_1] [i_2] [1] = ((max((arr_41 [i_0] [i_1] [i_2] [i_11] [i_11]), (arr_41 [i_0] [9] [i_2] [i_11] [i_1]))));
                        arr_50 [i_0] [i_1] = (min((((min(0, var_11)) == var_10)), ((var_0 <= (arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_22 -= (arr_10 [i_0] [i_1] [i_1] [i_12] [i_1]);
                        arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                        arr_54 [i_2] = (((arr_29 [i_2] [i_1] [i_0] [i_0] [i_0]) < (arr_29 [i_0] [i_0] [i_1] [i_0] [i_0])));
                        var_23 = (max(var_23, var_1));
                    }
                    arr_55 [i_0] [i_1] [i_2] [i_1] = (min(((min((arr_10 [i_0] [i_1] [i_1] [i_1] [i_2]), var_12))), ((var_9 | (arr_10 [i_2] [i_2] [i_0] [i_1] [i_0])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        for (int i_14 = 3; i_14 < 11;i_14 += 1)
        {
            {
                arr_61 [i_13] [i_13] = var_7;

                for (int i_15 = 1; i_15 < 9;i_15 += 1)
                {
                    var_24 = ((((((arr_17 [i_14] [i_15]) ? (((arr_63 [i_13]) & (arr_45 [i_13] [i_13] [i_13]))) : -var_9))) ? var_11 : (((max((arr_23 [i_15 - 1] [i_15] [7] [i_15 - 1]), (arr_46 [i_14 + 1] [i_14])))))));
                    var_25 -= 57335;
                    arr_64 [i_13] [i_14 + 1] [i_13] [i_15] = (max(57346, (arr_47 [i_13] [i_14] [5] [i_14] [15])));
                }
                var_26 -= (arr_26 [i_13] [i_13] [i_13] [i_14] [i_14] [i_14]);
                arr_65 [i_13] = var_15;
                arr_66 [i_14] [i_13] = var_7;
            }
        }
    }
    var_27 = var_11;
    #pragma endscop
}
