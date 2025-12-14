/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 = ((!(((arr_2 [i_0 + 1] [i_0 + 1]) >= (arr_1 [i_0 + 1])))));
        var_18 ^= ((((((arr_1 [i_0 + 1]) / (arr_1 [i_0 + 1])))) / (min((max((arr_3 [i_0 + 1] [i_0]), (arr_0 [i_0 + 1] [i_0 + 1]))), (arr_1 [i_0 + 1])))));
    }
    var_19 = (var_10 ? ((var_6 ? ((var_4 ? var_6 : 3840709456)) : (var_7 - var_2))) : ((((var_3 <= var_16) ? var_9 : 2259378356404451474))));
    var_20 = var_3;
    #pragma endscop
}
