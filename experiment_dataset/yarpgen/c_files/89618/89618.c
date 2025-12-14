/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = ((~((-20320 ? 546721333 : 17439))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_13 = (((!18890) ? -1436869073 : var_5));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_12 [1] [i_0] [i_2] [i_3] = var_4;

                        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            var_14 = ((1 ? 112 : 255));
                            var_15 ^= var_8;
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_16 = (((((1436869072 << (var_0 - 90)))) ? 546721333 : 1436869072));
                            var_17 = (var_9 * 234881024);
                            var_18 = (min(var_18, (!var_7)));
                        }
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_22 [i_0] [i_2] [i_2] [i_6] [i_0] [i_0] = ((-((var_10 + (-127 - 1)))));
                        var_19 ^= var_1;
                        var_20 = ((!(~127)));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_21 = (!var_8);
                                var_22 = (~234881024);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    var_23 = ((var_9 ? var_9 : var_2));
                    var_24 = (max(var_24, var_6));
                    var_25 = ((-(~var_10)));
                }

                for (int i_10 = 2; i_10 < 13;i_10 += 1)
                {
                    var_26 = 120;
                    var_27 = (~3855335546058725603);

                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        var_28 = ((var_0 ? 556792923 : ((((min(var_10, var_4))) ? ((max(var_7, var_0))) : ((9223372036854775807 ? var_2 : var_5))))));
                        var_29 |= (~var_6);
                        arr_38 [i_0] [i_1] [i_1] [4] [2] [i_11 + 1] &= ((((min(var_6, var_5)) + 9223372036854775807)) << (var_6 - 44));
                    }
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 14;i_12 += 1)
                {
                    arr_41 [i_0] [i_0] [i_12] = var_0;
                    arr_42 [i_0] [i_1] [i_12 + 2] = var_7;
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            {
                                arr_50 [i_13] &= var_9;
                                var_30 = var_1;
                            }
                        }
                    }
                }
                var_31 = (min(((min((-32767 - 1), var_4))), var_7));
            }
        }
    }
    #pragma endscop
}
