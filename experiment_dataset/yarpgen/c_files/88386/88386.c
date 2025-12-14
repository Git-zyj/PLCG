/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 ? (((var_8 / var_9) ? var_6 : ((15493 >> (790609706681167687 - 790609706681167671))))) : ((var_2 * ((min(27903, 0)))))));

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((((max(255, 36))) ? (!69) : -14765));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 = (((((((var_2 ? var_8 : 36))) ? ((0 ? (arr_9 [i_4] [i_4] [i_4]) : var_0)) : (!790609706681167687)))) ? var_9 : (max((min(18446744073709551615, 238)), (((var_1 ? 18 : 238))))));
                                arr_16 [1] |= (min(((((max(var_5, var_10))) ? (max(var_5, var_5)) : (arr_3 [i_4] [i_1] [i_1]))), ((var_3 ? var_7 : ((max(-14050, var_1)))))));
                                var_13 = 0;
                                arr_17 [i_0] [i_2] [i_4] [i_3 - 1] [i_4] = (max(37, (((-790609706681167687 && ((max((arr_6 [i_3] [i_3] [i_3] [i_3]), 790609706681167686))))))));
                            }
                        }
                    }
                    var_14 ^= ((-77 ? (max(var_2, ((var_4 ? 77 : 0)))) : ((min((min(var_3, var_5)), 1899724023)))));
                }
            }
        }

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_15 = ((((max((var_2 > var_3), (1 * 0)))) ? (((arr_2 [i_0 + 2]) ? var_3 : 8459003166177568947)) : (~255)));
            arr_21 [i_0] [i_0] = (((min(((18446744073709551615 ? 268431360 : (arr_9 [5] [i_5] [i_5]))), (arr_6 [i_0] [i_0 + 1] [i_0 - 3] [i_0 - 4]))) == 31254));
            arr_22 [i_0] = ((11 < (min(-9223372036854775788, ((min(-44, var_3)))))));
            arr_23 [i_0 - 4] [i_0 - 4] = max((min(0, var_8)), ((max(var_3, var_9))));
        }
        var_16 = (max(var_16, ((((((((26773 ? -9223372036854775788 : 3221466966338674061))) > (max(var_10, var_1)))) && (((-((var_6 ? 77 : var_9))))))))));
    }
    for (int i_6 = 2; i_6 < 24;i_6 += 1)
    {
        arr_26 [i_6] = (-127 - 1);
        var_17 ^= (min(((max(((var_4 ? var_7 : var_1)), ((((arr_24 [i_6 - 2]) < 18446744073709551610)))))), (min(var_7, var_4))));
        arr_27 [i_6 - 2] = (arr_25 [i_6]);
    }
    for (int i_7 = 2; i_7 < 21;i_7 += 1)
    {
        var_18 = (min(var_18, ((max((((-790609706681167674 ? 124 : (65 || -32354)))), 9223372036854775776)))));
        arr_30 [i_7] = 117;
    }
    #pragma endscop
}
