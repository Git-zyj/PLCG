/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 4294967295;
    var_12 *= ((((17 ? 0 : 0))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_1] |= (1 ? (((-(arr_0 [i_0])))) : (max((var_8 | 439171681), ((var_2 ? (arr_1 [i_1]) : 3811571515)))));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = (arr_3 [i_2] [i_2] [i_2]);
                        arr_11 [i_0] [i_1] [i_0] [i_0] [9] = (arr_4 [i_0] [i_1]);
                        var_13 = (((var_5 ? (arr_4 [i_0] [i_3 + 2]) : (arr_0 [i_3 - 2]))));
                        var_14 ^= ((((min(var_10, 0))) ? 0 : (((1 ? 1 : 62)))));
                    }

                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_1] [i_0] [i_2] [i_4] = ((13079928935338929057 ? 62 : -17));

                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            var_15 = (((arr_7 [i_4] [i_4] [i_4 + 2] [i_4 + 3] [i_4 + 2] [i_5 - 1]) ? var_3 : (arr_15 [i_0] [i_0] [i_4 + 2] [i_4 + 3] [i_4 + 2] [i_4])));
                            var_16 = ((var_2 << (((-1947091419 + 1947091430) - 8))));
                            var_17 = (((arr_2 [i_0] [i_0]) - (arr_9 [i_2] [i_5 - 1] [i_2] [i_2])));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] [10] [i_4] [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_5 [i_0] [i_0] [i_4]) : (arr_2 [i_0] [i_0])));
                            arr_21 [i_4] [i_4] [i_6] = (arr_7 [i_4 - 3] [i_4] [8] [i_4 - 3] [i_4 - 3] [i_4]);
                        }
                        arr_22 [i_4] [i_1] [i_1] = (997221822831110989 ^ 4187056425281870299);
                    }
                }
            }
        }
        var_18 = (((!997221822831110989) || ((max(9223372036854775797, ((max(var_2, var_1))))))));
    }
    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        arr_26 [i_7 - 1] [i_7] = ((((arr_24 [i_7 + 1]) / (arr_23 [i_7]))) / (arr_24 [i_7 - 1]));
        var_19 -= var_1;
        arr_27 [i_7] = var_4;
        var_20 = (max(var_20, ((max((max((arr_24 [7]), ((13964733291287391781 ? (arr_24 [i_7]) : var_7)))), (arr_25 [i_7 + 1] [i_7 - 1]))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_21 ^= (((var_2 >= var_4) ^ (arr_23 [1])));
        var_22 = (max(var_22, var_3));
    }
    for (int i_9 = 2; i_9 < 14;i_9 += 1)
    {
        arr_33 [i_9] [i_9] = var_10;
        var_23 = (((arr_4 [i_9] [i_9 - 2]) & ((-1054708247 + (!997221822831110989)))));

        for (int i_10 = 1; i_10 < 15;i_10 += 1)
        {
            var_24 = -1332538083;
            arr_36 [i_10] = ((((max(((-17 + (arr_0 [i_10 + 2]))), (var_10 + var_3)))) ? (((((var_9 ? -1 : (arr_34 [i_9])))) ? (arr_23 [i_9]) : (max(var_1, (arr_24 [19]))))) : ((-77 - (max((-2147483647 - 1), -21842))))));

            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                arr_39 [i_9] [i_9] = var_8;
                var_25 += ((~(min(-var_5, ((min((arr_32 [i_9] [i_11]), var_6)))))));
            }
            for (int i_12 = 2; i_12 < 16;i_12 += 1)
            {
                arr_43 [i_9] [i_10 - 1] [i_9] &= ((~(max((arr_2 [i_9 + 2] [i_9 + 2]), (arr_2 [i_9 - 2] [i_9 + 2])))));
                var_26 = (((!0) >= var_10));
                var_27 = 1646925539;
                var_28 = (((((arr_24 [i_9]) ? (var_1 / 1467337481) : (arr_41 [i_12 - 2] [i_10 - 1] [i_9 + 3] [i_9 - 2]))) >> (((((!-4470929217747620569) ? 2749864761 : var_5)) - 704603653827814707))));
            }
            var_29 = -897712831;
            var_30 -= (((arr_4 [i_9] [i_9]) ? var_6 : (arr_35 [i_9] [i_9 + 3])));
        }
    }
    var_31 = (max(((((min(var_6, var_9))) ? (~var_10) : (min(var_1, -71)))), ((-(var_6 == 0)))));
    #pragma endscop
}
