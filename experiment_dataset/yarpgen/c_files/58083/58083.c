/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += 32765;
    var_11 -= ((var_9 ? (var_5 && 42) : ((var_7 ? var_6 : var_8))));
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [6] &= (((arr_3 [12] [12]) & var_0));
                arr_8 [i_0] [i_0] [i_1] = (((arr_0 [i_0 + 1]) ? ((~(arr_0 [i_0 - 1]))) : (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 1])))));
                var_13 = (arr_4 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
