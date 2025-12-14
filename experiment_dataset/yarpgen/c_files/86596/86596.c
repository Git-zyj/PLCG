/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] [i_0] [i_0 + 1] = ((((~(-127 - 1))) | ((min((arr_4 [i_0] [i_0 + 2]), 85)))));
                var_20 = (min(var_20, ((~(((arr_1 [i_0 + 1]) ? 65535 : 126))))));
            }
        }
    }
    var_21 -= (((var_12 / 126) ? (((var_17 | ((0 % (-127 - 1)))))) : (max(var_2, (((var_16 ? var_11 : -2147483639)))))));
    var_22 = var_10;
    #pragma endscop
}
