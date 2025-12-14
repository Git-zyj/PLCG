/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((max(((min(-50, var_8))), 31710)))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_19 = (957807139 > 1972224352318250193);
        var_20 |= (min(((((max(var_2, -1))) ? (((((arr_1 [i_0 + 2]) == var_4)))) : var_9)), (((-3685210432202791907 ? var_6 : -var_14)))));
    }
    var_21 = (min(3, -71));
    var_22 = ((-var_13 ? (~var_4) : var_17));
    var_23 -= (-(((((max(var_0, var_16)))) / ((var_13 ? var_8 : var_9)))));
    #pragma endscop
}
