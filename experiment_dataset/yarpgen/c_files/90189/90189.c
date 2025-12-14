/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (min((((arr_1 [15]) - (((arr_2 [i_0] [i_1 + 1]) ? var_17 : (arr_0 [i_0 + 2] [i_0]))))), (((-((var_14 ? var_1 : var_15)))))));
                var_20 = (min(var_20, var_12));
                var_21 = ((~((((arr_3 [i_0 + 1] [i_0 - 3] [i_0 - 2]) <= var_16)))));
            }
        }
    }
    var_22 = var_7;
    var_23 = var_2;
    var_24 = ((~((min((var_7 <= var_14), (min(var_7, var_0)))))));
    #pragma endscop
}
