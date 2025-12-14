/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 ^= var_7;
                    var_15 = var_3;
                    arr_10 [i_0] [i_1] [i_0] [i_2] = arr_3 [i_0];
                }
            }
        }
    }
    var_16 = var_12;
    #pragma endscop
}
