/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((max(var_6, (-105 >= 63)))) ? (((var_2 ? 3 : var_8))) : (var_7 ^ 54702))))));
    var_13 += var_8;
    var_14 -= (max(var_10, (((((4225217130 ? 30314 : var_1)) - var_5)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);
        var_16 = (0 && 3944546000);
        var_17 = (min(var_17, ((((1056 == ((var_3 ? 201 : var_8))))))));
        var_18 = 1;
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (max((arr_4 [i_1]), 22449));
        var_19 = ((((arr_4 [i_1]) ? (((arr_3 [i_1]) ? 1 : (arr_3 [i_1]))) : (arr_6 [i_1]))));
    }
    #pragma endscop
}
