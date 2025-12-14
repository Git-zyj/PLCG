/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (((var_7 > -var_1) ? ((0 ? -1 : 255)) : var_7));
        arr_4 [i_0] [i_0] = (~237);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_16 = (min(var_16, (((((~(~var_4))) % (var_11 / var_9))))));

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_17 = var_11;
                var_18 = ((255 ? 18 : 1));
                var_19 = -0;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_19 [i_1] [i_3] [i_3] [i_4] [i_5] [i_5] = ((18446744073709551615 ? (var_12 == var_2) : var_10));
                            var_20 = -var_12;
                            arr_20 [i_5] [i_4] [15] [i_4] [11] = ((0 ? 192 : 2041429292357918917));
                        }
                    }
                }
                var_21 = (var_0 && var_0);
            }
            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
            {
                var_22 -= var_4;
                arr_24 [i_1] [i_1] = ((var_6 & (~var_1)));
                arr_25 [i_2] = (((var_4 > var_5) * (var_0 == var_1)));
                arr_26 [1] = 200;
                arr_27 [i_6] [13] = -122;
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
            {
                arr_30 [i_7] [5] [i_7] [i_2] = (-var_13 / -var_9);
                var_23 *= (!var_5);
                var_24 = ((-(var_7 & var_5)));
                var_25 = var_11;
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
            {
                arr_34 [13] = (((var_11 ? var_1 : var_3)));
                var_26 = -133;
            }
            arr_35 [i_2] [i_2] [5] = (~68);
            arr_36 [12] [11] [11] = (~252201579132747776);
            arr_37 [i_1] [i_1] [3] = ((!(40656 / 129)));
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_27 += ((((-(4467570830351532032 % -123))) & var_7));
            var_28 = 2334397611;
        }
        for (int i_10 = 1; i_10 < 16;i_10 += 1)
        {
            arr_43 [1] [i_10] [i_10 - 1] = ((~((~((var_0 ? var_14 : var_1))))));
            arr_44 [i_1] [i_1] [11] = ((((var_7 ? var_7 : var_7))));
            var_29 ^= (((~(~var_13))));
            arr_45 [i_1] [i_1] = (var_14 << var_14);
        }
        var_30 = ((var_0 < ((var_3 ? (~var_12) : var_9))));
        var_31 = var_5;
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        arr_48 [16] [i_11] = ((((((35681 ? -262569956234682353 : 1)) + 9223372036854775807)) >> (var_10 + 74)));
        var_32 = ((-(((2120 / 34) ? var_11 : var_5))));
    }

    for (int i_12 = 1; i_12 < 17;i_12 += 1)
    {
        arr_51 [i_12] [3] = 6;
        var_33 = (!14902);
        var_34 = (min(var_34, (((var_12 ? ((var_6 ? -var_3 : var_2)) : (((-(var_12 > var_7)))))))));
        arr_52 [i_12] [i_12] = ((-((var_14 ? (!var_1) : var_12))));
    }
    #pragma endscop
}
