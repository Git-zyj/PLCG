/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_6));
    var_19 |= (min((((max(var_4, var_11)) ? -455060097 : ((var_13 ? 0 : 10984)))), 41471));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 ^= ((((((var_6 ? var_2 : (arr_1 [i_0] [i_0]))))) && (((max(var_17, (arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] [i_0] = (arr_1 [i_0] [8]);
        var_21 = ((((((var_14 ? (arr_1 [i_0] [i_0]) : (arr_1 [6] [i_0]))) >= ((((arr_1 [7] [i_0]) < var_6))))) ? (((((58625 ? 2281 : (arr_0 [i_0] [i_0]))) != (arr_0 [i_0] [i_0])))) : (((57910 < ((62622 ? var_2 : 26842)))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_11 [i_1 - 1] [i_2] [i_2] [i_2] = (((!65533) >> ((((((arr_0 [4] [4]) ? var_13 : var_2))) ? (arr_0 [i_1] [i_1 - 1]) : var_8))));
                    var_22 = 1;
                }
            }
        }
        arr_12 [i_1] [i_1] = (((((~(arr_0 [1] [i_1])))) ? (((arr_4 [i_1 - 1] [i_1 - 1]) - ((-1797404317 ? 1 : 65509)))) : var_9));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_23 = (min(1, 0));
        var_24 = ((((65535 ? (arr_14 [i_4] [i_4]) : var_4))) && (((var_15 ? ((0 ? 1 : var_11)) : 1))));
    }
    var_25 = ((var_7 ? var_16 : (((~0) ? 60754 : var_8))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                var_26 = (((((((var_17 ? 38694 : (arr_18 [i_5])))) ? -962362586 : (arr_20 [i_5] [i_5] [i_6])))) ? var_13 : 459686370);
                var_27 &= ((((arr_17 [i_5] [0]) + var_3)));
                var_28 += (((((((!(arr_18 [i_5]))) ? (min((arr_18 [i_5]), (arr_19 [i_5] [14]))) : (((arr_17 [i_5] [8]) ? var_11 : var_0))))) ? (arr_20 [i_5] [i_6] [i_5]) : (arr_17 [i_5] [12])));
                var_29 = (((arr_17 [i_5] [i_5]) ? ((var_5 ? (arr_18 [i_5]) : 26)) : ((54810 ? 1 : 0))));
            }
        }
    }
    #pragma endscop
}
