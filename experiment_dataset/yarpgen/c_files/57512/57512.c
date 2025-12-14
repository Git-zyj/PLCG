/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_0 ? 8 : (var_4 & 13465507512421421124))) != ((((var_11 + var_11) ? ((min(4269679597, var_0))) : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [7] = var_9;
                var_13 = var_5;
            }
        }
    }
    #pragma endscop
}
