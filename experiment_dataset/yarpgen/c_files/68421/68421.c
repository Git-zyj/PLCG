/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_16);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_21 = (-101 != -101);
        var_22 = (var_12 >= 87);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_23 = var_15;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_7 [i_1] [8] [i_1] |= (!var_14);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_24 = ((!(~var_3)));
                        arr_13 [i_1] [2] [2] &= (!116);
                    }
                }
            }
            arr_14 [i_1] [i_1] [4] = (((!-101) & -101));
            arr_15 [i_2] [2] = var_14;
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        var_25 = (-var_12 ^ 101);
                        var_26 = (max(var_26, var_18));
                        var_27 &= var_9;
                        var_28 = ((~(~var_6)));
                    }
                }
            }
            var_29 = (((!var_6) ^ var_17));
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    {
                        var_30 -= var_3;

                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_31 [2] [i_11] &= var_14;
                            var_31 = var_11;
                            var_32 = (var_2 >= var_3);
                            var_33 = var_2;
                        }
                        var_34 &= 1951280702;
                    }
                }
            }
        }
        var_35 = (((-85 || -82) && 16320));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 15;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 15;i_15 += 1)
                {
                    {
                        var_36 = 2293465003;
                        arr_44 [7] [i_13] [i_15] [7] = (!3895356257732126315);
                        var_37 = -69;
                        var_38 = 100;
                        var_39 = (~0);
                    }
                }
            }
        }
        var_40 = -6;
        arr_45 [1] = var_2;
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 16;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                {
                    arr_50 [i_12] [i_16] [2] = 45881;
                    arr_51 [i_12] [5] = (!var_17);
                }
            }
        }
    }
    #pragma endscop
}
