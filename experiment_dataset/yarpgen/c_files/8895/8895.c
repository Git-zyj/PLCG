/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 += 11415204737269846743;
                    var_21 ^= ((max((arr_2 [i_0] [i_1] [i_2]), (arr_2 [2] [12] [i_0]))));
                }
            }
        }
    }
    #pragma endscop
}
