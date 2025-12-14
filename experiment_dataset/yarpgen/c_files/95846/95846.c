/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = var_3;
        var_14 = ((+((+(((arr_1 [i_0]) * 1383647880))))));
        var_15 = ((2911319412 - (max((arr_1 [i_0 + 1]), 63))));
        var_16 ^= (arr_0 [0] [0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = -12910;
        var_18 = ((max(((2911319423 ? var_10 : (arr_1 [19])), -25))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = 72;
        var_19 = (min(var_19, (((((arr_3 [i_2]) ? 59 : (arr_3 [i_2]))) <= 16312))));
        var_20 = (((arr_4 [i_2]) - ((-(arr_3 [i_2])))));
        var_21 = ((-(((arr_6 [i_2]) ? 17456 : (arr_6 [i_2])))));
    }
    var_22 = ((((((-949177712 / var_1) <= 1))) << (((((((var_7 << (var_8 - 247)))) ? var_0 : var_1)) - 1970992120))));
    var_23 = var_4;
    #pragma endscop
}
