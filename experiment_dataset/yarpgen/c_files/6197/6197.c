/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 ^= var_7;
                                var_18 *= (max(8191, 8221));
                                arr_11 [i_1] = (arr_3 [i_0 + 2] [i_0 - 1] [20]);
                                var_19 = (min(var_19, ((((var_7 ? var_9 : (arr_3 [i_0 + 3] [i_1] [i_3 + 3]))) != ((((arr_4 [i_1] [i_2 - 1] [i_4] [14]) & (arr_4 [3] [i_2 + 2] [i_2 + 1] [i_4]))))))));
                                var_20 += 1217337841366207689;
                            }
                        }
                    }
                    var_21 = (max(var_21, ((((((((((((arr_6 [8] [i_0 - 1] [i_1] [10]) < var_2)))) != ((var_11 ? (arr_0 [i_0]) : var_13)))))) - (min((max(18446744073709543419, (arr_2 [i_0]))), ((max(var_11, (arr_0 [8])))))))))));

                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_22 ^= (arr_4 [19] [i_1] [i_1] [i_1]);
                        var_23 ^= (((1 ? (arr_4 [i_0 + 4] [i_0 + 4] [i_0 + 4] [1]) : (arr_4 [i_0 - 4] [2] [i_2] [6]))));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_24 = 18446744073709543424;
                        arr_17 [i_1] [12] [5] [2] = ((-var_1 ? var_9 : (min((((368411766 ? 255 : var_4))), (min(var_15, var_9))))));
                        var_25 += (max((arr_10 [i_6] [i_6] [10] [i_6] [i_0] [10] [i_6]), (max((-1 / -1), ((((arr_8 [i_6] [i_6] [13] [i_6]) ? var_0 : var_1)))))));
                        arr_18 [i_0] [i_0] [i_2 + 1] [i_1] = (((8206 ? 18446744073709543422 : 0)));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        var_26 += (8201 ? 8217 : 1);

                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_27 ^= -1;
                            var_28 = ((var_7 + (((arr_1 [i_0 + 2] [i_0 + 2]) ? (arr_7 [1] [i_7] [i_2] [20]) : (arr_1 [i_0] [i_2 - 1])))));
                            var_29 -= (((arr_16 [i_0] [i_0 - 2] [i_0]) ? var_14 : var_9));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_30 = (min(var_30, 11774980681127465467));
                            arr_29 [i_1] [i_1] = (arr_3 [i_2 - 1] [i_2 - 1] [i_0 - 2]);
                            arr_30 [i_0] [i_1] [i_2] [i_7] [i_1] = var_6;
                            arr_31 [i_0] [i_1] [i_1] [i_7] [i_1] = ((-(arr_21 [i_0 + 3] [2] [1] [3] [2])));
                            var_31 = (max(var_31, (((!(((var_6 ? (arr_5 [19] [i_2] [i_1] [0]) : var_7))))))));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_32 = var_15;
                            var_33 = (min(var_33, (((var_14 - (arr_14 [i_2 + 2] [i_2 - 1] [i_0 + 1] [i_0 + 4]))))));
                        }
                        var_34 = ((((var_3 ? (arr_4 [17] [i_1] [i_1] [14]) : 9223372036854775807)) - (((((arr_1 [i_0] [i_0]) != (-2147483647 - 1)))))));
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        arr_36 [12] [12] [12] [i_11] |= ((((max(var_13, (arr_32 [i_2 - 1] [i_11])))) ? (((max((arr_5 [i_0] [i_1] [9] [i_11]), 4199989552)) + (arr_24 [i_0 + 3] [i_0] [i_0 - 2] [i_2 - 1]))) : (((+((((arr_8 [4] [i_1] [i_2] [i_11]) != var_7))))))));
                        var_35 = (min(var_35, (--1)));
                    }
                }
            }
        }
    }
    var_36 = (max(var_10, var_10));
    var_37 = (min((max(var_6, (min(9223372036854775807, var_9)))), var_16));
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        for (int i_13 = 3; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 13;i_14 += 1)
            {
                {

                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        var_38 += ((~(min(((var_16 ? var_6 : 9223372036854775807)), ((((arr_16 [i_12] [i_14 - 2] [8]) + (arr_25 [i_13] [i_12]))))))));
                        var_39 = (max(var_39, (max(((max(var_1, (var_14 != var_7)))), (max(var_7, (arr_19 [i_14] [i_13 + 1] [20] [i_15] [6])))))));
                        var_40 = ((9223372036854775807 ? (((-1143914305352105984 ? 115 : -1362535682))) : 9223372036854775807));
                    }
                    var_41 ^= (((((arr_4 [i_14 - 1] [1] [i_13 - 1] [i_13 + 3]) ? (arr_4 [i_14 + 1] [0] [i_13 + 1] [i_13 + 3]) : (arr_4 [i_14 - 1] [9] [i_13 + 3] [i_13 - 2]))) < (!3039705225026658606)));
                }
            }
        }
    }
    var_42 = (min(var_42, var_11));
    #pragma endscop
}
