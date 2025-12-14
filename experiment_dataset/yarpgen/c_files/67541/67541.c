/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_8 ? (var_2 < var_8) : ((-2074038616 + ((var_8 ? 2074038616 : -2074038616))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = 181;
        var_17 = ((-2074038609 ? -2074038632 : 12));
        arr_2 [i_0] [i_0] = (max(8949800284205159667, (((var_8 ? 183 : -2074038617)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_7 [i_1] = 2074038633;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                {
                    var_18 = ((-2074038616 ? ((var_7 ? var_4 : var_13)) : (1 - 2074038616)));
                    var_19 = (179 && 2074038636);

                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_20 = (max(var_20, var_5));
                            var_21 = (max(var_21, ((((-2074038603 ? var_8 : var_11))))));
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_22 = (var_7 <= var_3);
                            var_23 = (max(var_23, (var_6 && 2147483647)));
                        }

                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            var_24 = 6;
                            var_25 = var_14;
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            arr_23 [i_8] [i_2 - 1] [i_4] [i_2] [i_2 - 1] = (var_13 / -412377746);
                            arr_24 [i_2] = -2147483647;
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            var_26 = -26816;
                            arr_29 [i_2] [i_2] [6] [i_4 + 1] [i_3] [0] = (var_11 && var_0);
                            var_27 = 26816;
                        }
                        for (int i_10 = 3; i_10 < 10;i_10 += 1)
                        {
                            var_28 = (max(var_28, (((-64 ? 1 : 699524825)))));
                            arr_32 [i_1 + 2] [i_1] [i_1] [i_2] [i_1] [i_1] [i_1 + 2] = var_11;
                        }
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_29 = (12000 & 155);
                        var_30 = ((var_5 ? 117 : var_14));
                        arr_37 [i_11] [i_2] [i_3 - 1] [2] [i_11] &= ((var_3 >> ((((var_10 ? var_14 : 1)) - 45287))));
                        var_31 = var_9;
                    }
                }
            }
        }
        var_32 *= ((((var_13 ? var_0 : 3724815150)) > var_4));
    }

    for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
    {
        var_33 -= (min((var_11 * var_9), ((((-32767 - 1) * 100)))));
        var_34 = ((242 ? var_6 : 11340935205897626046));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
    {
        arr_43 [i_13] = 6821;
        var_35 = 864154912;
    }
    #pragma endscop
}
