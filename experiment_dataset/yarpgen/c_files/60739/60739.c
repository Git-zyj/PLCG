/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((min(var_11, var_8))) != var_0))) + var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((((arr_3 [i_0] [i_0]) != 65519)) || (((var_0 ? 50856 : (arr_1 [i_0] [i_0]))))));
        var_16 *= (((arr_2 [i_0] [i_0]) == 63821));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_17 ^= ((((((((arr_3 [i_1] [i_1]) | var_12)) << (4698 - 4694)))) ? (4723 - 62244) : 4718));

        for (int i_2 = 2; i_2 < 24;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_12 [i_3] = (((((arr_5 [i_2 - 2] [i_3]) ? 9 : 65530)) >= (!29944)));
                var_18 *= ((65530 >= (((((var_11 >= (arr_11 [i_1] [i_2] [i_3] [i_3])))) * (((arr_11 [4] [4] [i_3] [i_3]) | (arr_9 [i_1] [i_1] [i_1])))))));
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_19 = var_5;
                            arr_22 [i_5] [i_2] [i_2] [i_5] [i_6] = 1695;
                            var_20 += ((55145 ? (arr_0 [i_4 + 1]) : ((((arr_17 [i_1] [i_1] [i_1] [i_4] [i_5] [i_6]) && (arr_7 [i_1]))))));
                            var_21 *= (3297 != var_5);
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_22 = ((60854 ? 1695 : 4));
                    var_23 += 65514;
                    var_24 = (((arr_16 [i_2 + 1] [i_2 + 1] [i_2 - 1]) ? (arr_16 [i_2 + 1] [i_2 + 1] [i_2 - 1]) : (arr_16 [i_2 + 1] [i_2 + 1] [i_2 - 1])));
                }
                var_25 *= ((~(arr_11 [i_1] [i_1] [15] [i_1])));
            }
            var_26 += (((var_11 >> 5) % (((~var_13) ? ((4945 ? 65524 : 3287)) : ((max(41291, 4704)))))));
            arr_25 [2] [16] [i_2] = arr_18 [i_1] [i_2] [i_2] [i_2 + 1];
            arr_26 [i_1] [i_1] |= ((((max((arr_7 [i_2 - 1]), 4681))) ? ((15 ? 21602 : 21507)) : 61180));
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 24;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 1; i_9 < 23;i_9 += 1)
            {
                var_27 = 60817;
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 24;i_11 += 1)
                    {
                        {
                            arr_38 [i_10] |= ((63831 ? 33030 : 16228));
                            var_28 -= (4958 % 6173);
                            var_29 += ((var_3 >= (arr_7 [i_9])));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_30 = 65535;
                            arr_47 [i_1] [i_1] [i_1] [i_14] = ((!(arr_8 [20] [i_8])));
                        }
                    }
                }
            }
            var_31 = ((60858 * (63821 % 62244)));
        }
        for (int i_15 = 2; i_15 < 24;i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 23;i_17 += 1)
                {
                    {
                        var_32 = ((((min((arr_2 [i_1] [i_17 + 1]), 62244))) ? (arr_2 [i_16] [i_17 + 2]) : 63821));
                        var_33 = var_6;
                        var_34 += ((60854 >> (((~63335) + 63342))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_18 = 1; i_18 < 22;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 23;i_19 += 1)
                {
                    for (int i_20 = 4; i_20 < 22;i_20 += 1)
                    {
                        {
                            var_35 = 65516;
                            arr_63 [i_1] [i_1] [i_15] [i_19] [i_19] [i_20] = (((((17 ? 65520 : (arr_19 [i_18] [i_18] [i_1] [i_1])))) ? 30720 : 28424));
                        }
                    }
                }
            }
        }
        for (int i_21 = 1; i_21 < 24;i_21 += 1)
        {
            arr_67 [i_21 + 1] = arr_37 [i_1] [i_1] [i_21 - 1] [i_21] [i_21 + 1] [i_21];
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 25;i_22 += 1)
            {
                for (int i_23 = 2; i_23 < 23;i_23 += 1)
                {
                    {
                        var_36 = (((!25449) ? var_10 : ((min((min(63831, 65535)), 65529)))));
                        var_37 += ((((max(59898, 16))) ? (((min((arr_14 [i_1] [i_21 - 1] [i_22] [i_22]), var_12)))) : (arr_50 [i_21])));
                        var_38 *= (min((min(var_4, ((var_11 ? var_12 : var_14)))), (arr_31 [i_1] [i_22] [i_21] [i_1])));
                        var_39 = max(65534, 65534);
                    }
                }
            }
            arr_72 [i_1] [i_21] [i_21 - 1] = (((19646 / 32) & (((arr_2 [i_21] [i_21 + 1]) * 0))));
            var_40 = ((+((var_14 ? (arr_65 [11] [i_21 + 1]) : (arr_65 [i_1] [i_21 - 1])))));
        }
    }
    #pragma endscop
}
