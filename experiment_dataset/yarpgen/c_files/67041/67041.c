/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = (((min((~var_13), (~-24))) <= var_6));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = var_10;
        var_17 = (min(var_17, ((min((min(var_4, (4441167288866239703 / 30810))), (var_10 ^ 3913883862))))));
        var_18 = (max(((((max((arr_0 [i_0] [i_0]), var_12))) ? (min(var_9, var_14)) : 2147483629)), ((-(arr_0 [i_0 - 1] [i_0])))));
        var_19 = (min(((var_14 ? (((min(var_12, -29)))) : var_2)), (((~(((arr_1 [i_0]) ^ var_7)))))));
    }
    var_20 = ((var_9 == ((-(min(var_11, var_0))))));
    var_21 = (~var_11);
    #pragma endscop
}
