/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_15;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_2] |= (arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 1]);
                    var_17 = (((arr_7 [i_0 - 1] [i_0 - 1]) ? ((max((max(-5478, (arr_1 [i_0] [i_0]))), var_12))) : (arr_8 [i_0])));
                    var_18 = (max((min((arr_5 [i_0] [12] [i_2]), var_6)), (((max((arr_4 [i_0]), var_7))))));
                }
            }
        }
    }
    var_19 = max(var_3, ((!(((var_3 ? var_15 : var_1))))));
    #pragma endscop
}
