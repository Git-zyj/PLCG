/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_4 == ((((!(0 % var_12))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [12] = -1;
        var_15 -= (arr_2 [i_0]);
        var_16 = ((-13 ? var_7 : (arr_1 [i_0])));
    }
    var_17 = (((var_13 && var_4) == (((var_0 >= (148 > var_1))))));
    #pragma endscop
}
