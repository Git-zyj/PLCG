/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_15 = var_5;
            var_16 = var_10;
            arr_6 [1] = (28643 ? var_4 : var_5);
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    arr_14 [10] = ((var_8 ? var_10 : var_11));
                    var_17 = var_5;
                }
                arr_15 [i_0] = (((30140 ? var_7 : (-32767 - 1))) / var_12);
                var_18 = (var_9 / 1264045348);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_19 |= var_9;
                            var_20 = (var_2 ? var_12 : -23570);
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                arr_24 [16] [i_2] [i_2] [i_0] &= (-1264045349 ? var_14 : 1264045348);
                var_21 = var_9;
            }
            arr_25 [i_0] [i_0] = var_0;
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            var_22 = ((0 ? 23766 : -1264045335));
            var_23 += ((var_10 / ((-2042906305 ? -1264045355 : -1264045349))));
        }
        var_24 = (-2124051916 ? -23752 : -23763);
        var_25 = (var_13 ? var_0 : 27876);
        arr_30 [i_0] = (-var_7 ? var_2 : ((var_3 ? var_13 : var_13)));
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
    {
        var_26 = (min(var_26, var_11));

        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_27 = (min(var_4, 23766));
            arr_37 [i_9] [i_10] [i_10] = ((-2147483616 ? -23773 : var_4));
            var_28 &= ((var_1 ? 1210738767 : var_5));
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
    {

        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            arr_42 [i_11] [i_12] [i_11] = var_7;
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    {
                        var_29 = (var_4 ? var_7 : 338836051);
                        arr_50 [i_11] [i_12] [1] [i_14] = (~0);
                    }
                }
            }
        }
        arr_51 [i_11] = ((-2147483647 - 1) ? var_8 : var_0);
        var_30 = ((var_14 ? 23762 : 677743892));
        var_31 |= (-677743893 ? var_11 : var_12);
    }
    var_32 = var_3;
    var_33 += (~var_0);
    #pragma endscop
}
