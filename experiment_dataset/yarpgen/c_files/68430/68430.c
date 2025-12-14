/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] |= (((-81 + 2147483647) >> (((((arr_4 [i_0] [i_0] [i_0]) - (arr_1 [i_0] [i_0]))) + 4980870085985236056))));
                var_21 = 173904338;
                arr_7 [i_0] [i_1] [i_0] = (arr_5 [i_0] [i_0]);
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
