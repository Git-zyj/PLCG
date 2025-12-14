/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((var_6 ? (((var_3 * var_5) ? var_4 : var_4)) : (((((var_4 ? 1 : var_2))) ? ((max(var_2, var_3))) : (var_0 - var_6)))));
    var_12 = var_9;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [1] [i_0] = ((((((arr_1 [i_0]) ? 357026276 : (((((arr_0 [i_0]) && (arr_0 [i_0])))))))) ? ((+(((arr_2 [i_0]) / 357026276)))) : (((((arr_0 [i_0]) && 357026280))))));
        arr_4 [i_0] = -268435456;

        /* vectorizable */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_13 = 6663;
            arr_8 [i_0] = (((arr_5 [i_1 + 1] [i_1 + 3]) ? var_4 : -28282));
            var_14 = (((arr_1 [i_0]) ? (arr_6 [i_1 + 1] [i_1]) : (arr_5 [i_1 - 2] [i_1 - 1])));
            var_15 = (max(var_15, (1 <= 1)));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_13 [i_0] = (!6651);
            var_16 = var_10;
        }
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                var_17 = (min(var_17, (arr_9 [i_4 - 2])));
                arr_20 [i_0] [i_3 + 1] [i_0] = var_7;
            }
            for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
            {
                arr_23 [5] [i_0] = ((((max(((var_2 ? var_2 : -28268)), ((1 ? var_6 : 120))))) + (min((arr_21 [i_0] [7] [7]), (~var_7)))));
                arr_24 [i_0] = ((var_0 == (((min(var_7, var_2))))));
                arr_25 [i_0] [i_0] [4] [i_5] = 4294967293;
            }
            for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
            {
                var_18 = (((((min((arr_6 [i_0] [i_3]), (arr_15 [i_0] [i_0] [i_0]))) ? var_2 : 46113))) * (arr_15 [i_6] [i_6] [8]));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_19 = (((((((arr_32 [i_0] [i_3] [i_6] [i_7] [0]) - (arr_30 [i_0] [i_7] [i_0]))))) - var_1));
                            arr_34 [i_0] [i_3 + 1] [i_3] [i_3] [1] [i_3] = var_8;
                            var_20 = (max(var_20, (((((((!(!1))))) + ((((((arr_21 [i_8] [10] [i_8]) ? 14447 : var_10))) ? (((max((arr_1 [i_8]), (arr_33 [i_0] [i_0] [0] [7] [8]))))) : (arr_11 [i_6] [i_0]))))))));
                            arr_35 [i_0] [i_6] [i_0] [i_8] = 151;
                        }
                    }
                }
                var_21 = (((min(1011387047, (((arr_1 [i_0]) ? var_4 : var_10)))) * 92));

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_22 = ((var_0 - (var_8 * 1)));
                    var_23 = (min(var_23, (arr_19 [i_9] [i_6 + 1] [i_3] [7])));
                    arr_38 [i_0] [i_0] [i_0] [i_0] = (!1);
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    arr_43 [i_0] [i_0] [i_0] = 1;
                    var_24 = 1;
                }
            }
            for (int i_11 = 1; i_11 < 10;i_11 += 1) /* same iter space */
            {
                arr_48 [i_0] [i_0] [i_0] [i_0] = ((~((min((arr_39 [i_0] [i_3]), (arr_45 [i_11 - 1] [i_0] [i_0] [i_0]))))));
                var_25 = ((((((65 ? var_0 : var_9)) ? (max(var_5, (arr_22 [i_0]))) : ((((arr_5 [i_0] [i_3]) ? 9 : (arr_26 [i_0]))))))));
            }
            var_26 = 357026272;
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            arr_51 [1] [i_0] = (((((var_9 ? (arr_32 [0] [i_12] [i_12] [i_12] [10]) : 120))) ? ((max(1, 230))) : ((((max((arr_45 [8] [i_0] [i_12] [1]), 1))) * 8765))));
            var_27 = (max(var_27, ((min(((~(max(var_7, var_6)))), (((var_6 || (arr_7 [4])))))))));
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    {
                        var_28 &= 0;
                        arr_58 [0] [0] [0] [i_0] [i_14] [i_14] = var_2;
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
    {
        var_29 = (min(((((max((arr_1 [1]), var_5)) == ((((arr_11 [i_16] [i_16]) ? 211 : 3421034760)))))), 64));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 0;i_18 += 1)
            {
                {
                    arr_65 [i_18] [1] [i_18] = (min(var_7, (((~((115 ? 59733 : (arr_40 [i_16] [6] [1] [4]))))))));
                    var_30 |= (((((var_1 ? (arr_32 [0] [0] [5] [i_18] [i_16]) : (arr_32 [i_16] [i_17] [1] [i_18 + 1] [i_16])))) ? (min((arr_32 [i_16] [i_17] [i_18 + 1] [1] [i_18 + 1]), (arr_32 [i_18] [i_18] [i_17] [i_17] [i_16]))) : var_3));
                    var_31 = (((((((min(56771, var_1))) ? var_4 : -5787))) || -88));
                }
            }
        }
    }
    #pragma endscop
}
