/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] [i_0 - 1] = (~var_12);
        var_15 = var_0;
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 20;i_2 += 1)
        {
            {
                arr_11 [i_2] [i_2] [i_1] = (~(~var_13));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        {

                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                var_16 = min(((+((var_6 ? (arr_5 [1] [i_5]) : 1)))), (((((46962266 ? var_11 : 413386199))) ? ((max(var_3, 27915))) : (!119))));
                                var_17 *= var_6;
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 22;i_6 += 1)
                            {
                                var_18 = (33287 ? var_12 : (arr_16 [i_2 + 2] [i_2] [i_3 + 2] [i_4] [i_6]));
                                var_19 ^= ((!(arr_22 [i_3 + 2] [i_2 - 3])));
                                var_20 = (max(var_20, ((((((var_0 ? var_9 : var_3))) ? ((~(arr_19 [9] [i_2] [i_4] [i_4 - 1] [i_1] [i_2] [i_1]))) : 154830691)))));
                                arr_23 [i_3] = ((((arr_2 [i_1 - 4] [i_4 + 1]) / var_7)));
                                arr_24 [i_1] [i_2 + 2] [i_3] [i_4 - 1] = (((arr_20 [i_3] [i_4 + 1] [i_1 - 3] [i_1] [i_1] [i_3]) / (arr_20 [i_3] [i_4 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_3])));
                            }
                            var_21 = (min(var_21, (min((min((((var_4 == (arr_19 [i_1] [i_2] [2] [i_4] [i_1] [i_3] [i_3])))), 32246)), (((!(!var_11))))))));
                            var_22 = (((((!(arr_20 [i_1] [1] [i_3 - 1] [i_4 - 1] [1] [i_3])))) * (arr_20 [i_1] [i_2 - 2] [i_3 + 1] [i_4 - 1] [i_2] [i_3])));

                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 20;i_7 += 1)
                            {
                                var_23 *= (((arr_1 [i_2 + 1]) > (arr_22 [i_4 - 1] [i_4 - 1])));
                                arr_27 [i_4 + 1] [i_4 - 1] [1] [i_4] [i_3] = ((1 <= (arr_13 [i_2 + 1] [i_2 - 2] [i_2])));
                                arr_28 [i_1] [i_1 - 1] [i_1] [i_3] = (var_8 != var_12);
                            }
                            for (int i_8 = 1; i_8 < 21;i_8 += 1)
                            {
                                arr_31 [i_1] [i_2] [i_3] [i_4 + 1] [i_8 - 1] = ((~(((arr_19 [i_3 + 2] [i_2 + 1] [i_2 + 2] [i_2] [i_1] [i_1] [i_1 - 4]) ? var_10 : (arr_1 [i_1 - 1])))));
                                var_24 = (var_1 < (((arr_3 [i_1 - 1]) | var_13)));
                            }
                            for (int i_9 = 0; i_9 < 22;i_9 += 1)
                            {
                                var_25 = (max(var_25, (((-((((154830677 ? 18446744073709551615 : var_13)) << ((((58390 ? var_3 : var_12)) - 68)))))))));
                                arr_35 [i_1] [i_1] [i_1] [i_3] = ((~(((var_10 > (arr_2 [i_1 - 3] [i_9]))))));
                            }
                            arr_36 [i_3] = (((((-(arr_33 [i_2] [i_3])))) == (((arr_2 [i_4 - 1] [i_3 + 4]) ? (arr_7 [i_2 - 4]) : var_2))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 0;i_12 += 1)
            {
                {
                    var_26 *= (((((((min(var_5, var_2))) ? var_4 : -var_8))) ? var_4 : (((((var_8 << (-9223372036854775805 - -9223372036854775805)))) ? -2777778020443797714 : (var_3 * var_4)))));
                    var_27 &= var_12;
                }
            }
        }
    }
    var_28 += ((-((-((var_7 ? var_11 : 1))))));
    #pragma endscop
}
