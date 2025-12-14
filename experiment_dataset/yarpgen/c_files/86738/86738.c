/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (arr_5 [i_0] [i_0] [i_0]);
                    arr_7 [i_0] [6] [i_2] = (arr_4 [1] [i_1] [1]);
                    var_17 = (arr_2 [i_0] [7]);
                }
            }
        }
    }
    #pragma endscop
}
