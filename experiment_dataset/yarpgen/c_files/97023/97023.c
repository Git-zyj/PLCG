/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_19 += ((var_7 ? var_6 : (!var_2)));
                        var_20 = ((var_5 ? ((-1 ? 14099 : -8)) : var_8));
                        arr_9 [i_0 + 1] [i_1] [i_2] [i_3] = (((!var_4) ? var_7 : (arr_5 [i_1] [i_1] [i_3 - 1])));
                        var_21 = (max(var_21, var_7));
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        var_22 = (-50576 | 3);
                        var_23 ^= var_15;
                        var_24 = ((((var_18 ? var_1 : 9005028057976792545)) * -var_1));
                        var_25 = (arr_6 [i_1]);
                    }
                    var_26 = ((1761181816 ? 19 : 4499314165193508693));
                    var_27 = (arr_6 [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_18 [i_0 - 2] [i_5] = 3674665425;
                                var_28 |= (~var_0);
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_2] [9] [i_1] = -var_11;
                        var_29 += (arr_3 [i_2] [i_2]);
                        var_30 = 237;
                        arr_22 [i_0] &= var_16;

                        for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            var_31 = (((~var_0) && var_15));
                            var_32 = var_11;
                        }
                        for (int i_9 = 1; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            arr_27 [i_0 + 1] [i_1] [i_2] [i_2] [i_2] [i_2] [i_7] = (((-var_3 + 2147483647) << ((((var_6 ? var_1 : var_11)) - 7045))));
                            arr_28 [8] [i_7] [i_2] [i_1] [i_1] [i_0 - 2] [i_0 + 1] = (!0);
                            var_33 = var_7;
                            var_34 *= var_13;
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    arr_32 [i_1] = var_12;
                    var_35 = (min(((max(236, 2147483624))), var_14));
                }
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    var_36 = 1505862720;
                    var_37 = -var_6;
                }
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    var_38 = arr_34 [i_0] [i_1] [i_12];
                    var_39 = ((+(min((4398046511103 - 4398046511103), 0))));
                }
                var_40 |= ((3805211665274598265 || (arr_31 [i_1] [i_1])));
                arr_38 [i_0] = ((-((((max(var_18, -1620813007)) == var_4)))));
            }
        }
    }
    var_41 = var_12;
    #pragma endscop
}
