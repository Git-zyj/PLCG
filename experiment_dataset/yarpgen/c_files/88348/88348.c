/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (max(((var_8 & (var_3 % var_1))), var_11));
    var_15 |= -204;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = -11030473723597639599;

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_16 = (max(11030473723597639616, var_3));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_17 = (min(var_17, -66));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] = (3475759071 ^ 5);
                            var_18 = (min(var_18, (((-13 <= (arr_10 [i_0] [i_1] [i_2] [i_4]))))));
                            var_19 = (((arr_8 [i_0]) + (((arr_4 [i_4]) ? var_10 : (arr_7 [i_3])))));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_3] [i_3] &= ((var_6 ? ((115 ? var_7 : (arr_8 [i_0]))) : (((var_11 ? var_4 : var_2)))));
                            var_20 = arr_4 [i_0];
                        }

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_21 [i_6] [i_3] [i_2] [i_1] [i_0] = (arr_9 [i_2]);
                            var_21 = (((arr_19 [i_6] [i_6] [i_6] [i_6]) ? 819208225 : (arr_19 [i_6] [i_6] [i_6] [i_3])));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_22 = (((arr_16 [i_0] [i_1] [i_2] [i_1] [i_3] [i_7] [i_7]) - var_11));
                            var_23 = (111 ? var_1 : -1);
                            var_24 = (min(var_24, (var_7 | var_1)));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_29 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_8] = (((arr_19 [i_1] [i_1] [i_2] [i_0]) >= (arr_28 [i_0] [i_8])));
                            var_25 = (((arr_22 [i_3] [i_1] [i_2] [i_3] [i_8] [i_0] [i_2]) ^ ((-(arr_15 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                            arr_30 [i_0] [i_1] [i_1] [i_0] [i_3] [i_8] [i_8] = (((((arr_19 [i_0] [i_2] [i_3] [i_8]) + 2147483647)) >> (((arr_19 [i_1] [i_2] [i_3] [i_8]) + 1834218010))));
                        }
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_33 [i_9] [i_9] [i_2] [i_1] [i_0] = 285660457;
                        var_26 = ((((((((var_13 ? -88 : 2))) ? 36020000925941760 : 16))) ? -6 : -28));
                    }
                    var_27 = (((arr_24 [i_0] [i_0] [i_0] [i_1] [i_2]) << (((((arr_25 [i_0] [i_0] [i_1] [i_1] [i_2]) ? (arr_24 [i_0] [i_1] [i_1] [i_2] [i_2]) : (arr_24 [i_0] [i_0] [i_1] [i_2] [i_2]))) - 557244381))));
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_28 = 18446744073709551615;
                        var_29 = (max(13, -4503599090499584));
                    }
                    var_30 = ((((arr_20 [i_0] [i_0] [i_1] [i_1] [i_0] [i_10]) > (arr_1 [i_10]))) ? ((var_7 ? var_0 : ((((arr_24 [i_1] [i_1] [i_0] [i_0] [i_0]) ? (arr_11 [i_0] [i_0] [i_0] [i_1] [i_1]) : (arr_26 [i_0] [i_0] [i_1] [i_1] [i_10] [i_1] [i_10])))))) : var_6);
                }
            }
        }
    }
    var_31 += (((min((var_10 + var_2), 145))) ? ((-var_8 ? (min(var_8, var_7)) : var_1)) : ((min((((-91 + 2147483647) >> (var_1 - 93))), (3475759071 > 7416270350111912017)))));
    #pragma endscop
}
