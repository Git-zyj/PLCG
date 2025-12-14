/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (9550825857788116483 ? 7515 : 14596333926670072463);
    var_11 = ((var_2 ? var_0 : (((var_1 || (70366596694016 + var_7))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_12 = -899553666;
        var_13 += (((arr_2 [i_0] [i_0]) ? (((min((arr_1 [i_0] [i_0]), 0)) * (!4132419798))) : (((((max(169711969, -1)) != 899553666))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_14 = (arr_1 [i_1] [i_1]);
        var_15 = (max(((((arr_5 [i_1]) || 18225314162918882657))), (min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))));
    }
    #pragma endscop
}
