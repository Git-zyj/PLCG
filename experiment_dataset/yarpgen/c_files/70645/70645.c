/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_11;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_16 = (253 & -790379458);
        arr_3 [i_0] = (!var_1);
        var_17 += 103;
        var_18 = ((18446744073709551600 ? 253 : -790379458));
        var_19 = ((57213 / (arr_0 [i_0 - 2])));
    }
    #pragma endscop
}
