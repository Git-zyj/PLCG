/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [6] = ((((((-var_17 + 9223372036854775807) << ((((max(var_11, 16))) - 16))))) ? (((((((arr_2 [i_0]) ? 7524 : 1))) + var_14))) : (max((var_12 / var_13), var_17))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [6] [i_1] [i_1] [15] [i_3] [i_4] [i_4 + 2] = ((var_13 ^ ((min(131260108, 2147483629)))));
                                arr_13 [i_2] [i_4] = var_11;
                                arr_14 [2] [i_4] = ((+(max((8237920462384388512 && var_5), 1023))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((~((((935001530 ? 31703 : 36483)) & -25390))));
                        var_18 = (((((var_9 ? var_11 : (arr_17 [i_5 - 2] [i_5] [i_8])))) && (((arr_17 [i_5 - 2] [i_5] [i_7]) && (arr_3 [i_5 + 1] [i_7 + 2])))));
                    }
                }
            }
        }
        var_19 = var_7;
        var_20 = (((var_12 ? (arr_6 [i_5] [i_5] [i_5] [1]) : var_16)));
        var_21 = (((11259 || 12371736828662983585) ? -71 : (max(var_17, (((3886702395 ? var_0 : 1878297845)))))));
    }
    for (int i_9 = 4; i_9 < 21;i_9 += 1)
    {
        arr_27 [i_9] = (max((-5326470872240982995 / var_10), (var_14 + var_1)));
        var_22 = (max(2663049367, (!43)));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            var_23 = (max(var_23, (((!(arr_30 [i_10] [i_10]))))));
            var_24 = (min(var_24, (((((var_14 <= (arr_1 [i_11]))) ? (((((arr_3 [i_10] [i_10]) == var_9)))) : ((var_7 ? 532676608 : (arr_25 [i_10]))))))));
        }
        var_25 *= 34;
        arr_35 [i_10] = (((((15 ? 8406419902108739846 : var_15))) ? (((arr_2 [i_10]) ? var_12 : var_16)) : -var_9));
    }
    var_26 = (((~(min(9725267036916889103, var_16)))));
    #pragma endscop
}
