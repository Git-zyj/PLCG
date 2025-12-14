/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        arr_2 [i_0] = ((~((~((~(arr_0 [i_0])))))));
        var_16 = (--5374590190671053978);
        var_17 -= ((~((max(var_8, (arr_1 [8]))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_18 = ((~(arr_4 [i_1 - 1])));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                {
                    var_19 *= (-(max(-1, var_7)));

                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_14 [i_5] = (~27113);
                            arr_15 [i_1] [i_1] [i_1] [i_4] [i_4] [i_5] = 121;
                        }
                        var_20 = (-(max((~var_5), -1)));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            var_21 = (~var_15);
                            var_22 = ((~(arr_13 [18] [i_3 + 2] [i_7 - 1])));
                            var_23 ^= (~var_0);
                        }
                        var_24 = ((~(~var_11)));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            var_25 *= -37828;
                            var_26 = (~var_3);
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            var_27 = ((~((max(3893, 28670)))));
                            var_28 -= ((~((~(arr_5 [i_2 + 2])))));
                            var_29 = ((!((min((arr_11 [i_2 + 3] [1] [i_2 + 3] [i_2]), -6088670115321652573)))));
                            var_30 ^= (~-6088670115321652597);
                        }
                        var_31 = (max((min(-1, (~var_11))), (((~(arr_12 [i_2 + 1] [i_2 + 3] [i_2 + 1]))))));
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 13;i_12 += 1)
            {
                {
                    arr_36 [i_10] [i_11] [i_12] [i_10] = ((-(~var_13)));
                    arr_37 [i_10] [13] [1] [i_10] = (~-98);
                    arr_38 [i_10] [i_11] [i_12] = ((~((max(120, (arr_29 [i_12 + 3] [i_12 + 3]))))));
                    var_32 -= (max((~var_13), (~0)));
                }
            }
        }

        for (int i_13 = 3; i_13 < 15;i_13 += 1)
        {
            var_33 *= ((~(~var_2)));
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        var_34 = ((-((min((arr_17 [i_13 - 1] [i_13] [i_13 - 2] [i_13 + 2] [i_14 - 1]), 31975)))));
                        var_35 = (~(min((arr_44 [i_14] [i_14 - 1] [5] [i_14] [i_15]), var_3)));
                        arr_46 [0] [i_13] [i_14] [i_15] = (~-1);
                        var_36 ^= ((!((max(var_6, -98)))));
                    }
                }
            }

            for (int i_16 = 0; i_16 < 0;i_16 += 1)
            {
                var_37 = ((~(max((!61643), (max((arr_41 [4] [i_13 - 2] [i_16 + 1] [1]), 2147483647))))));
                var_38 -= (-(~var_5));
                var_39 = (+-5374590190671053982);
            }
            for (int i_17 = 4; i_17 < 13;i_17 += 1)
            {
                var_40 = (min(((max((arr_22 [i_13 - 1] [i_13 - 1] [i_13 - 3] [i_17 - 1]), var_4))), -var_10));
                var_41 ^= (max((arr_39 [i_13 + 1] [i_17 + 1]), -105));
                var_42 = ((!((max((arr_22 [i_13] [i_17 - 4] [1] [i_17 + 2]), -1)))));
            }
            for (int i_18 = 0; i_18 < 17;i_18 += 1)
            {
                var_43 ^= -20432;
                var_44 = ((~(arr_27 [i_18] [i_13] [15] [i_13 + 1] [i_10])));
            }
        }
        /* LoopNest 3 */
        for (int i_19 = 2; i_19 < 14;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 17;i_21 += 1)
                {
                    {
                        arr_62 [i_19] [i_19] = (max(-23, 42804));

                        /* vectorizable */
                        for (int i_22 = 0; i_22 < 17;i_22 += 1)
                        {
                            var_45 -= 71;
                            var_46 *= ((~(arr_53 [i_19] [1] [i_19 + 3] [i_21])));
                            var_47 = ((~(arr_17 [i_22] [i_21] [i_21] [i_21] [i_19 - 2])));
                            arr_65 [i_19] [i_19] [1] [i_21] [1] = -var_2;
                            var_48 = (!65535);
                        }
                        var_49 = ((-((-(arr_12 [i_19 + 2] [i_19 + 1] [i_19 + 1])))));
                        var_50 *= (max(-var_15, 12212));
                    }
                }
            }
        }
    }
    var_51 = (max(var_14, (~-9223372036854775806)));
    var_52 -= (((~(max(var_15, var_4)))));
    #pragma endscop
}
