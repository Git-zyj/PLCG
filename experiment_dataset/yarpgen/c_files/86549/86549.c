/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = var_15;

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_18 = (((((max(59616, var_16)))) ? (((-(arr_3 [i_0] [i_1] [i_2])))) : (arr_5 [i_0 + 1] [i_1])));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_19 += (max(var_14, 5022448717158228299));
                        var_20 = (max(var_20, (arr_6 [i_0] [i_0])));
                        var_21 ^= -1;
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_22 = ((-var_12 ? (max((arr_7 [i_0] [0] [0] [i_0 + 1]), var_2)) : ((-(arr_2 [i_0 + 1] [i_0 - 1])))));
                        var_23 = ((-(((arr_0 [i_0 + 1]) ? var_2 : (((var_0 ? 36016 : 2102901975)))))));
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_24 = ((((((arr_7 [i_0] [i_1] [i_5] [i_5]) ? (arr_15 [15] [i_5] [i_0 - 1] [i_0 - 1]) : 1))) ? (arr_14 [i_0] [10] [10] [i_5] [i_6] [13]) : (arr_8 [i_0 + 1] [i_0] [i_0] [i_0 + 1])));
                        var_25 = (-var_11 ? ((var_1 ? 2047 : (arr_10 [i_0] [15] [i_5]))) : (arr_9 [i_0 - 1]));
                        var_26 = (~-3094984920640989874);
                    }
                    var_27 = (var_16 ? (arr_12 [i_0 + 1] [9] [i_0 - 1] [i_0 + 1]) : (arr_12 [1] [1] [i_0 + 1] [i_0 - 1]));
                }
                arr_17 [i_1] = ((((((arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? var_12 : (arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1])))) ? 13087 : ((-(arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 1])))));
                var_28 = arr_10 [i_1] [i_1] [i_0];

                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_29 = (max(var_29, ((((~var_9) ? (((arr_21 [1] [6] [i_7] [12] [13]) ? var_12 : (arr_14 [i_0] [i_1] [8] [i_8] [i_9] [10]))) : 118)))));
                                var_30 = (6726 < var_12);
                            }
                        }
                    }
                    var_31 = var_14;

                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        var_32 += (arr_14 [i_0] [1] [i_0 - 1] [i_10] [i_0] [i_10]);
                        arr_27 [i_10] [i_0] [i_10] = (((18446744073709551615 ? 13567939830423127571 : var_10)));
                    }
                    arr_28 [i_0] [i_1] [i_1] = (arr_10 [16] [16] [i_0]);
                    var_33 = var_6;
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_34 = ((~((var_11 ? 120177379 : 0))));
                                var_35 = ((!1) ? ((var_1 ? var_14 : (arr_21 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))) : ((6465113804954292235 ? 1 : 11681036091936295799)));
                            }
                        }
                    }
                    var_36 = ((arr_29 [i_0 - 1] [i_1] [i_11 + 1]) ? (arr_11 [i_11 - 1] [i_0 - 1] [i_0] [i_0]) : var_8);
                    var_37 = ((6742 ? ((var_16 ? var_1 : 549755813887)) : var_11));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        for (int i_18 = 3; i_18 < 14;i_18 += 1)
                        {
                            {
                                var_38 = var_0;
                                var_39 = (max(var_39, var_13));
                                var_40 = 9223372036854775808;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_19 = 2; i_19 < 15;i_19 += 1)
                    {
                        arr_54 [i_14] [i_15] [9] [i_19] = (arr_36 [10] [i_15] [i_15] [i_16] [i_16] [i_16] [i_16]);
                        var_41 = (min(var_41, (~9223372036854775807)));
                        var_42 &= (((arr_48 [i_19 - 1] [i_19 - 2] [3] [0]) ? (arr_32 [i_19 - 1] [i_19] [i_19 - 1] [i_19 - 1] [i_19] [10]) : (arr_32 [i_19 - 2] [15] [i_19] [i_19] [i_16] [7])));
                    }
                }
            }
        }
    }
    var_43 = (max((-21106 < var_1), (((min(var_5, -119)) * var_15))));
    var_44 = var_9;
    var_45 = var_10;
    #pragma endscop
}
