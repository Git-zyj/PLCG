/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_4, var_7));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_0 [16]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((min((arr_2 [i_0]), (((var_7 << (((var_12 + 7821) - 25)))))))) : ((min((arr_2 [i_0]), (arr_1 [i_0])))));
        var_18 = ((((arr_1 [i_0]) ? var_8 : (((var_1 ? (arr_2 [i_0]) : (arr_2 [i_0])))))));
        var_19 = ((min(var_5, ((var_3 ? var_15 : var_16)))));

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_20 = (arr_0 [i_1 - 1]);

            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                arr_8 [i_2 - 1] [i_0] [i_0] = (((((((max(var_14, var_16))) > (var_0 && var_16)))) << var_11));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_21 = (((arr_9 [i_4] [i_4] [i_4] [i_4] [i_4 - 2]) ? (max((arr_9 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 - 1]), var_9)) : (((max(var_12, (arr_9 [i_4] [i_4] [i_4] [i_4] [i_4 - 2])))))));
                            arr_15 [i_0] [i_4] = ((((min((arr_5 [i_2 + 2]), (arr_5 [i_2 + 1])))) ? (((arr_5 [i_3]) - (arr_5 [i_0]))) : ((max(var_6, (arr_5 [i_1 - 3]))))));
                        }
                    }
                }
                var_22 = (arr_5 [14]);
                var_23 = var_16;
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_18 [i_0] [i_1] [i_0] [i_0] = ((var_9 ? (arr_7 [i_1 - 2] [i_1 + 1]) : var_8));
                arr_19 [i_0] = (((((var_8 ? var_8 : var_4))) ? var_7 : ((var_1 ? (arr_4 [i_1]) : var_13))));
                var_24 ^= var_1;
            }
            var_25 = ((((min((arr_17 [i_0] [i_0]), (arr_13 [i_0])))) ? (arr_0 [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])));
            arr_20 [i_1] = (arr_13 [i_0]);
        }
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_26 = (arr_7 [i_0] [i_7]);
                var_27 = (((~var_16) < var_16));
            }
            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {
                var_28 += ((~((~((var_10 ? var_14 : var_4))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_29 = ((var_0 ? var_1 : var_5));
                            var_30 = max(((~(arr_1 [i_8]))), (min((((arr_23 [i_0] [i_10] [i_10]) ? (arr_1 [i_6]) : (arr_6 [i_9] [i_6] [i_6]))), var_8)));
                        }
                    }
                }
                arr_33 [i_6] [i_8] = (max((((arr_25 [i_0] [i_6 + 1] [i_8 - 1]) ? (arr_4 [i_0]) : var_14)), ((-(arr_4 [i_0])))));
                arr_34 [i_0] |= (arr_30 [i_0]);
                var_31 = (((((arr_24 [i_0] [i_8] [i_8 - 1] [i_8 + 1]) / (arr_24 [i_8] [i_8] [i_8 + 2] [i_8 + 1]))) * (~var_8)));
            }
            var_32 += ((var_6 ? (((((arr_23 [13] [13] [i_6]) >= var_11)) ? ((max((arr_2 [i_0]), (arr_31 [i_0] [i_0] [3] [i_0] [i_0])))) : ((var_16 ? (arr_7 [i_0] [i_6]) : (arr_16 [i_0] [i_6] [i_6]))))) : (arr_5 [i_0])));
            var_33 ^= (arr_1 [i_0]);
        }
        /* vectorizable */
        for (int i_11 = 4; i_11 < 17;i_11 += 1)
        {
            var_34 += ((((arr_1 [i_0]) ? var_10 : (arr_7 [i_0] [i_11 - 2]))));
            arr_39 [i_0] [i_0] |= ((((arr_24 [i_0] [i_11] [i_0] [i_11]) ? var_8 : (arr_4 [i_0]))));
            var_35 &= ((((var_16 ? var_14 : var_4))) ? ((((arr_2 [i_0]) ? (arr_13 [i_11]) : var_3))) : (arr_1 [i_11 + 1]));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    {
                        arr_46 [i_12] [i_11] [1] [i_12] [i_13] [i_12] = (arr_43 [i_13]);
                        arr_47 [1] [i_11] [i_11] [i_11] [i_0] &= (arr_12 [16] [i_11 + 1] [i_11 - 4] [i_11 - 4]);
                        var_36 ^= (((var_4 && var_6) | (arr_2 [i_0])));
                        var_37 = (arr_16 [i_0] [i_11 - 2] [6]);
                    }
                }
            }
        }
        for (int i_14 = 2; i_14 < 16;i_14 += 1)
        {
            arr_50 [i_0] [i_0] = (((arr_2 [i_0]) ? var_6 : ((((((~(arr_22 [i_14] [i_0]))) + 2147483647)) << (((max(var_12, 524287)) - 524287))))));
            var_38 *= ((arr_2 [i_0]) <= (((max((arr_4 [i_14 - 2]), (arr_1 [i_0]))))));
            arr_51 [i_14] [i_0] [i_0] = (((((-(arr_45 [i_14] [i_14 + 2] [i_14] [i_14 + 2] [i_14] [i_14])))) ? (arr_6 [i_14 + 1] [i_14] [i_14]) : (arr_6 [i_14 - 2] [i_0] [i_0])));
        }
    }
    for (int i_15 = 2; i_15 < 9;i_15 += 1) /* same iter space */
    {
        var_39 -= (min(((((arr_44 [i_15 - 1] [i_15] [i_15]) | (arr_44 [i_15 + 1] [i_15 + 1] [i_15])))), ((((((arr_43 [i_15]) ? var_2 : 1))) ? (arr_7 [i_15] [9]) : ((var_15 ? var_2 : var_2))))));
        var_40 -= var_11;
        var_41 -= (~var_8);
    }
    for (int i_16 = 2; i_16 < 9;i_16 += 1) /* same iter space */
    {
        var_42 *= var_0;
        arr_60 [i_16] = (arr_31 [i_16] [i_16] [i_16] [4] [i_16]);
        var_43 = ((arr_37 [i_16 + 2]) || ((min((((var_1 ? var_16 : (arr_26 [i_16] [i_16] [i_16 + 1] [i_16])))), (arr_57 [i_16 - 1] [i_16 - 1])))));
        /* LoopNest 2 */
        for (int i_17 = 1; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 10;i_18 += 1)
            {
                {
                    var_44 += var_7;
                    /* LoopNest 2 */
                    for (int i_19 = 1; i_19 < 10;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 7;i_20 += 1)
                        {
                            {
                                var_45 = ((-((var_13 ? (((max(var_15, (arr_40 [i_19 + 1] [i_18] [i_18] [i_16]))))) : (arr_63 [i_16] [i_17])))));
                                var_46 ^= (max(-var_16, (((var_7 ? var_12 : (arr_57 [i_20] [i_17]))))));
                                var_47 += ((((max((arr_7 [i_16] [i_17]), var_10))) ? ((~((min(var_13, var_15))))) : ((min((min(var_1, var_6)), (arr_5 [i_18 + 1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 11;i_22 += 1)
                        {
                            {
                                arr_77 [5] [i_17] [i_16 + 1] [i_21] [i_22] [i_18] = ((~(min((max((arr_66 [i_17] [i_21]), (arr_55 [1]))), (arr_5 [17])))));
                                arr_78 [i_16 - 2] [i_18] [i_18] [i_21] [i_22] = (min((arr_74 [i_16] [i_17] [i_16] [i_18 - 1] [i_22]), (arr_74 [7] [8] [8] [i_18 + 1] [i_18])));
                            }
                        }
                    }
                    var_48 = (arr_26 [i_16 + 1] [i_18] [i_16 + 1] [i_16]);
                }
            }
        }
    }
    var_49 = var_13;
    #pragma endscop
}
