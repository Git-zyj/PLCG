/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_20 = arr_0 [i_0 - 2];
        var_21 = (arr_3 [i_0] [i_0 - 2]);
    }
    var_22 = (max(var_22, var_18));
    var_23 = (min(var_23, ((((((!((min(2437323024859818840, var_16)))))) <= (max(-var_11, (var_4 >> var_11))))))));
    #pragma endscop
}
