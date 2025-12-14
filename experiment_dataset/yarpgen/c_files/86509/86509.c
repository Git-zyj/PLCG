/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (((arr_1 [i_0]) ? ((-(arr_1 [i_1]))) : ((((arr_1 [i_0]) == var_4)))));
                arr_5 [9] = (arr_2 [i_0] [i_1]);
            }
        }
    }
    var_18 = (((((var_5 ^ var_13) / ((min(var_15, var_14))))) >> (((((0 ? var_9 : var_14)) <= (var_11 < var_2))))));
    var_19 = (max(37469, var_5));
    #pragma endscop
}
