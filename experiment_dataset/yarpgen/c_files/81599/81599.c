/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (max(((max(((-(arr_1 [16]))), ((max(var_4, 0)))))), (min(var_9, (((var_5 ? var_1 : var_3)))))));
                var_10 = (min(((((arr_3 [i_0] [i_0]) & var_8))), 145));
                arr_5 [i_1] = (max(((var_6 ? (arr_0 [i_1 - 1] [i_1]) : var_1)), (arr_0 [i_1 + 1] [i_1])));
            }
        }
    }
    var_11 = var_9;
    var_12 = var_2;
    var_13 = (min(((1 ? ((var_2 ? var_6 : var_9)) : (var_4 % var_4))), ((min(((3895372629 ? var_6 : var_4)), var_5)))));
    #pragma endscop
}
