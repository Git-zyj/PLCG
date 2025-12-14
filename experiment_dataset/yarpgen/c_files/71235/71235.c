/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (max(1614547545, 0));
                    arr_6 [i_0] [i_1] [i_2] [6] &= (arr_4 [i_2 - 3] [10] [i_2 - 4] [i_2 - 4]);
                }
            }
        }
    }
    var_15 = (max(((var_4 ? (var_13 + 4194304) : ((var_10 ? var_7 : 777355803)))), 1));
    #pragma endscop
}
