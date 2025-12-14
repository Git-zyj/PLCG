/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_12 *= ((arr_0 [i_0] [i_0]) ? ((((1 ? 15 : 1)))) : ((-4413045857706130589 ? ((((-9223372036854775807 - 1) ? 1 : 1))) : 2616449377)));
        var_13 &= ((6373 || (!1678517912)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_14 = (min((max((arr_4 [i_1]), (min(119, -309025821)))), ((((min(202, (arr_0 [i_1] [i_1])))) ? 23632 : ((max(24340, (arr_5 [i_1] [i_1]))))))));
        var_15 = var_4;
    }
    var_16 = 1;
    var_17 = (max(((((var_0 | var_1) && (((var_8 ? var_8 : var_11)))))), 2147483647));
    #pragma endscop
}
