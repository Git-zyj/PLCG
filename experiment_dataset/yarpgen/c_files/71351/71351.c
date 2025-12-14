/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (min((!var_17), ((~(var_13 | -3764699775758844627)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [1] = (((((min(((max((arr_2 [i_0]), (arr_2 [i_0])))), (arr_1 [i_0] [i_0]))) + 9223372036854775807)) << (((((3 ? 3750021279 : (arr_0 [i_0]))) <= ((var_12 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))))))));
        arr_4 [i_0] = (~-7991206518434876687);
        var_20 = (max(var_20, var_4));
        arr_5 [15] = (!(~var_8));
    }
    var_21 = var_13;
    var_22 = 34377;
    #pragma endscop
}
