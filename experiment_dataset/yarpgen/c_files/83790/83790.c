/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_17;
    var_19 = ((((((502543630 ? 4 : 24908))) ? var_13 : ((var_1 ? var_5 : var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = ((((((arr_2 [8]) ? (((arr_3 [i_1] [2]) ? (arr_4 [i_0] [i_1] [i_0]) : (arr_1 [i_0]))) : (((((arr_2 [i_0]) + 2147483647)) >> (arr_4 [i_1] [16] [i_0])))))) ? (((((((arr_2 [i_0]) ? (arr_1 [i_0 - 1]) : (arr_4 [9] [i_1] [9])))) ? ((((arr_4 [i_0] [i_1] [i_1]) && (arr_3 [10] [8])))) : ((((arr_1 [i_1]) || (arr_6 [21] [i_1]))))))) : (((arr_0 [i_1]) ? ((((arr_0 [i_1]) << (((arr_3 [i_1] [i_0 + 2]) - 62644))))) : (((arr_0 [8]) ? (arr_5 [i_1] [i_1]) : (arr_1 [i_1])))))));
                var_20 |= ((((((arr_0 [i_0]) / (((arr_6 [i_0] [i_0]) ? (arr_1 [i_0 - 1]) : (arr_5 [i_1] [i_0])))))) ? ((-(((arr_1 [i_0 - 1]) ? (arr_1 [7]) : (arr_5 [i_0 + 1] [i_1]))))) : (((1 ? 124 : 1)))));
                arr_8 [i_0] = (((((((arr_5 [9] [i_0]) ? (arr_4 [15] [15] [i_0 + 2]) : (arr_3 [i_0] [7])))) ? (arr_4 [i_0] [i_1] [2]) : (((arr_1 [10]) ? (arr_0 [i_1]) : (arr_0 [10]))))) % ((~((((arr_6 [4] [11]) > (arr_2 [4])))))));
                arr_9 [i_1] [7] = (arr_2 [i_0]);
            }
        }
    }
    #pragma endscop
}
