/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_11;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 = (max(var_21, (((1 < (min(4294967295, (~var_10))))))));
        arr_3 [i_0] = (((min(((~(arr_1 [i_0]))), (1 / var_16))) & ((((-2147483638 + 2147483647) << (((((arr_1 [i_0]) << (-16646 + 16663))) - 733085696)))))));
        var_22 = var_19;
    }
    var_23 = (max(var_23, var_0));
    #pragma endscop
}
