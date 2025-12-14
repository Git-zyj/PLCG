/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = (((var_4 ? var_1 : var_9)));
        var_12 = (((var_7 * var_0) / var_1));
        arr_2 [i_0] = ((((((var_7 + 2147483647) >> (var_2 - 7936835889055336604)))) && (var_1 + var_0)));
        arr_3 [i_0] [i_0] = ((var_7 + (((-26846 ? 161 : 0)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = (((15051480953751211011 ? 3531908683709307828 : -1)));
        var_13 *= ((var_5 ? var_6 : (((var_8 ? var_1 : var_3)))));
        var_14 = (((var_7 + var_6) - (var_7 + var_0)));
    }
    var_15 = var_4;
    var_16 = (-1674226801 <= 32759);
    var_17 -= var_4;
    var_18 = (max(var_18, var_5));
    #pragma endscop
}
