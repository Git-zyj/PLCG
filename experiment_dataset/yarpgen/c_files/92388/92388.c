/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (((max((((arr_3 [i_0]) + 11976480966268385590)), ((max((arr_5 [i_1]), var_11))))) >= ((((((arr_1 [i_0]) ? var_7 : var_11))) ? (arr_5 [i_0]) : var_10))));
                arr_6 [6] [i_1] = 1;
            }
        }
    }
    #pragma endscop
}
