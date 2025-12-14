/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (1659192802 & 121);
    var_12 = (max(var_12, -127));

    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        var_13 = ((((max((arr_1 [i_0 + 1] [i_0]), var_9))) ? (((max((arr_0 [i_0 - 4]), (arr_0 [18]))))) : (((arr_2 [i_0]) * (((arr_1 [i_0] [13]) ? (arr_2 [i_0]) : var_1))))));
        var_14 = ((((-112 ? -112 : var_1)) * 2475116299971912928));
        var_15 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_16 ^= (-(arr_2 [i_1]));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_17 = (min(var_17, -101));
                        arr_12 [i_3] [0] = ((!(arr_4 [i_3] [i_4])));

                        for (int i_5 = 4; i_5 < 10;i_5 += 1)
                        {
                            arr_15 [7] [1] [i_3] [i_3] [i_2] [8] = (((((arr_11 [1] [i_4] [i_3] [i_1]) < (arr_9 [8] [1]))) ? (((var_9 <= (-9223372036854775807 - 1)))) : (((arr_13 [i_5] [i_5]) | var_2))));
                            var_18 = (arr_1 [i_5] [i_3]);
                            arr_16 [i_4] [i_2] [2] [i_3] = (((arr_14 [2] [i_3] [i_3] [i_5 + 2] [11] [1] [i_1]) ? (arr_14 [i_3] [i_2] [i_3] [i_5 + 2] [5] [i_4] [3]) : (arr_14 [2] [i_2] [i_3] [i_5 + 2] [6] [i_5] [11])));
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            arr_23 [3] [i_6] &= (((arr_4 [2] [i_7]) ? (arr_13 [4] [8]) : (((((arr_11 [0] [0] [5] [i_7]) - var_9))))));
            var_19 = (arr_10 [2] [0]);
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 7;i_11 += 1)
                    {
                        {
                            var_20 = (((arr_34 [4] [i_8] [i_11] [1] [i_11] [i_9]) ? (min((min(var_1, var_4)), (arr_0 [18]))) : (arr_22 [i_10] [1])));
                            var_21 = ((((((((!(arr_9 [i_9] [1])))) < (arr_0 [i_6])))) != (((var_5 <= (((!(arr_22 [0] [5])))))))));
                            var_22 = (((+(((arr_26 [i_6] [9] [2]) ? 1571425253 : (arr_8 [6] [i_8] [1]))))));
                        }
                    }
                }
            }
            var_23 = (((arr_18 [i_8] [i_8]) ^ (((arr_18 [i_6] [i_8]) / (arr_18 [i_6] [i_8])))));
        }
        for (int i_12 = 3; i_12 < 10;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 10;i_14 += 1)
                {
                    {
                        var_24 = (max((!var_2), (((arr_19 [i_12 + 1] [i_12 + 1]) / (arr_0 [i_14 + 1])))));
                        var_25 = (((arr_26 [8] [8] [i_12]) - ((((max(-110, 1))) ? ((min(var_5, (arr_35 [7] [i_12] [i_12] [3] [i_12])))) : (max(var_1, var_6))))));
                        var_26 = var_10;
                    }
                }
            }
            var_27 = (min(var_27, (((-(1603233920 <= 9441047673843870299))))));
        }
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 8;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 7;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 8;i_17 += 1)
                {
                    {
                        var_28 = (arr_24 [i_15]);
                        arr_52 [1] [i_15] [8] = (arr_13 [i_6] [i_6]);
                        var_29 = 2475116299971912928;
                        arr_53 [1] [i_15] [i_15] [2] [i_17] = (((-127 - 1) % 4225));
                        var_30 = (((arr_31 [i_16] [i_16 - 1] [i_17 + 3]) ? (((arr_31 [i_6] [i_16 + 4] [i_17 - 2]) - (arr_31 [i_15] [i_16 + 2] [i_17 + 2]))) : (min((arr_31 [6] [i_16 + 4] [i_17 + 1]), -2138174269))));
                    }
                }
            }
        }
    }
    var_31 = (min(((((-9223372036854775807 - 1) ? -47 : -21504))), var_7));
    #pragma endscop
}
