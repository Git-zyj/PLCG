/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_4);

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_11 = ((((((arr_1 [i_0]) | (-32740 / 4749970881128329076)))) || (arr_1 [i_0])));
        var_12 = var_9;
        var_13 -= ((!((min((arr_1 [i_0]), (min(var_8, (arr_0 [i_0]))))))));
        arr_2 [i_0] = (max(((var_6 ? 9223372036854775807 : (arr_0 [i_0 + 1]))), 255));
    }
    #pragma endscop
}
