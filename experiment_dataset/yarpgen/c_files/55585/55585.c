/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 *= var_5;
        arr_2 [2] &= (var_8 > var_1);

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_11 = (var_3 != (~var_8));
            arr_5 [10] [i_0] = (var_1 || var_0);
            arr_6 [i_0] [i_0] [i_0] = var_1;
        }
    }
    var_12 = (((min((min(var_3, var_4)), var_1)) - var_4));

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_13 |= (((var_9 + var_1) > (((var_5 && var_5) << (((var_9 | var_9) - 1685623391))))));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
            {
                var_14 = (max(var_14, (((var_4 && ((((max(var_3, var_8))) || (!var_1))))))));
                var_15 = (((var_9 < var_6) * ((min(var_7, var_8)))));
                var_16 &= ((var_3 > (((!(var_0 * var_8))))));
                arr_16 [i_3] &= ((var_0 - var_5) < (var_4 / var_8));
                var_17 *= (((((((var_1 | var_9) + 2147483647)) >> (((var_3 / var_7) + 3)))) < (((var_5 == var_2) ? ((min(var_7, var_0))) : var_2))));
            }
            for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    var_18 = (min(2982103130000997603, -2982103130000997588));
                    var_19 = (((var_3 - var_8) ? ((var_3 >> (var_5 - 193819967))) : ((var_4 ? var_3 : var_5))));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_25 [i_7] [i_2] [i_2] [i_2] = (~((var_9 >> (var_9 - 1685623409))));
                    var_20 = (max(var_20, (((((((min(var_4, var_2)) | (max(var_1, var_1))))) ? (min(var_4, (var_5 ^ var_3))) : ((((var_7 ? var_6 : var_1)) ^ var_8)))))));
                }
                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    var_21 = ((((((~var_2) && var_3))) < (var_2 > var_8)));
                    var_22 |= ((((var_7 ? var_8 : var_4)) / (((65535 < 3833487405) | -var_7))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_31 [i_3] [i_8] [i_2] [i_3] [i_2] = (!var_9);
                        var_23 &= (var_3 != var_7);
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_24 = (((var_4 >= var_0) || (((112 << (1420939622 - 1420939619))))));
                        var_25 &= (((~26769) < (min(26766, 2402177831268694528))));
                    }
                    arr_36 [i_2] [i_2] [i_2] [i_5] [i_8] [6] = (((((var_4 + 2147483647) >> (var_4 + 883171367))) > (~var_2)));
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    var_26 *= (((((var_1 > var_0) >> (((max(var_4, var_9)) - 1685623403)))) >= (var_5 > var_1)));
                    var_27 = (min(var_27, (((!(((var_4 % (var_5 && var_7)))))))));
                }
                var_28 = (((((!21656) / -18035)) >> var_0));
                var_29 |= -var_0;
                var_30 = (min(var_30, ((((((((var_6 >> (var_6 - 793251554))) >= (var_5 + var_3)))) / (var_0 + var_6))))));
            }
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        {
                            var_31 = (min(var_31, (((-(!var_7))))));
                            arr_48 [i_2] [i_13] [i_14] [2] [2] &= (((var_3 || var_0) - (4 - 24)));
                        }
                    }
                }
            }
        }
    }
    var_32 += (~var_4);
    #pragma endscop
}
