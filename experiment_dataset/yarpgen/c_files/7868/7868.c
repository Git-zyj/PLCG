/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_11 [i_0] [1] [i_2] [i_1] = max((max((max(113, 16)), (min(141, 243)))), (max(127, 26)));
                    arr_12 [i_0] [i_0] [i_1] = max((max((max(var_15, (arr_10 [i_1] [i_1] [i_2]))), (max(var_12, 11)))), (min((max((arr_8 [i_0] [i_1] [i_2 - 3]), var_6)), (max(var_13, var_17)))));
                }
            }
        }
    }
    var_19 = min((max((max(242, 229)), (min(16, 128)))), (min((min(255, 8)), (min(26, 188)))));
    #pragma endscop
}
