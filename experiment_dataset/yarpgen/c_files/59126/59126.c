/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_10 += ((-((((((arr_4 [i_0] [i_1 - 2] [i_1]) ? 1 : 1))) ? (min(var_7, 3213272132869879129)) : (((var_3 | (arr_2 [1] [12]))))))));
                var_11 = var_1;
            }
        }
    }
    var_12 = ((var_6 >> (var_0 * -12283748652013034488)));
    var_13 = (((386514252019756104 ? ((12283748652013034488 << (var_4 - 78))) : var_7)));
    var_14 = ((((min(-23958, 12283748652013034478)) << ((((var_8 ? var_3 : 4294967284)) - 3383768489)))));
    #pragma endscop
}
