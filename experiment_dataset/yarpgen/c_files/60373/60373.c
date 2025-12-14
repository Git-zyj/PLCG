/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 |= ((-((min((max(var_3, var_0)), var_3)))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_14 = (max(var_14, ((max(var_7, var_8)))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_15 = (((((-120 ? 2777173999 : 15))) != var_8));
                            var_16 = ((!((max(var_6, var_2)))));
                            var_17 = (var_1 && (((var_10 - (max(var_10, var_0))))));
                        }
                    }
                }
            }
            arr_11 [i_0] [i_0] [i_1] = ((((((var_0 || var_9) ^ var_2))) || ((max(var_5, (max(var_2, var_11)))))));
            arr_12 [i_0] [i_1] [i_1] = ((((var_5 ? ((var_9 ? var_4 : var_2)) : ((max(var_5, var_12))))) >= (max((var_10 & var_3), (-39 * 14651496102720303258)))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_17 [i_0] [i_1] [i_5] [i_5] = (((683557814 ? -8 : (-964609756 >= 15))));

                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            arr_21 [i_7] [i_5] = (-964609728 == var_0);
                            var_18 = (-15 ? (max(var_8, (var_0 * var_10))) : ((((max(var_6, var_8))) ? (max(var_9, var_4)) : var_11)));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                var_19 = ((!((max(var_4, var_4)))));
                arr_26 [i_0] [i_8] [i_9] = max(((max(var_6, (max(var_11, var_0))))), ((((max(var_4, var_7))) ? var_5 : var_4)));
                arr_27 [i_0] [i_0] [i_0] = max((((var_5 ? var_6 : var_7))), (max(var_2, var_3)));
            }
            /* vectorizable */
            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {
                var_20 = ((var_2 >> (((var_1 * var_9) + 8950))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            var_21 = (var_6 | var_9);
                            var_22 = -984222908;
                        }
                    }
                }
                var_23 = (min(var_23, (((var_2 ? var_12 : var_9)))));
                var_24 = (((~var_12) | (var_10 | var_8)));
            }
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                var_25 = (((max((!var_0), (max(var_9, var_10))))) || ((min(((var_0 ? var_0 : var_2)), var_11))));
                var_26 = (((var_0 < var_11) ? ((var_8 ? var_6 : var_12)) : ((-(192 / var_5)))));
                var_27 *= (max(var_12, (((max(var_1, var_10)) + var_9))));
                var_28 = (max((max(var_4, var_1)), (((var_4 ? var_1 : var_3)))));
                arr_38 [i_8] = var_10;
            }
            /* vectorizable */
            for (int i_14 = 1; i_14 < 22;i_14 += 1)
            {
                arr_41 [i_14] [i_14] [i_14] [i_14] = (((var_8 && var_6) && var_11));
                arr_42 [i_14] [i_14] [i_14] = -1;
            }
            arr_43 [i_0] = (max((((((max(var_6, var_1))) || var_10))), (((((var_12 ? var_8 : var_4))) ? var_1 : (!var_0)))));
        }
    }

    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        arr_46 [i_15] = (max((max(var_8, (max(var_4, var_6)))), ((max(var_1, var_12)))));
        var_29 *= -240;
    }
    var_30 = (((((((((var_9 ? var_11 : var_11))) >= (max(var_0, var_10)))))) >= ((((max(var_12, var_10))) ? (max(var_10, var_1)) : (((max(var_0, var_9))))))));
    var_31 = ((((var_11 + var_3) && ((max(var_9, var_4))))));
    #pragma endscop
}
