/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] [0] [14] = ((var_4 ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : 76)) : var_10));
                var_20 = (((arr_0 [17]) <= ((((28 + (arr_2 [i_0]))) + var_7))));
            }
        }
    }
    #pragma endscop
}
