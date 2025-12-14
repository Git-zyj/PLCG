/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_17 = (max(var_17, var_13));
                            var_18 -= 29121;

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_19 = (max(var_3, (!var_6)));
                                var_20 ^= (max((arr_12 [i_0] [i_0] [i_0] [i_0]), (arr_16 [i_4] [i_3 + 1] [i_2] [i_1] [i_0])));
                                var_21 |= ((~(min(((1920 & (arr_2 [i_0]))), ((((arr_6 [i_4] [i_2] [i_1]) != var_6)))))));
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                var_22 += (((arr_0 [i_2] [i_1]) ? ((~(((!(arr_12 [i_0] [i_3] [i_3] [7])))))) : (arr_0 [i_0] [i_5])));
                                var_23 = (max(var_23, (((((((arr_6 [i_3 - 1] [i_1] [i_2]) * var_10))) ? ((((arr_3 [i_0] [i_1]) >= (arr_2 [i_0])))) : var_10)))));
                                arr_19 [i_5] [i_3 - 1] [13] [i_1] [i_0] = var_16;
                            }
                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                var_24 = (max(var_24, ((((((~(-2032303744977361759 > 650190777)))) ? var_6 : ((~((min(var_10, (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                                var_25 = (max(var_25, (arr_8 [i_0] [i_2])));
                                var_26 |= (((((!(arr_21 [i_2] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_6] [i_6])))) >= ((~(arr_16 [i_3 + 1] [i_1] [i_2] [i_6] [i_2])))));
                            }
                            for (int i_7 = 0; i_7 < 21;i_7 += 1)
                            {
                                var_27 = min(((max((arr_8 [i_3 - 1] [i_3 + 1]), (arr_17 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])))), ((~(((arr_22 [i_0] [i_0] [17] [i_3] [20]) & (arr_5 [i_0] [i_1] [i_2]))))));
                                arr_27 [i_0] [i_0] [i_2] [i_3] [i_7] = (min((min((min(var_2, (arr_8 [i_0] [i_0]))), var_16)), var_4));
                                var_28 = (min(((((var_5 ? var_13 : 49036)) * (arr_12 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]))), ((((((arr_18 [16] [i_7] [16] [5] [14] [16]) / var_4)) >= (((!(arr_4 [i_1] [i_0])))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {

                            for (int i_10 = 0; i_10 < 21;i_10 += 1)
                            {
                                var_29 = (arr_35 [i_0] [i_1] [i_0]);
                                var_30 = ((((var_8 & (max(-1, var_15)))) > ((((var_1 != (arr_2 [i_9])))))));
                                arr_37 [i_10] [i_1] [i_8] [i_9] [i_10] = ((var_9 ? (arr_14 [19] [19] [i_8] [i_9] [i_9]) : (arr_14 [i_0] [i_1] [i_8] [i_9] [20])));
                                var_31 = (max(var_4, (arr_28 [i_0] [i_0] [i_8] [i_9])));
                            }
                            var_32 = (arr_8 [i_0] [i_0]);

                            for (int i_11 = 4; i_11 < 20;i_11 += 1)
                            {
                                var_33 &= (max((((!((min(var_15, 650190774)))))), (min((~var_1), (~115)))));
                                var_34 = (min(var_34, (((arr_6 [i_11] [i_11] [i_11 - 1]) >= ((((!(arr_21 [i_9] [i_11] [i_11 - 3] [i_11 - 3] [i_11 - 3] [i_11 - 3] [i_11 - 2])))))))));
                                var_35 = ((((arr_23 [i_11 - 3] [i_11 + 1] [i_11 + 1] [i_11 - 3] [i_11] [i_11 - 3] [i_11 - 1]) != (arr_23 [i_11 - 2] [i_11 - 3] [i_11 - 2] [i_11 - 4] [19] [i_11 - 3] [i_11 - 2]))) ? ((var_14 | (arr_23 [i_11 - 4] [i_11 + 1] [i_11 - 1] [i_11] [i_11] [i_11 - 2] [i_11 - 4]))) : ((var_8 ? var_11 : (arr_23 [i_11 - 4] [i_11 - 1] [6] [i_11] [i_11] [i_11 - 4] [i_11 - 4]))));
                                var_36 ^= ((127 ? 18446744073709551605 : 1));
                            }
                            /* vectorizable */
                            for (int i_12 = 0; i_12 < 21;i_12 += 1)
                            {
                                arr_43 [i_9] [8] = (arr_3 [i_0] [i_12]);
                                var_37 -= ((!(arr_28 [i_9] [i_9] [i_9] [i_9])));
                            }
                            var_38 = (min((((((var_7 ? var_14 : (arr_25 [i_0]))) - (arr_32 [i_0] [7] [i_1] [i_1] [i_8] [i_1])))), (max((((var_11 || (arr_23 [i_0] [i_0] [i_1] [4] [i_8] [i_8] [i_9])))), (arr_15 [i_0] [i_1] [i_0] [i_8] [i_0])))));
                            var_39 = (((arr_26 [i_0] [i_1] [i_0] [i_9] [8] [8]) >= (max((~var_11), (arr_3 [i_0] [i_8])))));
                        }
                    }
                }
            }
        }
    }
    var_40 += (min(var_0, ((var_7 ? var_1 : var_10))));
    /* LoopNest 3 */
    for (int i_13 = 1; i_13 < 22;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                {
                    var_41 ^= (((arr_49 [18] [i_15]) == (((arr_50 [i_13 + 1] [i_15]) ? (arr_44 [i_15]) : (arr_49 [i_15] [i_13 - 1])))));
                    var_42 = (((((((arr_48 [i_13] [i_14]) ? var_1 : var_15)))) ? var_3 : ((((((min((arr_52 [i_15] [i_15] [i_14] [10]), (arr_49 [i_13] [12])))) || ((min(var_16, var_14)))))))));
                }
            }
        }
    }
    var_43 = (min(var_43, (((var_2 < (min(((var_16 ? -104 : var_13)), var_6)))))));
    #pragma endscop
}
