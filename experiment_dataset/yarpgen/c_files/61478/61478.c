/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = ((max(((-(arr_7 [11] [1] [3]))), var_3)) < (((arr_9 [i_0 + 1] [1] [4] [7]) ? (((arr_7 [15] [14] [9]) ? (arr_3 [3]) : (arr_9 [7] [0] [1] [8]))) : ((min((-32767 - 1), var_6))))));
                    var_13 = (max((((~((~(arr_9 [2] [0] [4] [0])))))), (((arr_8 [i_0 + 1] [i_2 - 1] [7] [i_2 + 2]) & ((((-32767 - 1) ^ var_2)))))));
                }
            }
        }
    }
    var_14 = (min(var_14, (((-(max(((min(var_3, var_6))), ((var_10 ? var_11 : var_2)))))))));
    var_15 = ((((((var_6 ? var_7 : var_7)))) ? var_8 : var_7));
    var_16 = ((var_3 ? var_4 : ((((max(var_7, var_3))) & var_6))));
    var_17 = ((~(var_10 / var_10)));
    #pragma endscop
}
