/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_1);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = ((-(arr_3 [i_0] [i_0 + 2])));
                var_22 = (max(var_22, (~127)));
                var_23 = (min(var_23, (((-29959 ? -4188318341992220367 : 0)))));
            }
        }
    }
    var_24 = ((var_6 ? 63 : var_7));
    var_25 = (min(var_25, (((-10423 ? 4854587506418904143 : 88)))));
    #pragma endscop
}
