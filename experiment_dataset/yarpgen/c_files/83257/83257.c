/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_16 = ((max(11299, (arr_1 [11]))));
        var_17 = (min(var_17, ((max((arr_0 [i_0 + 3] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_18 = ((((250 & (min(-27653, 0)))) & 0));
                                arr_17 [i_4] [i_2 + 2] [i_3] = (((((arr_12 [i_2] [i_4 + 1] [i_5 - 1] [i_5]) + 2147483647)) >> (((((arr_2 [i_4] [i_5 + 1]) % (arr_11 [i_4 + 1] [i_2] [i_2] [i_3] [i_4]))) >> (((max(-6139491362480169513, (arr_6 [i_4] [i_4]))) - 3226095840426757881))))));
                                var_19 = (min(var_19, (arr_3 [i_1])));
                            }
                        }
                    }

                    for (int i_6 = 1; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        var_20 = ((-(arr_12 [i_1] [i_2 + 2] [0] [i_6 - 1])));
                        var_21 = (min(var_21, ((min((arr_21 [i_1] [i_3]), (arr_11 [i_1] [i_1] [i_3] [i_6 - 1] [i_1]))))));
                        var_22 = (min(var_22, (arr_7 [i_1] [i_1])));
                        var_23 = (min(var_23, (1 & 88)));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_24 = (max(var_24, (((((((arr_12 [i_7] [i_3] [i_1] [i_1]) ? (arr_5 [i_1] [i_3] [i_7 + 1]) : (arr_12 [i_3] [i_2] [i_2] [i_7])))) ? (arr_4 [i_3] [i_3] [i_3]) : (((arr_20 [i_1] [i_1] [i_2 - 1] [i_3] [i_7] [i_7]) ? (arr_19 [i_1] [i_1] [i_2] [i_3] [i_3] [i_7 - 1]) : 43)))))));
                        var_25 = (((arr_11 [i_1] [i_1] [i_3] [i_1] [i_1]) ? (((arr_6 [i_2] [i_2]) / (arr_11 [i_1] [i_1] [i_3] [8] [i_1]))) : (-5125965356993494691 / 1475381208760588348)));
                    }

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_26 -= (~0);
                            var_27 = (min(var_27, ((-(min(0, (arr_4 [i_9] [i_3] [i_1])))))));
                            arr_29 [1] [i_8] [i_1] [i_2 - 1] [i_1] = arr_19 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8];
                        }
                        var_28 = (min(var_28, (((~(arr_28 [i_1] [i_1] [i_3] [i_8] [i_2 - 1]))))));
                        var_29 = (min(var_29, (arr_21 [i_2] [i_8])));
                    }
                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 24;i_10 += 1)
                    {
                        var_30 = (max(var_30, (arr_13 [i_1] [i_1] [i_1] [12])));
                        arr_32 [i_1] [i_2] [21] [i_10] = (((arr_31 [i_10] [i_10 - 2] [i_2 + 1] [i_1]) ^ (arr_31 [i_2] [i_2] [i_2 + 2] [i_2])));
                        var_31 = (arr_13 [i_1] [i_1] [i_3] [i_10]);
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        var_32 = (min(6837901193915297973, -58));
                        var_33 = (min(var_33, (arr_24 [i_1] [i_2] [i_2 + 1] [i_2] [i_11] [i_11])));
                    }
                    arr_36 [i_1] [i_2 - 1] = (arr_2 [i_3] [i_3]);
                    var_34 = ((((arr_18 [i_1] [i_3]) ? (arr_22 [i_1] [i_1] [i_2 + 2] [i_3] [i_3]) : ((0 ? 1566633769 : 2108376062350410811)))));
                }
            }
        }

        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_35 *= ((~(((arr_19 [i_1] [i_12] [i_12] [i_1] [i_12] [i_1]) ? ((195 ^ (arr_20 [i_1] [10] [i_12] [i_12] [i_12] [i_12]))) : -1))));
            var_36 = (arr_23 [i_1] [i_1] [i_1] [i_1]);
        }
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            var_37 = (max(var_37, (((((((arr_10 [i_1] [i_13]) >> (((arr_22 [i_1] [i_13] [i_13] [i_13] [i_13]) + 39))))) < (((arr_25 [i_13] [i_13] [i_13] [i_1] [i_1]) ? 15362300101043872388 : (arr_42 [i_1]))))))));
            var_38 *= (((arr_8 [i_1] [i_1] [i_1] [i_1]) + (((arr_12 [i_13] [i_13] [11] [i_1]) ? (((arr_2 [i_13] [i_13]) - (arr_22 [i_1] [i_13] [i_13] [i_13] [i_1]))) : (arr_23 [i_1] [i_1] [i_1] [i_1])))));
            var_39 = (1 ^ ((((arr_2 [i_1] [i_13]) ? (arr_41 [i_1] [i_13]) : (arr_12 [i_1] [i_13] [i_1] [i_13])))));
        }
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            var_40 = (min(var_40, ((min(8, ((((arr_12 [i_1] [i_1] [i_1] [i_1]) <= (arr_11 [i_1] [i_14] [i_14] [i_1] [i_1])))))))));
            var_41 = (0 <= 12173);
        }
    }
    var_42 = ((min(0, 4294967293)));
    var_43 = (max(var_43, (((var_12 + (min(var_0, ((max(var_7, var_13))))))))));
    #pragma endscop
}
