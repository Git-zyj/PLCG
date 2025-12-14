/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] [i_1] [i_1] &= ((min(((max(var_8, var_18))), (min((arr_4 [i_0] [i_1] [i_2 - 2]), var_18)))) ^ ((((min((arr_4 [i_0] [18] [i_2 - 1]), var_6))))));
                    var_20 = ((min(226, (arr_5 [i_0] [i_1] [1]))));
                    var_21 -= 16347099467809650165;
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_3] [i_4] [i_1] = (!1);
                                var_22 = (((arr_2 [i_0] [11]) ? (((var_12 ? var_8 : 16256))) : 20672));
                            }
                        }
                    }
                    var_23 *= (((arr_15 [i_3 - 3] [i_3 - 3] [i_3]) + ((var_3 ? var_9 : (arr_12 [i_0] [i_0] [1])))));
                    var_24 |= var_14;

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_25 = var_17;

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_26 = (((var_9 ? var_14 : (arr_22 [i_6] [i_3]))));
                            var_27 ^= (!16242);
                            arr_26 [i_3] [i_1] = ((16266 ? ((0 ? var_0 : (arr_3 [i_7]))) : (~255)));
                            arr_27 [5] [1] [5] [1] [i_3] = (((arr_13 [i_7] [i_0] [i_0]) ? (((-9223372036854775807 - 1) / 30)) : (((var_3 ? (arr_2 [i_3] [i_0]) : 11718)))));
                        }
                        var_28 |= ((!(((var_3 ? 2147483647 : (arr_21 [i_0] [i_0] [i_0] [i_6] [i_1]))))));
                        var_29 = (min(var_29, ((((((var_9 + 2147483647) << (var_15 - 819001682)))) ? var_13 : var_8))));
                    }
                    var_30 = (((((var_15 ? var_11 : (arr_5 [i_0] [i_0] [i_3 - 1])))) ? (((var_5 ? 176 : -25101))) : ((var_11 ? var_3 : 0))));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_31 = (((arr_12 [i_0] [11] [i_8]) ? (((!137) ? (max(var_6, 226)) : 118)) : (((((((-1539964923 + 2147483647) >> (var_3 - 3291217588)))) ? var_12 : 829332308)))));
                    var_32 = (min(64, 16231));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                arr_38 [i_0] [i_1] [i_9] [i_9] [i_1] &= ((4194303 ? ((var_1 ? var_9 : -590)) : (arr_18 [i_0] [i_1] [i_9] [i_1] [4])));
                                arr_39 [i_0] [i_9] [i_0] [i_9] [i_0] [i_0] = ((((72 ? var_13 : (arr_29 [i_0] [i_0] [11]))) != var_5));
                                var_33 = var_6;
                                var_34 = ((arr_8 [i_0] [i_1] [13]) ? var_4 : -1588094991);
                            }
                        }
                    }
                    var_35 = ((((var_4 ? var_1 : var_13))) ? (arr_15 [6] [6] [6]) : ((var_16 ? (arr_25 [i_1] [i_1] [i_0]) : (arr_10 [i_1]))));
                    var_36 = (max(var_36, ((!(var_10 == var_2)))));
                }

                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            {
                                arr_50 [i_1] [i_1] [15] [i_13] [i_12] = ((202 ? (!var_0) : (max(((var_12 ? -3620571384079696676 : (arr_8 [i_0] [i_14] [i_12]))), (((1 ? var_6 : var_15)))))));
                                arr_51 [i_0] [i_12] [i_0] [i_13] [i_14] = var_7;
                                var_37 = ((~(((var_17 & 49301) ? (var_15 ^ 134217727) : (((arr_6 [i_12] [i_12] [i_12] [i_12]) ? (arr_21 [i_0] [i_1] [i_12] [1] [i_1]) : var_0))))));
                            }
                        }
                    }
                    var_38 ^= (arr_34 [10] [i_0] [i_1] [i_12]);
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 18;i_16 += 1)
                        {
                            {
                                var_39 = (min(99, (min(1, (arr_45 [i_0] [16] [i_16 - 1] [i_16 - 1] [i_12] [i_0])))));
                                arr_57 [11] [i_1] [11] [i_15] [i_12] [i_0] [i_1] = ((((((arr_11 [i_16] [i_16 - 1] [i_16 + 1] [i_1]) ? (min(269828165, var_12)) : var_17))) ? (min(((max(var_7, var_19))), (min(-8764770330252727594, 1082222265)))) : 1757740798));
                                arr_58 [2] [i_12] [i_12] [12] = (arr_1 [i_16 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 1; i_17 < 11;i_17 += 1)
    {
        for (int i_18 = 2; i_18 < 11;i_18 += 1)
        {
            {
                var_40 |= 3937759704;
                var_41 = (max(var_41, ((max((arr_24 [i_17] [4] [i_17 + 1] [i_17 - 1] [12] [i_17] [12]), (((1275066205 == 1) ? var_10 : 147576969606591726)))))));
                arr_65 [i_18 + 1] &= (max(var_9, ((((min(16231, 1064150207))) ? ((-15850 ? var_1 : (arr_14 [i_17] [i_17] [i_18] [i_18 - 1]))) : var_7))));
            }
        }
    }
    var_42 = (min(var_42, (((((min((var_4 > 1653978082), var_6))) ? var_10 : ((((max(var_8, var_10))) / ((var_11 ? var_16 : var_2)))))))));
    #pragma endscop
}
