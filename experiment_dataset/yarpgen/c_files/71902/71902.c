/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = ((((((((arr_3 [i_0]) | var_11))))) & (((((40070 ? 225 : var_8))) * (max(var_5, 524545733))))));
                var_13 = ((((max(var_8, 65521))) || (arr_1 [i_1])));
                var_14 = (((((-((var_4 ? (arr_2 [i_1] [i_1] [i_1]) : var_7))))) ? (((((((arr_0 [i_0] [6]) ? var_11 : var_1))) ? (((max(var_2, (arr_0 [3] [3]))))) : var_11))) : (min((var_1 - var_3), var_0))));
                var_15 -= (max((((((var_1 ? (arr_2 [i_0] [4] [i_0]) : (arr_0 [i_0] [i_0])))) ? (min(2568478283681758490, 2568478283681758498)) : var_7)), -62));
            }
        }
    }
    var_16 ^= var_2;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_17 = var_11;
                    var_18 = (max(((((min(3238148949599168651, var_1))) ? ((var_8 ? var_4 : var_0)) : (((((arr_0 [7] [7]) > var_4)))))), (((((max((arr_11 [10] [i_3]), var_3))) & ((max((arr_1 [i_3]), var_10))))))));
                }
            }
        }
    }
    #pragma endscop
}
