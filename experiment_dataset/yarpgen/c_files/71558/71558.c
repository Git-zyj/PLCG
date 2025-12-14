/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = min(((((3584 / var_11) + (var_2 - var_11)))), 8226350865575598891);
                arr_6 [i_0] [12] [i_0] = ((~(((-3 + 2147483647) >> 3595))));
                arr_7 [i_0] [7] = (arr_1 [i_0]);
            }
        }
    }
    var_16 = var_6;
    #pragma endscop
}
