/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((max(((max(-5699, 393216))), var_11)) << (var_14 - 140))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = var_1;
                    arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] = (max(245, (5719 != 31)));
                }
            }
        }
    }
    #pragma endscop
}
