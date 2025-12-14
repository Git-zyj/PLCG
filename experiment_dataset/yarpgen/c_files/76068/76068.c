/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~((-8827975648163679725 ? var_4 : (max(var_1, var_11)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = arr_0 [i_0];
        var_16 += (((~(arr_1 [i_0] [i_0]))));
        var_17 = (min(var_17, ((min((arr_1 [i_0] [i_0]), -9223372036854775804)))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_18 = (max(var_18, ((-(min((arr_1 [17] [i_1]), (arr_1 [i_0] [17])))))));
            var_19 = (--1294119674052694097);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_8 [13] [i_2] [9] [13] = ((8973832960973935493 ? ((~(6943094411561098010 ^ 7050106065265648153))) : 469749111));
                        var_20 = ((((max((min(var_6, -90)), ((var_8 - (arr_6 [i_3] [i_0] [i_1] [16] [i_0])))))) ? (((arr_7 [i_2] [i_2] [i_2]) >> ((((((89 ? (-9223372036854775807 - 1) : (-9223372036854775807 - 1))) - -9223372036854775781)) + 54)))) : (11509261496753661319 < -102)));
                    }
                }
            }
        }
        arr_9 [i_0] [i_0] = (min(126, -9223372036854775782));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_21 = (max(var_21, (((((((arr_6 [i_4] [i_4] [i_4] [1] [i_4]) ? (-9223372036854775807 - 1) : -367407438))) ? (~-840462988976397128) : (((arr_7 [i_4] [4] [i_4]) ? (arr_2 [i_4] [i_4]) : -90)))))));
        arr_13 [3] [i_4] = (arr_12 [i_4]);
    }
    var_22 = var_6;
    var_23 = 81;
    var_24 = ((((max(var_4, var_6)))) ? ((var_1 ? (max(var_11, var_6)) : -9223372036854775798)) : (~var_4));
    #pragma endscop
}
