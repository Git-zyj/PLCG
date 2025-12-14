/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_16 = (max(var_16, (((-(max((arr_2 [i_0 + 4]), (var_3 * var_5))))))));
        var_17 = (arr_2 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 -= (max(131, var_5));
                    arr_9 [i_0] = (((((!(arr_2 [i_1])))) == var_1));
                    arr_10 [12] [i_0] [i_2] = (((var_6 ? var_14 : var_7)));
                    var_19 ^= ((~((((var_9 ? var_15 : (arr_3 [i_0 + 1]))) * ((0 / (arr_0 [i_1])))))));
                }
            }
        }
        arr_11 [i_0] = (((((((min(var_9, 125))) ? (((~(arr_7 [i_0] [4] [4])))) : (min(133, var_9))))) ? ((((arr_4 [i_0]) || (((var_4 ? 123 : var_7)))))) : (max(var_1, 109))));
        var_20 = (max(var_20, (117 / 127)));
    }
    for (int i_3 = 3; i_3 < 24;i_3 += 1)
    {
        var_21 &= (((((min((arr_13 [i_3 - 3]), (var_2 > var_1))))) < ((-(((arr_13 [i_3]) ? (arr_12 [i_3]) : (arr_13 [i_3])))))));
        arr_14 [i_3] = (arr_12 [24]);
    }
    var_22 *= ((131 ? 125 : var_10));
    #pragma endscop
}
