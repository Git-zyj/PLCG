/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = (((((var_5 != var_4) >> (var_0 || 18446744073709551610)))) ? var_1 : ((((((18446744073709551609 ? var_10 : var_6))) ? 448 : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (((max(-904620963, -904620973)) < 1));
                var_14 = (((arr_1 [i_1]) ? (arr_4 [i_0]) : ((var_4 >> (((arr_1 [i_0]) - 28373))))));
                arr_5 [i_0] [i_1] = arr_4 [17];
            }
        }
    }
    var_15 *= (((max(var_6, (max(var_6, var_7)))) > ((((var_4 || var_8) ? var_4 : (var_1 || var_8))))));
    #pragma endscop
}
