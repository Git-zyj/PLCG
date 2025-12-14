/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = (((-((min((arr_5 [i_0] [i_0] [i_0] [i_0]), var_0))))));
                    arr_7 [i_2] [i_1] [i_0] |= (((4 && var_16) && ((min(var_3, ((((arr_4 [i_2] [0]) || (arr_6 [i_0] [12] [i_2] [12])))))))));
                }
            }
        }
    }
    var_22 = var_7;
    #pragma endscop
}
