/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = ((max((arr_1 [i_0]), (arr_3 [8] [0]))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_16 = (((((max(-12988, (arr_3 [i_0] [i_3]))))) != (max(7769848490181396491, -30269))));
                        var_17 ^= 10676895583528155109;
                        var_18 += (-(10676895583528155127 / 13));
                        var_19 = (((((var_11 < var_8) ? (min((arr_1 [i_0]), 18446744073709551589)) : (arr_10 [i_0] [i_1] [i_3]))) << (((max(var_14, (max(var_11, 10676895583528155124)))) - 10676895583528155062))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_14 [i_4] = (((arr_12 [i_4]) ? var_8 : 7769848490181396491));
        var_20 = (min(var_20, (((!(arr_12 [7]))))));
    }
    var_21 = (max((min(var_11, (max(-74, var_11)))), (((((29012 ? 243 : var_2))) / var_11))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 7;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_5] [3] = ((((((10676895583528155109 << 0) ? (var_4 % -3877711192866346601) : -29023))) ? ((((var_6 ? (arr_10 [i_5] [7] [i_7]) : var_4)) ^ (var_1 & -29029))) : ((((arr_7 [i_7] [i_5]) & (arr_1 [i_5]))))));
                    arr_24 [i_5] [i_6] [i_6] = (((((max(4294967295, (arr_20 [i_5] [i_6] [i_5]))))) ? (((((77 ? var_5 : (arr_15 [i_5])))) % ((var_11 ? var_8 : var_1)))) : (arr_17 [i_5] [i_7])));
                    var_22 = (max((((arr_2 [i_6 - 1]) * (arr_2 [i_6 + 3]))), (arr_2 [i_5])));
                    var_23 = ((243 ? 121 : ((((arr_5 [i_7] [i_6] [i_7]) && 3671)))));
                    arr_25 [i_5] = (((max(9223372036854775807, var_14)) != 27786));
                }
            }
        }
    }
    var_24 = ((~((1465503946 ? 2728016018 : (((17806008450124038182 ? var_14 : 63)))))));
    var_25 = (var_3 ? ((var_6 ? (~209) : (max(6256546937467055111, var_4)))) : var_0);
    #pragma endscop
}
