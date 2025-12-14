/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_0 >> ((((-(var_11 + 15))) - 9144961317555104167))));
    var_13 = ((12713333503065208969 ? var_8 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((var_7 ? (((max(var_5, var_8)))) : ((3657119989924738192 ? 18446744073709551601 : var_8)))) <= (max((((0 >> (18446744073709551601 - 18446744073709551590)))), 8444249301319680))));
                var_14 |= (((((18446744073709551601 ? var_11 : var_2))) ? (+-31) : 4424863238150048201));
            }
        }
    }
    var_15 = var_0;
    #pragma endscop
}
