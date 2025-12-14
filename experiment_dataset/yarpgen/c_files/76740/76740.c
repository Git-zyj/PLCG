/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = arr_1 [i_0];
        var_18 = ((arr_2 [i_0 - 2]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1]));
    }
    var_19 = ((((min(var_1, (((var_15 ? 3968 : var_5)))))) || -var_9));
    var_20 &= (((((!(((var_4 ? var_17 : var_3)))))) * ((var_14 ? (var_5 >= var_16) : (var_1 || var_7)))));
    var_21 = ((((((3968 ? -3969 : 3968)) & 3968)) & 255));
    #pragma endscop
}
