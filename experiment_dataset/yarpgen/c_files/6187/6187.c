/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~((max((max(-16819, 16819)), (max(var_4, var_10))))));
    var_12 = ((~((((var_1 ? 19848 : var_5))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (min(var_5, (arr_1 [i_0] [i_0])));
        var_13 = var_5;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_14 = ((!((min(16819, (((!(arr_3 [i_1])))))))));

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_15 = (max((arr_5 [i_1 + 1]), (arr_8 [18] [i_2] [i_1])));
            arr_9 [i_1] [i_2] = (((arr_6 [i_2 + 2] [i_2 - 1]) <= ((min((arr_4 [i_1 + 1]), (arr_4 [i_1 + 1]))))));
            var_16 = max((18446744073709551615 / var_0), var_6);
        }
        var_17 = ((((min(1, (arr_6 [i_1 + 1] [i_1 + 1])))) ? ((min((arr_6 [i_1 + 1] [i_1 + 1]), (arr_6 [i_1 + 1] [i_1 + 1])))) : ((127 >> (((arr_6 [i_1 + 1] [i_1 + 1]) + 71))))));
        var_18 = ((((min((arr_5 [i_1 + 1]), (arr_3 [i_1 + 1])))) ? (min(0, 123207197643006933)) : (min((((-18230 ? -7898 : -16819))), 13403429696476836724))));
    }
    #pragma endscop
}
