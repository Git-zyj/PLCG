/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = ((var_4 ? ((var_5 ? ((9160874028277604483 ? (arr_2 [i_0] [i_1]) : var_11)) : (max(var_11, (arr_2 [i_0] [i_1]))))) : (arr_3 [i_1] [i_0])));
                arr_4 [i_1] [i_1] [i_1] = (max((((1 ? var_3 : (arr_0 [i_1 - 1] [i_1 - 1])))), (max(0, (arr_0 [i_1 - 1] [i_1 - 1])))));
                var_14 = -421726549;
                var_15 = (max(7, ((min((arr_0 [i_0] [i_0]), (arr_3 [i_1 - 1] [i_1 - 1]))))));
            }
        }
    }
    #pragma endscop
}
