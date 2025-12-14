/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max((((((1 ? -2156794284679057089 : 2478165026))) ? var_11 : var_9)), var_8);
    var_14 = (!var_10);
    var_15 = (min((var_4 ^ var_0), (((-1 + 9223372036854775807) >> (var_8 - 60655)))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_16 = (50014 * 67108863);
        var_17 += (-(arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] [8] = ((-(((arr_3 [i_1] [i_1]) ^ (arr_3 [i_1] [i_1])))));
        var_18 *= var_11;
    }
    var_19 = -var_11;
    #pragma endscop
}
