/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (((min((arr_1 [i_0]), 2434831176)) + (arr_1 [i_0])));
                var_17 = (min(-var_12, (((((1860136119 ? var_14 : 138))) ? -48948 : var_14))));
            }
        }
    }
    var_18 = (min(((((min(48949, 379106906)) | ((var_0 << (var_2 - 11150)))))), ((var_9 ? var_6 : var_4))));
    var_19 = ((var_10 * ((-(!96)))));
    #pragma endscop
}
