/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((((((var_4 ? 1 : 1))) && (1 + 1)))), (((0 ? 1 : 1)))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = ((1 ? var_3 : 1));
        arr_3 [i_0] = (--1);
        arr_4 [i_0] = var_0;
        var_12 = 1;
        arr_5 [i_0] = (((!1) ? 1 : var_10));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_13 = var_3;
                    var_14 = (((!0) ? 1 : (!1)));
                }
            }
        }
        var_15 = ((1 ? 0 : 1));
        var_16 -= 0;
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_15 [i_4] = ((1 ? 1 : 1));
        var_17 = (min(var_17, 1));
        var_18 = (min(var_18, var_6));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_19 += (((~(~var_9))));
                        var_20 = -1;
                        var_21 = var_4;
                        var_22 = 1;
                    }
                }
            }
            var_23 -= (min(((~((1 ? 1 : 1)))), 1));
            var_24 = ((((((((1 ? 1 : 1))) ? (!1) : var_7))) ? ((~(1 ^ 1))) : (~1)));
            var_25 = (!((!(max(0, 1)))));
        }
        arr_26 [i_5] = (((!var_7) ? (~var_10) : ((1 ? 0 : 0))));
    }
    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_26 = (1 > (!1));
                                var_27 = 1;
                            }
                        }
                    }
                    arr_43 [i_11] [i_10] [i_9 + 1] = 1;
                    arr_44 [i_9] [i_10] [i_11] [i_10] = 0;
                }
            }
        }
        var_28 = var_5;
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        var_29 = ((!1) > ((1 ? 0 : 1)));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    {
                        arr_56 [i_15] [i_14] = ((-var_0 ? 1 : var_8));
                        arr_57 [i_14] [i_15] [1] [i_14] = -0;
                        var_30 = ((((1 ? var_0 : var_2)) - -var_2));
                    }
                }
            }
        }

        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            var_31 = 1;
            arr_61 [i_14] [i_14] [i_18] = ((~((0 ? 1 : 1))));
        }
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            arr_64 [i_14] [1] [i_19] = ((~(var_3 * var_5)));
            var_32 = 1;
            var_33 = (0 * 1);
        }
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            var_34 = (min(var_34, (((var_4 ^ ((1 ? var_0 : var_10)))))));
            arr_69 [i_14] [1] [i_14] = ((1 ? var_6 : (var_0 % 1)));
        }
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            var_35 = (min(var_35, var_4));
            arr_72 [i_14] [i_14] = ((1 ? var_10 : ((var_7 ? var_6 : var_0))));
            var_36 = (!var_8);
        }
    }

    for (int i_22 = 0; i_22 < 1;i_22 += 1)
    {
        var_37 = (max(var_37, (((((!(((0 ? var_7 : 0)))))) > 1))));
        arr_77 [i_22] = ((~((var_10 ? 1 : 1))));
        var_38 ^= ((((!(~var_4))) ? (1 <= 1) : ((-((min(0, 1)))))));
        var_39 = ((-1 ? (((((var_6 ? 1 : 1))) ? 1 : 1)) : (((max(1, 1)) ? ((1 ? 0 : 1)) : (~1)))));
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 1;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    {
                        var_40 = (min(var_40, var_4));
                        var_41 = ((var_5 ? 1 : (~1)));
                    }
                }
            }
        }
        var_42 = (!0);
        arr_88 [i_23] [i_23] = ((1 * ((1 ? 1 : 1))));
    }
    for (int i_27 = 0; i_27 < 1;i_27 += 1) /* same iter space */
    {
        arr_91 [i_27] = -1;
        var_43 = ((var_6 ? var_6 : ((-(1 ^ var_9)))));
    }
    for (int i_28 = 0; i_28 < 1;i_28 += 1) /* same iter space */
    {
        arr_96 [i_28] = (((0 * 1) ? 1 : (max(-0, ((1 ? 1 : 1))))));
        var_44 |= ((((!(1 ^ 1))) ? 1 : 1));
    }
    #pragma endscop
}
