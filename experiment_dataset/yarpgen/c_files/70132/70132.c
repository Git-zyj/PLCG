/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] = var_1;
            var_11 = var_7;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_12 = var_2;
            var_13 ^= var_0;

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                arr_13 [i_0 + 1] = var_4;
                var_14 = var_1;
            }
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                var_15 = var_1;
                var_16 = var_0;
                var_17 = var_9;
                var_18 = var_4;
            }
        }
        for (int i_5 = 4; i_5 < 14;i_5 += 1)
        {
            var_19 = var_9;
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_20 = var_4;
                            arr_27 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1] = var_4;
                            var_21 = var_0;
                        }
                    }
                }
            }
            var_22 = (min(var_22, var_7));
            var_23 += var_0;
            var_24 = var_3;
        }
        var_25 |= var_1;
    }
    for (int i_9 = 4; i_9 < 9;i_9 += 1)
    {
        var_26 ^= var_2;
        arr_31 [i_9 - 2] [i_9 - 3] |= var_2;
        var_27 = (max(var_27, var_3));
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 3; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        var_28 = var_6;
                        var_29 = var_3;
                        arr_43 [i_11] [i_11] [i_11] [i_11] [i_11] = var_2;
                        var_30 = var_9;
                    }
                }
            }
        }
        var_31 = var_2;
    }
    /* vectorizable */
    for (int i_14 = 3; i_14 < 15;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 3; i_15 < 17;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                {
                    arr_52 [i_14] [i_15] [i_16] [i_16] = var_7;
                    var_32 = var_0;
                }
            }
        }
        arr_53 [2] &= var_5;

        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            var_33 = (max(var_33, var_3));
            var_34 = var_4;
        }
    }

    for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
    {
        arr_59 [i_18] = var_8;
        arr_60 [i_18] [i_18] = var_6;
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 19;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 19;i_20 += 1)
            {
                for (int i_21 = 3; i_21 < 18;i_21 += 1)
                {
                    {
                        var_35 = var_5;

                        /* vectorizable */
                        for (int i_22 = 0; i_22 < 19;i_22 += 1)
                        {
                            var_36 = var_1;
                            arr_71 [i_18] [i_18] [i_20] [i_21 - 2] [i_22] [i_20] = var_4;
                            var_37 = var_2;
                            var_38 = (min(var_38, var_7));
                        }
                        /* vectorizable */
                        for (int i_23 = 1; i_23 < 17;i_23 += 1)
                        {
                            var_39 = var_5;
                            arr_75 [i_23] [i_19] [i_20] [i_23] [i_23] [18] = var_3;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 19;i_24 += 1) /* same iter space */
    {
        var_40 = var_9;
        var_41 ^= var_1;
        arr_78 [i_24] = var_5;
        var_42 &= var_7;
        var_43 = (max(var_43, var_7));
    }
    /* LoopNest 3 */
    for (int i_25 = 1; i_25 < 15;i_25 += 1)
    {
        for (int i_26 = 0; i_26 < 16;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 16;i_27 += 1)
            {
                {
                    arr_87 [i_26] [8] |= var_5;
                    /* LoopNest 2 */
                    for (int i_28 = 1; i_28 < 13;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 16;i_29 += 1)
                        {
                            {
                                arr_93 [i_25] [i_25] [i_27] [i_25] [i_28 + 3] [i_25] = var_7;
                                arr_94 [i_25] [i_25] [i_25] [i_28] [9] = var_7;
                                var_44 = var_9;
                                var_45 = var_5;
                            }
                        }
                    }
                    var_46 = (min(var_46, var_0));
                    var_47 = var_0;
                }
            }
        }
    }
    var_48 ^= var_4;
    #pragma endscop
}
