/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_9, (min((min(var_9, var_6)), (var_10 != 1776110468532829537)))));
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = -2140817332;
                var_15 = (arr_4 [i_0] [i_1]);
                arr_5 [i_0] [i_1] = -2140817332;
            }
        }
    }
    #pragma endscop
}
