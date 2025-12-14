/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (max((((-(max(var_13, var_3))))), 13798087769050466096));
                arr_5 [i_0] [i_1] [i_0] = (max(581755430758176166, -581755430758176166));
                arr_6 [i_0] [i_0] = var_18;
            }
        }
    }
    var_20 = 581755430758176166;
    #pragma endscop
}
