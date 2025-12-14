/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_2 ? (((((var_9 ? var_3 : var_11))) ? (var_6 != var_2) : ((var_12 ? var_9 : var_6)))) : (((((((max(var_5, var_0)))) != ((var_11 ? var_10 : var_1))))))));
    var_15 = (~var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (!var_1);
                var_17 = (((!2701) ? (max((var_10 | var_1), (min(0, (arr_5 [3] [i_1]))))) : (((var_8 % (arr_1 [i_1] [i_0]))))));
                var_18 = ((!(((((688195452 ? (-9223372036854775807 - 1) : (arr_6 [i_0] [i_1]))) ^ var_5)))));
            }
        }
    }
    #pragma endscop
}
