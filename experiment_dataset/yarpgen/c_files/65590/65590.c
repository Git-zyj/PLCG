/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [4] = (min((max(var_13, (var_16 || 64889))), (max(((var_0 ? 2452847576136258714 : 64880)), -1))));
                var_19 = (((-3386 / (3385 != -111))));
                var_20 = (min(var_20, (!-8914)));
                arr_5 [i_0 - 2] = ((~(((((3388 ? -8915 : var_1))) ? 3388 : (-3385 * var_12)))));
            }
        }
    }
    var_21 = var_9;
    #pragma endscop
}
