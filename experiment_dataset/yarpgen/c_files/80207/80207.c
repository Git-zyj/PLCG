/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (min((((arr_4 [i_0]) ? (var_9 + var_13) : (((max(1, 1)))))), (((var_12 ? (min(26, (arr_1 [i_1]))) : ((var_1 ? var_1 : var_2)))))));
                var_15 = (((((-56633 ? (arr_3 [i_0]) : var_8))) > ((-((0 ? var_11 : 1188786185))))));
                var_16 = (max(var_16, (((var_4 ? (((((var_9 ? -8234604455364996554 : var_10)) > 19459))) : (arr_4 [0]))))));
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}
