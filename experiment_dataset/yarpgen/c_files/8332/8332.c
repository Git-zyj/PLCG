/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] [i_1] = -8192;
                var_20 *= arr_4 [i_0] [i_0 + 1] [i_0 + 1];
                var_21 = (((arr_4 [i_1] [1] [1]) | var_12));
                var_22 = (max(var_22, ((!((((arr_1 [i_0] [i_0 + 1]) ? var_18 : var_18)))))));
                var_23 = min(var_16, (((!((((arr_4 [15] [i_0 + 1] [i_1]) ? (arr_1 [i_0 + 1] [i_0 + 1]) : var_19)))))));
            }
        }
    }
    var_24 = var_12;
    var_25 = (min(var_25, ((!(1 | 1)))));
    var_26 = var_19;
    #pragma endscop
}
