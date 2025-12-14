/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_3 ? (((((max(var_9, var_3))) <= (var_1 | var_8)))) : (!165)));
    var_16 = 26859;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = ((-(((arr_1 [i_0]) * var_13))));
                var_18 = (max(var_18, (~18446744073709551615)));
                var_19 = (((((!(arr_3 [i_1 - 1] [i_1 - 1]))))) | (arr_3 [i_1 - 1] [i_1 - 1]));
                var_20 = ((0 ? (((((-(arr_1 [0]))) | var_3))) : (((arr_3 [i_0] [i_1 - 1]) | 18446744073709551615))));
            }
        }
    }
    var_21 = var_7;
    #pragma endscop
}
