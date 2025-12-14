/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = 0;
        var_13 = ((1747139241 >> ((((~((max(1, 32767))))) + 32778))));
        var_14 = (max((var_6 + var_4), (max((!-108), var_6))));
        var_15 = var_1;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = (((0 ? (arr_5 [i_1]) : var_6)) >> (var_2 - 3002029129));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [10] [i_1] [i_2] |= (((arr_7 [18]) >> (((arr_5 [i_1 - 1]) + 31778))));
            arr_11 [i_1] [14] |= var_7;
        }
        for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
        {
            arr_15 [i_1] [i_1] = 1;
            var_16 = (arr_14 [i_1] [i_1] [i_3 + 1]);
        }
        for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
        {
            var_17 = (i_1 % 2 == zero) ? (((var_5 >> ((((93 ? (arr_13 [i_1] [i_1]) : var_0)) - 3660170370))))) : (((var_5 >> ((((((93 ? (arr_13 [i_1] [i_1]) : var_0)) - 3660170370)) - 1694602425)))));
            arr_19 [i_1] [i_1] = (~var_7);
            arr_20 [6] [i_4] &= var_6;
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
        {
            var_18 = ((~(var_4 && 0)));
            arr_24 [i_1] [i_1] = (~1);
        }
    }
    var_19 &= ((1 ? var_2 : -1654389374));
    var_20 |= ((((var_6 >> (65535 - 65522)))));
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 8;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 7;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_21 = arr_26 [i_9];
                            var_22 = (((var_2 >> (arr_26 [i_6 - 1]))));

                            for (int i_10 = 0; i_10 < 10;i_10 += 1)
                            {
                                arr_37 [i_6] [i_6] [i_6] [i_6] [i_6] = ((((var_8 ? var_4 : ((max(var_9, (arr_0 [i_6] [i_6])))))) >> ((((((((-(arr_7 [i_10]))) + 2147483647)) >> ((0 >> (15539370 - 15539362))))) - 2147483594))));
                                arr_38 [i_6] [i_7] [i_8] [i_9] [i_8] = ((((arr_13 [i_6 - 1] [i_9]) >> (var_9 + 984))));
                                var_23 += ((((max((arr_31 [i_7 - 2] [i_7 + 3] [i_7 + 2]), (arr_31 [i_7 + 2] [i_7 + 2] [i_7 + 2])))) * ((min((arr_31 [i_7 + 2] [i_7 + 2] [i_7 + 2]), (arr_31 [i_7 + 1] [i_7 + 2] [i_7 - 1]))))));
                                arr_39 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((((~((max((arr_34 [i_10] [i_8] [i_8] [i_7]), var_11)))))) ? ((((var_2 ? var_2 : var_4)) >> (((max(0, 589762164738545803)) - 589762164738545773)))) : (max(var_2, var_3)));
                            }
                        }
                    }
                }
                var_24 -= (arr_36 [i_6] [i_7] [i_6] [i_6] [i_6] [i_6]);
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_46 [i_6] [i_7] [i_6] [i_6] |= 1;
                            var_25 -= (((min((arr_9 [i_7 - 2] [i_11 - 2] [i_7 - 2]), var_4))) ? (min((arr_9 [i_7 + 3] [i_11 - 2] [i_11 - 2]), var_7)) : ((((arr_27 [i_7 - 1] [i_11 - 2]) ? (arr_27 [i_7 + 3] [i_11 + 1]) : (arr_9 [i_7 - 2] [i_11 - 2] [i_11 - 2])))));
                        }
                    }
                }
                var_26 = ((((var_2 ? (arr_41 [i_7 - 2]) : (arr_16 [i_7 + 3] [i_6 + 2]))) & ((589762164738545809 ? (arr_41 [i_7 - 2]) : var_9))));
            }
        }
    }
    var_27 = var_0;
    #pragma endscop
}
