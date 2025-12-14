/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] = (max((min((arr_1 [i_3 + 1]), var_5)), ((min((arr_1 [i_2 - 4]), (arr_1 [i_3]))))));
                            var_19 = ((((max((arr_6 [i_1 + 2] [i_1 - 3] [i_1] [i_1 - 3] [i_1 + 2] [i_1 - 3]), (arr_4 [i_1 - 2] [i_1 - 3] [i_1])))) ? (((((arr_2 [i_1] [i_1 + 2] [i_1]) >= (arr_2 [i_1] [i_1 - 3] [2]))))) : var_4));
                        }
                    }
                }
                var_20 ^= (((((((var_16 ? var_15 : var_18))) ? var_17 : (((arr_2 [i_0] [i_0] [i_0]) << (var_8 - 8919820169610596391))))) >= (~var_12)));

                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    arr_13 [i_0] [i_0] [i_0] = ((((((arr_0 [1]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? var_5 : ((((arr_0 [i_4]) >> (var_1 - 59471))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_21 = ((var_13 ? (arr_15 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 - 2]) : (arr_7 [15] [i_0 + 1] [i_0 - 1] [i_0 - 1])));
                        arr_17 [i_0] [i_0 - 1] [i_0] [1] = var_16;
                    }
                    arr_18 [i_0] [i_0] [0] = (min((((arr_6 [i_1] [i_1] [i_1 + 1] [i_1 - 3] [i_1 - 3] [i_1]) - (arr_6 [i_1] [i_1 - 3] [i_1 - 3] [13] [i_1 + 2] [i_1]))), (((0 ? 9991828170666438763 : var_10)))));

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_22 |= var_17;

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            var_23 |= var_15;
                            arr_23 [5] [i_7] [i_7 - 1] [i_7] [0] = 3418987780;
                        }
                        var_24 = (+(((arr_4 [i_1] [i_1] [i_1]) ? -var_8 : (min(var_2, var_7)))));
                    }
                    for (int i_8 = 3; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_25 = ((((min(884541372, 2147483636))) ? (((arr_1 [i_4 - 3]) ? -1 : (arr_8 [i_0 + 1] [11] [i_0 + 1] [i_0]))) : ((-884541370 ? var_17 : 8454915903043112853))));
                        arr_27 [i_0] [i_0] = (max((arr_25 [i_0 + 1] [i_0 - 1]), (-1 != 243)));
                    }
                    for (int i_9 = 3; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        arr_30 [i_9] [17] [i_4] [17] = ((((arr_14 [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? (arr_14 [1] [i_1 - 2] [i_1 + 1]) : (arr_14 [i_0 + 1] [i_0] [i_0 + 1]))));
                        arr_31 [i_0] [i_0] [i_0 - 1] [i_9] [6] = (max((((((var_11 ? (arr_26 [i_0 - 1] [i_0] [i_0 - 1]) : var_18))) ? var_6 : var_17)), (-1 > var_13)));
                    }
                    for (int i_10 = 3; i_10 < 17;i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_10 - 2] [i_10] [i_10] [i_10] [i_10] [6] = ((((((arr_33 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) ? (arr_33 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0]) : var_7))) ? (((arr_33 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0]) ? (arr_33 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0]) : (arr_33 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [0]))) : ((var_18 ? (arr_33 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0]) : (arr_33 [13] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1])))));
                        arr_35 [i_0 - 1] = (max(var_9, 2117370745));
                        arr_36 [i_0] [i_0] [i_0] [i_0] = (max(((((arr_2 [i_0 - 1] [i_0] [i_0]) >= var_10))), (arr_2 [i_0] [i_0 - 1] [i_0 - 1])));
                    }

                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        arr_40 [i_0] [10] [10] [i_0 - 1] [i_0 + 1] = var_4;

                        for (int i_12 = 3; i_12 < 17;i_12 += 1)
                        {
                            var_26 = ((((max((arr_39 [i_11]), (arr_39 [9])))) ? (arr_7 [i_0] [i_0] [i_0 - 1] [i_0]) : (((-880124356 > 884541380) ? var_9 : (arr_11 [i_4 - 2] [i_4 - 2] [i_4 - 3])))));
                            arr_44 [i_12] [i_12 + 1] [i_12] [i_12] [i_12 - 3] [i_12] = var_0;
                            var_27 = var_6;
                        }
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        var_28 ^= (((!var_16) ? (((-(arr_5 [i_0] [i_0] [14])))) : ((var_16 ? var_12 : 32759))));
                        arr_48 [9] [1] [i_4] [i_4] [i_4] = ((((((arr_22 [i_4 - 3] [10] [1] [i_4 - 2] [i_4 + 2]) | var_4))) ? (var_0 / var_5) : (arr_12 [1] [1])));
                    }
                }
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    var_29 = ((var_9 ? (max(var_3, ((var_14 ? var_16 : var_14)))) : ((29504 ? (arr_25 [i_0] [i_0 + 1]) : (((arr_37 [12] [i_1] [i_1] [i_1]) / var_18))))));
                    arr_51 [i_0] [i_0] [i_0] = (((((0 | (arr_28 [i_1 - 1] [i_1 + 1] [i_1 - 1] [2])))) ? (((var_3 || ((min(var_14, var_3)))))) : ((var_14 ? 2145029112 : ((-(arr_49 [i_14] [i_14])))))));
                }
            }
        }
    }
    var_30 = var_8;
    #pragma endscop
}
