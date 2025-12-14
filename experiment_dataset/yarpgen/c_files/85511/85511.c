/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [5] [1] [i_0] [13] [0] = ((((((arr_10 [i_1 - 1] [8] [4] [8] [i_0] [0]) + (arr_10 [i_1 - 2] [5] [2] [2] [i_0] [3])))) ? (((arr_10 [i_1 - 1] [14] [9] [13] [i_0] [9]) ? (arr_10 [i_1 + 1] [7] [2] [3] [i_0] [5]) : (arr_10 [i_1 - 2] [1] [9] [1] [i_0] [13]))) : 12224));
                                var_14 = (((arr_2 [7]) * (((var_11 && var_1) ? (arr_2 [14]) : var_11))));
                            }
                        }
                    }
                    var_15 = (min(var_15, (((3828159072 | (((var_4 ? ((4830 >> (2030437261 - 2030437253))) : ((0 ? var_12 : var_11))))))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_16 = (arr_16 [12]);
        var_17 += 194;
        arr_17 [19] = -1793185236;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_18 |= 536870911;
        var_19 += ((!(arr_16 [20])));
        arr_20 [10] [14] = (~(min((-9223372036854775807 - 1), (arr_19 [i_6]))));
    }
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        arr_25 [10] [17] = ((+(min((!var_3), (((arr_23 [16] [14]) ? var_12 : var_12))))));
        arr_26 [12] &= (min(((((arr_15 [17]) / 4294967295))), ((((min(-9098851800385085687, (arr_21 [7])))) ? -18 : var_9))));
    }
    for (int i_8 = 1; i_8 < 24;i_8 += 1)
    {
        var_20 = (min(var_20, ((((arr_28 [3] [1]) == -3905288185)))));
        var_21 = (min((arr_29 [19] [i_8 - 1]), ((((((var_2 < (arr_28 [1] [19])))) - (var_12 > var_9))))));
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 15;i_10 += 1)
        {
            {
                arr_34 [8] [11] [0] = ((((-(arr_21 [i_10 - 2]))) > (((arr_21 [i_10 + 2]) ? (arr_21 [i_10 - 2]) : (arr_28 [i_10 - 2] [12])))));
                arr_35 [1] [6] = 21;
                var_22 -= (((min(((524032 ? (arr_22 [0]) : (arr_16 [4]))), 4294967291)) >= (((((var_11 ? var_7 : 178)) < (((arr_29 [7] [1]) ? (arr_31 [13]) : var_3)))))));
                arr_36 [14] = ((-(((arr_30 [i_10 - 1] [i_10 - 1]) / (arr_30 [i_10 + 1] [i_10 - 2])))));
                var_23 = (min(var_23, (((-((((((arr_23 [7] [12]) ? 14 : 9223372036854775807))) ? 2926 : (arr_24 [i_10 - 1] [i_10 + 2]))))))));
            }
        }
    }

    for (int i_11 = 1; i_11 < 12;i_11 += 1)
    {
        var_24 = (min(var_24, var_2));
        var_25 = (min(var_25, var_8));
    }
    #pragma endscop
}
