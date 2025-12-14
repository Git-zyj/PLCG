/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_10 ? var_11 : var_1))) - var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [9] [i_1] [1] = ((var_5 || (((-(arr_5 [i_0]))))));
                var_17 = (((min((arr_1 [i_0]), var_8)) != (var_3 < var_11)));
                arr_7 [i_0] [2] [i_1] = var_0;
            }
        }
    }
    #pragma endscop
}
