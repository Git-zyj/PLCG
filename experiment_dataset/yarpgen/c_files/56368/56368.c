/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((var_8 + 20029), (var_12 - -1778115602)));
    var_16 = var_13;
    var_17 = 0;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = ((((((-(arr_9 [i_1] [i_1] [i_1]))))) ? (arr_7 [i_0] [i_1] [i_2]) : ((((1778115610 / var_13) == (~var_14))))));
                    arr_10 [i_2] [i_1] [9] [i_0] = (arr_2 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
