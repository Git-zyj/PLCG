/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_8 - var_6);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_16 = (!9223372036854775807);
        var_17 = -var_8;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_18 &= ((var_4 ? 3383369442 : 1));
            arr_6 [i_2] |= (~-5969122836124213814);
            arr_7 [i_1] = ((108 ? 108 : var_7));
        }
        arr_8 [i_1] [i_1] = (~3383369442);
    }
    #pragma endscop
}
