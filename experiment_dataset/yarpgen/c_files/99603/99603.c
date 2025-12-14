/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((!(~85)));
    var_14 = (~12994274449782675606);
    var_15 = ((((min(var_12, -var_2))) ? var_12 : var_5));
    var_16 |= var_10;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_17 = min((arr_2 [i_0 + 3]), ((1 << (-113 + 143))));
        arr_3 [i_0] [i_0] &= var_11;
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_18 = (min(var_18, (1 >= -16364)));
        var_19 *= (var_9 + var_2);
    }
    #pragma endscop
}
