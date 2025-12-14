/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_13 ? ((~((var_10 ? var_10 : var_5)))) : var_13));
    var_15 = ((42277 | (min(614933154, var_3))));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0 - 2] = (max((((var_2 > (min((arr_1 [i_0 + 1]), (arr_1 [i_0])))))), ((((max((arr_0 [1]), (arr_0 [14])))) ? 8378768999645364053 : (min(var_3, var_12))))));
        var_16 = -2035802516;
    }
    #pragma endscop
}
