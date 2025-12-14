/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    var_15 = (((var_1 ? (max(var_0, var_6)) : var_9)) < var_11);
    var_16 = ((((min(var_11, (0 || 4232967847)))) + 15336871894807772904));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 17172412873521277083;
        var_17 = ((((7177 ? 1 : -9763)) * 9788));
        var_18 = (min(var_18, -1856128808));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_19 = (!var_1);
        arr_7 [i_1] = ((-2063 ? (288230376151711712 || -23530) : (((((3202453119 ? 9762 : var_13))) ? ((54775 ? -9763 : var_3)) : ((126 ? 103 : var_13))))));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        var_20 = (((((var_11 ? var_9 : ((1956203538679289529 ? 3202453090 : 14388008410126206907))))) ? 4134808584 : (max((arr_8 [0] [i_2 - 1]), 1092514159))));
        arr_10 [i_2 + 3] = (arr_8 [i_2] [i_2 + 3]);
    }
    #pragma endscop
}
