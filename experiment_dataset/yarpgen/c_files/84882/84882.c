/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= var_4;
        arr_3 [i_0] = (var_5 ? var_0 : var_8);
        var_11 = ((var_0 >> (var_4 - 2177)));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_12 = (var_6 + var_7);
            arr_7 [i_0] [i_1] [i_1] = (!var_10);
        }
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    {
                        var_13 = (1410921981 <= 4985241767293958367);
                        arr_16 [i_0] [1] [i_3] [i_2] = var_3;
                        arr_17 [i_0] [22] [i_2] [i_2] = (var_6 > var_2);
                    }
                }
            }
            var_14 = -var_9;
            var_15 |= ((var_5 ? var_3 : (var_3 <= var_9)));

            for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
            {
                arr_20 [i_2] [i_2] [i_2] = ((~(var_0 != var_0)));
                arr_21 [24] &= var_5;
                var_16 = (max(var_16, (~var_7)));
            }
            for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_17 = var_4;
                    arr_28 [i_2] [i_2] [i_6] = ((var_0 ? var_3 : var_3));
                    arr_29 [i_2] [i_2] [i_6] [i_2] = ((219274098 ? 47 : 3191587681392713057));
                    var_18 = (min(var_18, (((var_0 ? var_9 : var_1)))));
                }
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    var_19 = ((var_1 ? var_2 : var_10));

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_35 [i_0] [i_2] [i_2] = (((var_8 && var_7) ? (var_10 ^ var_0) : var_7));
                        arr_36 [i_0] [i_0] [6] [i_2] [6] [i_0] = (((((var_10 ? var_1 : var_10))) ? (~var_6) : var_3));
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_20 = (min(var_20, var_3));
                        var_21 = (max(var_21, (((var_8 ? var_5 : var_8)))));
                        arr_39 [i_2] = (var_3 ? var_1 : var_7);
                    }
                    arr_40 [i_2] = var_10;
                    var_22 = (min(var_22, var_3));
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    arr_44 [i_0] [i_2] = ((var_9 ? -var_7 : var_8));
                    var_23 = (max(var_23, -var_1));
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_47 [i_12] [i_6 + 1] [i_2] [i_2] [i_0] = (var_9 * var_2);
                    arr_48 [i_0] [i_2] [i_6] [i_12] = (((var_8 + var_3) && (var_2 + var_6)));
                    var_24 = var_3;
                    var_25 = (var_2 - var_2);
                }
                var_26 = ((var_7 ? var_3 : var_8));
            }

            for (int i_13 = 2; i_13 < 21;i_13 += 1)
            {
                var_27 -= ((var_10 ? var_10 : var_4));
                var_28 -= (var_5 + var_4);
            }
            for (int i_14 = 0; i_14 < 0;i_14 += 1)
            {
                arr_55 [i_0] [i_2 + 1] [i_14 + 1] [i_2] = (~var_5);
                var_29 = var_8;
                var_30 = ((!(~var_5)));
                var_31 = (max(var_31, (((var_4 ? var_6 : var_8)))));
            }
        }
        for (int i_15 = 1; i_15 < 22;i_15 += 1)
        {
            var_32 = (var_8 ^ var_8);
            arr_60 [i_0] [i_15] = -var_4;
            var_33 = ((var_10 ? var_3 : var_4));
        }
    }
    var_34 = ((var_7 ? ((-(min(var_3, var_7)))) : var_5));
    var_35 = var_1;
    var_36 += var_7;
    #pragma endscop
}
