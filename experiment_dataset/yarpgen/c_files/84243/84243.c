/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((((var_1 ? (((var_15 ? var_6 : var_5))) : var_8))) ? (var_6 + var_8) : var_13);
    var_17 = var_4;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (max(var_18, ((((min((50338062287586919 >= 9), 65526)) >> (((arr_1 [i_0] [i_0]) + 144)))))));
        var_19 ^= (arr_0 [5] [1]);
        arr_2 [1] |= (((max((((arr_1 [1] [0]) ? (arr_0 [1] [10]) : (arr_0 [4] [9]))), (arr_1 [i_0] [i_0]))) | (arr_1 [i_0] [i_0])));
        var_20 = (~250);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_21 = ((((arr_6 [i_0] [11]) && (arr_6 [12] [i_1]))));
                        arr_10 [1] [11] [1] [9] = var_13;
                        var_22 ^= (arr_7 [i_3] [6]);
                        arr_11 [6] [9] [12] [6] [3] = (((((55 ? var_13 : ((1 + (arr_7 [1] [0])))))) ? (((((~(arr_4 [0])))))) : (min(-18446744073709551612, ((var_8 ? (arr_8 [9] [1] [10] [1] [9]) : (arr_6 [3] [1])))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_14 [9] [11] = (arr_12 [4]);
        var_23 = (((~1) ? (arr_5 [3] [5]) : (arr_9 [8] [10] [9] [4] [11])));
        var_24 *= (min((18446744073709551612 <= 241), -10528));
    }
    #pragma endscop
}
