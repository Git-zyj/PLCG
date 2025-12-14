/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (1276355656 + var_10);
    var_12 = ((-(var_1 - 2050751527714253358)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 ^= var_2;
                var_14 = 16395992545995298255;
                var_15 = var_3;
            }
        }
    }
    #pragma endscop
}
