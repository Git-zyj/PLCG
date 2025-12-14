/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(((var_7 ? var_0 : (var_2 - var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [9] [i_0] [7] = (((~(((arr_0 [8]) - (-32767 - 1))))) != 47096);
                var_11 = (min(var_11, ((((-32767 - 1) && 32767)))));
            }
        }
    }
    var_12 = (max(var_12, (((~(~var_5))))));
    #pragma endscop
}
