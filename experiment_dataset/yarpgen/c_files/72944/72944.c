/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((var_16 + 3) * 114)), ((min(255, ((30 << (var_1 - 86))))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((max(5, (arr_2 [i_0 - 1]))) | (((arr_2 [i_0 + 1]) * ((((!(arr_0 [i_0])))))))));
        var_19 = ((0 >= (((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (-(4061574704 + 3208354315));
        var_20 = (~var_6);
        var_21 = (((arr_2 [1]) ^ 160));
    }
    var_22 *= var_1;
    var_23 = (((!(150 >= var_11))));
    #pragma endscop
}
