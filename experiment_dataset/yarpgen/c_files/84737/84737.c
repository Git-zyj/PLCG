/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_5);
    var_13 = max(1045359692777719375, 0);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (min((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : var_4)), (arr_1 [i_0]))) : ((((((1907658588503194514 ? 5876224798097980365 : 16539085485206357097)) == 0)))));
        arr_2 [i_0] [i_0] = (5 - 18446744073709551602);
        var_15 = (((max((max(var_2, (arr_0 [i_0] [i_0]))), 9)) != (min(((~(arr_1 [i_0]))), (arr_0 [i_0] [i_0])))));
    }
    #pragma endscop
}
