/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((min(var_11, (max(var_9, var_5)))), var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (max((((231 / var_4) ? ((var_8 ? var_8 : var_3)) : (((arr_7 [i_0]) / var_1)))), (((var_12 < ((122 ? 0 : 1)))))));
                    arr_8 [i_1] [i_1] [i_2] = var_3;
                    var_18 = ((231 ? 51846 : (20 % 1)));
                }
            }
        }
    }
    var_19 = ((var_3 ? (min(var_3, var_0)) : var_7));
    var_20 = var_5;
    #pragma endscop
}
