/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_12 = 99;
                    arr_9 [i_2] [0] = arr_7 [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_3 - 1] [i_2] [i_2 + 1] [i_2] [i_0] = (max(((var_1 ? (arr_12 [i_0]) : (((arr_5 [i_1] [i_1]) ? 20846 : var_6)))), ((((-(arr_13 [i_3 + 1] [i_3 + 1] [i_2] [i_1] [7]))) / (((var_2 ? var_4 : 1857434934)))))));
                                var_13 = (arr_7 [i_4]);
                                var_14 = var_5;
                            }
                        }
                    }
                    arr_17 [i_0] [8] [8] [8] &= (!(arr_7 [i_1 - 1]));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_15 = var_9;
                    arr_28 [i_7] [i_7] = (((((min(1048575, 9223372036854775807)))) ? (arr_24 [i_5 - 1] [i_6] [i_7] [i_6]) : ((((((min(var_10, 0))) || ((max(var_7, 65535)))))))));
                    var_16 += 23826;
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_17 = (min(var_17, var_3));
                                arr_34 [i_5] [i_5] [i_6] [12] [i_7] [i_8] [i_9] &= var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 4; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                {
                    var_18 ^= (arr_35 [i_10 - 2] [i_10]);
                    var_19 = 2972083844871602932;

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_44 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] &= ((0 ? (arr_36 [i_10 - 4]) : -44690));
                        var_20 = (min(var_20, (min((arr_38 [i_10] [i_13]), 1608262331))));

                        for (int i_14 = 2; i_14 < 17;i_14 += 1)
                        {
                            arr_47 [i_10] [i_10] [7] [i_10 - 3] [i_10] = (max((~var_6), (((var_8 ? var_10 : (~var_2))))));
                            var_21 = (arr_41 [1]);
                            var_22 -= (((~(arr_38 [i_14 - 1] [i_11 - 1]))));
                        }
                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            arr_51 [i_13] [i_15] = 65517;
                            var_23 = max((min((((3795 ? 44691 : -1959))), (var_8 & -4436))), var_9);
                            var_24 += (max(65532, (((var_2 & (arr_41 [i_10]))))));
                        }
                        var_25 ^= var_3;

                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            var_26 |= (max(((22 ? var_8 : var_2)), ((min((~1), 20846)))));
                            arr_54 [i_10] [i_10] [i_10] [i_10] [2] [i_16] = ((-((max((arr_35 [i_10 - 3] [i_11 + 1]), (arr_35 [i_10 + 2] [i_11 + 1]))))));
                            var_27 = var_5;
                            var_28 = (min(var_28, ((min(1, ((+(((arr_40 [i_10] [i_11 - 3] [19] [i_13]) ? (arr_43 [i_11]) : -2972083844871602930)))))))));
                            var_29 = (max(var_29, ((min(((var_3 ? -var_3 : var_1)), 7537643058389537728)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
