/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_9 [i_0 + 1] = ((1 ? 7346122779362749988 : var_8));
                            arr_10 [i_0] [i_0] [i_2] [i_1] [i_2] [i_2] = ((min((max(2007953682, 3)), 64)));
                            arr_11 [i_0 + 1] [i_1 + 1] [i_2] = (max((((var_6 == var_6) ? var_4 : var_19)), var_18));
                        }
                    }
                }
                var_20 &= var_18;

                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    var_21 = ((min((min(var_19, var_17)), (((-1621318079 ? -34 : 3))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_5] [i_0] [i_0 + 1] [i_0] = (min(var_0, var_10));
                                arr_21 [i_5] = var_5;
                            }
                        }
                    }

                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        arr_24 [1] [1] [4] [i_7] [1] = var_10;
                        var_22 = (max(var_22, var_17));
                    }
                }
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    arr_28 [i_0] [i_1] [8] |= ((((((var_13 ? var_14 : var_19))) ? (((var_0 ? var_10 : var_18))) : var_10)));
                    arr_29 [i_8] = (var_8 < (((!(-2657525776377327617 + 11100621294346801625)))));
                    arr_30 [4] [i_8] [i_8] [4] = (!((((((min(var_0, var_13)))) | var_16))));
                }
                arr_31 [i_0] [i_0] = (var_4 ? (((var_12 ? var_12 : var_11))) : (var_1 % var_12));
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                arr_40 [i_9] [i_9] [i_9] [i_9] = (min(57, var_3));
                                var_23 += (((((2007953682 >= (min(var_2, var_4))))) * ((min(var_13, var_14)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 += var_13;
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 19;i_13 += 1)
        {
            {
                arr_46 [i_12] [i_13] = ((var_12 / ((max(var_14, var_7)))));
                arr_47 [i_13] [i_13 + 2] = var_17;
                arr_48 [i_12] [i_12] &= ((var_17 ? (((var_9 ? var_14 : var_10))) : ((((((var_15 ? var_10 : var_19))) ? var_11 : var_13)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 15;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        {
                            var_25 += (~var_1);
                            var_26 = (min(var_1, (min(32767, 11100621294346801635))));
                            var_27 = max((~var_16), (max(0, 11100621294346801627)));
                            arr_63 [i_14] [i_15] [i_17] [i_16] = ((~(~var_13)));
                        }
                    }
                }
                var_28 = (min(var_28, var_14));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        {
                            arr_68 [i_14] [i_15] [i_15] [1] [13] = (((((!(((var_6 ? var_7 : var_4)))))) == (((var_9 || ((min(var_8, var_14))))))));
                            arr_69 [i_15] [i_15] [i_19] [i_19] [11] = ((((var_9 + 2147483647) << (var_8 - 348146204))));
                        }
                    }
                }
                arr_70 [i_14] [i_15] = var_17;
            }
        }
    }
    #pragma endscop
}
