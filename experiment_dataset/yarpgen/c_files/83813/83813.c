/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 ^= ((+((((18446744073709551615 && var_14) && (!34010))))));
        var_19 = (arr_0 [i_0]);
        var_20 = ((32767 ? 250106832036753998 : 6597400224717047845));
        var_21 = var_9;
    }
    var_22 = var_3;
    #pragma endscop
}
