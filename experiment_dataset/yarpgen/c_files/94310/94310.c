/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((1 >> (29777 - 29767)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = var_4;
                arr_8 [i_0] [i_1] [i_0] = ((min((var_2 & var_7), ((max(var_4, var_2))))));
            }
        }
    }
    #pragma endscop
}
