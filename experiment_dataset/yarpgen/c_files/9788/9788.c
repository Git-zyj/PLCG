/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = ((((((-((((arr_0 [i_0] [i_0]) || -108))))) + 2147483647)) >> (!-var_4)));
        var_13 = (min(var_13, (((~((-(arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 ^= ((-((~((-(arr_1 [i_0])))))));
                    var_15 = ((((137438953471 - (!1))) - (((-(var_11 != -1))))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_16 = (((arr_2 [i_0] [i_1]) / (((-1975763900 + 2147483647) << (var_5 - 50)))));
                            var_17 = ((((!(!93)))));
                            var_18 = ((~(~var_8)));
                            arr_14 [i_0] [i_0] [i_0] [1] [2] [i_0] = -9;
                        }
                        arr_15 [i_0] = (((-2147483647 - 1) - (((!(arr_4 [i_3]))))));
                    }
                }
            }
        }
        var_19 = (max(var_19, ((((((((arr_12 [i_0] [2] [i_0] [1] [i_0] [2] [i_0]) && (~var_5))))) % (((~(arr_11 [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        var_20 = ((!((!(arr_16 [i_5 + 3])))));

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_24 [i_7] [i_7] [i_7] = -24;
                        var_21 &= (((arr_20 [i_5 + 3]) - (!56)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    {
                        var_22 += (~-38);
                        arr_29 [0] [3] [i_5] [i_5] [i_5] = (~9);
                        arr_30 [i_5] [i_5] [i_5] [i_5 - 1] |= (!(9 || 1833694069));
                    }
                }
            }
            var_23 = ((!(((-(arr_19 [i_5]))))));
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            var_24 = (~var_2);
            var_25 = (min(var_25, (!var_9)));
            arr_33 [i_5 + 3] [i_5] = (~(arr_17 [i_5 + 4]));
        }
        arr_34 [i_5] = -2;
        arr_35 [i_5] = ((-(var_6 / 16376)));
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 8;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            var_26 *= ((-(((arr_32 [9] [9]) / var_5))));
            var_27 = 2103934162;
        }
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 8;i_16 += 1)
                {
                    {

                        for (int i_17 = 3; i_17 < 9;i_17 += 1)
                        {
                            arr_53 [i_12] [i_14] [i_14] [8] [i_14] = (((!33552384) - ((~(arr_23 [i_12])))));
                            var_28 = (~var_2);
                        }
                        for (int i_18 = 0; i_18 < 11;i_18 += 1)
                        {
                            var_29 = (min(var_29, 32740));
                            var_30 |= (~((65 * (arr_45 [i_16] [i_18]))));
                            var_31 = (((arr_9 [i_12 + 1] [i_14] [i_12 + 1]) * -0));
                        }

                        for (int i_19 = 0; i_19 < 11;i_19 += 1)
                        {
                            arr_60 [i_19] [8] [i_19] [i_19] [i_12] [i_19] [i_12] = -1;
                            arr_61 [i_12] [i_12] [i_12] [i_16] = ((!(arr_32 [i_12 + 1] [i_12 + 3])));
                        }
                        arr_62 [i_12] [i_12] [i_12 - 1] = (((arr_31 [i_12 + 2]) && 1));
                        var_32 = ((((1 * (arr_10 [i_12] [i_14] [i_15] [i_14] [i_12] [i_14] [1]))) | var_3));
                    }
                }
            }
        }
        var_33 = (((arr_5 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1]) * var_7));
    }
    var_34 = ((47 >> (((8 + 238) - 217))));
    var_35 = (+-var_3);
    #pragma endscop
}
