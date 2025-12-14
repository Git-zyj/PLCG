/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [4] &= (arr_1 [i_0]);
        var_20 *= ((~(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_7 [19] &= arr_0 [i_1];
        var_21 = ((((arr_2 [16]) == (arr_0 [17]))) ? (arr_6 [i_1]) : (arr_1 [i_1]));
        var_22 &= ((!(arr_6 [i_1])));
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        arr_11 [2] [0] = (max((arr_8 [i_2] [i_2 - 1]), (arr_8 [i_2 - 1] [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_18 [i_3] [i_3] [i_2] [i_3] = (arr_12 [i_3]);
                    var_23 *= ((((max((arr_16 [i_2 + 1] [i_3] [1] [i_3]), (arr_4 [i_2 + 1])))) ? var_15 : (max(3804182203, (arr_16 [i_2 - 1] [12] [i_3] [i_3])))));
                    var_24 = (((max((((arr_2 [i_3]) ? (arr_2 [i_4]) : (arr_17 [i_4] [i_3] [i_3] [i_2 + 1]))), (min((arr_16 [i_2] [i_3] [i_4] [i_2]), (arr_5 [10]))))) | (arr_8 [7] [i_2 + 1])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_25 -= ((((max((arr_12 [18]), ((var_4 ? (arr_1 [i_2]) : var_2))))) == (((((arr_9 [i_2]) - (arr_5 [i_2]))) ^ (((((arr_15 [i_5] [i_6]) || (arr_0 [i_4])))))))));
                                var_26 = ((+(min((arr_10 [i_6 - 2]), (arr_10 [i_6 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_27 *= (((max((arr_27 [i_7]), (arr_27 [i_7]))) >= (((((arr_27 [i_7]) || (arr_27 [i_7])))))));
        var_28 |= ((arr_2 [i_7]) - (((((arr_2 [i_7]) + var_12)) >> (((((arr_24 [i_7]) + var_2)) + 1844)))));
        arr_28 [i_7] [i_7] = (arr_24 [i_7]);

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_29 |= ((((min(32961, 2128698834))) ? -4128767553 : 511));
            arr_32 [8] [i_7] [i_8] &= (((var_12 ? (arr_29 [i_7] [i_8]) : (!var_13))));
            var_30 = (min(1524187813, 127));
            var_31 = (((((arr_29 [i_7] [i_7]) > (arr_29 [i_7] [i_8]))) ? (min((arr_29 [i_7] [i_8]), (arr_29 [i_8] [i_7]))) : (arr_29 [2] [2])));
        }
        for (int i_9 = 2; i_9 < 20;i_9 += 1)
        {
            var_32 |= -var_6;

            for (int i_10 = 2; i_10 < 21;i_10 += 1)
            {
                arr_37 [i_7] [18] [i_7] [i_10] = (~1);
                var_33 *= (min(31, 37782));
                var_34 = ((((((arr_0 [i_10]) && ((max((arr_34 [i_7]), var_4)))))) + var_10));
            }
            for (int i_11 = 1; i_11 < 21;i_11 += 1)
            {
                var_35 = (arr_38 [i_7] [i_7] [i_9 + 2] [i_11]);
                var_36 = ((~(((arr_38 [i_7] [i_7] [i_7] [i_7]) + (arr_31 [i_9 + 2] [i_9 - 2])))));
            }
            for (int i_12 = 1; i_12 < 21;i_12 += 1)
            {
                arr_43 [i_7] [i_9] [i_9 - 2] [i_7] = (((arr_40 [9] [i_7] [4]) ? var_2 : (((arr_35 [i_7] [i_12 - 1] [1]) + (arr_35 [i_7] [i_12 + 1] [7])))));
                arr_44 [i_7] [i_12 - 1] = (min((arr_38 [i_12] [i_12] [i_12] [i_9 + 2]), (max(var_9, var_15))));
                var_37 = (min(2973, 37798));
                var_38 = (max(var_38, (arr_31 [i_7] [i_12])));
            }
        }
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            var_39 = (arr_29 [i_7] [i_7]);
            var_40 *= (max((min(((!(arr_26 [i_7]))), ((!(arr_47 [i_7] [i_7]))))), ((!(arr_47 [i_7] [i_13])))));
            var_41 &= ((+((((arr_26 [i_7]) || (arr_26 [i_7]))))));
        }
        for (int i_14 = 2; i_14 < 20;i_14 += 1)
        {
            var_42 |= ((255 ? 896809994 : 1));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    {
                        var_43 = (max(var_43, var_14));

                        for (int i_17 = 0; i_17 < 22;i_17 += 1)
                        {
                            arr_61 [i_7] [21] [i_15] [21] [21] = (max(((((arr_26 [i_14 + 1]) || (arr_26 [i_14 + 2])))), ((-(arr_26 [i_14 + 1])))));
                            var_44 = (min(var_44, ((min((((arr_42 [i_14 + 2]) ? (arr_42 [i_14 - 1]) : (arr_58 [i_7] [i_7] [i_14 + 1] [i_16] [i_17]))), (arr_56 [i_14] [i_14]))))));
                        }

                        for (int i_18 = 0; i_18 < 22;i_18 += 1)
                        {
                            arr_64 [2] [i_15] &= (((-(max((arr_29 [i_7] [i_7]), (arr_0 [i_15]))))));
                            arr_65 [i_15] [i_14] [0] [i_14] [i_18] [i_18] [2] = (min(-2355562804560707270, 2147483633));
                            var_45 = (max(var_18, ((~(arr_52 [i_14] [i_18])))));
                        }
                        /* vectorizable */
                        for (int i_19 = 2; i_19 < 20;i_19 += 1)
                        {
                            var_46 = (arr_58 [i_14] [i_14] [i_14] [i_14 - 2] [i_19 - 1]);
                            var_47 = (arr_49 [i_19 - 2] [i_19 - 2] [i_19]);
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_20 = 4; i_20 < 13;i_20 += 1)
    {
        var_48 = (min(var_48, (!63)));
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 14;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 14;i_23 += 1)
                {
                    {
                        var_49 = (((arr_2 [i_20 - 3]) | (arr_77 [i_20 - 3] [i_20 + 1] [i_20 - 3])));
                        var_50 ^= ((~(arr_75 [i_20 - 4] [i_20 + 1] [i_20 - 3] [i_20 + 1])));
                        var_51 = (arr_12 [i_20]);
                    }
                }
            }
        }
        var_52 = (arr_30 [i_20 - 2] [i_20]);
        arr_80 [i_20] [i_20] = var_13;
        arr_81 [i_20] = (arr_66 [i_20] [i_20 - 3] [3] [i_20] [i_20 - 2]);
    }
    for (int i_24 = 0; i_24 < 19;i_24 += 1)
    {
        var_53 = ((!((!(arr_16 [10] [i_24] [i_24] [i_24])))));
        /* LoopNest 2 */
        for (int i_25 = 1; i_25 < 18;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 19;i_26 += 1)
            {
                {
                    arr_89 [i_25] [17] [i_26] [i_25] = (arr_24 [i_25 - 1]);
                    var_54 = var_8;
                    arr_90 [i_24] [i_24] [i_24] |= (max(var_7, ((min(233, 2147483642)))));
                    var_55 = (min(var_55, (arr_66 [i_25 + 1] [19] [i_26] [i_24] [i_25])));
                    var_56 = (arr_60 [i_24] [i_25 + 1] [i_26] [i_26] [i_24]);
                }
            }
        }
    }
    #pragma endscop
}
