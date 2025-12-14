/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 ^= (!var_1);
        var_12 = (((arr_0 [i_0 - 1]) ? 24929 : var_1));
    }
    var_13 = (min(8566, (max(24926, (1 * -21644)))));
    var_14 = -var_8;
    var_15 = 52553;
    #pragma endscop
}
