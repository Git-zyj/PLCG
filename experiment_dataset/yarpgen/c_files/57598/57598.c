/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= min(((~((var_17 ? 24 : 954810275717139550)))), (var_9 & var_8));
    var_21 = (max(var_21, (((-420962726 ? ((247 & (min(14023246030414635496, var_6)))) : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((var_3 ? (arr_1 [i_0 + 2]) : ((1 ? (((arr_1 [i_0]) ? 14023246030414635490 : 45057)) : (arr_2 [i_0 + 2])))));
                var_22 -= (arr_3 [i_1]);
            }
        }
    }
    #pragma endscop
}
