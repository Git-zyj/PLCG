/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((-(((0 != 0) ? 1 : (~-7269442418376522158)))));
                arr_5 [i_0] [i_0] [i_1] = 2147483647;
            }
        }
    }
    var_14 = var_0;
    var_15 &= var_4;
    #pragma endscop
}
