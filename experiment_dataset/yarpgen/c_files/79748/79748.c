/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 > (!115)));
    var_13 = ((-1 ^ (min(1, (var_10 ^ var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 ^= (min(194, 1));
                    var_15 ^= ((4129810873 ^ (((var_1 ? 38 : 1750063047)))));
                }
            }
        }
    }
    #pragma endscop
}
