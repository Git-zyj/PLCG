/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    var_21 = min((~var_10), (((max(var_6, var_1)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (max(var_19, (min((arr_1 [i_0]), (arr_1 [i_0])))));
        arr_5 [i_0] = var_1;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_22 = (max(var_22, var_19));
        var_23 = -var_19;
        var_24 = (min(var_24, (max((((max(var_8, var_7)))), (min((min((arr_1 [i_1]), (arr_0 [0]))), (max((arr_7 [6]), var_15))))))));
    }
    var_25 = ((-(((min(var_4, var_13))))));
    #pragma endscop
}
