/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (((20 + 0) + 23095));
                    var_21 = 0;
                    var_22 = ((((~var_10) ? -2023903676 : var_13)) | var_17);
                }
            }
        }
    }
    var_23 ^= var_19;
    var_24 -= var_15;
    var_25 = var_1;
    #pragma endscop
}
