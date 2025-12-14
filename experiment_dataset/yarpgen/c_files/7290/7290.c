/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [8] = (arr_1 [i_0]);
        var_19 = ((~((min((arr_1 [i_0]), 1)))));
        var_20 = (((((~(arr_1 [i_0])))) || ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_3 [i_0] = -73251303;
    }
    for (int i_1 = 4; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((((1 ? var_8 : (arr_7 [i_1])) & (var_2 && 7926926)))));
        var_21 ^= var_14;
        var_22 = ((+(((arr_6 [i_1 - 3]) - (arr_6 [i_1 - 4])))));
        arr_9 [i_1] [i_1] = ((!(((~((((arr_5 [i_1]) == (arr_5 [i_1])))))))));
    }
    var_23 = ((~(~18446744073709551611)));
    var_24 = (max(var_24, var_5));
    #pragma endscop
}
