/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_10 = (min(var_10, (((((min(var_7, var_7))) ? ((-((var_0 ? var_4 : var_3)))) : (((var_9 - (~var_6)))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_11 = (var_6 && var_7);
            var_12 = ((var_9 ? var_6 : var_2));
        }
        var_13 = ((-(var_5 + var_8)));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_14 = (((var_1 ? var_5 : var_8)));
                                var_15 = (max(((-var_8 ? ((var_0 ? var_3 : var_7)) : ((var_5 ? var_3 : var_8)))), (max(((min(var_9, var_0))), ((var_1 ? var_1 : var_3))))));
                            }
                        }
                    }

                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        var_16 = (((((min(var_2, var_7))) ? var_9 : ((var_4 ? var_5 : var_7)))));
                        var_17 = -var_2;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_18 = (~var_5);
                        var_19 = ((var_1 ? ((var_8 ? var_0 : var_2)) : var_6));
                        var_20 = var_6;
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_21 = (((!((max(var_6, var_8))))));
                                var_22 = (min(((min(var_1, ((var_4 ? var_7 : var_0))))), (~-var_5)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 8;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 9;i_12 += 1)
                        {
                            {
                                var_23 = (((var_4 & var_2) ? (~var_5) : ((max(var_4, var_1)))));
                                var_24 = ((var_4 <= var_1) ? (((var_9 * var_1) ? var_2 : ((var_0 ? var_4 : var_7)))) : (((min(var_6, (var_4 < var_5))))));
                                var_25 &= (((!var_9) ? (max(var_7, var_3)) : (((var_0 ? var_2 : var_4)))));
                                var_26 = ((!(((var_0 ? var_8 : ((var_4 ? var_2 : var_8)))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
    {
        var_27 = (((var_0 == var_9) ? var_3 : (max(var_9, var_1))));
        var_28 = (((((var_7 * (!var_5)))) ? ((max(var_7, (((var_5 ? var_2 : var_8)))))) : var_5));
        var_29 = (max(((var_7 ? (var_4 | var_8) : var_7)), ((((var_5 ? var_7 : var_0)) | ((var_4 ? var_3 : var_2))))));
        var_30 = (max((((!(var_7 ^ var_1)))), var_6));
    }
    for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
    {
        var_31 = (max(var_31, ((((((var_3 ? var_9 : var_1))) ? (((((var_0 ? var_3 : var_2))) ? (max(var_8, var_2)) : var_2)) : ((var_5 ? var_2 : var_9)))))));
        var_32 = ((((((min(var_5, var_8))) ? (!var_5) : var_1)) - ((((var_5 > (min(var_8, var_5))))))));
        var_33 = (max((min(((var_0 ? var_5 : var_2)), ((min(var_9, var_2))))), (((var_9 ? -var_3 : -var_0)))));
        var_34 = ((((((var_6 ? var_2 : var_5)) ^ ((var_4 ? var_5 : var_1))))) ? (min(var_8, -var_0)) : (((((var_2 ? var_8 : var_0))) ? var_0 : var_6)));
    }
    #pragma endscop
}
