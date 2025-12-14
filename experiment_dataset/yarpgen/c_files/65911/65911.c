/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    var_18 = var_11;
    var_19 = (min(var_19, var_0));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((((var_11 ? -33 : (arr_1 [i_0]))) != (((arr_1 [i_0]) ? var_4 : -29937)))))) <= ((3346677227 ? 10400339276638324572 : 0))));
        var_20 = (max(var_20, var_9));
        var_21 = ((-17556858553270941450 ? (((min((min((arr_0 [i_0] [i_0]), 17037)), (arr_0 [i_0] [i_0]))))) : 9));
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}
