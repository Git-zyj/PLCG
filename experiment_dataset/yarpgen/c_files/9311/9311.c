/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_18 = (min(var_18, ((max((((!(arr_2 [i_0 - 1])))), (arr_1 [i_0] [i_0 + 1]))))));
        arr_3 [i_0] [i_0 - 1] = (((arr_2 [19]) ? ((max((min(var_17, 1297802359)), (arr_1 [i_0] [i_0 + 1])))) : (((((37909 ? var_14 : var_10))) | -var_16))));
    }
    var_19 = (((((!var_12) < 40)) ? var_4 : (~var_8)));
    #pragma endscop
}
