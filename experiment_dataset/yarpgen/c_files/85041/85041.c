/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!var_4) ? 536870912 : ((~((var_10 ? 536870912 : 36))))));
    var_14 -= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = ((!(((32 ? (arr_0 [i_0] [i_0]) : (arr_4 [i_1 + 3] [i_1 - 1] [i_1 + 1]))))));
                var_16 -= (max(226, (((64622 ? (arr_1 [i_1]) : (arr_2 [i_1]))))));
            }
        }
    }
    var_17 = var_5;
    #pragma endscop
}
