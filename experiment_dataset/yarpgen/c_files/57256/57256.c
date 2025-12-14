/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_16 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 ^= 702235732;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_3] [0] [7] [1] = var_1;
                        arr_10 [i_0 - 2] [i_0] [i_3] [i_0 + 1] [i_0] = (arr_6 [14] [i_3] [i_3 - 4] [14]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        arr_17 [i_0] [i_1] [i_4] [i_0 - 1] = var_7;
                        var_18 = (min(var_18, var_1));
                    }
                }
            }
            arr_18 [17] [1] [i_1] = (arr_0 [i_1]);
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            var_19 = 874812528;
            var_20 = ((25 ? var_5 : -1));
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    var_21 ^= (((((arr_15 [i_0 - 2] [i_7] [8] [i_8]) + 2147483647)) >> (((arr_11 [i_8] [i_8] [i_8]) + 5074368828756631857))));
                    var_22 = (min(var_22, (-32753 < 4)));
                }
            }
        }

        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_23 = 19;
            var_24 = 62328;
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_29 [i_10] = (2112059632 - 3526442306);
            var_25 += ((var_11 ? 702235728 : (((-25833 > (arr_23 [i_10] [i_0] [i_0] [i_0]))))));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 24;i_13 += 1)
                {
                    {
                        arr_38 [i_0 - 2] [i_11] [i_12] [i_11] = (arr_25 [i_11] [i_13 - 1]);
                        arr_39 [24] [i_11] = var_4;
                        arr_40 [i_0] [3] [i_12] [4] [i_12] [i_11] = var_11;
                    }
                }
            }
            var_26 = (max(var_26, (((((arr_36 [i_11] [i_11] [i_0] [i_0] [i_0] [i_0 - 2]) ^ var_7))))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    {
                        var_27 = (max(var_27, (~var_14)));

                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            var_28 = (!var_1);
                            var_29 = ((((arr_28 [i_14]) ? var_3 : (arr_47 [i_0] [i_15] [i_16]))));
                            var_30 -= 1;
                        }
                        arr_48 [i_11] [8] [i_14] [i_15] = 1;
                        var_31 += var_9;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 23;i_18 += 1)
                {
                    {
                        var_32 += (~3384595096);
                        var_33 += 11898342233771709119;
                    }
                }
            }
            var_34 = (min(var_34, ((((!var_8) == (arr_44 [16] [i_11] [i_11] [i_11] [2] [i_0]))))));
        }
        arr_54 [i_0] = (arr_49 [i_0] [i_0 + 1] [i_0] [i_0 + 1]);
    }

    for (int i_19 = 1; i_19 < 19;i_19 += 1)
    {
        arr_58 [i_19] = ((((((((140 ? 33285996544 : 3640073196252449333))) ? (((min((arr_32 [1] [i_19 - 1] [i_19 + 1] [i_19]), 27333)))) : 11))) ? (((-(arr_19 [16])))) : (max((arr_45 [i_19] [i_19 - 1] [i_19 + 3] [i_19 + 2]), ((var_11 ? 7619074619047872970 : 18446744073709551615))))));
        var_35 = ((~((910372187 ? var_2 : (910372187 & var_5)))));
        arr_59 [i_19] = 702235728;
    }
    var_36 = (max(var_36, 910372198));
    var_37 = (max(var_37, var_13));
    var_38 = min((((var_4 > ((var_11 ? var_4 : 11688039397993214046))))), var_9);
    #pragma endscop
}
