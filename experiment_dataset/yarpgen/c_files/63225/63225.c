/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((2389618317451747060 == (-9223372036854775807 - 1)))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_17 = (((var_11 ? var_8 : (arr_2 [i_0] [i_0]))) % 25);
            arr_6 [i_0] [i_0] = ((12 ? (((arr_2 [i_0] [i_0]) ? 21 : (arr_0 [i_0]))) : (arr_1 [i_0] [i_1])));
        }
        arr_7 [i_0] [i_0] = (arr_3 [i_0] [i_0 + 2]);
        var_18 = ((arr_3 [i_0] [i_0 + 2]) ? (arr_3 [i_0] [i_0 - 4]) : (arr_3 [i_0] [i_0 - 2]));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        var_19 = (min(var_19, ((((arr_9 [i_2 - 2]) & -14623)))));
        arr_12 [i_2] = var_1;
    }
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            {
                var_21 = (((+-17619) & (~65526)));
                arr_19 [6] [6] [i_3] &= ((-(((arr_11 [i_3]) ? var_10 : (arr_11 [i_3])))));

                /* vectorizable */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_24 [11] [i_3] [i_5] [i_5] = ((arr_2 [i_3] [i_3]) ? (arr_18 [i_4] [i_4 + 3] [i_4]) : 2035556253);
                        var_22 += 3512130966;
                        var_23 *= (((arr_17 [i_6] [i_5 - 1] [i_6]) << (((arr_17 [i_6] [i_5 - 1] [i_6]) - 21))));
                        var_24 = (((var_6 % var_4) ? ((var_11 ? var_5 : 772240220)) : (arr_4 [i_3] [i_5 - 1] [i_4 + 3])));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_28 [i_3] [i_3] = ((~(arr_3 [i_3] [i_3])));
                        var_25 = ((((var_6 + (arr_23 [i_3] [4] [i_4] [i_3] [i_3] [i_3]))) & (!65531)));
                        var_26 = (((arr_15 [i_4] [i_7]) % ((248468454 ? (arr_27 [i_4]) : 201132067751301271))));
                    }
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        var_27 = (((arr_26 [12] [i_3] [i_8]) ? 16106127360 : (!17336650594355827339)));
                        var_28 = (max(var_28, (arr_5 [i_3])));
                        var_29 = (min(var_29, (~1)));
                        var_30 -= 9223372036854775805;
                    }

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_31 = 1;
                        arr_34 [i_3] [i_3] [i_3] [i_3] [i_3] [4] = ((!(((var_6 + (-9223372036854775807 - 1))))));
                        var_32 = (min(var_32, (((((-(arr_23 [i_3] [i_4] [i_5] [i_9] [i_3] [i_9]))) >> (((arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [i_9]) - 959134440)))))));
                        arr_35 [i_3] [i_3] [i_3] [i_9] = (((arr_3 [i_3] [i_3]) ? (arr_3 [i_3] [i_3]) : -13));
                        var_33 = (((arr_0 [i_3]) ? (((65517 % (arr_4 [i_3] [i_4] [i_5])))) : var_4));
                    }
                    arr_36 [i_4] [i_4] [i_3] [i_4] = (((arr_11 [i_5 - 1]) - (arr_11 [i_5 - 1])));
                }
                var_34 = arr_14 [i_3] [i_3];
            }
        }
    }
    #pragma endscop
}
