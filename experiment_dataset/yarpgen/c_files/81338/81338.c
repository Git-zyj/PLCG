/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = 134217728;
    var_16 = ((((!((max(var_11, var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = 511;
                arr_7 [i_0 - 1] [i_1] = (!var_12);
            }
        }
    }
    #pragma endscop
}
