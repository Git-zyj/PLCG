/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = max((min((((4294967295 == (arr_0 [i_0])))), (max(var_1, -14774)))), 0);
                var_17 = var_2;
                var_18 = arr_2 [i_0 - 3];
                var_19 = (min(var_19, (((16328 ? 63 : -7183)))));
            }
        }
    }
    var_20 = (max(var_14, (min(var_3, (134217726 + var_5)))));
    #pragma endscop
}
