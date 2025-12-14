/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_2] [i_1 + 1] [i_0] = 28404;
                    var_14 ^= (((arr_3 [i_1 - 1] [i_1 + 1]) ? (arr_3 [i_1 + 1] [i_1 + 1]) : (arr_3 [i_1 + 2] [i_1 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 ^= (((((var_4 ? 1 : var_11))) ? -var_8 : (arr_12 [i_0] [i_4] [i_3] [i_4] [i_4 + 1] [i_1 - 1])));
                                arr_13 [i_4] [i_1 + 1] [i_2] [i_3] [i_4] = ((var_5 ? 1 : (arr_9 [i_0] [1] [i_2] [i_3])));
                                arr_14 [i_2] [i_4] [i_2] = (((((32663 ? 0 : 0))) || -107491282443665245));
                                var_16 = -var_12;
                                arr_15 [i_4] = (var_5 >= 1);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_17 = var_13;
                                var_18 += 16;
                                var_19 &= ((32764 ? 65535 : var_6));
                                arr_21 [i_0] [i_5] [i_2] [i_5] [i_6] = (((~var_2) <= (var_5 * var_7)));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                {
                    var_20 = ((192 ? (((arr_4 [i_0] [i_1 + 2] [i_7]) ? var_8 : (arr_4 [i_0] [i_1] [i_7]))) : (arr_18 [i_1] [i_1 + 2] [i_1 + 1] [i_1])));
                    var_21 -= (((((arr_3 [i_7] [i_7]) != (!var_2)))) > (((((arr_4 [i_1] [i_1] [i_7]) ? var_13 : (arr_6 [i_0]))))));
                    var_22 ^= (1 % var_6);
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                {
                    arr_27 [i_0] [i_1 - 1] = (((141487184 > 65526) > 141487184));
                    var_23 = ((19 ? (((var_12 > (var_9 * var_12)))) : ((((min(238, 155))) ? ((max(0, var_1))) : (min(1489909753, 1))))));
                    arr_28 [i_0] [i_1] [i_8] = ((((!(var_11 + 31))) ? 23 : ((16655 ? (((arr_23 [i_1]) ^ var_5)) : ((var_0 >> (var_8 + 1928997678)))))));

                    for (int i_9 = 1; i_9 < 22;i_9 += 1)
                    {
                        var_24 = var_4;

                        for (int i_10 = 1; i_10 < 22;i_10 += 1)
                        {
                            arr_33 [i_10 + 1] [i_9] [i_9] [i_0] = var_6;
                            var_25 ^= (((-(var_12 == var_4))));
                            var_26 = (min(((max((0 + 69), ((var_7 ? (arr_18 [i_10 + 1] [i_8] [i_1] [i_0]) : (arr_9 [i_1] [i_1] [i_1] [i_1])))))), (max(65513, (var_11 > 64)))));
                            arr_34 [i_9] [5] [i_9] [1] [i_1] = 162;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_27 = ((var_9 ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [1]) : (arr_30 [i_1 + 1] [i_1] [i_8] [i_9])));
                            var_28 = (min(var_28, (((((((arr_30 [i_1] [i_1 + 2] [i_8] [22]) ? 192 : var_7))) ? (var_11 % 44501) : var_10)))));
                            var_29 ^= ((!(((var_8 ? var_6 : var_4)))));
                            var_30 ^= ((-(!-1135736503)));
                        }
                        var_31 = var_7;
                        var_32 = (max(var_32, (((max((arr_16 [i_9] [i_9] [i_9] [i_8] [i_1 + 1] [i_0]), (var_10 | var_13)))))));
                    }
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    var_33 = var_13;
                    var_34 = (min(var_34, ((((((18 - (arr_38 [i_1 + 2] [i_1 - 1] [i_1 + 1])))) ? (!-55420) : -1008)))));
                    var_35 = (min(var_35, ((min(var_13, ((var_11 ? (~130) : (~var_9))))))));
                }
                arr_39 [i_0] = ((1 ? (~-12202) : 0));
                var_36 = (min(var_36, var_8));
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            {
                                arr_47 [i_14] = (arr_37 [i_13] [i_14] [i_15]);
                                var_37 = (min(var_37, (~1)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_38 = var_12;
    #pragma endscop
}
