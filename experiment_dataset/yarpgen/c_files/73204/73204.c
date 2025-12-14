/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_5));
    var_12 = -var_1;
    var_13 = ((-63 < 62) & 1567930184);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (((arr_3 [i_1 + 1] [i_1 - 1]) ? ((-3136 ? (arr_4 [i_0] [i_1 - 1]) : (arr_4 [i_0] [i_0]))) : (((max(var_8, (arr_0 [i_0])))))));
                var_15 = ((((max((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1])))) ? (((arr_0 [i_1 - 1]) ? 1427256379 : (arr_0 [i_1 - 1]))) : (arr_0 [i_1 + 1])));
                var_16 = (((((-(arr_4 [i_1 + 1] [i_1 + 1])))) ? (arr_4 [i_1 - 1] [i_1 - 1]) : (((arr_4 [i_1 + 1] [i_1 + 1]) * 161))));
            }
        }
    }
    #pragma endscop
}
