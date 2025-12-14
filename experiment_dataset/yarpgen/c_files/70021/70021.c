/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((-40 ? (((!((min(var_13, var_10)))))) : 212));
        var_15 = (min(var_15, var_0));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 7;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, ((min((((0 & var_3) ? (!1) : 1835008)), 392008116)))));
                        var_17 = (min(var_17, (!var_13)));

                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            var_18 |= 407248101;
                            var_19 |= var_6;
                            arr_14 [i_4] [i_1] [i_1] = ((((var_12 / ((min(51, var_6))))) << (!var_13)));
                        }
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            var_20 = 407248101;
                            var_21 = -828987850;
                        }

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_6] [i_3] [1] [i_1] [i_0] = var_5;
                            var_22 = ((5112116876269643112 ? var_3 : -161995429));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_7] [i_1] [i_2] [i_1] [i_1] [i_0] [i_0] = (((var_8 || var_10) > var_2));
                            var_23 *= ((13334627197439908508 ? var_9 : var_10));
                        }
                    }
                }
            }
        }
        var_24 = (((var_0 ? ((var_9 ? var_6 : var_7)) : 3887719194)));
        var_25 = ((max(1023, 4393223628442102170)));
    }
    var_26 = (((var_9 || var_9) >= var_7));

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_27 = (min(((-((1127215878 ? var_7 : var_4)))), ((min(62841, (max(4520, var_8)))))));
        arr_27 [i_8] [i_8] = min(((((min(var_3, var_9))) ? var_4 : (~26574))), (((1 ^ (min(var_11, -26575))))));
        var_28 *= ((max(-2106896475, 980697365)));
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {

        for (int i_10 = 1; i_10 < 15;i_10 += 1)
        {
            arr_33 [i_10 + 1] [i_10] [i_9] = (max(((((-28 ? -32311 : var_2)))), (((~var_13) ? (((max(var_14, 0)))) : var_3))));
            arr_34 [i_9] [3] [i_10] = (((~3887719192) ? (((!(((var_11 ? var_1 : var_14)))))) : (((!((max(var_5, var_0))))))));
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 13;i_12 += 1)
            {
                {
                    arr_40 [i_9] [15] [i_9] = (((((min(var_0, var_2) <= var_6)))));
                    var_29 = (1625554443 / var_10);
                    var_30 *= 5399124345931537290;
                    var_31 = 3887719192;
                }
            }
        }
        var_32 = min(((min(((min(var_8, var_11))), ((var_8 ? var_8 : var_1))))), ((min(var_14, var_2))));
    }
    #pragma endscop
}
