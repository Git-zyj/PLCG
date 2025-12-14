/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= min(var_7, (!var_8));
    var_18 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = ((((min((!1752023675108940034), 187))) ? (~var_3) : ((~(~var_7)))));
                    var_20 += (~(min(9690110611046117866, 9690110611046117866)));
                    arr_9 [i_0] [22] = (((arr_4 [i_0 + 2] [i_0 - 1] [i_0 + 2]) ? (arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 2]) : (arr_4 [i_0 + 2] [i_0 - 1] [i_0 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
