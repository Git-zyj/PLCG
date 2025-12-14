/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 += ((-(min(((max(1, 1))), ((30 ? var_2 : var_13))))));
        arr_3 [5] = (-127 - 1);
        arr_4 [i_0] [i_0] = (min((min(20145, (var_9 == var_8))), (var_1 <= 0)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = (min(var_19, (214 >= 1)));
        var_20 = ((249 ? -5860378245568867879 : 249));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_21 = (max(var_21, ((min(var_6, var_7)))));
                var_22 *= (min(47, ((0 ? ((min(63917, 32766))) : -20157))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_14 [i_4] = (1421357782 << (min((max(var_12, -4458528766528459208)), 28943)));
        var_23 = (max((max(var_4, (max(var_13, -1)))), 13872));
        var_24 = 13872;
        var_25 = (var_9 ? ((((max(1, 180))) ? (min(-106, 4458528766528459200)) : (((max(var_9, 3)))))) : var_9);
        var_26 = -1;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_17 [3] = 1;
        var_27 &= 5860378245568867879;
        var_28 *= (4503599627370495 << 1);
        arr_18 [i_5] [i_5] = -376072830;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_29 ^= ((var_16 ? var_11 : var_14));
        var_30 = var_7;

        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_31 = 264241152;
                arr_25 [i_6] [i_6] [i_6] = ((13479 ? 12 : 254));
                var_32 = (((((39884 ? var_8 : var_15))) ? -57 : var_7));
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            arr_35 [i_6] [7] [i_10] [i_10] &= ((255 ? -19 : 4186112));
                            arr_36 [i_6] [i_6] [23] [i_9] [i_10] [i_11] = ((~((-420439380 ? 39884 : var_7))));
                            arr_37 [i_11] [19] [i_9] [i_7] [i_6] = ((63 ? 255 : var_13));
                            var_33 = -1045277884;
                        }
                    }
                }

                for (int i_12 = 4; i_12 < 21;i_12 += 1)
                {
                    arr_41 [21] [10] [i_9] [i_9] [i_9] [i_9] = -2069782284;
                    var_34 = -40;
                    arr_42 [2] [i_7] [11] = 4458528766528459208;
                }
            }
            arr_43 [i_6] [i_6] [i_7] = 1;

            for (int i_13 = 1; i_13 < 22;i_13 += 1)
            {
                arr_46 [20] [i_7] &= var_9;
                arr_47 [i_6] [i_7] [i_13 + 2] = ((148 >> (77 - 53)));
                var_35 = 77;
                var_36 = var_1;
            }
            arr_48 [i_6] [i_6] = (!(-127 - 1));
        }
    }
    var_37 = (max(var_37, (((max((~var_14), (((1 >> (193 - 174))))))))));
    var_38 = var_13;
    #pragma endscop
}
