/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_16 ? (max(var_16, var_12)) : (((max(var_10, var_9))))))) ? var_8 : ((min(var_10, 86)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (~0);

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = (max(var_18, (((((var_1 ? var_14 : var_15) >> ((((var_9 << (var_15 - 2326326315))) - 237166577))))))));
                        var_19 = 84;
                        arr_12 [i_3] = ((((max((arr_4 [i_0]), (((arr_9 [2] [i_3]) ? var_15 : var_16))))) ? -3545109663 : (arr_7 [i_0] [i_1] [i_2] [i_3])));
                    }
                    arr_13 [i_2] = (~-189);
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_20 = ((14325890251803505328 ? 7609669715798444106 : ((max(((23949 ? 24172 : 1)), 171)))));
                    arr_18 [1] [i_1] [i_0] = ((((var_3 == (~var_11))) ? ((+((var_16 ? (arr_2 [3]) : (arr_8 [i_0] [i_1] [i_4]))))) : var_1));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_21 = (max(var_21, (((((min((~107), var_0))) ? ((min(((0 ? 81 : 0)), ((max(0, 255)))))) : ((-(arr_1 [i_4] [i_5]))))))));
                        var_22 *= (~89);
                        arr_21 [i_0] [i_1] [i_4] [3] = (((((var_14 / ((var_1 ? var_14 : var_5))))) ? ((var_6 / (var_9 ^ var_16))) : var_3));
                    }
                    arr_22 [i_0] [i_0] [i_1] [i_4] = (min(((min(98, 255))), ((~(~25)))));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    var_23 = (((~var_3) ? var_6 : (arr_16 [i_6 + 2] [4] [i_0] [6])));

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_24 = (min(var_24, (!-16583285049226970541)));

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_31 [i_8] [i_8] [i_1] [i_6] [i_1] [i_0] [i_0] |= ((arr_25 [i_1] [i_6] [i_6] [i_1] [i_8]) ? (arr_29 [i_8] [18] [i_6] [i_7] [i_0] [i_6 + 2] [i_0]) : (arr_29 [8] [i_7] [i_6] [i_7] [i_1] [i_6 + 1] [i_6]));
                            arr_32 [i_0] [i_1] [i_0] [i_1] [i_8] |= (((arr_28 [i_0] [i_1] [i_6] [i_7] [i_6 + 2] [i_6]) ? var_4 : (arr_28 [i_0] [i_0] [i_6] [i_6] [i_6 - 1] [i_0])));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_25 -= (arr_16 [i_9 - 1] [i_6 - 1] [i_0] [i_0]);
                                arr_39 [i_0] [6] [i_6] [i_9 + 2] [i_10] |= var_6;
                                var_26 = (~-var_0);
                                arr_40 [i_0] [i_0] [i_9] [i_1] [i_6] [i_9] [i_6] = -var_13;
                            }
                        }
                    }
                }
                arr_41 [i_0] [i_0] &= ((!(((var_10 ? (arr_35 [i_0] [i_0]) : (arr_35 [i_1] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
