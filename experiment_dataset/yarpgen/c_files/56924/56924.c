/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((-9223372036854775807 - 1) ? var_3 : (min((var_0 && -5425149526430679123), (max(1, var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = (arr_10 [i_0] [i_1]);
                            var_16 = min(0, ((!((max(1, var_2))))));
                        }
                    }
                }
                var_17 = (min((arr_5 [i_1] [i_0]), (((~1) ^ (arr_7 [i_0] [i_0 + 1] [i_0 - 1])))));

                /* vectorizable */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_18 = (((arr_12 [i_4 - 1] [i_0 - 1]) ? 1 : (arr_11 [i_0] [i_1] [i_0] [i_1])));
                                var_19 = (var_12 ? 661816523 : 278353384);
                            }
                        }
                    }
                    var_20 = var_0;
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_22 [i_0] [i_1] = ((((-(arr_6 [i_0 - 1] [i_0]))) / ((-(arr_7 [i_0 - 1] [i_0 - 1] [i_7])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_21 = (min((min((arr_19 [i_0 + 1] [i_9] [i_9 - 1] [i_9] [i_9 - 2] [i_8] [i_0 + 1]), (arr_4 [i_9] [i_9] [i_0 + 1]))), var_13));
                                var_22 = -278353392;
                            }
                        }
                    }
                    var_23 = min(var_0, var_6);
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_24 = (+-var_7);
                                var_25 = ((((max(1, (arr_16 [i_10 - 1] [i_1] [i_11] [i_10 - 1])))) <= (min((25297 - var_9), ((1 ^ (arr_2 [i_0] [i_1])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_37 [i_0] [i_0] [i_0] [i_13] = ((((min((((arr_15 [i_0] [i_0] [i_0] [i_0]) ? -278353390 : (arr_31 [i_1] [i_1] [i_1] [i_1]))), (min((arr_36 [i_7] [i_7]), -6888085612873331829))))) * ((-(arr_19 [i_13 - 1] [i_13 - 1] [i_13] [i_13 - 1] [i_13 - 1] [i_13] [i_13])))));
                                var_26 |= (((((arr_11 [i_0] [i_1] [i_7] [i_12]) << (13499750642078755423 - 13499750642078755423)))) ? (~1) : -var_1);
                                var_27 = var_4;
                                var_28 = (max(var_28, ((min((max(var_11, (((arr_5 [i_7] [i_13]) << (var_5 - 8196562634863724995))))), (min(-24176, var_10)))))));
                            }
                        }
                    }
                }
                for (int i_14 = 3; i_14 < 13;i_14 += 1)
                {
                    arr_40 [i_0] [i_1] [i_14] [i_0] = min(var_9, (1 / var_3));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 14;i_16 += 1)
                        {
                            {
                                var_29 = ((-((max((arr_21 [i_0] [i_1] [i_1] [i_1]), (arr_21 [i_0] [i_0] [i_1] [i_1]))))));
                                var_30 = (((min(var_2, -9223372036854775792)) | ((((((max((-2147483647 - 1), -278353398)) + 2147483647)) >> (((min(var_12, var_12)) - 12868343661438718186)))))));
                                var_31 ^= (((((arr_32 [i_14] [i_14 + 1] [i_14] [i_14 + 1] [i_14 + 1] [i_14]) * (arr_32 [i_14] [i_14 + 1] [i_14] [i_14 + 1] [i_14 + 1] [i_14]))) + 1));
                            }
                        }
                    }
                }
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    var_32 = (((-(arr_19 [i_17] [i_0 - 1] [i_0 - 1] [i_17] [i_0 - 1] [i_0] [i_0]))) << (((arr_27 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0]) ? 160020875 : (arr_27 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0]))));
                    var_33 = var_8;

                    for (int i_18 = 1; i_18 < 12;i_18 += 1)
                    {
                        var_34 = (arr_1 [i_0] [i_0]);
                        arr_54 [i_0] [i_0] [i_1] [i_0] [i_0] [i_18] = (((278353388 % 1) ? (min(((min(1, 1))), (max(var_4, var_2)))) : (arr_6 [i_0] [i_0])));
                        var_35 += ((!((max(var_7, -0)))));
                    }
                }
            }
        }
    }
    var_36 ^= var_1;
    var_37 = 230883977;
    #pragma endscop
}
