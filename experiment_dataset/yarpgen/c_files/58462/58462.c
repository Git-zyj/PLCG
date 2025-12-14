/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (arr_4 [i_1 + 4] [i_1 - 1] [i_1 + 2]);
                var_14 = (min(var_14, ((max((max((max((arr_1 [i_1]), 1)), (((-4611686018427387904 && (arr_0 [2])))))), (arr_1 [i_0]))))));
                arr_6 [i_0] [i_1] [i_1] = arr_4 [i_1] [i_1] [i_1];
                var_15 = var_8;
            }
        }
    }
    var_16 = (max(((((var_9 == 9189080189946852676) ? var_11 : var_7))), (((((var_1 - 4611686018427387903) + 9223372036854775807)) >> (var_0 + 23315)))));
    var_17 = ((var_12 ? (((var_10 ^ 4611686018427387903) ^ var_11)) : (1462147736 % 2832819556)));
    #pragma endscop
}
