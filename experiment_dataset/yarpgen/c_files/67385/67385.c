/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_17 ^= (((~var_12) && (!var_2)));
                        arr_11 [i_0] [i_0] [i_0] [6] |= -var_8;
                    }
                    for (int i_4 = 1; i_4 < 7;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_18 += (var_8 != var_1);
                            var_19 = (min(var_19, (((992015331 ? -3334359855219750768 : 20544)))));
                            var_20 = (-83 % 8795711840812685518);
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_21 = (min(var_21, (((var_10 ? var_13 : (var_11 ^ var_3))))));
                            var_22 = -var_6;
                            var_23 = var_10;
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_22 [i_2] [i_0] = var_9;
                            var_24 ^= var_4;
                        }
                        arr_23 [i_0] [i_0] [i_2 - 2] [i_2 - 2] = var_3;
                        arr_24 [7] [7] [i_4] [i_0] = ((var_10 ? var_16 : var_7));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_2] [i_8] = (!var_15);
                        var_25 ^= (var_11 >= var_0);
                        var_26 -= ((~(~734)));
                    }
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        var_27 *= (((~var_6) - var_14));

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_28 *= (!var_14);
                            var_29 = var_3;
                            var_30 = 2400;
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = (var_7 % var_3);
                            arr_37 [i_0] [i_1] [i_2] [i_9 + 1] [i_1] = (-1 * (var_14 > var_13));
                            arr_38 [i_0] [i_0] [i_2] [i_0] [i_9] [i_0] [3] = var_4;
                        }
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            arr_41 [i_0] [i_0] [i_1] [i_2] [i_9] [i_0] = ((var_13 ? var_16 : var_3));
                            var_31 *= (var_3 < var_11);
                            var_32 += (~var_5);
                            var_33 = (max(var_33, (!var_12)));
                        }
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            var_34 = (max(var_34, (~992015331)));
                            arr_44 [6] [i_9] [6] &= (!31761);
                            var_35 = (~var_9);
                        }
                    }
                    arr_45 [i_0] [i_2] [i_1 + 1] [i_0] = var_6;

                    for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
                    {
                        var_36 = -var_16;
                        arr_48 [i_0] [i_0] [i_1] [i_0] [i_2] [i_0] = var_11;
                        var_37 = (max(var_37, -2381));

                        for (int i_15 = 1; i_15 < 6;i_15 += 1)
                        {
                            arr_51 [i_0] = (!var_14);
                            var_38 += var_4;
                        }
                    }
                    for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
                    {
                        var_39 = var_10;
                        arr_54 [i_0] = var_11;
                        arr_55 [i_1] [2] [i_16] [i_2 - 2] [i_16] |= (0 % 18151);
                        var_40 = (min(var_40, ((((var_14 && var_10) ? (!var_14) : 9198324643622159021)))));
                    }
                    for (int i_17 = 0; i_17 < 10;i_17 += 1) /* same iter space */
                    {
                        var_41 = (max(var_41, (((~(var_5 | var_1))))));
                        var_42 = var_11;
                    }
                }
                var_43 *= var_11;
            }
        }
    }
    var_44 = (max(var_44, 3464584032408812662));
    #pragma endscop
}
