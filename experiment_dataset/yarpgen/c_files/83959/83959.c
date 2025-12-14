/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = (((((26353 ? 1 : -17108))) ? 1 : (max(4294967295, ((12 ? (arr_0 [i_0] [i_1]) : 122880))))));
                var_12 = ((!((max((var_4 - var_11), ((min((arr_1 [i_0]), 0))))))));
                var_13 = (((((var_4 ? -5 : (arr_2 [i_0]))) | 31)));
                arr_5 [i_1] [1] [i_0] = (arr_1 [i_0]);
            }
        }
    }
    var_14 = var_4;
    var_15 = (max(var_15, (((-(max(var_3, var_0)))))));
    var_16 = (((((var_9 ? var_3 : (!var_10)))) < (((~-89) ? var_8 : (-6517526109618449741 - 17098)))));

    for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_17 -= (min((((arr_6 [i_2 + 2]) - (arr_6 [i_2 + 1]))), (arr_6 [i_2 - 1])));
            var_18 = ((1115976663 - (arr_8 [i_2])));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_19 = (max(var_19, ((max(-15, -var_6)))));
            var_20 = ((-((~(arr_9 [i_2 + 1])))));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_21 = (max(var_21, (((!(arr_13 [i_6]))))));
                        arr_21 [i_7] [i_5] = (min((arr_3 [i_2 + 2] [i_5]), ((var_10 ? (arr_3 [i_2 - 1] [i_5]) : (arr_3 [i_2 + 1] [i_5])))));
                        arr_22 [i_7] [i_7] = (min(((min(var_7, -28007))), var_1));
                        var_22 -= var_5;
                    }
                }
            }

            for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
            {
                var_23 = ((((var_0 ? (arr_23 [i_8]) : (arr_11 [i_5] [i_5])))) ? 9223372036854775807 : var_8);
                var_24 = (min(var_24, (!28007)));
                arr_26 [i_5] = var_5;
                var_25 = ((((!((min(var_4, 102))))) ? (((arr_14 [i_2 + 2] [i_2 + 2]) ? -89 : (!-1115976664))) : (min((((arr_23 [4]) ? var_0 : 29423)), (arr_8 [i_8])))));
            }
            for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
            {
                var_26 = var_3;
                var_27 = (((((arr_14 [i_2 + 2] [i_2 - 1]) / -1447534915)) >> ((((~(arr_13 [i_2 + 2]))) + 16))));
                var_28 = (max(var_28, (arr_23 [i_2 - 1])));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            arr_36 [i_2 + 1] [i_2 + 1] [i_2] [i_2] = var_7;
                            arr_37 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = var_2;
                        }
                    }
                }
                arr_38 [i_2] [i_2 - 1] = ((((min((arr_14 [i_2] [i_2 + 2]), (arr_14 [i_2 - 1] [i_2 - 1])))) || ((((arr_14 [i_2] [i_2 + 1]) ? var_3 : 0)))));
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    {
                        var_29 = ((-(17098 - 28)));
                        var_30 = (arr_24 [i_2] [i_12 - 1] [i_2 + 1]);
                        var_31 += ((var_9 >= (arr_39 [i_2])));
                        var_32 ^= ((16165 ? (1 * 0) : (arr_35 [i_2])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    {
                        var_33 = (max((arr_9 [i_2 + 2]), 1));
                        arr_54 [i_2] |= 1447534914;
                    }
                }
            }
        }
        var_34 ^= (((((var_9 ? ((max(var_11, var_3))) : ((~(arr_53 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))) ? ((((var_1 ? var_10 : (arr_1 [i_2]))))) : (arr_25 [i_2])));
    }
    /* vectorizable */
    for (int i_18 = 1; i_18 < 11;i_18 += 1) /* same iter space */
    {

        for (int i_19 = 0; i_19 < 13;i_19 += 1) /* same iter space */
        {
            var_35 = (min(var_35, (((~(arr_55 [i_19]))))));
            var_36 = ((((~(arr_39 [i_18]))) <= (arr_51 [i_18 + 2] [i_18 - 1] [i_18 + 2] [i_18 + 2])));
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                for (int i_21 = 2; i_21 < 11;i_21 += 1)
                {
                    {
                        var_37 = (205 && (((1 | (arr_47 [i_19] [1])))));
                        var_38 = (((arr_19 [i_18 - 1] [i_20] [i_21] [i_21] [i_18]) ? (arr_19 [i_21] [i_20] [i_19] [i_18] [i_18]) : (arr_19 [12] [i_20] [i_20] [i_19] [i_18])));
                    }
                }
            }
            var_39 = (min(var_39, ((((((var_5 ? (arr_30 [i_18] [i_18] [i_19] [i_19] [i_18] [i_18]) : var_0))) || (((arr_44 [i_19]) >= (arr_61 [i_18] [i_18] [i_18]))))))));
        }
        for (int i_22 = 0; i_22 < 13;i_22 += 1) /* same iter space */
        {
            var_40 = (min(var_40, var_4));
            var_41 = (((arr_7 [i_18 + 1]) - -2147483632));
        }
        arr_68 [i_18] = var_10;
        var_42 = (arr_2 [i_18 + 2]);
    }
    for (int i_23 = 1; i_23 < 11;i_23 += 1) /* same iter space */
    {
        var_43 ^= (((((-(arr_42 [i_23] [i_23 + 2])))) ? var_2 : (arr_42 [i_23 + 1] [i_23 - 1])));
        var_44 = (min(var_44, ((min((max((arr_60 [i_23] [i_23 + 1] [i_23 + 2] [i_23 + 2]), (min((arr_34 [i_23 + 2] [i_23 + 2] [i_23 + 2] [i_23 + 2] [i_23 + 2]), 1)))), var_5)))));
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 13;i_24 += 1)
        {
            for (int i_25 = 3; i_25 < 11;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 13;i_26 += 1)
                {
                    {
                        arr_82 [i_26] [i_23] = ((!((((arr_45 [i_25 - 3] [i_24] [i_25] [i_25 - 3]) ? (arr_71 [i_25 - 1]) : ((1 << (var_7 - 17308))))))));
                        arr_83 [i_24] [i_24] |= (max((((var_6 / (arr_59 [i_23])))), (((-1447534940 ? var_4 : (arr_69 [i_23] [i_26]))))));
                        var_45 = ((min(((min((arr_32 [i_26] [i_26] [i_26] [i_26] [i_26]), var_7))), (max(1379545413305447268, (arr_66 [i_23] [4]))))));
                        var_46 = ((((arr_2 [i_23 + 2]) ? var_4 : (arr_35 [i_23 - 1]))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
