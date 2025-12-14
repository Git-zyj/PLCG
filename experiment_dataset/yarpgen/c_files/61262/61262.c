/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((18446744073709551615 == ((18446744073709551615 ? (min(18446744073709551592, -7099857)) : (arr_1 [i_0 - 3] [4])))));
        var_15 = (max(var_15, (((-(((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))) % (arr_1 [i_0] [i_0]))))))));
    }
    var_16 *= (((((((min(var_4, var_8))) ? (~18057972050348031330) : ((-6254408167951023708 ? var_8 : var_0))))) ? ((var_5 ? ((var_3 ? 18446744073709551614 : 31)) : (((2483372044086525478 ^ (-9223372036854775807 - 1)))))) : ((min(var_10, (18446744073709551612 && var_4))))));
    var_17 += ((max(var_8, (var_6 < 9223372036854775807))));
    #pragma endscop
}
