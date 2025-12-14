/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_2;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (min(var_18, ((((max(var_11, (-302884192 % var_10)))) ? (-var_4 / var_15) : ((((arr_1 [10]) / (((126976 ? 302884194 : 7280))))))))));
        arr_3 [18] [i_0] = (var_13 > (((min(95, 302884188)) & (((var_10 != (arr_2 [i_0])))))));
    }
    #pragma endscop
}
