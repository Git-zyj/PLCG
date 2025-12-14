/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!30386);
    var_20 = -var_16;
    var_21 &= (((((max(var_14, var_11)))) - var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_22 = (max(79353488600092865, (arr_3 [23] [i_0])));
                arr_6 [i_1] = (max(var_12, var_13));
                var_23 |= (max(((29796 | (arr_4 [i_0]))), (arr_0 [i_1] [i_0])));
            }
        }
    }
    var_24 = var_18;
    #pragma endscop
}
