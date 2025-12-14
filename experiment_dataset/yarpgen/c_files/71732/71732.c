/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_10 -= (min(var_9, (min((arr_3 [i_1] [i_1 + 1]), var_0))));
                arr_4 [i_0] = ((((((((arr_3 [i_0] [i_1]) ? var_0 : -65))))) <= 11));
                arr_5 [i_0] [i_1] [i_1 - 2] = ((((max((((arr_1 [i_1]) ? var_4 : 3555262754487735823)), 13385673698000708604))) ? ((min(((((var_8 + 2147483647) >> (var_2 - 8852824625810594380)))), (max((arr_1 [i_1]), (arr_3 [i_0] [i_1 + 1])))))) : (max((min(13385673698000708598, var_5)), var_4))));
            }
        }
    }
    var_11 = var_2;
    var_12 = (min(var_12, var_1));
    #pragma endscop
}
