/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_7, 1));
    var_14 *= -43;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 -= ((~(((-9223372036854775807 - 1) ? var_8 : (var_9 | var_3)))));
                    var_16 = (-64 + -116);
                }
            }
        }
    }
    #pragma endscop
}
