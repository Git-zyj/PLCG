/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = ((((((var_1 >> (((arr_1 [1] [i_1]) + 30127)))))) || var_7));
                var_22 = ((arr_3 [i_0] [i_0] [i_1]) - ((var_1 ? (min(18446744073709551611, (arr_4 [i_1]))) : (arr_0 [i_0] [8]))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_23 |= ((((((arr_9 [i_0] [i_0] [12] [12] [3] [i_4]) ^ 1))) ? var_11 : (~var_8)));
                                var_24 *= ((1 ? ((var_3 ? (-1528578713 != 92) : (~1064577172))) : -var_9));
                                arr_12 [9] [i_3] [i_1] [i_0] = 48;
                                arr_13 [i_0] [2] [4] [i_0] [i_4] = (~1);
                            }
                        }
                    }
                    var_25 *= (min(1, 23191));
                    arr_14 [i_1] [11] [i_1] = 3;
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    var_26 = (((((min((arr_11 [i_0]), (arr_11 [i_5]))) <= var_0)) ? ((((((((arr_10 [0] [i_0] [i_1] [3] [i_5]) + 2147483647)) >> (((arr_1 [9] [i_1]) + 30129))))))) : (((((min(-97, var_0)))) % (((arr_0 [i_5] [i_1]) ? (arr_15 [1] [i_1] [i_1] [i_0]) : var_10))))));
                    var_27 -= var_17;
                    var_28 = 61;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_29 |= (min(((-(max((arr_9 [i_0] [5] [i_1] [i_5] [5] [i_7]), (arr_7 [i_0]))))), (((!((min((arr_0 [i_0] [1]), var_1))))))));
                                var_30 -= ((((((((-(arr_0 [5] [5])))) ? ((((!(arr_2 [i_5]))))) : (arr_4 [i_6])))) && (((((max((arr_16 [i_0]), (arr_9 [11] [i_1] [i_5] [i_6] [i_6] [i_7])))) ? (arr_4 [i_7 - 2]) : ((((((arr_1 [i_0] [i_1]) + 2147483647)) << (((arr_15 [i_5] [i_6] [i_5] [i_1]) - 57))))))))));
                                arr_22 [i_0] [i_6] [i_5] [i_6] [i_5] = ((1 % ((-(((arr_21 [i_5] [i_5] [1]) ? 3230390104 : (arr_11 [i_1])))))));
                            }
                        }
                    }
                    arr_23 [i_0] [i_1] [i_5] &= ((17378119205159112409 ? (arr_20 [i_0] [i_0] [i_0] [i_1] [i_5] [i_5]) : (min(1, 1068624868550439202))));
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_31 ^= (min((arr_7 [i_8]), ((113 ? (arr_24 [i_8]) : (arr_0 [i_0] [i_8])))));
                    var_32 = (min(var_32, (arr_10 [i_8] [i_1] [i_0] [i_0] [i_1])));
                    var_33 = var_2;
                    arr_27 [i_8] [i_1] [i_0] = (((-(~1))));
                }
                for (int i_9 = 2; i_9 < 11;i_9 += 1)
                {
                    var_34 = (min((max((min(1, 17378119205159112412)), (!516247816063194547))), var_19));
                    var_35 = (((((var_5 >> ((((1264984854 ? 1068624868550439214 : 1)) - 1068624868550439188))))) ? 1 : (arr_5 [i_9 - 2])));
                    var_36 = (min(var_36, ((min((((1 - (arr_31 [i_0] [i_0] [6] [i_0])))), var_8)))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 9;i_11 += 1)
                        {
                            {
                                var_37 &= (((arr_32 [i_1]) ? (arr_33 [i_1]) : (((-((((arr_9 [6] [i_1] [i_1] [i_1] [4] [i_1]) != (arr_6 [i_0])))))))));
                                arr_36 [i_10] = (((((((var_9 ? var_9 : (arr_7 [i_11]))) * var_14))) | (max((min((arr_31 [i_1] [3] [11] [i_1]), var_7)), (arr_30 [i_1] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
