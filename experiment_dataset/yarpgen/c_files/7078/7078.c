/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [14] [14] &= ((~((74 ? 158 : 145))));
                arr_5 [i_1] [i_0] [i_0] = 1;
            }
        }
    }
    #pragma endscop
}
