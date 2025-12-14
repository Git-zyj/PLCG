/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max(1531346481, var_6);
    var_12 &= (min(var_5, var_9));
    var_13 = (((((var_6 ? var_9 : (var_0 ^ 1531346453)))) ? (min((var_10 & var_2), ((15 ? 917798163 : var_4)))) : (((max(var_8, var_5))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = var_2;
        arr_5 [i_0] = 104;
        var_14 -= -1;
        var_15 = (max(var_15, (((((max(var_3, (arr_1 [10] [i_0])))) ? (((arr_0 [12]) ? (arr_1 [2] [2]) : var_10)) : ((((arr_0 [2]) ? (arr_0 [0]) : var_6))))))));
        var_16 ^= (((((((max(41877, var_7))) ? 1531346452 : ((42 ? (arr_1 [8] [8]) : 26827))))) ? (arr_2 [i_0]) : (max((((arr_1 [8] [8]) ? (arr_2 [i_0]) : var_10)), -74))));
    }
    var_17 = (max(((((((var_4 ? 576459652791795712 : -576459652791795711))) ? ((10956 ? var_8 : var_1)) : 130))), var_6));
    #pragma endscop
}
