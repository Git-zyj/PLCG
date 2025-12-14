/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [3] [i_0 - 3] [i_1] [i_1] = ((~((((-1 ? var_17 : var_13))))));
                    var_19 = 0;
                    var_20 = (min(var_20, ((((((var_4 ? ((var_2 ? 58980020 : (arr_1 [i_0 - 3]))) : (((min((arr_6 [i_0] [0] [i_1] [i_2]), (arr_1 [i_2])))))))) ? (max((min(var_11, (arr_0 [i_1]))), ((min((arr_0 [i_0]), 64))))) : (max((((arr_0 [i_2]) << (((arr_2 [i_1]) - 1912806071)))), var_13)))))));
                    arr_9 [7] [7] [i_1] [7] = (((1 ? ((var_1 ? (arr_4 [i_0] [i_1] [i_0]) : (arr_6 [3] [3] [4] [0]))) : (arr_1 [i_0 + 2]))));
                    var_21 = ((((((arr_6 [i_0 - 1] [i_1] [i_1] [i_0 - 1]) ? 916615584958304408 : (arr_5 [i_0 - 4] [i_1])))) ? (min((arr_5 [i_0 + 2] [i_1]), (arr_6 [2] [2] [i_2] [i_0 + 2]))) : (((((arr_6 [i_0 - 4] [i_0 - 4] [i_0 - 4] [i_0 - 1]) + 2147483647)) >> (((arr_6 [i_0] [i_1] [i_2] [i_0 - 4]) + 81))))));
                }
            }
        }
    }
    #pragma endscop
}
