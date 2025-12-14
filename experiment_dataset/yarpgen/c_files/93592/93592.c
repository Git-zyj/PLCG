/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((min(930838407059426238, var_11))) ? (max((max(3493669373, var_10)), ((((-9223372036854775807 - 1) ? var_10 : var_5))))) : ((((var_11 ? var_8 : 0)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (var_6 ^ ((max(34076, (!3034514643)))));
        var_14 = (min(var_14, (((((max(65532, (arr_1 [i_0])))))))));
        arr_3 [i_0] = ((-22760 ? (arr_0 [i_0] [i_0]) : (((arr_0 [i_0] [10]) ? (arr_0 [i_0] [i_0]) : (arr_0 [5] [i_0])))));
    }
    #pragma endscop
}
