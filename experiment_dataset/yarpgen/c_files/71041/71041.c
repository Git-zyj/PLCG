/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_1 ? var_5 : (max(var_7, var_8))));
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_18 += (arr_5 [15] [i_1] [i_0]);
                arr_6 [8] [8] [8] = (min((min((((53045 & (arr_0 [i_1 + 1] [i_0])))), (min((arr_1 [1]), 3)))), 144115188075855871));
            }
        }
    }
    #pragma endscop
}
