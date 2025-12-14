/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (((((30627 / 1) ? ((1 >> (var_17 - 5323231054975915146))) : (1 / var_6))) < (((var_16 * var_13) % var_15))));
                arr_5 [i_0] [i_0] = 3581;
            }
        }
    }
    var_21 = var_10;
    var_22 = ((((var_1 * (var_12 / var_14))) < var_4));
    #pragma endscop
}
