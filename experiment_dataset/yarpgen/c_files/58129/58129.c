/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_20 |= (arr_0 [9]);
            var_21 = 5242423308824416601;
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_22 += (((arr_4 [i_0]) / (arr_1 [i_0] [i_2])));
            arr_6 [i_0] = (min((~34), ((51045 ? -10 : 57))));
        }
        arr_7 [i_0] [i_0] = ((max((((arr_2 [i_0]) ? var_10 : 50198)), ((5 ? (arr_1 [i_0] [1]) : 5242423308824416625)))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_11 [i_3] = 5242423308824416616;
        arr_12 [i_3] = ((((((arr_1 [i_3] [i_3]) / (arr_2 [i_3])))) ? var_12 : (min(((2112933309 ? var_16 : 5242423308824416634)), -1233143058006654602))));

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_23 ^= (arr_23 [22] [22] [22] [i_4] [i_7]);
                            arr_24 [i_3] [i_7] = -5242423308824416617;
                        }
                    }
                }
            }
            arr_25 [i_4] = ((((((2182033986 ? (arr_22 [i_4] [i_4] [i_4] [i_4] [i_3] [i_3] [i_4]) : -85))) / 2305842459457880064)));
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            arr_28 [i_8] [i_3] [i_3] = ((((((arr_9 [i_8]) ? 238 : (arr_3 [i_8] [i_3])))) ? (((var_10 == (((var_4 ? 24576 : var_8)))))) : -5470));
            var_24 = max(255, -5242423308824416626);
            arr_29 [i_8] = (arr_9 [i_3]);
            var_25 = var_11;

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 19;i_11 += 1)
                    {
                        {
                            arr_39 [i_11] [i_8] [i_11] |= (~var_14);
                            arr_40 [i_9] = ((((min(1233143058006654601, (arr_22 [i_3] [i_3] [i_3] [i_3] [i_9] [i_10] [i_9]))))) ? ((var_5 ? (arr_22 [i_11 + 4] [i_11 + 4] [i_11] [i_11] [i_11 + 2] [i_11] [i_9]) : ((112 ? -5242423308824416604 : -7190615362499627075)))) : ((((((arr_20 [13] [i_8] [i_9] [7] [i_9]) - (arr_16 [i_3] [i_3] [i_9])))) ? (max(127, var_3)) : ((((arr_22 [20] [i_8] [i_8] [20] [i_8] [14] [i_9]) ? var_7 : (arr_19 [4] [i_3])))))));
                        }
                    }
                }
                var_26 ^= var_11;

                for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                {
                    var_27 = var_14;
                    arr_44 [i_9] [i_9] [i_9] [i_9] = (arr_4 [i_12]);
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
                {
                    var_28 &= (arr_20 [i_13] [i_9] [i_8] [i_3] [i_3]);
                    arr_47 [i_13] [i_9] [7] [i_8] [i_9] [i_3] = ((var_7 ? (arr_21 [i_9] [i_8] [i_9] [i_9] [4]) : (((arr_38 [22] [i_9] [i_8] [i_3]) - var_16))));
                }
                for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
                {
                    arr_51 [i_9] = (min(((((arr_43 [i_3] [15] [i_9] [i_9]) && 18))), (arr_27 [i_3] [i_3] [i_9])));

                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 20;i_15 += 1)
                    {
                        var_29 = (((arr_53 [i_3] [5] [i_3] [i_3] [5]) % ((121 ? var_17 : 252))));
                        arr_55 [i_3] [i_3] [i_3] [6] [i_14] &= ((var_16 ? 18 : (arr_15 [i_15 + 2] [i_15 + 2])));
                    }
                }
            }
            for (int i_16 = 0; i_16 < 0;i_16 += 1)
            {
                var_30 = ((((min((arr_9 [i_16 + 1]), (arr_26 [i_16] [i_16 + 1] [i_16])))) ? (((var_19 ? (arr_35 [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16] [i_8]) : (arr_26 [i_16] [i_16 + 1] [i_16])))) : (min(2220317212, (arr_53 [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 + 1])))));
                arr_59 [i_3] [i_8] [i_8] [i_16] = (min(2074650080, ((var_5 ? (min(32, 2020462164)) : (arr_37 [i_16 + 1] [i_8] [i_16 + 1] [i_16] [i_16 + 1])))));
                var_31 = var_15;
                var_32 = ((var_12 ? var_11 : (min((max(42141, (arr_56 [i_3] [i_3] [i_3]))), ((min(var_10, 28)))))));
                var_33 += var_14;
            }
        }
    }
    var_34 = min(var_15, var_11);
    var_35 = (max((!var_1), (~var_0)));
    #pragma endscop
}
