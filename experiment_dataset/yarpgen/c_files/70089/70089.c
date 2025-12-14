/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= 150582654;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 |= (max(var_15, var_19));
        var_22 = (min(var_22, (((((arr_0 [i_0] [i_0]) & (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_23 = (max(var_23, ((max((arr_2 [i_1]), (((!(arr_0 [i_1] [i_1])))))))));
        var_24 = 133;
        var_25 = ((((((((arr_3 [i_1]) ? (arr_2 [i_1]) : 133)) < -2757))) << (min(6920, (((!(arr_1 [i_1]))))))));
        var_26 ^= (arr_1 [i_1]);
        var_27 += (((arr_3 [i_1]) ? 112 : (min(-680295968, (arr_1 [23])))));
    }
    #pragma endscop
}
