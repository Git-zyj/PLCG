/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (!var_9);
    var_12 -= var_5;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 *= ((var_1 & ((min((arr_0 [i_0]), (arr_3 [3] [8]))))));
        arr_4 [4] [9] = ((~(arr_1 [1] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_8 [14] = (((((arr_7 [12]) ? 235 : 65373)) < (arr_6 [9] [3])));
        var_14 += ((4024568970 ? var_9 : (arr_7 [i_1 - 1])));
    }
    #pragma endscop
}
