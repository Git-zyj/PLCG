/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((var_11 / (((1 ? -1 : ((var_1 ? 1 : var_9)))))))));
                var_20 += ((1 ? (arr_1 [2]) : 92));
                var_21 += ((-((min(-101, (-9223372036854775807 - 1))))));
            }
        }
    }
    var_22 = var_5;
    var_23 = ((var_11 ? var_1 : var_2));
    #pragma endscop
}
