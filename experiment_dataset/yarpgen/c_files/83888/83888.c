/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_20 = (((((-(arr_2 [i_0 - 3] [i_0])))) ? (max((((arr_0 [i_0]) ? (arr_0 [i_0]) : 137393063)), var_13)) : (arr_0 [i_0 - 4])));
            var_21 = (((min((((arr_3 [i_1] [15]) | (arr_0 [i_0]))), 55745)) >> (((max((-32767 - 1), 10410219947485013954)) - 18446744073709518821))));
        }
        var_22 = (arr_0 [i_0]);
        var_23 &= (~((min((arr_3 [i_0 - 4] [2]), (arr_3 [i_0 - 4] [11])))));
    }
    var_24 = ((-(((min(var_12, 4786))))));
    var_25 = ((((((-899071983 - ((14 ? -47 : var_4)))) + 9223372036854775807)) >> (((!var_18) ? var_6 : (min(var_14, var_16))))));
    #pragma endscop
}
