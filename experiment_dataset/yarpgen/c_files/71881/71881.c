/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_7 [0] [i_1] [0] = (max((arr_6 [8] [8] [8]), (((((var_13 ? (arr_4 [i_1] [i_1 + 1]) : 27452)) <= 1)))));
                arr_8 [i_1] = (arr_0 [i_0]);
                var_19 = (min(var_19, ((((max(1, (-9223372036854775807 - 1))) % (((((arr_2 [i_1 + 1] [i_1 + 1]) || (arr_2 [i_1 + 1] [i_1 + 1]))))))))));
                arr_9 [i_1] = ((var_4 ? ((min((arr_1 [i_1 + 1] [i_1 + 1]), 1))) : (((arr_1 [i_1 + 1] [i_1 + 1]) * var_4))));
                var_20 = var_5;
            }
        }
    }
    var_21 = var_17;
    var_22 = var_0;
    #pragma endscop
}
