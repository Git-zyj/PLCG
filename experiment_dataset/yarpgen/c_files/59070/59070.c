/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((((!((max(var_0, var_1))))) ? ((var_3 ? (max(var_3, var_5)) : (((max(var_10, var_2)))))) : (min(3521022073690563420, 3521022073690563417))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = ((!((((arr_3 [i_0] [5]) % (var_1 != var_5))))));
                arr_4 [i_0] = (arr_2 [i_0 - 1] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
