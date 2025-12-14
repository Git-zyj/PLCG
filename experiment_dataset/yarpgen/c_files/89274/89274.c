/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((max(var_10, (!var_18))) ? 255 : var_10);

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (max(65535, var_12));
        var_20 = (max(var_20, (arr_0 [i_0])));
        arr_3 [i_0] = (min((min((arr_1 [i_0]), (arr_0 [i_0]))), var_2));
        var_21 = (((((min(var_6, (arr_0 [i_0]))) * ((max((arr_1 [1]), 93)))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_22 = (max(((((arr_5 [i_1]) != 251))), ((((((arr_4 [i_1] [12]) ? var_4 : var_0))) ? ((var_3 ? (arr_1 [i_1]) : var_10)) : var_6))));
        arr_6 [i_1] = (arr_0 [i_1]);
    }
    var_23 = (((max(var_14, (~var_3))) & var_14));
    var_24 = var_7;
    var_25 = var_7;
    #pragma endscop
}
