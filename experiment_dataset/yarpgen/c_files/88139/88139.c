/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = (min(((max((min(var_7, -78)), (-1264615076 && var_3)))), ((-(var_12 - 65525)))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_15 = ((var_0 ? (((!var_11) ^ ((var_0 ? var_3 : 18446744073709551604)))) : ((max(var_8, 6)))));
                        var_16 = ((!(((15944 ? var_5 : 1)))));
                        var_17 = (!((min(((-126 ? var_2 : var_2)), var_4))));
                        arr_9 [i_2] [i_1] [i_0] = (max(((-(arr_2 [i_0 - 3]))), (arr_2 [i_0 - 3])));
                    }
                }
            }
        }
        var_18 -= (((((max((-32767 - 1), var_12)) ^ ((((arr_0 [i_0]) ? var_2 : var_9))))) <= var_2));
        arr_10 [i_0] |= (arr_5 [i_0] [i_0 + 1] [i_0]);
        var_19 = (18446744073709551615 * var_9);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_20 = (var_11 * -1);
        var_21 = (49 ? ((var_11 ? (arr_11 [i_4]) : (arr_11 [i_4]))) : (!1264615047));
        arr_13 [i_4] = (10830 <= 35247);
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                {
                    var_22 ^= ((((-6382580648892180733 ? (arr_18 [i_5] [i_4]) : 1511571543)) ^ var_0));
                    arr_20 [i_4] [i_5] [i_5] [i_6] = ((arr_11 [i_5 - 2]) / var_8);
                    var_23 = (arr_15 [i_6 - 1] [i_5] [i_5 + 2]);
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_24 = ((((max((arr_16 [i_7] [i_7] [i_7]), ((var_3 ? var_5 : -319833571))))) ? (min(((max(18798, 22126))), 9022264350412871811)) : 1559392217));
        var_25 = (0 ? 9223372036854775807 : 4485520937169670141);
        var_26 = (min(var_26, (((!(!var_0))))));
        var_27 = ((var_8 ? (arr_23 [i_7]) : (arr_23 [i_7])));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_28 = ((arr_25 [i_8]) || ((((arr_25 [i_8]) - -103))));
        arr_27 [i_8] [i_8] = var_3;
        arr_28 [i_8] [i_8] = (((!var_1) <= var_3));
        var_29 = -16207;
        var_30 = ((!(((46735 - (arr_25 [i_8]))))));
    }
    var_31 = (((((var_6 / var_2) - (var_11 >= var_4))) & var_7));
    #pragma endscop
}
