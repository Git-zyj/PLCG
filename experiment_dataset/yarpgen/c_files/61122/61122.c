/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = ((!(1127700078117211511 / 9176628460046330390)));
                var_19 += (arr_0 [i_0] [12]);
            }
        }
    }
    var_20 -= (min(var_16, (~var_14)));
    var_21 -= ((+(((~var_8) & (~var_10)))));
    #pragma endscop
}
