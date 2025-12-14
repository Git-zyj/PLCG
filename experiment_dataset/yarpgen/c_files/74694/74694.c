/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((536346624 && (-2147483647 - 1))) ? ((536346620 ? 169970214 : (-9223372036854775807 - 1))) : var_4))) ? (var_5 ^ var_5) : var_6));
    var_12 = var_9;
    var_13 = ((var_3 ? var_1 : (var_0 / var_10)));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_14 = (((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : 536346624))) ? ((18973 ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1]))) : ((536346599 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 2]))));
        var_15 = (((((9 ? var_2 : var_2))) ? (((1 ? var_0 : var_2))) : ((var_10 ^ (arr_1 [i_0 + 1])))));
    }
    var_16 = (var_5 > var_9);
    #pragma endscop
}
