/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_7 ? (((max(var_2, var_11)))) : ((var_10 ? 127 : var_3))))) ? ((min(((min(-630125959, var_11))), (~var_5)))) : (min((var_6 != var_0), ((var_9 ? var_13 : 10991225496413581346))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((!((min((arr_1 [i_0]), var_0))))));
                var_15 += ((arr_3 [i_1 - 4] [i_1 - 4]) ? (((((arr_4 [i_0 - 2]) > (arr_2 [i_1] [i_0 - 1]))))) : (((min(10991225496413581348, (arr_3 [1] [i_1 - 1]))) * 1)));
                arr_6 [i_0] [i_1 - 2] [i_1 - 3] = ((var_10 ? (min(168, var_7)) : (min(7455518577295970287, (arr_1 [i_0])))));
                arr_7 [i_0] [i_0] [i_1] = (((arr_2 [i_0] [i_0]) & (arr_4 [i_0])));
            }
        }
    }
    var_16 = var_7;
    var_17 = var_0;
    #pragma endscop
}
