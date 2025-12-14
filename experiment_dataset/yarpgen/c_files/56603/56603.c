/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = (max((((((min(var_12, var_10)))) ^ (arr_0 [i_0]))), (min((((63 ? 6 : 250))), (min((arr_1 [i_0] [i_0]), (arr_2 [i_0] [i_1])))))));
                var_14 = 253;
            }
        }
    }
    var_15 = (max(var_15, ((((var_5 % 38) ? ((var_5 ? ((var_11 ? 3 : var_11)) : var_1)) : var_11)))));
    #pragma endscop
}
