/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (min(((var_4 ? (var_13 / 4294967295) : var_9)), (((max(var_13, var_5))))));
    var_16 = (min(804603292, (min((-2272545711984595530 > 2272545711984595530), 5173834726260899671))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (min((3924587338123433180 + var_10), (min(-2272545711984595523, 2272545711984595527))));
        var_17 = ((((((((arr_0 [i_0]) ? var_5 : 1))) ? (var_3 - 424980820) : (arr_1 [0])))) * 4113914908);
        var_18 = (min(((!(arr_0 [i_0]))), ((3852540277 != (arr_0 [1])))));
    }
    var_19 = ((!((min(var_7, var_8)))));
    #pragma endscop
}
