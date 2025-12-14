/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_11 ? 31317 : (var_17 * var_0))) != var_3));
    var_19 = var_7;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 -= ((-(arr_0 [i_0] [i_0])));
        var_21 = (min(var_21, (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_22 = ((-((-(arr_1 [i_1 + 1])))));
        arr_4 [i_1] = ((!(arr_3 [i_1 - 1])));
        var_23 = (arr_3 [i_1]);
        var_24 = (arr_0 [i_1] [1]);
    }
    var_25 = (max((((max(var_9, var_15)) * var_13)), ((-(var_12 != var_14)))));
    #pragma endscop
}
