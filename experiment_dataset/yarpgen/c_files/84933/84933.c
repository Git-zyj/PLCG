/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 = (((~((var_15 ? var_16 : (arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = min((((~(((!(arr_0 [i_0] [i_0]))))))), (max(((var_12 ? (arr_0 [i_0 + 1] [i_0]) : 5783478775106391615)), (max((arr_1 [i_0 - 1]), -903833491)))));
        var_18 = (~(max(((var_15 ? (arr_0 [6] [i_0]) : (arr_1 [i_0]))), -var_4)));
        arr_3 [4] = (max((((((2216017249 ? var_13 : var_7))) ? (max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))) : (((arr_1 [7]) ? 4294967295 : 12663265298603159979)))), ((-((var_5 ? 12663265298603159985 : var_16))))));
        arr_4 [i_0] = min((((max(0, 8)))), (((((~(arr_0 [i_0 - 1] [i_0])))) ? ((var_13 ? var_10 : (arr_1 [i_0]))) : ((max((arr_0 [14] [1]), var_1))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = ((!(((min(1031557848, 2270787799883975909))))));
        var_19 *= (min((((!0) ? (~var_6) : 1)), ((65535 ? 65524 : (~63)))));
    }
    var_20 |= (((((max(var_10, 7004697882250347690)) ? (!1) : (!var_16)))));
    #pragma endscop
}
