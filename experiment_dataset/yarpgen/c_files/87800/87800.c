/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((min(var_0, var_8))) ? (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (var_1 - 92))) : (6780911210739267952 == 921096654))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 += (min((arr_4 [i_1] [i_0]), ((var_7 ? (arr_4 [i_1] [i_0]) : -421232018))));
                var_21 = -4820;
                arr_5 [i_1] [i_1] [i_0] = (arr_0 [i_0]);
            }
        }
    }
    var_22 = max(-1737281452, (min((min(8188, var_4)), var_15)));
    #pragma endscop
}
