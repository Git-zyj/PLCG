/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((var_6 ? var_11 : var_3)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (arr_2 [i_0] [i_0]);
        var_17 = ((((max((arr_0 [i_0]), var_7))) ? ((-(min(-25005, var_11)))) : (max(((max(140, (arr_2 [i_0] [i_0])))), (arr_2 [i_0] [i_0])))));
        var_18 = (max((arr_2 [i_0] [i_0]), (((arr_0 [i_0]) ? ((((arr_2 [i_0] [i_0]) >> (-25005 + 25026)))) : var_12))));
        var_19 = 134;
    }
    var_20 = ((max((max(var_6, 158)), 61)));
    #pragma endscop
}
