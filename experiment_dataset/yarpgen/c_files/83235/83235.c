/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = ((~(max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_0])))));
                var_14 += (arr_2 [i_0] [i_0]);
                var_15 = var_7;
                var_16 *= (((((~(27137 <= var_11)))) ? (((arr_0 [i_1]) ? (arr_0 [i_1]) : 3588034116592164652)) : ((var_11 ^ (max(var_6, var_12))))));
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}
