/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 = (max((max((arr_1 [i_0 + 3]), (max((arr_1 [i_0]), (arr_0 [i_0]))))), (((!(arr_0 [i_0 + 1]))))));
        arr_2 [i_0] [i_0] = ((-18915 ? -47 : -29));
        var_16 = (arr_0 [i_0]);
        arr_3 [i_0] = (((arr_0 [i_0 + 2]) ? (((arr_0 [i_0 + 1]) ? (arr_1 [i_0 + 3]) : (arr_0 [i_0 + 2]))) : var_6));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = ((((arr_5 [i_1] [2]) || (arr_5 [i_1] [i_1]))));
        var_17 = (((!var_12) || ((((arr_5 [16] [i_1]) >> (-12 + 25))))));
    }
    var_18 = var_1;
    #pragma endscop
}
