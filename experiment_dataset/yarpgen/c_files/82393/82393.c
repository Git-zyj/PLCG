/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_12 ? ((175063357 << ((((min(var_14, var_12))) + 39)))) : (((max(1, (-127 - 1)))))));
    var_21 = (max(175063352, 65535));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_22 = (min(var_22, 0));
                var_23 -= var_15;
                var_24 = ((((((arr_3 [i_0 - 1]) != (arr_0 [i_0] [i_1 - 2]))))) / (65535 << 1));
            }
        }
    }
    var_25 = (((min((!var_9), -0)) / var_9));
    #pragma endscop
}
