/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = ((((max(var_4, var_3))) ? -var_16 : ((max(var_17, var_3)))));
                    var_19 = (max(var_19, (((var_15 / (((var_17 || var_2) ^ (var_5 ^ var_18))))))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = (((max(var_16, (var_18 + var_11)))) ? (max((var_17 - var_9), var_3)) : (((var_6 + var_9) ? -var_6 : ((var_18 ? var_4 : var_14)))));
                }
            }
        }
    }
    var_20 = var_6;
    #pragma endscop
}
