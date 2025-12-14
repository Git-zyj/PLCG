/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((((var_13 ? var_5 : var_2))) ? (var_10 & var_12) : (((-12152288 ? var_1 : var_12)))))) ? (((var_13 < var_0) ? ((var_13 ? 20074 : var_15)) : var_11)) : var_1));
    var_18 = var_6;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0 - 1] = (((((var_0 || (((var_4 << (2047 - 2034))))))) != (min(1, 3932160))));
            arr_6 [i_1] = (max((var_8 > 9223372036854775807), ((var_15 / (~9223372036854775807)))));
            var_19 = ((((max(var_7, (arr_3 [1] [i_0 - 1] [i_0])))) ? ((-((18446744073709551615 ? 4044811106 : (-127 - 1))))) : (var_16 << var_16)));
            var_20 ^= max((max(var_3, var_12)), (((!(arr_4 [i_0 + 1] [i_0 - 1])))));
        }
        arr_7 [i_0 - 1] = (((((0 ? ((((arr_1 [i_0 + 1] [i_0]) ? var_7 : var_7))) : (min(var_0, var_15))))) ? (max((min(var_8, var_5)), (arr_0 [i_0 + 2] [i_0 - 1]))) : (((max(1, 1))))));
        var_21 += (((((arr_1 [i_0 + 2] [i_0 - 1]) ? (arr_1 [i_0 - 1] [i_0]) : var_11)) - (((arr_1 [i_0 + 2] [3]) ? (arr_4 [i_0 + 1] [i_0]) : var_1))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_10 [4] = ((~((var_15 ? 2097151 : 2526809364))));
        var_22 += ((((((((((arr_8 [i_2] [i_2]) + 2147483647)) << (var_11 - 1753237735)))) ? ((max(var_7, var_9))) : 966289177)) ^ ((~(arr_8 [i_2] [i_2])))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            arr_19 [i_3] [i_3] = ((1 ? 1 : 9223372036854775807));
            var_23 = ((((min(1, 18446744073709551615))) ? var_15 : ((var_7 / (arr_15 [i_4 - 2] [i_4 - 1] [i_4 + 1])))));
            var_24 = (-16 ? (max((arr_16 [i_4 - 1] [i_4 + 1]), var_3)) : (((arr_12 [i_4 - 2]) ^ (0 + 4503599627370495))));
        }
        var_25 = (min(var_25, 3701146911));
    }
    #pragma endscop
}
