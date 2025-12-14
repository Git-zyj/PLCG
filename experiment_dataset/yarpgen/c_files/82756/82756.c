/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((!((!(arr_0 [i_0 + 2])))));
        var_14 = ((max(((var_6 ? var_12 : 1), (arr_0 [i_0 - 1])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] = ((((max(var_6, (arr_1 [i_1] [i_1]))))) & (min((arr_4 [i_1]), var_0)));
        var_15 = ((((max((arr_1 [i_1] [i_1]), (arr_1 [i_1] [i_1])))) ? ((min(var_5, (((arr_1 [i_1] [i_1]) % var_11))))) : (arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_9 [i_2] = 232;
        var_16 = (((arr_7 [i_2]) + (((arr_6 [i_2] [i_2]) ? (10521672636279918259 | 739919176) : (arr_6 [i_2] [i_2])))));
        var_17 |= (arr_0 [i_2]);
    }
    #pragma endscop
}
