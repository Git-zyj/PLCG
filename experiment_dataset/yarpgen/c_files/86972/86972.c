/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_18 = (((((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 1]))) | (((arr_0 [i_0 + 2]) | 6722))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_13 [i_1 - 1] = min((arr_3 [i_0] [i_3 + 1]), 6721);

                        for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_19 = 4046286942632285605;
                            var_20 = 0;
                            var_21 = var_13;
                            var_22 = 1651683659;
                        }
                        for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_23 = ((~(max((((arr_18 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 129 : 14400457131077266034)), 24))));
                            var_24 *= ((((min(151, (arr_6 [i_1 + 1] [i_0 - 1])))) ? var_9 : (((arr_11 [i_0 - 1] [i_0 + 2]) ? (((-1154750161 || (arr_7 [i_5] [i_2] [i_2] [i_0])))) : ((min(26334, (arr_19 [i_2] [i_2] [i_3] [i_3] [i_5] [i_5 - 2] [i_5 - 1]))))))));
                            var_25 = (max(var_25, ((4411140462838247422 ? (((var_0 > (65040 % var_3)))) : var_0))));
                            var_26 = 1;
                            var_27 = (min((((arr_0 [i_1 + 1]) || (arr_7 [i_3 - 3] [i_3 - 3] [i_3 + 4] [i_3]))), (126 == -32760)));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_2] [i_3 - 3] [i_2] = ((4294967279 ? ((1 ? var_7 : (arr_5 [i_1] [i_2] [i_6 - 2]))) : (arr_19 [i_2] [i_6 + 1] [18] [i_3 + 2] [i_1 - 1] [i_0] [i_2])));
                            var_28 = (arr_16 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_3]);
                            var_29 = (((((2643938435 ? (arr_19 [i_2] [20] [i_2] [i_3 - 2] [i_3 - 2] [i_6] [i_6 - 1]) : 39202))) ? var_8 : -2147483639));
                            var_30 = (((arr_11 [i_0 + 2] [i_1 - 1]) ? 2147483640 : var_5));
                            var_31 = (arr_19 [i_2] [i_2] [i_2] [i_1] [i_2] [i_3] [i_1]);
                        }

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_32 = (max(var_32, (((var_1 ? (((arr_1 [i_2] [i_1]) ? (arr_10 [i_7] [i_2] [i_1] [i_0 + 1]) : (arr_11 [i_2] [i_7]))) : (min((arr_4 [20] [i_2]), (var_2 && 50758))))))));
                            arr_26 [i_0] [i_0] [5] [i_0] [i_3] [i_0] [i_7] = (72 ^ -1154750161);
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_33 = var_15;
                            var_34 = (((arr_25 [6] [6]) ? ((min((arr_16 [i_8] [i_8] [i_8] [i_8] [i_8] [i_3 - 2]), (arr_16 [i_8] [i_8] [i_8] [i_3 + 2] [i_3] [i_3 - 2])))) : (-6429539424339081320 != -2147483639)));
                        }

                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            var_35 = ((2643283637 ? (max((((1651683659 ? var_8 : 1752))), ((14400457131077266034 | (arr_30 [i_0 + 2] [i_0 + 2] [i_2] [i_0] [i_9] [i_0] [12]))))) : var_2));
                            arr_32 [i_0] [i_1 - 1] [i_2] [17] [i_1 - 1] |= (((min((((arr_30 [i_0] [1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1]) / var_4)), ((max(var_0, (arr_24 [i_3])))))) / (arr_14 [i_0] [i_1 - 1] [i_2])));
                            var_36 = 1;
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 21;i_10 += 1) /* same iter space */
                        {
                            var_37 = 1;
                            var_38 = 549755813887;
                            var_39 -= (-32767 - 1);
                        }
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 21;i_11 += 1) /* same iter space */
                        {
                            var_40 = -18300;
                            var_41 -= (arr_27 [i_3 + 3] [i_3] [i_3 - 3] [i_11] [i_11] [i_11]);
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 4; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 19;i_14 += 1)
                {
                    {
                        var_42 = 241;
                        var_43 = 1;
                    }
                }
            }
        }
        var_44 = (min((!var_8), var_11));
    }
    for (int i_15 = 1; i_15 < 21;i_15 += 1) /* same iter space */
    {
        var_45 = (max(var_45, var_2));

        for (int i_16 = 2; i_16 < 21;i_16 += 1)
        {
            arr_52 [i_15] = (arr_5 [i_16] [i_15] [i_15 + 1]);
            /* LoopNest 3 */
            for (int i_17 = 2; i_17 < 20;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    for (int i_19 = 3; i_19 < 22;i_19 += 1)
                    {
                        {
                            var_46 = (max((((-22 && (((364610876 ? -16384 : 1)))))), ((var_7 ? ((-3224148324508454045 | (arr_30 [i_15 + 1] [i_16 - 1] [i_17] [i_18] [i_19] [i_15] [i_15]))) : (var_3 & var_14)))));
                            var_47 = (min(384820709, -2239));
                            var_48 = (max(var_48, ((min((arr_41 [i_16 + 2] [i_17 + 3] [i_15 + 2] [i_17 - 2]), (arr_49 [i_15 - 1] [i_16 + 2]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 4; i_20 < 14;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 0;i_21 += 1)
        {
            {
                var_49 ^= (((arr_16 [i_21 + 1] [i_21 + 1] [i_21] [1] [20] [i_20]) + (arr_44 [9] [i_21] [i_20] [i_20 - 2] [13] [i_21])));
                var_50 -= (min(var_9, 0));
                arr_69 [i_20] = (arr_66 [i_20] [i_21]);
                var_51 = (min(var_51, ((((((((6429539424339081320 ? -549755813887 : (arr_54 [i_20] [i_20 + 2] [i_21] [i_21]))) % 3251641811))) + (max(((var_4 ? (arr_2 [i_20 + 3] [i_20] [i_20 - 2]) : 12323604671122627063)), ((min(39202, (arr_24 [20])))))))))));
                var_52 = (min(var_52, 16));
            }
        }
    }
    #pragma endscop
}
