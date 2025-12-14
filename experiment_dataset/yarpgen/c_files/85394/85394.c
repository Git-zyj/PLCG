/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((36366 ? (((var_13 >> (var_0 - 34612)))) : ((var_10 ? var_3 : var_18))))) ? var_10 : var_0));
    var_21 = ((~((-((max(-5932, 36359)))))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = max((var_17 <= var_0), (arr_1 [i_0 + 1]));
        var_22 ^= (arr_0 [i_0 - 2] [2]);
    }
    var_23 = (((!var_14) == ((min(var_19, -5932)))));
    var_24 = ((((((((var_8 ? var_9 : var_15))) ? (var_9 & 16) : var_9))) + var_7));
    #pragma endscop
}
