/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 = (((((max((arr_0 [i_0]), var_13)))) ? ((((!(arr_4 [i_1] [i_2 - 2]))))) : ((((max(62774, 28635))) ? (((var_7 ? 511 : var_6))) : (((arr_1 [9]) ? (arr_1 [9]) : (arr_0 [0])))))));
                    arr_8 [2] |= (arr_1 [i_1]);
                }
            }
        }
    }
    var_19 = (max(var_4, (min(var_2, var_16))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_20 = (arr_15 [i_4] [4]);
                    arr_16 [i_5] = ((((((-90 + 2147483647) << (63 - 63)))) || (arr_10 [i_5])));
                    arr_17 [i_3] [i_3] [i_4] [i_5] = var_14;
                    var_21 = (arr_14 [i_3]);
                }
            }
        }
        var_22 = (arr_12 [i_3] [i_3]);
        var_23 = (arr_9 [i_3]);
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_24 = (min(var_24, ((((((max((arr_20 [14]), 28635))) ? (((max(var_7, (arr_18 [0]))))) : (var_1 & 20594)))))));
        var_25 = (max(var_25, ((max((min(var_11, (((var_14 ? var_3 : (arr_21 [i_6])))))), ((72057594037927935 ? 72057594037927935 : 219)))))));
    }
    #pragma endscop
}
