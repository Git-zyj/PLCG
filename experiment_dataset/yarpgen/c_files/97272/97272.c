/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = arr_1 [i_0] [i_0];
        arr_3 [i_0] = (((min((arr_0 [i_0] [i_0]), 19)) / ((1354834877 ? 25 : (arr_0 [i_0] [i_0])))));
        arr_4 [i_0] [i_0] = arr_1 [i_0] [i_0];

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_1] [i_1] = (arr_0 [i_0] [i_0]);
            var_15 *= ((((((arr_2 [i_1] [i_0]) ? var_10 : (arr_2 [i_0] [i_1])))) ? ((min((min(var_7, -619670814)), 1))) : 70368744177663));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 ^= (((((var_12 & (arr_6 [6])))) ? (var_1 & -1333240176) : ((1 ? 3487701905 : -40))));
            arr_11 [i_2] = -1;
        }
        var_17 = (max((min((arr_1 [i_0] [i_0]), (((arr_6 [16]) / var_9)))), (((!(arr_8 [0] [i_0] [0]))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            {
                arr_16 [i_4] = (((((((max(var_5, 37944))) ? (((var_11 ? (arr_2 [i_3] [i_3]) : 1))) : (arr_15 [i_3 - 1] [i_4] [i_4])))) ? (((((arr_13 [9] [i_4 - 3]) == (((arr_6 [i_4]) ? (arr_15 [i_3] [i_3] [i_4]) : (arr_1 [i_3 - 1] [i_4]))))))) : 4246308622));
                var_18 = (max(((min(-853359176, var_6))), -255));
                arr_17 [i_4] [i_4] = (~45259);
                var_19 ^= (((min(var_4, ((1 ? -1 : 4382627968982740630)))) <= (((-(arr_12 [i_3]))))));
            }
        }
    }
    var_20 += (((((-12775 * ((var_0 ? var_10 : var_2))))) ? (max(-7191855230805230013, ((var_3 ? var_6 : var_3)))) : 1333240197));
    var_21 = (~var_3);
    #pragma endscop
}
