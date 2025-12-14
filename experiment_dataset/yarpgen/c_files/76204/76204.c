/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_19 ? var_12 : var_12))) < (max(var_14, var_2))));
    var_21 = var_18;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_22 = 2061;
        var_23 += (((-1 > 168) ? (!83) : (arr_0 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = ((100 / (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_24 = 18446744073709551615;
        var_25 = (arr_4 [i_1]);
        var_26 = (max(var_26, 18446744073709551615));
        var_27 = ((~(((max(var_19, 0))))));
    }
    var_28 = (min(var_28, ((max((((((min(5995362699818237044, var_8))) || (!var_18)))), (~-775215079153456687))))));
    #pragma endscop
}
