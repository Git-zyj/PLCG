/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_9 == (!1454402444)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1 + 1] [i_0] [i_0 + 2] = (((var_11 == var_11) == (25012 == 74)));
                var_13 = (max((arr_4 [i_0]), (arr_4 [i_0])));
                arr_6 [i_0] [9] [i_0] = var_10;
            }
        }
    }
    #pragma endscop
}
