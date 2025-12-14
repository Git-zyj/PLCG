/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((((max(28380, var_7))) ? var_8 : (1 * var_2))), ((-(-28387 * var_8)))));
    var_11 = ((var_1 - ((var_6 ? (min(28380, var_6)) : var_1))));
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] = ((118 ? ((1 >> (28405 - 28397))) : (54 | 13864)));
                arr_8 [i_1] = (54 * -54);
                var_13 ^= (((((arr_6 [i_0 + 2] [i_0 + 2]) / (arr_6 [i_0 + 2] [i_1]))) | (((arr_6 [i_0 + 2] [i_0]) ? (arr_6 [i_0 + 2] [i_0 + 2]) : (arr_6 [i_0 + 2] [i_1])))));
            }
        }
    }
    var_14 = (min(var_5, ((max(var_3, var_0)))));
    #pragma endscop
}
