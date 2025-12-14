/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((((var_7 ? ((var_9 - (arr_6 [9] [1] [7] [i_0]))) : 2365010390)) - -32762));
                    var_20 = ((-((max((arr_4 [i_0 - 1]), (69527934 && var_3))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_21 = ((2681986165317680648 ? 32749 : (116 - -8555994229986446173)));
        arr_12 [i_3] = ((-((var_7 / (arr_3 [i_3])))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_22 = (min((((var_14 ? (arr_16 [i_5]) : var_11))), (((var_0 + var_4) ? (var_2 / var_14) : -var_1))));
            var_23 = (max((((((arr_13 [i_4]) ? (arr_3 [17]) : var_12)) << ((2681986165317680648 ? (arr_4 [i_4]) : var_0)))), ((((((arr_5 [i_4] [i_4] [i_5]) / 196))) ? (min(var_1, (arr_6 [i_4] [i_4] [11] [i_5]))) : (((arr_13 [i_5]) ? 4294967295 : (arr_5 [i_5] [i_4] [i_4])))))));
            var_24 = (arr_2 [i_5]);
        }
        var_25 += (((max((arr_4 [i_4]), (var_14 * 0))) <= (((var_11 ? ((2681986165317680645 ? (arr_5 [i_4] [i_4] [i_4]) : var_16)) : ((var_1 ? (arr_5 [i_4] [i_4] [i_4]) : var_6)))))));
        var_26 = var_15;
        var_27 = ((!((((arr_4 [i_4]) | ((min((arr_4 [i_4]), var_6))))))));
    }
    var_28 -= (max(0, (2681986165317680636 / var_13)));
    var_29 = (((max((((var_7 ? var_11 : var_6))), var_14))) ? ((((((var_3 ? var_1 : var_4))) ? var_10 : var_0))) : (((-397694218 ^ var_8) ? (((max(var_6, var_13)))) : ((var_11 ? var_15 : var_15)))));
    var_30 = var_17;
    #pragma endscop
}
