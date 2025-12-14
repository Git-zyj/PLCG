/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 |= (((48557 - var_3) / (min((arr_4 [i_0 + 1]), -var_9))));
                    var_20 *= ((min((arr_0 [i_0] [3]), ((-1540445567 ? 3764179608446577291 : -1366037226)))));
                }
            }
        }
    }
    var_21 = -1;
    var_22 = var_12;
    var_23 = ((var_4 ? (+-1366037226) : (((-1663235954 < (max(-1366037206, 33013)))))));
    #pragma endscop
}
