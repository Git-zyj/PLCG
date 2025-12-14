/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, (max((arr_7 [i_1]), ((max(0, (arr_0 [i_1]))))))));
                            arr_12 [i_0] = max(-4, (max((min(3, 4294967292)), (max((arr_7 [i_0]), var_5)))));
                            var_15 = ((2303020334 | 4294967273) ? (min(var_10, ((4294967295 ? var_1 : var_10)))) : (3933701283 > 3933701283));
                        }
                    }
                }
                arr_13 [i_0] [11] = (var_5 - (arr_6 [i_1 + 1] [i_1 + 1] [i_1]));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_16 = max(4294967295, 26);
                            var_17 = (-((-(arr_9 [i_0] [i_0] [i_0] [i_5 - 2] [i_1] [i_0]))));
                        }
                    }
                }
                var_18 += (((-231841636 ? ((((!(arr_7 [i_1]))))) : ((var_1 % (arr_14 [i_0] [i_0] [i_1 + 1] [i_1 + 1]))))) * (min(var_8, (!var_4))));
            }
        }
    }

    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (((((arr_6 [i_6] [i_6] [i_6]) ? 4294967292 : var_10)) >> (5 > -var_3)))));
        var_20 = ((arr_18 [i_6] [i_6]) | ((+(((arr_14 [i_6] [i_6] [i_6] [i_6]) % var_7)))));
        var_21 *= arr_9 [i_6] [i_6] [i_6] [i_6] [6] [i_6];
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        arr_30 [i_7] = (((((arr_23 [i_7] [i_7] [i_9]) << (var_1 - 1969526732))) > (268435455 && var_11)));
                        var_22 *= ((-(arr_28 [3] [i_8 - 2] [3] [i_8 + 1] [i_8] [i_8 - 2])));
                        var_23 = var_6;

                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            arr_34 [i_7] [i_8 - 2] [i_9] [i_10] [i_11] [i_11] = (~((3933701283 << (var_0 - 357574697))));
                            arr_35 [i_8 + 1] [i_8 + 1] [3] = (5 / (var_11 - var_5));
                            var_24 = (max(var_24, (arr_3 [i_8 - 1] [i_8 - 1] [i_8 - 1])));
                        }
                    }
                }
            }
            var_25 = max(((((((23 ? 1073741696 : 361266019))) && var_7))), ((((-(arr_19 [i_7] [i_8]))) - (max(1972917031, (arr_7 [i_7]))))));
        }
        /* vectorizable */
        for (int i_12 = 1; i_12 < 10;i_12 += 1)
        {
            arr_38 [i_7] [i_12] = arr_6 [4] [i_7] [i_12];
            var_26 = (3343866468 ? 972722476 : 4294967289);
        }
        arr_39 [i_7] [i_7] = arr_31 [i_7] [i_7] [i_7] [i_7];

        /* vectorizable */
        for (int i_13 = 4; i_13 < 8;i_13 += 1) /* same iter space */
        {
            var_27 ^= (var_8 << (((arr_27 [6] [6] [6] [i_7]) - 2476707116)));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 9;i_15 += 1)
                {
                    {
                        var_28 = (-(arr_46 [i_13 + 2] [i_14] [i_13 + 3] [i_13]));
                        var_29 += var_7;
                        arr_48 [i_7] [0] = var_5;
                        var_30 = ((arr_32 [i_13] [i_13] [i_13] [i_13] [i_15] [10] [i_15 - 2]) ? (arr_46 [i_15] [i_15 + 2] [i_15] [i_15]) : (arr_32 [i_7] [5] [i_7] [i_14] [9] [i_15 - 1] [i_15 + 1]));
                        var_31 = (!var_11);
                    }
                }
            }

            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 11;i_18 += 1)
                    {
                        {
                            var_32 = (min(var_32, (arr_25 [i_13 - 2] [i_17 + 1] [i_17])));
                            var_33 ^= (2146435072 >= 4294967295);
                            arr_56 [i_7] [i_7] [i_7] [5] [i_7] [i_18] = 4063125659;
                            var_34 *= var_11;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    for (int i_20 = 3; i_20 < 10;i_20 += 1)
                    {
                        {
                            arr_62 [i_7] [i_13 + 3] [i_16] [i_19] [i_19] = (8388607 > var_5);
                            var_35 *= ((((arr_8 [i_7] [i_20]) >> (var_4 - 2217751603))) << ((((var_7 << (4294967294 - 4294967272))) - 4248829951)));
                            var_36 -= 4294967295;
                        }
                    }
                }
                var_37 = (!var_4);
            }
            for (int i_21 = 0; i_21 < 11;i_21 += 1)
            {
                var_38 = (min(var_38, (4286578670 <= var_6)));
                var_39 = (~2769814505);
                arr_66 [i_13] [i_21] [i_13] [8] = (var_5 ? var_7 : (arr_10 [i_13 - 4] [i_21] [i_21] [i_21] [i_21]));

                for (int i_22 = 0; i_22 < 11;i_22 += 1)
                {
                    arr_71 [i_21] [i_13] [6] [i_7] [i_21] [i_22] = ((!(((8388626 ? 4294967267 : 2628959733)))));
                    arr_72 [i_21] = 1330642820;
                    var_40 = -2088483172;
                }
                for (int i_23 = 0; i_23 < 11;i_23 += 1)
                {
                    arr_77 [i_21] = (!var_2);
                    arr_78 [i_21] [i_13] [i_21] [i_23] = (4294967295 >> (var_6 - 1532378998));
                    arr_79 [i_13] [i_21] = (!4294950912);
                }
            }
        }
        /* vectorizable */
        for (int i_24 = 4; i_24 < 8;i_24 += 1) /* same iter space */
        {
            var_41 = (min(var_41, (var_2 <= 3847902224)));
            var_42 |= (1696759147 * var_2);
        }
    }
    #pragma endscop
}
