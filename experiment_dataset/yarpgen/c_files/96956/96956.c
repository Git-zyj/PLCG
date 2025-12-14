/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = ((~(((((var_14 ? -5461 : var_7))) ? 20 : (max(251, var_3))))));
                arr_6 [i_0] [i_1] = var_14;
                arr_7 [i_0] [9] [9] |= ((-1755643815 ? ((var_10 ? (2965282223 < var_0) : 103)) : var_5));
            }
        }
    }
    var_17 = (min(var_17, 2965282223));
    var_18 = var_3;
    #pragma endscop
}
