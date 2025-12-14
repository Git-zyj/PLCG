/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (4514840698805569454 || 63);
        arr_3 [i_0] = (((arr_0 [i_0]) <= (((arr_1 [i_0] [i_0 - 1]) ? -4514840698805569454 : (arr_1 [10] [i_0])))));
        var_14 = ((~(-2147483647 - 1)));
        var_15 = (arr_1 [7] [i_0 - 1]);
    }
    var_16 = (var_13 && var_13);
    #pragma endscop
}
