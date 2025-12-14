/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((min(var_6, ((~((127 ? var_3 : 1)))))))));
    var_14 = var_3;
    var_15 |= (min(var_10, ((max((var_11 + var_1), (!1))))));
    var_16 = ((((var_1 ? ((max(var_7, -80))) : -var_8)) >> (var_9 - 9968)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((max((arr_0 [i_0] [i_0]), var_6)));
        var_17 -= (min(((((arr_1 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_1))), ((-(arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = var_2;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_9 [i_1] = ((((((arr_6 [i_1] [i_1]) != var_10))) != (((((var_12 << (((arr_7 [i_1]) - 46141)))) == -9977)))));
        var_18 *= ((((((79 ? 2246980238 : 892968196))) || 13)));
    }
    #pragma endscop
}
