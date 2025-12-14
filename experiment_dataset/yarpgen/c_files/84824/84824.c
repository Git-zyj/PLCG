/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((~((var_0 ? 3922027718841644484 : 137438953471))));
    var_16 = ((var_6 == (((var_12 ? 1 : var_6)))));
    var_17 -= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (arr_7 [11] [11] [i_1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_19 = var_13;
                    var_20 = ((var_9 == (arr_0 [i_1 + 1])));
                }
                var_21 += 0;
                arr_10 [7] [i_1] = 1;
            }
        }
    }
    #pragma endscop
}
