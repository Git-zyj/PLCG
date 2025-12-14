/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_18 -= -21;
                var_19 = var_1;
                var_20 = (+(((var_4 | var_16) | var_9)));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_21 *= ((~(var_10 * var_14)));
        arr_6 [i_2] [i_2] = (((arr_2 [i_2] [i_2]) == 255));
        var_22 *= var_5;
        arr_7 [12] = 4294967274;
        var_23 = (min(var_23, (((4294967274 | (arr_1 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
        {
            var_24 = (arr_12 [i_3]);
            var_25 = (max(var_25, -var_10));

            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                arr_15 [i_5 - 1] [i_4] [i_5] [9] = -var_8;
                var_26 = (~(arr_14 [i_5 - 1] [i_5] [i_5]));
            }
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                var_27 = (max(var_27, (((~(arr_5 [i_4]))))));
                var_28 = (~var_8);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_29 = (arr_0 [i_7]);
                            var_30 = ((4294967270 ? (arr_14 [i_6 - 1] [i_7] [i_7 + 2]) : var_2));
                            var_31 = (((4294967272 ? 903007455 : var_14)));
                            var_32 = (var_7 & var_15);
                            arr_22 [i_3] [i_6] [i_3] [i_8] = var_4;
                        }
                    }
                }
                arr_23 [11] [i_6] [11] [i_6] = -65535;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 11;i_10 += 1)
                    {
                        {
                            arr_29 [i_3] [i_4] [i_6] [12] [i_10] = ((1023 + (!var_13)));
                            var_33 = (!var_9);
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                var_34 = (~var_4);
                var_35 = (min(var_35, 451275914));

                for (int i_12 = 2; i_12 < 13;i_12 += 1)
                {
                    var_36 -= (~var_9);
                    var_37 = (!var_10);
                }
                for (int i_13 = 3; i_13 < 11;i_13 += 1)
                {
                    var_38 -= -var_13;
                    var_39 ^= var_9;
                    arr_38 [i_3] [i_3] [i_4] [i_11] [i_3] = (4294967275 + var_1);
                    var_40 = -var_12;
                }
                arr_39 [i_11] = arr_3 [i_11] [i_4];
            }
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
        {
            arr_43 [i_14] [i_3] = (var_2 || var_1);
            var_41 -= (((arr_4 [i_3] [i_14]) / (arr_4 [i_3] [i_14])));
            var_42 = (1 ? 14 : -67);
        }
        for (int i_15 = 1; i_15 < 11;i_15 += 1)
        {
            var_43 = (!-1024);
            arr_47 [i_15] [i_15] = (arr_21 [i_3] [i_3] [i_3] [i_15]);
            arr_48 [i_3] [i_15] [i_3] = var_7;
            arr_49 [i_15] [i_15] = var_0;
        }
        var_44 = var_15;
    }
    for (int i_16 = 0; i_16 < 14;i_16 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_17 = 1; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 14;i_18 += 1)
            {
                {
                    var_45 = ((((min((arr_8 [i_18]), var_6))) / (min((arr_45 [i_16] [i_17 + 1]), var_17))));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 14;i_20 += 1)
                        {
                            {
                                var_46 = (arr_31 [i_17 + 2] [i_17 + 3] [i_17 - 1] [i_17 + 2]);
                                var_47 = (min(((min(26707, var_3))), ((((arr_41 [i_16] [i_16] [i_20]) || (~var_9))))));
                                var_48 *= (min((min((arr_16 [i_17 + 2] [i_20] [i_20] [i_20]), (~var_3))), (!70)));
                            }
                        }
                    }
                    var_49 = (-((var_14 - (arr_2 [i_17] [i_17 + 1]))));
                }
            }
        }
        var_50 = ((~(max(((min(var_13, var_14))), var_3))));
        var_51 = ((var_2 * (~72057594037927935)));
        var_52 *= ((((~((10257194057147084982 ? var_14 : var_8)))) % 18));
    }
    var_53 = 255;
    #pragma endscop
}
