/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, 0));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (min(var_16, (((+(((arr_0 [i_0] [i_0]) ? (4294967292 / -9223372036854775807) : (((var_0 ? (arr_1 [i_0] [i_0]) : var_14))))))))));
        var_17 = (min(var_17, ((((min((max(9223372036854775793, var_5)), ((min(0, 472627974))))) - (arr_1 [i_0] [i_0]))))));
        var_18 = 9223372036854775807;
        var_19 = 24016450465296247;
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}
