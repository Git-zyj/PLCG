/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_10, (((var_3 | var_0) ? -6889707260050437513 : (var_4 > 17216807424416830524)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = ((2669729891063113558 ? -569009096 : 16383));
        var_13 = (((0 >= (-32767 - 1))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_14 = (arr_5 [i_1]);
        var_15 &= arr_3 [i_1];
        var_16 = ((((!((((arr_3 [i_1]) ? (arr_3 [0]) : 32754))))) ? (64 / 1) : (max(var_8, var_7))));
        arr_6 [i_1] = ((((min((arr_3 [i_1]), (arr_3 [i_1])))) / (254 ^ -16407)));
    }
    var_17 = 1;
    #pragma endscop
}
