/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((1 > var_4) ? (max(var_3, var_6)) : (var_0 % var_7))), (max((var_10 % var_7), (min(var_6, var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] = (arr_2 [i_0]);
                    arr_9 [i_2] [i_1] [i_2] = var_4;
                    arr_10 [i_0] [i_2] [i_0] [i_0] = max((arr_1 [i_2]), (var_6 && var_4));
                }
            }
        }
    }
    var_12 = var_7;
    #pragma endscop
}
