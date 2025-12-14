/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(var_11, 250))) ? var_13 : ((~(var_18 ^ -3125202428297038167)))));
    var_21 = -var_10;
    var_22 = ((((-var_1 ? var_16 : -var_4))) ? var_19 : (!var_15));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_23 = ((~(arr_0 [i_0 - 1])));
        var_24 = ((6519380 ? (arr_1 [i_0 - 1] [i_0]) : ((27904 ? 1 : var_10))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_25 = var_14;
        var_26 = (arr_3 [i_1 + 1] [i_1 + 3]);
        arr_5 [i_1 + 2] = min((arr_4 [i_1] [i_1]), var_17);
    }
    #pragma endscop
}
