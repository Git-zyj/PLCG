/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((((((arr_2 [i_0] [i_1]) ? 27223 : ((var_13 ? var_0 : -8865))))) ? ((1980274655 ? (arr_1 [i_0 - 3] [i_0 + 1]) : (arr_2 [i_0] [i_1]))) : (arr_1 [10] [10]))))));
                var_19 = 62405;
            }
        }
    }
    var_20 = (max(var_20, ((((var_4 >> var_7) == var_6)))));
    var_21 = var_5;
    #pragma endscop
}
