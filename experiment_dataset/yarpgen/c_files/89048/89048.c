/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_10 ^= 119;
                arr_5 [i_0] [i_0] [i_0] = 38;
            }
        }
    }
    var_11 = var_3;
    var_12 = (min(var_12, (~var_7)));
    var_13 += var_4;
    var_14 = (max(var_5, ((-13200 ? 4242065224 : 2879416891))));
    #pragma endscop
}
