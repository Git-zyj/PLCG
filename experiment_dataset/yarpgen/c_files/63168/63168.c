/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [9] [i_1] = -22;
                arr_5 [i_1] = ((max(0, (-1926676585972516966 | var_0))));
            }
        }
    }
    var_10 = 1926676585972516965;
    #pragma endscop
}
