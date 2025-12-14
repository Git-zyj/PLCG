/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = (min(var_19, ((max((max(var_11, var_12)), (!var_18))))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_20 |= (((((~(var_18 == var_2)))) ? (~var_14) : ((((!var_3) || ((((arr_1 [i_2]) & (arr_9 [i_0] [i_1] [i_2] [i_1])))))))));

                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            arr_13 [i_2] [i_1] [i_2] [i_1] [i_0] = (((max((var_12 + var_4), ((((arr_3 [i_0] [i_1] [i_0]) ? var_15 : (arr_5 [i_0] [i_0] [i_0])))))) - (-var_3 + var_14)));
                            var_21 = ((~(min((arr_5 [i_0] [i_1] [i_2]), var_10))));
                        }
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            var_22 |= min(((-(arr_16 [i_0] [i_1] [i_5] [i_5 + 1] [i_5]))), (!var_5));
                            var_23 = (((((-(min((arr_8 [i_5 + 1] [i_5 + 1]), (arr_0 [i_0])))))) ? var_15 : ((0 ? 0 : 13975))));
                            var_24 &= (max((-9223372036854775807 - 1), -9223372036854775794));
                            arr_17 [i_0] [i_0] [i_2] [i_1] [i_0] = (max((min((min(var_15, var_3)), (((~(arr_12 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] [i_5 - 1])))))), (arr_2 [i_0] [i_1] [i_2])));
                        }
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            var_25 = var_18;
                            arr_20 [i_2] [i_1] [i_2] [i_3] [i_6 - 1] [i_3] [i_1] = (arr_5 [i_0] [i_1] [i_2]);
                        }

                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            var_26 = ((var_18 + (((~var_18) | (arr_15 [i_1])))));
                            arr_24 [i_0] [i_1] [i_1] [i_3] [i_7] [i_0] [i_1] = ((~((max((arr_12 [i_7] [i_7] [i_7] [i_7 + 1] [i_7 + 1] [i_1] [i_7 + 1]), (arr_12 [i_7] [i_7] [i_7] [i_7 - 2] [i_7] [i_1] [i_7 - 1]))))));
                            var_27 = (min(var_27, ((max(((((min((arr_21 [i_7 + 1] [i_3] [i_2] [i_2] [i_1] [i_0]), var_15))) ? (max(17, 65535)) : var_10)), var_15)))));
                        }
                        var_28 *= max((var_18 < var_6), ((1 ? 7185946154222010372 : 0)));
                        arr_25 [i_0] [i_1] [i_2] [i_3] = ((var_13 != (((227 + 1) * ((min(var_7, (arr_19 [i_3] [i_1] [i_2] [i_3]))))))));
                    }
                }
            }
            var_29 = (max(-var_7, var_1));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_30 += (((arr_28 [i_0] [i_8] [i_0]) ? (arr_16 [i_0] [i_8] [i_9] [i_10 + 2] [i_11]) : ((var_7 ^ (arr_12 [i_0] [i_8] [i_9] [i_10] [i_11] [i_8] [i_11])))));
                            arr_37 [i_0] [i_10] [i_9] [i_10] [i_11] = -var_7;
                            var_31 = ((((((arr_6 [i_0] [i_0] [i_0]) | var_12))) ? (arr_22 [i_0] [i_0] [i_11] [i_10 + 1]) : (((arr_10 [i_0] [i_0] [i_0] [i_0]) >> (((arr_16 [i_10] [i_10] [i_10 - 1] [i_10] [i_10]) - 16163014994797894060))))));
                            var_32 |= var_5;
                        }
                    }
                }
                arr_38 [i_0] [i_8] [i_8] = (-(arr_15 [i_8]));
            }
            var_33 = (((~14) && var_13));
        }
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            var_34 = min((((arr_10 [i_0] [i_12] [i_0] [i_0]) ? (((arr_21 [i_0] [i_0] [i_0] [i_0] [i_12] [i_12]) + (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]))) : ((min(var_2, var_7))))), (((~(((var_3 <= (arr_5 [i_0] [i_12] [i_12]))))))));
            var_35 |= (min((!var_5), (((((min((arr_8 [i_0] [i_12]), (arr_4 [6]))))) < ((var_14 ? var_9 : var_8))))));
            var_36 = (max(var_36, (arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 1; i_13 < 22;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {
                    arr_53 [i_13] [i_13] [i_14 - 2] [i_13] = (min((((arr_44 [i_13 + 2]) ? (arr_50 [i_13 + 1]) : (arr_44 [i_13 - 1]))), (((var_0 != (((((arr_44 [i_13]) || var_18)))))))));
                    var_37 = (((((arr_43 [i_13 + 1] [i_14 - 2]) ? ((max(var_6, var_16))) : (arr_48 [i_14 - 2] [i_14 + 1] [i_14]))) * (((((arr_45 [i_13 - 1]) || (arr_44 [i_13 + 2]))) ? (var_1 && var_11) : (min(var_12, (arr_49 [i_13] [i_14] [i_14] [i_15])))))));
                    var_38 = (i_13 % 2 == 0) ? (max((arr_51 [i_13] [i_14 - 2]), (((arr_51 [i_13] [i_14 - 1]) >> (((arr_51 [i_13] [i_14]) - 29397)))))) : (max((arr_51 [i_13] [i_14 - 2]), (((arr_51 [i_13] [i_14 - 1]) >> (((((arr_51 [i_13] [i_14]) - 29397)) + 11768))))));
                }
            }
        }
    }
    #pragma endscop
}
