/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 *= var_5;
        arr_2 [i_0] = 31649;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_19 = ((var_12 ? 33866 : ((-(arr_4 [i_1 - 1])))));
                                arr_15 [i_1] [i_2 + 2] [i_3] [i_4] [i_5] = ((var_11 ? (arr_3 [i_4] [i_2 + 1]) : ((var_12 ? 33886 : var_1))));
                                var_20 *= var_17;
                            }
                        }
                    }
                    var_21 = 33872;
                    var_22 ^= (((((((max(31630, 33866))) ? (min(818871652, (arr_12 [i_1] [i_1] [i_1] [i_3 - 1] [i_3]))) : (((((arr_6 [i_1] [i_3 - 1]) >= var_17))))))) ? 33887 : 38));
                }
            }
        }
        var_23 = 31679;
    }
    var_24 = var_2;
    var_25 = 31649;
    var_26 *= -1;

    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_27 = ((!((max((arr_16 [i_6] [i_6]), ((31667 ? 0 : 31792)))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                {
                    var_28 ^= (-(arr_23 [i_6] [9] [i_8]));
                    arr_24 [i_7] [i_7] = (arr_20 [i_7]);
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    var_29 = (max(225, 1));
                    var_30 = ((((((((33844 ? 178 : var_13))) ? ((((0 != (arr_28 [17] [i_11]))))) : (arr_30 [i_9] [i_9])))) ? 24 : ((min(33866, -1)))));
                    var_31 = 1;
                    var_32 = 0;
                }
            }
        }
        var_33 ^= (arr_27 [i_9]);
        var_34 = (min(var_34, (((((arr_31 [i_9]) ? (arr_31 [i_9]) : 9223372036854775807))))));
    }
    for (int i_12 = 1; i_12 < 14;i_12 += 1)
    {
        var_35 = ((1 ? (1714631490 + 18662) : (max(1222334871, (var_13 - 8879351527075636089)))));

        /* vectorizable */
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            var_36 += -7921703293114328;
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 0;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 16;i_15 += 1)
                {
                    {
                        var_37 += 8197070600857112850;
                        var_38 = (((arr_44 [i_12] [i_12 - 1] [i_14] [i_12] [i_15 - 1] [i_15]) ? (arr_44 [i_12 + 2] [i_12 - 1] [i_12 - 1] [i_12] [16] [i_15]) : var_13));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_16 = 3; i_16 < 16;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 14;i_17 += 1)
                {
                    for (int i_18 = 4; i_18 < 15;i_18 += 1)
                    {
                        {
                            arr_53 [i_12 + 3] [i_12] [i_12] [i_12] [i_12] = ((-(arr_44 [i_18] [i_18] [i_18 - 3] [i_12] [i_18 - 1] [4])));
                            var_39 = var_7;
                            var_40 &= ((33887 ^ (arr_43 [i_18 - 1] [i_18] [i_17 + 2] [i_16] [11] [i_12 + 1])));
                        }
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 17;i_19 += 1)
        {
            var_41 = (min(-8663857334253518569, ((var_10 % (arr_34 [i_12 + 3])))));
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                for (int i_21 = 2; i_21 < 15;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 17;i_22 += 1)
                    {
                        {
                            var_42 = (max(var_42, (((var_13 == ((((max(255, 8879351527075636062))) ? (max(18446744073709551615, var_7)) : 1)))))));
                            var_43 = (min(var_43, var_10));
                            var_44 ^= min(((((1 ? 31669 : 11591)))), (max(((1 ? (arr_32 [0] [0] [i_20] [i_21]) : (arr_16 [i_12] [i_12]))), (!var_1))));
                            var_45 = (min(var_45, (arr_22 [i_12] [2] [i_21 - 1] [i_22])));
                        }
                    }
                }
            }
        }
        var_46 = (((((((((-1 ? var_13 : var_14)) + 2147483647)) << (((~var_8) - 3580))))) ? var_15 : 10129028073749776753));
        /* LoopNest 2 */
        for (int i_23 = 1; i_23 < 16;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 17;i_24 += 1)
            {
                {
                    arr_71 [i_12] [i_12] = 1;
                    var_47 = (((min(-36028797018963968, 21052)) <= ((min(((548729541 ? (arr_65 [i_12 + 3] [i_23]) : (arr_67 [i_24]))), -1)))));
                }
            }
        }
    }
    #pragma endscop
}
