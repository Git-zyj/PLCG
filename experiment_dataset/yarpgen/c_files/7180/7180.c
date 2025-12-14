/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (min((min((min(var_6, (arr_6 [i_0] [i_1] [i_2 - 1]))), var_3)), 30720));

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_1 + 1] [20] |= (max((arr_10 [i_0] [3] [i_2 - 1] [i_3]), (max((arr_10 [i_0] [i_1 - 1] [i_2 - 1] [i_3 + 1]), (arr_10 [i_0] [10] [i_2 - 1] [i_3 - 1])))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1 - 1] [i_3] [i_3 + 1] [i_4] = 1024;
                            arr_16 [i_3] [i_3] [i_2] [i_1 - 1] [i_3] = var_15;
                            var_17 -= (((~-8680081772178127560) <= 11611));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_3] [i_3] = ((var_2 ^ (var_4 & var_0)));
                            arr_20 [i_0] [i_2] [i_3] = var_5;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_18 = (max(var_18, 6983446982190524135));
                            arr_24 [i_0] [i_0] [i_3] = (var_1 < var_14);
                            arr_25 [i_6] [i_3] [1] [i_2 - 1] [i_3] [i_0] = var_12;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_28 [i_7] [i_7] [i_7] [i_3] [i_7] [i_7] = (~var_9);
                            arr_29 [i_0] [i_0] [i_2] [i_3] [i_0] [i_3] [i_7] = (arr_10 [i_0] [i_1 - 1] [i_2 - 1] [i_3 + 1]);
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        arr_32 [i_0] [i_8] [i_1 + 1] [i_8] = (arr_27 [20] [i_1] [i_1] [i_8]);
                        arr_33 [i_2 - 1] [i_1 + 1] [i_0] &= ((var_12 / ((((arr_13 [i_8 - 2] [i_1 + 1]) + var_6)))));
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_19 = (max(var_4, (((-((max(var_2, var_3))))))));
                        var_20 *= (max((((((var_6 ? var_8 : var_4)) >= (((0 ? var_6 : var_3)))))), var_11));
                        var_21 = (max(var_21, (arr_13 [i_0] [i_1])));
                    }
                    for (int i_10 = 4; i_10 < 20;i_10 += 1)
                    {
                        arr_38 [i_1 - 1] [i_10] = (min(3813924610654668285, 11463297091519027480));
                        arr_39 [i_2 - 1] [i_1] [i_10 - 1] [i_10] [i_1] [i_1] = var_6;
                        var_22 ^= (((min((max((arr_5 [i_0]), var_3)), var_1)) >> (((((arr_7 [i_0] [i_1] [i_2] [i_0]) ^ (max(406345102, (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))) - 1052597905063250254))));

                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            var_23 = (((var_14 >= 11463297091519027474) % ((-((11463297091519027474 ? var_7 : var_11))))));
                            arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] = 11463297091519027481;
                            var_24 = (min(var_24, 6983446982190524141));
                        }
                        arr_44 [i_10] [i_0] [i_1] [i_0] = (min((min((min(6983446982190524128, var_9)), (((11463297091519027480 ? var_3 : (arr_41 [i_0] [i_0] [i_0] [i_1 + 1] [i_2] [i_10] [i_10 - 2])))))), (((min(var_0, 0)) - var_4))));
                    }
                    var_25 ^= ((-(((1 * var_4) - (6983446982190524116 && 6983446982190524134)))));
                    var_26 -= ((+(((arr_21 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (arr_22 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]) : 11463297091519027468))));
                    var_27 ^= var_11;
                }
            }
        }
    }
    var_28 = 6983446982190524134;
    #pragma endscop
}
