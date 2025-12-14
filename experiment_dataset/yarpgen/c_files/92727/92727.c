/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (((((((((var_11 ? var_2 : -64)) + 2147483647)) >> (var_3 - 2730896489635567654)))) && ((max(((28356 << (-28340 + 28341))), var_4)))));
    var_21 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = (min((arr_6 [i_0 - 1] [i_0 - 2] [7]), (((arr_5 [i_0 + 1]) * (arr_5 [i_0 - 2])))));
                var_22 = (((((arr_2 [i_0 + 2]) ? (((arr_7 [i_0] [i_0]) << (((arr_2 [i_1]) + 34)))) : (((~(arr_0 [i_0])))))) * var_2));
                arr_9 [i_0] = (max(((max(var_7, (arr_2 [i_1])))), (((arr_0 [i_0 - 1]) ? (arr_0 [i_1]) : (arr_2 [i_1])))));
            }
        }
    }
    #pragma endscop
}
