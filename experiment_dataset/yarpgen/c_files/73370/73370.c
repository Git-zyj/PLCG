/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 22;
    var_18 = (~-955869026799996921);
    var_19 += 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (min(((~(~18446744073709551593))), (((-(!var_8))))));
                var_20 *= ((max(((-316 ? 18446744073709551593 : 1)), ((((arr_3 [i_0 - 1]) ? var_16 : var_13))))));
            }
        }
    }
    #pragma endscop
}
