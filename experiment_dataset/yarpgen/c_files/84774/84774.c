/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (!14513049891698850357)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = 58250;
        var_21 = ((!(arr_1 [i_0] [21])));
        var_22 = (((((268304384 ? 2147483647 : var_18))) ^ var_3));
        var_23 = (max(var_23, ((((arr_0 [i_0] [i_0]) * (arr_0 [i_0] [i_0]))))));
    }
    var_24 = (min(var_3, var_8));
    var_25 = (min(var_25, (((~((~(-268304375 ^ 21309))))))));
    var_26 = (!(((-(var_17 * 47881)))));
    #pragma endscop
}
