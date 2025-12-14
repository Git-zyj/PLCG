/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_20 ^= (((arr_0 [i_0 + 1]) ? 13 : 48));
        arr_2 [i_0] = (max((arr_0 [i_0]), (max(((((arr_1 [i_0]) ? (arr_0 [i_0]) : 9317))), (((arr_1 [i_0]) ? var_18 : (arr_0 [i_0])))))));
        arr_3 [7] [i_0] = ((((((((arr_1 [i_0]) ? var_4 : -49))) ? ((max((arr_0 [i_0]), (arr_0 [i_0])))) : (18446744073709551615 / -24))) == ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0 + 1]))))));
        var_21 = (i_0 % 2 == 0) ? (((((((49 ? -1462668896 : (arr_1 [i_0]))) <= (((((arr_0 [9]) + 2147483647)) >> (((arr_1 [i_0]) - 102)))))) ? ((((((97 ? 9318 : 2362862262)) <= (arr_1 [i_0]))))) : ((var_10 / (max(var_4, var_7))))))) : (((((((49 ? -1462668896 : (arr_1 [i_0]))) <= (((((arr_0 [9]) + 2147483647)) >> (((((arr_1 [i_0]) - 102)) - 52)))))) ? ((((((97 ? 9318 : 2362862262)) <= (arr_1 [i_0]))))) : ((var_10 / (max(var_4, var_7)))))));
    }
    var_22 -= (((((max(var_11, var_1)) == ((var_19 ? 8575106075824236170 : var_6)))) ? (((max(31, 48)))) : (((var_6 == var_2) / var_8))));
    #pragma endscop
}
