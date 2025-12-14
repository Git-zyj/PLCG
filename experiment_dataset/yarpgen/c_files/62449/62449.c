/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_2, var_2));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_21 = 0;
                        var_22 -= (-127 - 1);
                        var_23 = var_9;
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_1] [i_1] [i_3]);
                        arr_11 [1] [i_0] [i_2] [i_2] = ((var_0 ? (((((arr_5 [i_0] [i_1] [i_2] [i_1]) && (arr_5 [i_0] [i_1] [i_2] [i_3]))))) : (arr_5 [i_0] [i_1] [i_2] [i_3])));
                    }
                }
            }
        }
        var_24 = (arr_9 [i_0] [i_0] [11] [i_0] [4] [i_0]);
        arr_12 [i_0] = (arr_7 [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_25 &= -0;
        var_26 = (min((((((arr_15 [i_4]) & (arr_14 [i_4] [i_4]))) + ((var_18 ? var_3 : (arr_15 [i_4]))))), (arr_13 [21] [i_4])));
        var_27 = (!((min(-1, 4))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_28 = (max(var_28, ((max((arr_15 [6]), (arr_17 [i_5]))))));
        var_29 -= 26;

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_30 -= (max(((((var_13 ? var_12 : -7)) / (arr_16 [i_7]))), ((((arr_16 [i_8]) == (arr_16 [i_5]))))));
                        var_31 -= (min(-var_0, (arr_14 [i_5] [i_6])));
                        var_32 = (max(((-5261595076094046098 ? 0 : 6)), (var_3 || var_17)));
                        var_33 = ((((~((max((-32767 - 1), 14))))) ^ ((~((~(arr_14 [i_5] [i_7])))))));
                    }
                }
            }
            var_34 = (min(var_34, -16));
            var_35 = (191 || 2873262633815292122);
            var_36 *= (((max(((max(6, 42))), ((16745714801595776650 - (arr_17 [i_5]))))) - ((~(((arr_23 [16] [i_6] [16] [i_6]) | var_14))))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_37 -= 0;
            var_38 = (max(var_38, (((57 || (arr_21 [i_9]))))));
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 16;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        var_39 = (((((~(((arr_29 [i_5] [i_10] [i_11 - 1] [i_12]) ? (arr_23 [i_5] [i_10 + 1] [i_11 - 1] [i_11 - 1]) : (arr_24 [i_11])))))) == ((~(arr_20 [i_10 + 1] [i_5])))));
                        var_40 = (min(var_40, (((min((arr_25 [i_10 - 1] [i_11 - 1]), (arr_25 [i_10 - 1] [i_11 - 1])))))));
                    }
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        var_41 = (min(var_41, (((!(arr_22 [i_10 - 1] [i_11 + 1] [i_11 - 1]))))));
                        var_42 = (((min((min((arr_29 [i_5] [i_5] [16] [i_5]), 45)), (arr_19 [i_10 - 1] [i_11 - 2]))) ^ (((((arr_27 [11] [i_10] [i_11]) ? (arr_27 [15] [i_11 - 2] [i_13]) : (arr_21 [i_13]))) | (~10)))));
                        arr_39 [i_5] [i_5] [i_5] [i_5] |= ((((var_10 / (arr_36 [i_10 - 1] [i_11 - 1] [i_11 + 1] [i_11] [i_13]))) - (arr_36 [i_10 + 1] [i_11 - 1] [i_11 + 1] [i_13] [i_10 + 1])));
                    }
                    var_43 = (arr_25 [i_10] [i_10]);
                    arr_40 [i_5] [i_5] [i_11] [i_5] = (((-(arr_20 [i_10 + 1] [i_10 - 1]))) > (((max(57, (!var_5))))));
                    arr_41 [i_5] [i_10 - 1] [i_11] [i_11 - 1] = (((((arr_32 [i_11] [i_5] [i_10] [i_10] [i_5] [4]) ^ (arr_32 [i_11] [i_10] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 1]))) & ((max((arr_32 [i_11] [i_11 - 1] [i_10 + 1] [i_10 + 1] [i_5] [i_11]), (arr_32 [i_11] [i_10] [i_10 + 1] [i_10] [i_10] [i_10 + 1]))))));
                    var_44 = (min(var_44, ((min(((~(arr_21 [i_5]))), var_19)))));
                }
            }
        }
        var_45 = ((18446744073709551615 ? var_14 : (arr_35 [i_5] [i_5] [i_5])));
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 19;i_16 += 1)
            {
                {
                    arr_49 [i_14] [i_16] [i_15] [i_14] = ((-(((!(arr_15 [i_16]))))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        for (int i_18 = 3; i_18 < 18;i_18 += 1)
                        {
                            {
                                var_46 &= ((((-(arr_48 [i_18 - 3] [i_18 - 3]))) & (arr_14 [i_14] [i_14])));
                                var_47 = ((-((-(arr_15 [i_14])))));
                                var_48 -= (var_14 - 213);
                            }
                        }
                    }
                    var_49 = (-((-(arr_51 [i_14] [i_14] [i_16] [i_16] [i_14]))));
                    arr_54 [i_14] [i_14] [i_14] [i_16] = (((!var_10) < (((!(arr_46 [i_14] [i_14]))))));
                }
            }
        }
    }
    #pragma endscop
}
