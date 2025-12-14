/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_15 = ((((var_1 ? (arr_1 [i_0 + 1]) : 11164)) & (((arr_1 [i_0 + 1]) & var_2))));
        var_16 = 54375;
        var_17 = (((((((54375 / (arr_1 [i_0])))) ? ((max((arr_1 [i_0 - 2]), 54350))) : (arr_0 [i_0]))) & (((!(arr_3 [i_0 + 1]))))));
        var_18 = (max(var_18, ((((arr_2 [3] [i_0 + 3]) ? ((max(-54377, (arr_2 [i_0 - 3] [i_0 + 3])))) : (16216649570350169181 + var_4))))));
    }
    var_19 = (max(((((max(54375, 11192))) ? -var_5 : var_12)), var_12));

    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] = (!(((~(arr_5 [i_1 + 1])))));
        arr_8 [i_1] = ((((max(var_14, var_4))) << ((((~54353) >= (arr_5 [i_1 - 2]))))));
        var_20 = (max(var_20, ((((max((arr_4 [1]), var_9)) - ((((1 ? 28 : var_1)))))))));
        var_21 = var_5;
    }
    var_22 = var_10;
    #pragma endscop
}
