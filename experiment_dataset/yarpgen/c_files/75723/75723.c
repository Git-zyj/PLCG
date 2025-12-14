/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_12 ? (((~((var_18 ? var_7 : var_14))))) : (min(var_10, (max(var_12, var_16))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [2] [2] = ((-(max(var_7, (max(var_3, var_5))))));
                var_20 = ((!((((max((arr_2 [i_0]), (arr_3 [i_0] [i_1] [i_1]))) >> (((arr_4 [15] [i_1 - 2] [15]) - 24502)))))));
                arr_7 [0] [0] &= ((!(((~(arr_2 [i_1 - 2]))))));
                var_21 = (min(((((arr_3 [i_0] [i_0] [i_1 - 2]) / (arr_4 [10] [10] [i_1 + 1])))), var_8));
                arr_8 [i_0] [12] = (min((max((max(var_5, (arr_4 [i_0] [18] [i_0]))), (arr_0 [i_1] [i_1]))), ((min((arr_0 [i_0] [i_1 - 1]), (arr_3 [i_1] [i_1 - 1] [i_1]))))));
            }
        }
    }
    var_22 = var_14;
    #pragma endscop
}
