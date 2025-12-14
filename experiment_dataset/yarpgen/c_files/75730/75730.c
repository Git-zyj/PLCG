/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(min((!var_1), 4294967283))));
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 += (((arr_2 [i_0]) ? (223 & 252) : ((-8313908933327631741 ? (var_9 ^ var_6) : ((((arr_2 [i_0]) ? var_6 : (arr_1 [i_0] [i_1]))))))));
                var_17 += (((!var_5) - ((-41 + (arr_0 [i_0])))));
                var_18 = (max(var_10, (((var_9 ? (arr_3 [10] [i_1]) : var_5)))));
            }
        }
    }
    var_19 = -1219076387;
    #pragma endscop
}
