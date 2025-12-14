/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_11 != ((15231 ? 13367 : 8926096948469620436))))) | (((((-13353 ? var_5 : -8926096948469620436))) ? -1 : 21))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (((arr_4 [3] [i_1] [9]) ? ((max(var_7, var_9))) : (((arr_4 [i_0 + 1] [i_0 - 4] [i_0 - 1]) & var_5))));
                var_15 &= (arr_5 [i_0 - 2] [i_1 + 1]);
            }
        }
    }
    var_16 = ((var_2 | (((var_0 ? var_4 : var_0)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                arr_12 [i_3] = (((((((min(var_2, var_10))) ? var_10 : ((var_10 ? (arr_1 [i_2] [i_3]) : var_0))))) ? (((((var_12 ? var_10 : var_11))) ? (arr_1 [4] [i_3]) : (arr_9 [i_2] [i_2] [i_3]))) : (((max(13352, -13352))))));
                var_17 = (max(var_17, ((((13367 | -28) ? ((((arr_11 [i_2] [i_2] [i_3]) ? var_12 : (arr_5 [i_2] [i_2])))) : ((var_8 ? (var_11 % var_9) : ((var_5 ? var_11 : var_1)))))))));

                for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_18 += var_0;
                                arr_23 [i_2] = ((var_8 ? (arr_11 [1] [6] [i_2]) : (((arr_1 [i_3] [i_6]) ? var_11 : 1608882991))));
                            }
                        }
                    }
                    arr_24 [i_3] [i_4] |= (arr_18 [i_2] [i_3] [10] [i_3]);

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_19 = (((arr_16 [i_2] [i_2] [i_2] [i_2] [8]) ? (((arr_20 [i_7] [i_7]) ^ (((var_9 <= (arr_7 [9])))))) : ((~((var_10 ? var_7 : var_8))))));
                        arr_28 [i_2] [i_3] [i_4] [i_7] = (max(var_9, (arr_10 [i_2])));
                    }
                    arr_29 [i_2] [i_2] [9] = (((arr_6 [i_2] [i_2]) ? (((var_0 ? var_9 : (arr_11 [i_2] [i_3] [i_4])))) : (((arr_5 [i_2] [21]) ? (arr_18 [1] [i_3] [i_2] [i_2]) : (-3157622426463351225 & 190)))));
                    var_20 = var_9;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_21 = (11271209385009295263 - 13367);

                    for (int i_9 = 4; i_9 < 9;i_9 += 1)
                    {
                        var_22 = (var_7 ? (((arr_17 [i_2]) ? (arr_18 [i_9] [i_9] [i_9] [3]) : var_3)) : (arr_15 [i_2] [i_2] [i_2] [i_9] [i_3] [i_9 + 1]));
                        var_23 = (((var_9 / var_0) ? (9298886310786198618 < 15) : var_9));
                        arr_34 [i_9] [i_8] [i_2] [i_2] = (((1 ^ 119361340952890168) - (arr_30 [i_9 + 1] [i_9 - 3] [i_9] [i_9 + 3])));
                    }
                    arr_35 [i_2] [i_3] [i_8] = var_1;
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                {
                    var_24 = var_8;
                    var_25 = var_7;
                }
                var_26 = (~var_1);
            }
        }
    }
    #pragma endscop
}
