/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_11 ^ (((min(207, 7)))))));
    var_21 ^= (min(var_0, 262143));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = (((((!(arr_2 [i_0] [i_0])))) == (((!(arr_6 [i_0 + 1] [i_0 + 1] [i_2] [i_2]))))));
                    var_23 += arr_4 [1] [i_1] [1];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_24 = (!var_0);
                                arr_14 [i_4 - 1] [i_3] [i_3] [i_2] [i_3] [i_3] [i_0] = ((+(((arr_4 [i_4] [i_3] [i_2]) / (arr_7 [i_3] [i_1] [i_0 - 1])))));
                                arr_15 [i_1] [i_2] [i_2] [i_3] = (((arr_6 [i_0] [i_0 + 2] [i_4 - 1] [i_4 - 1]) ? (arr_9 [i_3] [i_1] [8] [8] [i_1 - 1] [i_3]) : (arr_9 [i_3] [i_0 - 1] [i_0 - 1] [4] [i_1 - 1] [i_4])));
                            }
                        }
                    }
                    arr_16 [i_0] = (arr_3 [i_0 - 1]);
                }
            }
        }
        var_25 = (((arr_3 [i_0 + 2]) ? (arr_3 [i_0 - 2]) : (arr_3 [i_0 - 2])));

        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            var_26 = (~65535);
            arr_19 [i_5] = (+-534);
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_26 [i_5] [i_5 + 1] [i_5 + 1] [i_5] = (arr_9 [i_5] [1] [i_5 + 1] [i_5] [i_6 + 1] [i_7]);
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_5] = (((18446744073709551615 ? 1 : var_16)));
                        arr_28 [i_0 + 2] [i_5 + 1] [i_5] [i_5] [i_5] = ((1828349537 ? -19 : 0));
                        var_27 = (max(var_27, ((((~-29852) << (((((var_2 + 9223372036854775807) << (arr_1 [i_0 - 1]))) - 5013927919955553222)))))));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_28 = -294617343739694844;
            arr_32 [12] = (((((arr_9 [i_0] [i_8] [i_0] [i_0] [4] [i_0]) + (arr_30 [i_0])))) ? (arr_4 [0] [11] [i_0 + 1]) : var_1);
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_29 = ((1 / (arr_9 [i_10] [i_11 - 4] [i_10 - 1] [i_10] [i_8] [i_10])));
                            arr_41 [i_8] [i_10] = (((arr_2 [i_10 - 1] [i_0 + 1]) ? ((((arr_6 [i_0] [i_0] [i_9] [i_10]) & (arr_17 [i_10])))) : (arr_0 [i_0 + 2])));
                            var_30 *= 0;
                            arr_42 [i_0 - 1] [i_0 - 1] [i_10] [i_0 - 1] [i_10] [i_0 - 1] [i_0 - 1] = (((arr_8 [i_10]) ? (arr_8 [i_10]) : (arr_8 [i_10])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 14;i_13 += 1)
                {
                    {
                        var_31 -= 32414;
                        arr_50 [0] [i_8] [i_12] = (arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_51 [i_12] [i_13] [i_13 + 2] [i_13 + 2] = ((-1 ? 1 : 1));
                    }
                }
            }
            var_32 = (((arr_6 [i_0] [i_8] [i_0 - 2] [i_0 - 2]) ? var_13 : (arr_39 [i_0] [i_0 - 1] [i_0] [i_0 + 2] [15])));
        }
        var_33 = (min(var_33, (-24533 * 7)));
    }
    for (int i_14 = 1; i_14 < 17;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                {
                    arr_60 [i_14] [i_14] [i_15] = (+((var_1 ? (arr_52 [i_14 + 2]) : (arr_52 [i_14 + 2]))));
                    var_34 = (min(var_34, (((arr_53 [i_16]) > ((((~var_0) ? (arr_56 [i_16] [i_15] [i_14 - 1]) : (((arr_58 [2] [2]) ? 1 : 43)))))))));
                    var_35 = ((!(((var_9 ? 1881085711 : var_6)))));
                }
            }
        }
        var_36 = var_4;
    }
    var_37 |= ((max((var_10 < var_12), ((var_3 ? var_9 : var_3)))));
    #pragma endscop
}
