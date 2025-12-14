/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((min(var_0, var_1))) + var_8)) == (max(-3, 1473342442))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_20 = (max(var_20, (((((((arr_1 [i_0]) / -110))) && var_7)))));
        arr_2 [14] &= (((30 & -1075107785) && (arr_0 [10])));
        arr_3 [i_0] = (4294967275 ? -1473342443 : (4 != -3829226465384126761));
    }
    #pragma endscop
}
