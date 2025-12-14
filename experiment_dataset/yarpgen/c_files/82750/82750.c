/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_10 = var_5;
                    arr_7 [i_0] [i_0] [9] [i_0] = (~3857984818);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_12 [i_3] = 24;
        arr_13 [i_3] = ((((max(((min((arr_8 [i_3] [i_3]), (arr_1 [2])))), 61))) + (max((((arr_9 [i_3]) ? var_0 : -622085732398743725)), -61))));
        arr_14 [i_3] [i_3] |= (arr_11 [i_3]);
        var_11 = ((((max((arr_10 [i_3] [i_3]), (arr_1 [1])))) ? (max((((!(arr_2 [8])))), (-69 + 69))) : (((var_5 >= ((94 ? (arr_11 [i_3]) : (arr_4 [i_3]))))))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_12 -= (((~(arr_16 [i_4]))) % ((((!((min(13275882891075380769, (arr_17 [i_4] [i_4])))))))));

        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            var_13 = (max((((((~(arr_15 [i_4] [i_5])))) ? (var_5 - 925447058691694306) : 1056902661)), (arr_17 [i_4] [i_4])));
            var_14 = (arr_15 [i_5] [i_5 + 1]);

            for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
            {
                var_15 = (min(var_15, (arr_16 [0])));
                var_16 &= (max((((arr_18 [i_4] [i_4]) ? ((1 ? 9223372036854775807 : -8313070223634831461)) : var_0)), (((-8313070223634831461 ? -var_0 : (arr_15 [i_5 - 1] [i_5]))))));
                arr_22 [i_5] = -95;
            }
            /* vectorizable */
            for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
            {
                arr_26 [i_4] [i_4] [i_4] &= (((arr_21 [i_7] [i_7 + 1] [i_7 - 1]) ? var_4 : (arr_21 [i_7 - 1] [i_7] [i_7 - 1])));
                var_17 = (min(var_17, (((-(arr_20 [i_4] [i_4] [i_5] [1]))))));
            }
            var_18 = ((((!(arr_23 [i_5] [i_5] [i_5 + 1]))) ? ((((max((arr_23 [i_5 - 1] [i_4] [i_4]), var_4))) ? -var_9 : (arr_15 [i_5 - 1] [i_5 - 1]))) : ((((arr_21 [i_5] [i_5 + 1] [i_4]) && ((min(-2147483643, var_6))))))));
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                var_19 = (max(var_19, var_3));
                var_20 |= (((arr_30 [i_8] [i_8]) ? (arr_24 [i_9] [i_9] [i_8] [i_4]) : (arr_23 [i_9] [i_8] [i_4])));
            }
            var_21 = (((arr_24 [i_8] [3] [i_4] [i_4]) ^ 4472127292255442210));
            arr_31 [i_8] [i_8 - 1] |= (arr_18 [i_8 + 2] [i_4]);
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    {
                        var_22 = (arr_21 [i_8 + 1] [i_8 + 1] [i_8]);
                        var_23 = (min(var_23, 2500017248));
                        arr_37 [i_4] [i_10] = ((((-69 && (arr_24 [i_4] [i_8 - 2] [i_10] [i_11]))) && (arr_24 [i_10] [i_10] [i_10] [i_10])));
                    }
                }
            }
        }
        for (int i_12 = 3; i_12 < 20;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 18;i_14 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            var_24 = (arr_21 [5] [5] [5]);
                            var_25 = (((arr_46 [i_14 - 1] [i_15] [i_14 - 1] [i_14 - 1] [i_14 - 1]) - (arr_32 [i_13])));
                        }
                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            var_26 = (((arr_23 [i_16] [i_16] [i_12 + 1]) * (arr_25 [i_16] [i_12 - 1] [i_12 - 1] [i_12 - 1])));
                            arr_52 [i_12] [1] [i_13] [i_12] [1] = ((arr_49 [i_14 + 1] [i_12 + 2] [i_12 + 1]) ? (((arr_51 [i_16] [i_13] [i_4] [i_4]) ? 1794950048 : (arr_24 [i_13] [i_14 + 2] [i_13] [10]))) : (arr_35 [i_14 + 4] [i_14 + 1] [i_12 - 1] [i_12 + 1]));
                            var_27 = 1;
                            var_28 ^= ((~(arr_24 [i_4] [i_4] [i_14] [i_16])));
                            var_29 = (~1);
                        }
                        var_30 = var_0;
                        var_31 = (arr_41 [3] [i_14]);
                        var_32 ^= ((((((arr_29 [i_4] [i_12 - 2] [i_13]) & ((127 ? (arr_34 [i_12]) : -69))))) & (arr_51 [i_14 - 2] [i_14] [i_14 + 1] [i_14 - 2])));
                    }
                }
            }
            var_33 = 1;
        }
        arr_53 [i_4] &= ((((((arr_28 [i_4]) - (arr_28 [i_4])))) + (arr_40 [i_4] [i_4] [i_4])));
        var_34 += ((-((~(max(var_6, 5170861182634170854))))));
    }
    for (int i_17 = 3; i_17 < 19;i_17 += 1)
    {
        arr_56 [i_17] [i_17 - 1] = (arr_16 [20]);
        var_35 = (min(var_35, ((-((((((arr_55 [i_17]) ? var_1 : 757613039))) ? (arr_29 [i_17 + 1] [i_17 - 3] [i_17 + 1]) : var_4))))));
    }
    var_36 = var_6;
    #pragma endscop
}
