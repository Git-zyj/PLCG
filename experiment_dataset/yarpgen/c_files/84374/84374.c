/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((min((var_12 & 1), (-96693484 / var_1)))) ? var_6 : (((arr_2 [i_0 - 4]) * (var_16 / 16213301592308663784)))));
                arr_6 [i_0 + 1] [i_0 + 1] = ((((min((arr_1 [i_0] [i_1]), (max(var_15, var_11))))) ? 1 : 11891827401330908209));
            }
        }
    }
    #pragma endscop
}
