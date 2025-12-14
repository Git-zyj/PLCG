/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (((!((((arr_4 [i_0] [i_0] [i_0]) & (arr_2 [i_1])))))) ? (arr_1 [i_1 - 3]) : (min((((arr_0 [i_2]) ? -1 : var_1)), 31)));
                    arr_6 [i_0] [i_0] [i_0] [i_0] = var_8;
                    arr_7 [i_1 - 2] [i_2] = (((((var_10 ^ ((var_7 ? 0 : (arr_1 [i_1])))))) ? (max((arr_3 [i_1 - 1] [i_1 - 3] [i_2]), (min(var_7, (arr_4 [10] [1] [10]))))) : ((min((arr_4 [i_1 - 1] [i_1 - 3] [i_1]), var_6)))));
                }
            }
        }
    }
    var_13 |= (var_4 | var_6);
    var_14 = ((~(max(var_1, var_3))));
    #pragma endscop
}
