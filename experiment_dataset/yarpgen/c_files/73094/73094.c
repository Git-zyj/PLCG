/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_4);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 *= (min((((((var_3 ? var_3 : -25323))) ? (arr_0 [i_0]) : 0)), (max(63, ((0 ? var_6 : var_6))))));
        arr_2 [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_15 = arr_11 [i_4] [i_3] [i_2] [i_1];
                        var_16 *= var_8;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_17 *= ((!(arr_7 [i_2] [i_3] [i_4])));
                            var_18 = (max(var_18, ((((((117 ? -63 : 1))) ? ((7 ? -291863998 : -16)) : (!var_6))))));
                            var_19 ^= (((arr_17 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? var_7 : ((-(arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_20 *= (((var_10 - 1) - (arr_17 [i_1] [i_1] [i_3] [i_1] [i_4] [i_1] [i_6])));
                            var_21 = 41;
                            var_22 = (min(var_22, ((((((var_6 ? 658478502362218679 : 0))) ? var_10 : (1142000146 < 6551909322971439714))))));
                        }
                        var_23 = (min(var_23, (((-(((216 / var_1) / (var_3 / 209))))))));
                    }
                }
            }

            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_24 = (min((arr_15 [i_1] [i_1] [i_7] [i_7] [1] [i_7] [i_1]), (((-13664 > ((max(1, 10770))))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_25 *= ((~(min((~var_3), ((((arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_5 : var_7)))))));
                            arr_29 [i_1] = ((-(arr_28 [i_7] [i_2])));
                            var_26 = (max(var_26, (((~(max(17331269832787207952, 65535)))))));
                            arr_30 [i_1] [i_1] [i_7] [i_8] [i_9] = (((((~(arr_21 [7] [i_2])))) && (((~((var_8 ? 5941407949373762311 : var_0)))))));
                        }
                    }
                }
                var_27 ^= (max(((((var_3 - 23334) ? (var_3 - var_6) : (((var_2 ? (arr_25 [i_1] [i_1] [i_7] [i_7] [i_1]) : (arr_12 [i_1] [i_1] [i_1]))))))), (max((((arr_28 [8] [i_7]) - var_11)), 16271689276105098821))));
            }
        }
        var_28 = ((((-var_8 + 2147483647) >> ((((min((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [1] [i_1]), (arr_10 [i_1] [i_1] [i_1] [i_1])))) + 18155)))) < ((((arr_10 [i_1] [i_1] [i_1] [i_1]) <= var_4))));
        var_29 = ((max(1, ((-8 ? (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : 755328792)))));
        var_30 = ((!(arr_23 [i_1] [i_1] [6] [6] [i_1] [i_1])));
        arr_31 [i_1] = (arr_10 [1] [6] [i_1] [i_1]);
    }
    var_31 &= ((-(((~1008) ^ (min(var_10, var_6))))));
    var_32 *= (min(var_2, (min((var_9 / var_6), (var_9 - var_12)))));
    #pragma endscop
}
