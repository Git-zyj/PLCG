/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (max((((~(arr_6 [i_0] [15] [i_0 - 1] [i_0])))), var_17));
                    arr_7 [i_0] = ((((((~(arr_5 [i_0] [i_0] [i_0 - 1]))) + 2147483647)) >> (var_15 - 572525830)));
                    arr_8 [i_2] [i_2] = (var_2 + var_15);
                }
            }
        }
    }
    #pragma endscop
}
