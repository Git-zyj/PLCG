/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((min(var_10, -7011083241331490961)) >= var_1))) >> ((((var_1 + (((var_8 ? var_10 : 7))))) - 2109757220))));
    var_12 = ((var_1 ? var_8 : var_4));
    var_13 = (min(23, (min(-20626, ((32745 ? 30 : var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = ((min(23, 2622600734305266199)));
                var_15 = (max((max((arr_1 [i_1]), (arr_1 [i_1]))), (max((arr_1 [i_1]), 20616))));
            }
        }
    }
    #pragma endscop
}
