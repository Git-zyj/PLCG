/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 += (((arr_0 [i_2 - 1]) == (((arr_0 [i_1]) ? (arr_5 [i_2 + 1]) : -4))));
                    var_18 = (15 & 2937063448);
                }
            }
        }
    }
    #pragma endscop
}
