/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 += ((var_13 >= (((1737070753 * var_10) * 174))));
        var_15 = (max(-47, 2557896568));
        var_16 = (max(var_16, (1737070753 || 3108588056)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (!var_8);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] [11] [3] [i_4] = ((var_1 && (-27 == 2233395869)));
                        var_17 = (240402330 >> (240402342 - 240402333));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_18 ^= var_8;
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_19 = 3282545614;
                        arr_21 [i_1] [i_5] = (!-50);
                        arr_22 [i_5] [i_7] [i_6 + 1] [i_5] [20] [i_5] = 3836510572;
                        var_20 += ((~(-14316 - 0)));
                    }
                }
            }
            var_21 |= (((-2147483647 - 1) && (~var_13)));
        }
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (-var_10 + -22)));
        arr_27 [i_8] = (1909257676 * var_1);

        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            arr_32 [i_9] [i_9 - 1] [i_9 - 1] = -2155369163;
            var_23 |= -480395990;
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        var_24 -= (-18498 | -726223656);
                        arr_39 [i_8] [i_10 - 1] = ((71 + (((!(var_9 ^ 1))))));
                    }
                }
            }
            var_25 -= min(4294967295, -54);
            arr_40 [i_8] = (((max(32767, -27))));
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            var_26 = 4294967295;
            arr_44 [i_8] [i_12] [i_8] = (var_6 * 4294967286);
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        {
                            var_27 = var_11;
                            arr_53 [i_12] [i_12] [i_15] = (min(var_2, var_7));
                            var_28 = var_4;
                            arr_54 [15] [15] [i_14 + 1] [i_12] [15] [i_14 + 1] [i_14] = ((var_7 - (!var_6)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 22;i_17 += 1)
                {
                    {
                        var_29 = 1;
                        var_30 = (max(var_30, ((max(24, (32749 - 2355827980))))));
                        var_31 = (!717624912);
                        var_32 -= -106;
                    }
                }
            }
            arr_60 [i_8] [i_12] = (!4042317308);
        }
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            arr_64 [1] [i_8] [i_8] = (~121);
            var_33 = 2115657663;
        }
    }
    for (int i_19 = 0; i_19 < 24;i_19 += 1) /* same iter space */
    {
        arr_67 [i_19] = var_4;
        var_34 = ((!(((-1549888957 * (968714392 * var_9))))));
    }
    var_35 = (max(var_35, -255));
    var_36 = (max(var_36, 4294967295));
    #pragma endscop
}
