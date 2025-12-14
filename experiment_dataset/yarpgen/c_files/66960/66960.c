/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (min((8 > var_2), ((!(var_0 ^ 1)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (((((((((arr_1 [10] [10]) ? 59793 : var_1))) ? 0 : (24 * 13598)))) ? ((((min((arr_2 [i_0]), -8))) ? (0 <= 1388296499) : var_11)) : 127));
        arr_3 [i_0] &= -0;
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_14 = (max(var_14, (((((-18364 ? 65535 : -28)) * ((((max((arr_6 [i_1 - 1]), (arr_6 [9])))) * (1 - 18363))))))));
        arr_8 [i_1] = (((arr_5 [i_1 - 1]) / ((max((arr_5 [i_1 + 1]), (arr_5 [i_1 + 1]))))));
    }
    var_15 = (((!4095) ? (var_9 + var_8) : (((var_8 | var_4) ? var_1 : var_11))));
    var_16 = (max(var_16, (((min((min(13595, 51941)), (min(123, var_9))))))));
    #pragma endscop
}
