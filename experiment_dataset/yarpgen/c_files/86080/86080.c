/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((((((var_4 ? var_4 : var_8)) & (((max(var_10, var_14))))))) ? ((var_13 | (~var_14))) : (min(((var_14 << (var_13 - 858207907))), var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = min(-1, -10);
                arr_7 [i_0] [i_0] = var_8;
                var_19 = (max((max(var_3, (arr_2 [i_0] [i_0]))), ((((arr_3 [i_0] [i_1]) ? 10 : (!var_15))))));
                arr_8 [i_0] [i_0] [i_0] = (((arr_1 [i_1]) ? (((!((min((arr_1 [i_0]), var_3)))))) : var_3));
            }
        }
    }
    #pragma endscop
}
