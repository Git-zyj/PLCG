/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, ((((arr_2 [i_0] [i_1 - 1]) ? var_3 : 3735683396)))));
                            arr_13 [i_0] [i_1] [i_3] [i_1] [i_3] [i_3] = ((((((~var_7) ? var_11 : (56 & var_2)))) && (((var_10 >> (56 - 54))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_4] [i_4] [i_4] [i_1] = ((~(arr_10 [i_1 - 2] [i_4] [i_5 + 1] [i_1] [i_4])));
                        var_15 = (!var_6);
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_16 = ((var_8 >= (arr_12 [i_1 + 2] [i_1 - 2] [i_1 + 1] [i_1 - 2])));
                        var_17 = ((-var_7 * ((((var_8 == (arr_7 [i_0])))))));
                    }
                    arr_22 [i_1] [i_1] [i_4] = (~var_7);
                }
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    var_18 = (!1668831427968924829);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_19 ^= (min(56, 9223372036854775788));
                                var_20 = (min(var_20, var_4));
                            }
                        }
                    }
                    var_21 = (((arr_6 [i_0] [i_1]) ? (arr_6 [i_1 - 2] [i_1]) : (arr_6 [i_1 + 2] [i_1 + 2])));

                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        arr_34 [i_1] [i_1] [i_1] [i_7] [i_7 + 1] [i_10] = (arr_12 [i_1] [i_1] [i_7] [i_10]);
                        var_22 = ((((((var_4 & (arr_26 [i_1] [i_7] [i_1] [i_1])))) ? -9223372036854775807 : (var_6 ^ var_3))));
                    }
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    var_23 -= (var_9 >= 10543);
                    arr_38 [i_0] [i_0] [i_1 + 1] [6] &= (((arr_16 [18] [i_1 - 2] [i_11 + 4] [i_11 + 1]) ? (arr_16 [2] [i_1 - 2] [i_11 + 4] [i_11 + 1]) : (arr_16 [12] [i_1 - 2] [i_11 + 4] [i_11 + 1])));

                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        arr_41 [i_0] [i_0] [i_1] [i_1] [i_11] [i_12] = (((arr_37 [i_0] [i_1]) / (arr_37 [i_0] [i_1])));
                        arr_42 [i_0] [i_1] [i_11 + 2] [i_1] = (!var_5);
                    }
                    for (int i_13 = 1; i_13 < 19;i_13 += 1)
                    {
                        var_24 ^= (((arr_12 [i_0] [i_11 + 1] [i_1] [i_13]) ? var_13 : (arr_12 [i_13] [i_11 - 1] [i_13] [i_13])));
                        var_25 = var_12;
                    }
                    for (int i_14 = 1; i_14 < 18;i_14 += 1)
                    {
                        var_26 = (70368744177536 && -9223372036854775802);
                        var_27 = (arr_12 [i_0] [i_1] [i_0] [i_14]);
                    }
                }
                var_28 -= ((-var_9 ? (max((199 / 9223372036854775805), var_5)) : -7372769648738805898));
            }
        }
    }
    var_29 = var_12;
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 19;i_16 += 1)
        {
            {
                var_30 = (arr_51 [i_15] [i_16]);
                var_31 = (arr_48 [i_15]);
                arr_53 [i_15] [i_15] [i_16] = (arr_52 [i_16]);
                var_32 += ((-(16 + 60)));
                var_33 = (min(var_33, ((((arr_51 [i_16 + 1] [i_16 + 1]) ? ((((arr_51 [i_16 - 1] [i_16 - 1]) ? 18810 : var_1))) : var_11)))));
            }
        }
    }
    #pragma endscop
}
