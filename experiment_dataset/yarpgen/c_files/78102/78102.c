/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((!((min(31281, var_8)))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((231171868 ? (min(var_2, 9223372036854775807)) : (((17148316186314882632 ? 399611195 : -31959))))))));
                arr_4 [i_1] = (-31281 + -914140204);
            }
        }
    }
    var_17 = 10;
    #pragma endscop
}
