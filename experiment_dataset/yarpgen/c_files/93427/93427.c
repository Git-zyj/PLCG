/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_14 > -1722541477);

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_18 = ((((((arr_1 [8]) ? (((arr_0 [i_0]) + (arr_0 [i_0]))) : (min(var_12, -21808))))) * (max((max((arr_2 [i_0]), 65535)), ((((arr_0 [i_0]) / 4294967295)))))));
        var_19 = -2219937775944150379;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_20 = (-var_2 ? ((~(arr_4 [i_1]))) : ((min((arr_4 [i_1]), (arr_4 [i_1])))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_21 = (min(var_21, (((!((min((arr_5 [i_2] [i_2] [i_1]), (arr_6 [i_1])))))))));
            var_22 ^= (min(((((min((arr_5 [i_1] [i_1] [i_1]), var_9))) ? (var_1 / -4282600512554323562) : ((((arr_2 [i_1]) ? 1782686902 : var_6))))), var_4));
        }
    }
    var_23 = (+(((!var_13) & ((1782686902 ? var_11 : var_13)))));
    #pragma endscop
}
