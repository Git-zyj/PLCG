/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    {
                        var_19 = 255;
                        var_20 -= 94;
                        var_21 = (max(var_21, ((min(-var_15, ((max(236, var_7))))))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            arr_14 [i_0] [20] [4] [i_2 - 4] [i_3] [i_4] [i_4] = -var_8;
                            arr_15 [i_0] [i_1] [1] = 20;
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_22 = min(228, var_1);
                            var_23 = max(89, (!6));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_24 -= var_11;
                            arr_23 [i_0] = var_5;
                            arr_24 [i_0] [i_0] [i_2 + 1] [i_3] [i_0] = -var_11;
                            var_25 = 27;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_26 |= var_17;
                            var_27 -= 255;
                            var_28 |= var_8;
                        }
                    }
                }
            }
        }
        var_29 = (min(var_29, var_0));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                arr_36 [i_8] = var_4;

                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    arr_40 [i_8] [4] [i_8] [i_10] [0] = 192;
                    var_30 = 240;

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_31 = (max(var_31, var_5));
                        arr_43 [1] [i_8] [i_9] [i_8] [i_11] [i_12] = var_9;
                        var_32 = var_3;
                        var_33 = 255;
                        var_34 = (!var_4);
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_35 = var_5;
                        var_36 = (min(var_36, 82));
                        var_37 = -var_1;
                    }
                    for (int i_14 = 2; i_14 < 14;i_14 += 1)
                    {
                        var_38 = 232;
                        var_39 = var_16;
                        arr_48 [i_8] [i_8] = 108;
                    }
                    for (int i_15 = 3; i_15 < 15;i_15 += 1)
                    {
                        var_40 |= -var_7;
                        arr_51 [i_8] [i_9] [i_8] = var_2;
                        var_41 = 148;
                    }
                    var_42 = -var_5;
                }
                for (int i_16 = 3; i_16 < 15;i_16 += 1)
                {
                    var_43 = var_16;
                    var_44 = (max(var_44, 255));
                    var_45 = var_11;
                }
                for (int i_17 = 0; i_17 < 16;i_17 += 1)
                {
                    arr_58 [i_8] = var_8;
                    arr_59 [i_8] [i_9] [i_8] [i_17] = var_15;
                }
                var_46 = var_13;
            }
            var_47 = var_9;
            arr_60 [i_8] = var_13;
            var_48 = 223;
        }
        for (int i_18 = 3; i_18 < 14;i_18 += 1)
        {
            arr_64 [i_8] = var_4;
            arr_65 [12] &= var_4;
            var_49 ^= 60;
            var_50 = var_12;
        }
        for (int i_19 = 3; i_19 < 13;i_19 += 1)
        {
            var_51 += -var_18;
            var_52 = var_4;
            var_53 = (min(var_53, -1));

            for (int i_20 = 0; i_20 < 16;i_20 += 1)
            {
                var_54 = (!174);
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 12;i_21 += 1)
                {
                    for (int i_22 = 4; i_22 < 13;i_22 += 1)
                    {
                        {
                            var_55 = var_18;
                            var_56 = var_5;
                            arr_75 [i_8] [i_21] [i_8] = -19;
                            var_57 = (min(var_57, 19));
                        }
                    }
                }
            }
            for (int i_23 = 2; i_23 < 15;i_23 += 1)
            {
                var_58 = (max(var_58, var_14));
                var_59 = var_14;
            }
        }
        var_60 = 136;
        var_61 = var_11;
        var_62 = 254;
    }
    var_63 = var_0;
    var_64 = 174;
    var_65 = min(var_2, 27);
    #pragma endscop
}
