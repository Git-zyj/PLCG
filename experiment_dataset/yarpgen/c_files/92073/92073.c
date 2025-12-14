/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (((arr_6 [i_1] [12] [i_2 + 1] [i_1]) % ((((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [6] [i_1] [6] [i_2]) : (arr_5 [i_1] [i_1] [i_2] [5]))))));
                    var_21 = (max(var_21, ((min((arr_3 [i_1] [i_1] [15]), 0)))));
                }
            }
        }
    }
    var_22 = (min(var_22, (((((-(-325598650 - var_18))) & var_14)))));
    #pragma endscop
}
