/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_10 += ((((min((((-32742 & (arr_2 [i_0 + 4])))), (211 & var_3)))) ? (min((min(var_5, (arr_1 [i_0] [i_1]))), (min(var_7, var_3)))) : (min(((((arr_2 [i_0]) + var_2))), (4294967289 + var_9)))));
                var_11 = ((var_5 * (min((!2873958508), ((var_7 ? var_2 : 0))))));
            }
        }
    }
    var_12 = var_0;
    #pragma endscop
}
