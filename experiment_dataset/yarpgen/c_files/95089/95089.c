/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (max((!var_16), (min(var_12, (min(var_1, 1))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_19 = (max(var_19, var_9));
        var_20 = (min(var_20, (arr_1 [i_0])));
        var_21 &= (max((!2147483647), (-var_3 | var_3)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, -88));
        var_23 = (((!(arr_1 [13]))));
    }
    #pragma endscop
}
