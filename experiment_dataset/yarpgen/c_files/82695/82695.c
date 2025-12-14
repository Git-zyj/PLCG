/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_15;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_18 *= (arr_0 [i_1 + 1] [i_1 - 1]);
                var_19 = (0 / 8);
                var_20 = 230;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        var_21 = (arr_1 [i_2 - 2]);
        var_22 = (max(var_22, var_7));
    }
    var_23 -= var_12;
    #pragma endscop
}
