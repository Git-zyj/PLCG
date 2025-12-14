/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max((min((!var_13), ((18446744073709551601 ? 6383753479220402810 : var_3)))), var_13);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-(--4586)));
        var_16 = (~var_0);
        var_17 = 102;
        arr_4 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_18 = (min((arr_7 [i_1]), (((!((((arr_5 [i_1]) ? var_13 : (arr_7 [i_1])))))))));
        var_19 ^= arr_7 [i_1];
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_20 = (max(var_20, ((((min((arr_9 [i_2] [i_2]), 118)) >= -109)))));
        var_21 = ((max((arr_0 [i_2]), (arr_6 [i_2] [i_2]))));
    }
    #pragma endscop
}
