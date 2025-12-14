/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (2097151 == var_6);
    var_11 = var_7;
    var_12 = ((var_0 + ((var_6 + (1119083287165121439 - -1119083287165121440)))));
    var_13 = 1090960172;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = var_3;
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
    }
    #pragma endscop
}
