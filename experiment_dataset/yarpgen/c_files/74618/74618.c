/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = (~var_18);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = var_18;
        var_22 *= ((((~(min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))) ? ((((((arr_1 [i_0]) ? var_2 : var_12))) ? (arr_0 [i_0] [i_0]) : ((var_6 ? var_14 : (arr_1 [i_0]))))) : (arr_0 [i_0] [i_0]));
    }
    var_23 = ((var_3 | (~-25)));
    #pragma endscop
}
