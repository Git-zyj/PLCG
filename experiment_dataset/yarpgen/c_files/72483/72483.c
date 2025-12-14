/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = (min(1, 1));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_3] [i_4] = (arr_0 [i_0]);
                            var_12 -= (((((-16 ? 16508 : 3))) ? ((var_3 ? (arr_8 [i_0] [i_1] [i_2] [i_3]) : (arr_8 [i_4] [16] [i_2] [i_1]))) : ((min((arr_14 [i_3] [i_3] [i_3] [i_3]), 116)))));
                            arr_16 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] = ((min((arr_8 [i_3] [i_3] [14] [i_3]), ((65535 ? (arr_6 [i_2] [i_2] [i_2]) : (arr_6 [i_3] [1] [1]))))));
                        }
                    }
                }
            }
            var_13 ^= ((((min((min(223, var_7)), ((((arr_6 [i_0] [i_1] [i_0]) != (arr_9 [i_0] [i_0] [13]))))))) ? ((((max(var_0, (arr_11 [i_1] [i_1] [22] [i_1])))) ? ((var_2 ? 241 : var_4)) : (((arr_1 [i_0]) ? var_4 : var_6)))) : 1));
            arr_17 [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_1]);
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                arr_23 [i_0] [i_0] [i_0] [i_0] = (max(((var_3 ? (1 * 72) : (((arr_8 [i_0] [i_0] [i_5] [1]) ? (arr_8 [i_0] [i_0] [i_0] [14]) : var_7)))), (min(255, ((~(arr_12 [i_0] [i_5] [i_5] [21])))))));
                var_14 = (max(var_14, -343270911));
                arr_24 [i_0] [i_0] [i_6] [i_0] = ((var_2 ? var_10 : ((-(arr_8 [i_0] [i_0] [i_0] [i_0])))));
            }
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                arr_28 [i_0] [1] [i_5] [i_0] = ((((min((arr_26 [i_0] [i_5] [i_7 - 1] [i_0]), (arr_26 [i_0] [i_0] [i_0] [i_0])))) << (var_8 - 1724711363)));
                var_15 = (-(((var_7 && (((var_6 ? var_5 : var_3)))))));
            }
            var_16 = ((max((arr_11 [i_0] [i_0] [i_0] [i_0]), (arr_22 [i_5] [i_5] [i_0] [i_0]))));
            var_17 = (((((arr_12 [i_0] [i_0] [i_0] [i_5]) / (arr_5 [i_5] [i_0] [i_0]))) * (((((arr_21 [i_0] [i_0] [i_0] [i_5]) / var_10)) * 1727822890))));
        }
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        var_18 -= (((((-(((arr_31 [i_8]) ? (arr_11 [i_8] [i_8] [i_8] [2]) : -3261))))) ? 32429 : (((var_0 - var_1) ? (((arr_4 [i_8] [14] [i_8]) ? var_1 : var_8)) : (var_3 - 33994)))));
        arr_33 [i_8] [i_8] = (arr_14 [i_8] [i_8] [i_8] [i_8]);
        arr_34 [i_8] = (((((arr_19 [i_8]) ? (~1415742103) : ((59 ? (arr_26 [i_8] [i_8] [i_8] [i_8]) : (arr_13 [i_8] [i_8] [i_8] [i_8] [i_8]))))) == (((!18446744073709551615) ? 1 : (((arr_27 [i_8]) ? var_10 : var_9))))));
    }
    for (int i_9 = 3; i_9 < 11;i_9 += 1)
    {
        var_19 = 16;
        var_20 |= (max((((+((-1790681552 ? (arr_6 [i_9] [i_9] [i_9 + 2]) : var_5))))), ((var_9 ? (arr_20 [i_9 + 2] [i_9 - 1] [i_9 - 2] [i_9]) : ((4837453584799724372 ? 6438336235139163717 : -1))))));
        arr_37 [i_9 + 1] = ((((min(1619052055, -16))) ? ((1 << (18446744073709551594 - 18446744073709551569))) : 1));
    }
    var_21 = var_8;
    var_22 = (((min(1, var_4))));
    var_23 = (((var_6 ? (var_6 >> 28) : ((var_0 >> (var_7 - 31075))))));
    #pragma endscop
}
