/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (min(var_16, 17071557542736862425));
    var_18 = var_4;
    var_19 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_1] [15] = ((min((max(var_5, var_3)), 13)));
                    var_20 = (max((!var_15), (((arr_4 [i_2 - 2] [i_2 + 1] [i_2 + 1]) ? 12785431442102631302 : 0))));
                    arr_9 [i_1] [i_1] [i_2] = 88;
                }
            }
        }
    }
    #pragma endscop
}
