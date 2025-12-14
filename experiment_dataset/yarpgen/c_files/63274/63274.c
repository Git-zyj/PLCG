/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] &= (arr_1 [i_0]);
        var_19 -= (arr_1 [i_0]);
        var_20 = ((3099180853 - ((var_12 + (((-(arr_1 [i_0]))))))));
        var_21 = ((max((((arr_1 [i_0]) & var_1)), (-5 & 0))));
        arr_3 [i_0] = (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : ((((arr_1 [i_0 - 1]) && (arr_1 [i_0 - 1]))))));
    }
    var_22 += -var_6;
    #pragma endscop
}
