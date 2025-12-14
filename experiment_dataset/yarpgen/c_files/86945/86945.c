/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_16 = var_3;
                            var_17 = 3304595179178917738;
                            arr_11 [i_0] [i_0] = -var_0;
                        }
                    }
                }
                var_18 = (min(var_18, 2147483647));
                arr_12 [i_0] = 2147483619;
            }
            /* vectorizable */
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                var_19 *= var_10;
                var_20 = -2147483619;
            }
            arr_16 [i_0] [i_0] [1] = (~-19103);
            var_21 = 19116;
            var_22 *= (((~(~296564292))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_23 ^= (~1);
                        var_24 = var_10;

                        for (int i_9 = 3; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_25 = 0;
                            arr_26 [i_6] [i_6] [i_7] [12] [i_0] = 8076756568215893845;
                        }
                        for (int i_10 = 3; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_26 = ((~(!-1587232991)));
                            arr_29 [i_0] [i_6] = ((-(~0)));
                            var_27 -= -1717760757;
                            var_28 = (~4034752285);
                            var_29 ^= ((~(((!(!77))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_32 [i_0] [5] [i_11] [i_0] [i_11] = -1315672222;
                            var_30 = (!3998403004);
                            arr_33 [i_0] = (~-4567126618670449249);
                            var_31 = (!-8);
                        }
                    }
                }
            }
            var_32 = 36028797018963967;
            var_33 ^= 250;
        }
        arr_34 [i_0] [i_0] = 8675791152315477716;
    }
    var_34 = 255;
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 19;i_13 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_14 = 2; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            {
                                var_35 = (~-92939891);
                                var_36 = -235;
                                var_37 = ((!(!var_13)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 20;i_19 += 1)
                        {
                            {
                                var_38 = 20;
                                arr_56 [i_13] = -42413;
                            }
                        }
                    }
                }
                var_39 = 203;
                var_40 = var_3;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_20 = 0; i_20 < 12;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 12;i_21 += 1)
        {
            for (int i_22 = 2; i_22 < 11;i_22 += 1)
            {
                {
                    var_41 = 175;
                    var_42 = (!65535);
                    /* LoopNest 2 */
                    for (int i_23 = 1; i_23 < 9;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 12;i_24 += 1)
                        {
                            {
                                var_43 = ((~(~var_1)));
                                arr_69 [i_20] [i_21] [i_22] [i_23] [i_24] = 9175977321324292256;
                                var_44 ^= 5301979257202458300;
                            }
                        }
                    }
                }
            }
        }
    }
    var_45 = 212;
    #pragma endscop
}
