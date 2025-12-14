/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = ((-1 ? -7296742396971435723 : 53089));
        arr_4 [i_0] = 0;
        arr_5 [i_0] = ((~(-127 - 1)));
        var_18 = (max(var_18, var_13));
    }
    var_19 = (249 * 39257);
    #pragma endscop
}
