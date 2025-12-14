/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (min((((var_8 ? (var_9 / -868698799) : ((2147483647 ? var_6 : 1834130147))))), (max((((var_12 ? var_8 : var_14))), var_4))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = ((~(arr_6 [i_1] [i_1] [i_0 - 1])));
                    var_17 = (min(var_17, (((((((arr_3 [i_1] [i_0 - 1]) ? (arr_3 [i_1] [i_0 - 1]) : (arr_3 [i_0] [i_0 - 1])))) ? (arr_2 [i_0]) : (min((arr_0 [i_0 + 1]), (min(var_0, (arr_7 [i_0] [i_1] [i_2]))))))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_18 = (min(-2147483647, (((((var_13 ? (arr_5 [i_3] [i_2]) : var_9))) ? var_13 : 2081948840))));
                        var_19 ^= (((((((arr_9 [i_0 + 1] [i_1] [i_2] [i_3]) ? (arr_11 [i_0]) : var_3)) + 2147483647)) >> (((min((arr_3 [i_0 + 1] [i_0 - 1]), var_13)) + 143))));
                    }
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        var_20 = 46;
                        var_21 = ((15883094918909476284 ? ((((min(1, (arr_7 [i_0 - 1] [i_1] [i_1])))) ? 2147483647 : (arr_6 [i_0] [i_1] [9]))) : (min((arr_6 [i_4 - 2] [i_2] [i_0 + 1]), (~95229604)))));
                        var_22 = ((~(((-95229604 * var_5) ? (((!(arr_0 [i_2])))) : var_10))));
                    }
                    var_23 -= (min((max((arr_8 [i_0 - 1]), (arr_11 [i_0 - 1]))), (arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 1])));
                    var_24 = (min((arr_1 [i_1]), (!2591791975)));
                }
            }
        }
        var_25 = (arr_0 [i_0 + 1]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                {
                    var_26 = (max(var_26, (var_13 >= var_5)));
                    var_27 = (((((arr_1 [i_0 + 1]) ? (arr_1 [i_6]) : 2563649154800075322)) ^ (((var_1 | (arr_1 [i_5]))))));
                    arr_21 [i_0] [i_5] [i_5] [i_6] = ((255 ? ((~(var_11 & 239))) : (((arr_4 [i_6 + 2] [i_5] [i_0 - 1]) ? (arr_4 [i_6] [i_5] [i_0 - 1]) : (arr_4 [i_6 + 2] [i_5] [i_0])))));
                }
            }
        }
        var_28 = ((((((((var_13 ? 184 : (arr_4 [i_0] [i_0] [i_0 + 1])))) ? var_3 : 223))) - (max((arr_6 [i_0 + 1] [i_0 - 1] [i_0]), (arr_1 [i_0 + 1])))));
        arr_22 [i_0] = ((1555305496 <= (arr_19 [i_0] [i_0] [i_0 + 1])));
    }
    var_29 *= ((((((((var_0 ? var_3 : var_9))) ? var_11 : (~var_12)))) & (min(((((-1555305482 + 2147483647) >> (2081948841 - 2081948815)))), (max(1879910388, var_14))))));
    var_30 *= (0 | (((((min(var_8, var_4))) ? (var_12 % 16) : ((var_0 ? var_6 : 16))))));
    #pragma endscop
}
