/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~(((var_5 ? var_7 : -6))));
    var_16 = 6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = (max((((1 + 1) ? 1945630115 : -65535)), (arr_2 [i_0] [i_1])));
                var_17 = (min(var_17, (arr_3 [i_0] [i_0] [i_0])));
            }
        }
    }
    var_18 = var_5;
    #pragma endscop
}
