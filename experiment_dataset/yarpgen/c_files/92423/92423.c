/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_17));
        var_20 = (2662638934 * 106);
    }
    var_21 = ((1632328388 ? ((0 ? -2078966555 : -123)) : var_4));
    #pragma endscop
}
