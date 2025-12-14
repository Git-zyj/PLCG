/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_10 ? (max((((var_1 ? 65534 : var_11))), (var_18 - var_14))) : ((12182 ? -var_0 : 59891)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 = (((((-(arr_0 [i_0]))) + (2184669828478638533 && 0))) - (arr_2 [i_0]));
        var_22 = ((+((~(((arr_1 [i_0] [12]) ? var_4 : 0))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_23 -= min((min((~var_0), 53353)), ((((arr_4 [i_1] [i_1]) << (45901 - 45901)))));
        arr_6 [i_1] = (((((min(31526, var_10)) + (1074324172 | var_19)))));
        arr_7 [i_1] = (max((59879 - 64700), (max((arr_4 [i_1] [i_1]), (53351 / 2104095910)))));
    }
    #pragma endscop
}
