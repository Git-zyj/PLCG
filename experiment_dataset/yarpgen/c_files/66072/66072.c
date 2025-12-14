/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((max(var_2, var_0))) ? ((((arr_3 [i_0]) ? 0 : var_1))) : ((var_3 ? (arr_3 [i_0]) : var_7)))))));
                arr_6 [i_0] = (max(var_6, 1));
            }
        }
    }
    var_15 += ((((max(-var_1, (min(var_0, var_3))))) ? ((min(var_10, ((0 ? var_8 : 1))))) : (((!1) ? 57860 : (~1587596109668790285)))));
    var_16 &= var_8;
    var_17 = var_2;
    #pragma endscop
}
