/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((var_9 ? var_1 : ((var_4 ? (!var_10) : var_5))))));
    var_21 |= ((((min((min(var_14, var_7)), ((max(var_14, var_14)))))) & ((-var_2 / (var_19 || var_3)))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_22 = (((var_18 != var_11) ? ((((max(var_8, var_13))) % ((min(var_12, var_2))))) : (var_9 || var_15)));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_0 + 1] [6] [i_2] [i_3] = var_0;
                        arr_11 [i_0] [i_0] [i_0 - 1] [i_1] = var_9;
                        var_23 = (min(var_23, (((((((min(var_13, var_2))) ? (var_19 | var_13) : var_6)) > ((((!(~215))))))))));
                    }
                }
            }
        }
        var_24 = var_4;
    }
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_23 [i_4 - 1] [i_4] [8] [i_4] = (min(((((min(var_5, var_5))) ? var_7 : var_5)), (((((max(var_7, var_16))) ? var_11 : (-32 / 32))))));
                        var_25 = var_19;
                        var_26 = var_14;

                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            var_27 += ((((max(var_0, var_5))) ? ((var_16 ? var_0 : var_12)) : (((max(var_15, var_10))))));
                            arr_27 [i_4] [i_5 + 2] [i_6] [i_4] [i_4] = var_6;
                        }
                    }
                }
            }
        }
        var_28 = (max(var_28, ((max(((-2573 ? -8192 : 32)), ((-var_11 ^ ((max(var_2, var_15))))))))));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    {
                        arr_40 [i_9] [i_9] [i_10] [i_9] [i_12] = (max((min(((min(var_10, var_17))), (~var_12))), ((-var_9 ? (min(var_4, var_15)) : var_10))));
                        var_29 = (((~var_7) ? ((max(57570, -33))) : ((min((max(var_0, var_2)), var_2)))));
                    }
                }
            }
            var_30 = (((((var_7 && var_14) > ((var_7 ? var_15 : var_17))))) | var_8);
        }
        for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
        {
            var_31 = (min((~var_4), (min((~var_12), (min(var_3, var_18))))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    {
                        arr_48 [i_9] [i_9] [i_9] [8] |= ((((max(var_4, var_17))) * var_5));
                        var_32 = (var_19 | (var_1 <= var_10));
                    }
                }
            }

            for (int i_16 = 1; i_16 < 1;i_16 += 1)
            {
                var_33 = ((((max(var_12, var_8))) == var_18));
                var_34 = (min(var_34, (((((min(((min(var_13, var_1))), (min(var_10, var_17))))) ? ((((-2147483647 - 1) & 32))) : (((var_17 | var_3) / (var_17 < var_15))))))));
                arr_53 [i_9] [i_9] [i_13] = ((-(max(var_3, var_14))));
            }
            for (int i_17 = 2; i_17 < 20;i_17 += 1)
            {
                arr_56 [i_9] [i_13] = (max(((((max(var_6, var_13))) ? ((min(var_2, var_7))) : ((min(var_13, var_11))))), (!var_1)));
                arr_57 [i_17] [14] [i_17] [i_13] = (((((((max(var_13, var_16))) ? (var_8 - var_19) : ((var_2 ? var_16 : var_15))))) ? ((min(var_9, var_2))) : (max(((max(206, (-127 - 1)))), (var_18 / var_11)))));
                var_35 = (max(((((max(var_2, var_6))) ? ((max(var_13, var_11))) : var_16)), ((2147483647 ? 127 : 63))));
            }
            for (int i_18 = 1; i_18 < 19;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    for (int i_20 = 1; i_20 < 18;i_20 += 1)
                    {
                        {
                            var_36 = (max(var_9, var_9));
                            arr_65 [i_13] [i_13] [i_18] [i_13] [i_19] [i_13] = (max((min((min(var_6, var_3)), ((max(var_1, var_12))))), ((var_19 ? var_5 : var_10))));
                            arr_66 [i_9] [i_9] [i_9] [i_9] [i_13] [5] = var_17;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_21 = 3; i_21 < 20;i_21 += 1)
                {
                    for (int i_22 = 4; i_22 < 20;i_22 += 1)
                    {
                        {
                            arr_74 [i_9] [i_13] [i_18] [i_21 - 3] [20] [i_13] = (min((-127 - 1), 0));
                            var_37 = (32 << 0);
                            var_38 = var_8;
                            arr_75 [i_9] [i_13] [i_18] [i_21] [i_22] = (max(9223372036854775807, 7965));
                            var_39 = ((+(((~var_12) ? ((min(var_14, var_11))) : (~var_4)))));
                        }
                    }
                }
                var_40 = ((-(var_9 && var_4)));
                /* LoopNest 2 */
                for (int i_23 = 3; i_23 < 19;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 21;i_24 += 1)
                    {
                        {
                            arr_81 [i_13] [i_13] [i_13] [i_18] [i_23 + 2] [i_24] = ((-(var_0 < var_12)));
                            var_41 = (!((max((var_16 < var_18), var_5))));
                            var_42 ^= (max((min(var_15, var_4)), ((max(var_2, var_14)))));
                            var_43 = (max((min(var_12, (max(var_16, var_12)))), ((((min(var_3, var_8)) == var_5)))));
                            var_44 -= (min((((var_8 | var_13) * var_10)), var_8));
                        }
                    }
                }
            }
        }
        var_45 = var_15;
    }
    #pragma endscop
}
