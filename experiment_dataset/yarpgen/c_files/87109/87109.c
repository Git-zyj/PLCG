/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 58548;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = ((((min((arr_1 [i_0]), (arr_0 [i_0])))) - (((((((arr_2 [i_0]) * var_5))) ? -2047730324 : ((var_4 ? 36 : var_0)))))));
        arr_3 [i_0] = ((-637831525352027077 != (var_6 + -var_8)));
        var_18 = (min(var_18, ((((var_7 ? (arr_1 [i_0]) : 193))))));
    }
    var_19 = min(((min(var_2, var_6))), var_7);
    var_20 = (min(var_20, var_2));
    var_21 = (((((max(var_6, 36)) << ((((var_9 ? var_12 : var_14)) + 5536583718733989317)))) / (((((~var_13) > ((127 ? 1457276509 : var_5))))))));
    #pragma endscop
}
