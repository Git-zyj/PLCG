/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_17 = (var_14 & var_12);
                var_18 ^= (((max(((var_14 << (((var_3 + 22037) - 30)))), var_3)) == (max((var_5 | var_16), var_7))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_1] [i_2] [i_1] [i_1] = (!var_5);
                        var_19 = (min(var_19, (var_16 || var_7)));
                        var_20 ^= var_4;
                    }
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        arr_14 [i_4] [i_1] [i_1] [i_0] = (var_2 / var_13);
                        arr_15 [0] [i_1 + 1] [i_0 - 1] [i_4 - 2] &= var_4;
                        var_21 = (16813 | -16813);
                        arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = var_7;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_22 = var_9;
                                var_23 = (var_14 + var_13);
                                arr_21 [i_2] [i_1] [i_2] = ((!(var_13 && var_6)));
                                var_24 = var_5;
                            }
                        }
                    }
                    var_25 = (~var_12);
                }
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    var_26 = ((var_3 && var_9) || var_10);
                    var_27 *= (max(((max(var_2, var_8))), (max(var_6, var_0))));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_28 = var_8;

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_29 = ((((var_8 % (max(var_2, var_3))))) && (((max(var_3, var_14)))));
                        arr_30 [i_0 + 1] [i_0 + 1] [9] [i_1] [i_8] [8] = var_3;
                        arr_31 [i_1] [i_1] [i_8] [1] = (min(((-(var_5 || var_7))), var_12));

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_30 *= var_0;
                            var_31 = var_12;
                            arr_35 [i_0] [i_1] [i_9] = 890754659;
                            var_32 = ((-((var_7 & (var_11 >= var_9)))));
                        }
                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 9;i_11 += 1)
                        {
                            var_33 = (((var_2 / var_7) - var_11));
                            arr_38 [i_0] [i_1] [i_0] [i_0 - 1] [4] = (var_11 + var_7);
                        }
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            arr_42 [i_0] [2] [i_8] [i_9] [1] &= ((((~(max(var_6, var_4)))) & (max(var_9, var_6))));
                            var_34 += (min(((((var_16 | var_8) << (((max(var_16, var_6)) - 996396106))))), (min(var_2, var_1))));
                            var_35 = (max(var_35, (((((min(var_8, var_11))) || ((min((var_3 == var_16), (max(var_7, var_6))))))))));
                        }
                    }
                    arr_43 [i_0] [i_0] [2] |= (!var_15);
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            var_36 = (((((max(var_3, var_13)) % var_13)) % (~var_16)));
                            var_37 *= ((var_12 / (max(var_4, (0 - 4224387031)))));
                            arr_48 [i_1] [1] = (!var_9);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 22;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_17 = 2; i_17 < 19;i_17 += 1)
                {
                    for (int i_18 = 4; i_18 < 20;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 21;i_19 += 1)
                        {
                            {
                                var_38 = var_3;
                                var_39 = (min(var_39, ((((~var_12) - (var_2 / var_15))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 22;i_20 += 1)
                {
                    for (int i_21 = 1; i_21 < 20;i_21 += 1)
                    {
                        {
                            arr_67 [i_15] [i_16] [i_21] = var_5;
                            var_40 &= ((max(((max(var_10, var_16))), var_8)));
                            arr_68 [i_15] [i_15] [1] [i_15] [i_15] [10] = ((((max(var_11, var_5)))));
                        }
                    }
                }
                var_41 = (max((((~(var_4 ^ var_6)))), var_1));
                var_42 = (min(var_42, (((min((var_12 == var_5), var_0))))));

                for (int i_22 = 1; i_22 < 20;i_22 += 1) /* same iter space */
                {
                    var_43 &= var_4;
                    var_44 *= (~-var_9);
                }
                for (int i_23 = 1; i_23 < 20;i_23 += 1) /* same iter space */
                {
                    var_45 += var_10;
                    var_46 = var_2;
                    var_47 = (max((((-(var_6 || var_13)))), ((max(var_6, var_8)))));
                }
                for (int i_24 = 2; i_24 < 20;i_24 += 1)
                {
                    var_48 *= ((var_10 * (max(var_6, var_6))));
                    var_49 &= ((~(max(((var_14 >> (var_7 - 74))), (~var_11)))));
                }
            }
        }
    }
    #pragma endscop
}
