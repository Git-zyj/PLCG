/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = ((var_2 < (arr_0 [i_0])));
                var_15 -= (arr_3 [4] [0]);
            }
        }
    }
    #pragma endscop
}
