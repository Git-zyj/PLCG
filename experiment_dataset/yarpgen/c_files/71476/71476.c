/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((max(var_1, (!-13))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 = (((((-((65535 ? var_2 : (arr_0 [i_0])))))) ? (((((-2 ? (-127 - 1) : 1)) < -2))) : -var_5));
                    arr_10 [i_0] [i_0] = (((((arr_6 [i_2 - 3] [i_0] [i_2 + 1] [i_2]) | (arr_6 [i_2 - 1] [i_0] [i_2 + 2] [i_2]))) & (((arr_4 [i_0] [2]) ? (118 >= 255) : (~-16550)))));
                }
            }
        }
    }
    var_12 += (min((((4363843514712977836 ^ -13) ^ var_1)), (((((249 ? var_2 : var_7)) < (~0))))));
    #pragma endscop
}
