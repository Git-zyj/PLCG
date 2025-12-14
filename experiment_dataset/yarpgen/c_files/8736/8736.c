/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (1 ^ var_13);
    var_17 = ((((((7427338197616566157 / var_4) ? (1 * 4795464513739560461) : -var_5))) ? ((((var_11 + var_5) ? 10772 : (!var_10)))) : (var_7 % 1954440717894391702)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 = (((((~((0 ? -7138024264174643437 : var_12))))) ? (~374640257) : (((var_0 ? (arr_0 [i_0]) : (~1))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 = ((var_10 & (arr_8 [1] [i_2] [i_1] [i_0])));
                        arr_10 [i_2] [i_0] [11] [i_3] = ((29916 == (arr_0 [i_0])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_20 = (((arr_1 [i_4] [i_4]) == 1));
        var_21 = var_0;
        var_22 = 1;
        var_23 = ((((((arr_9 [i_4] [8] [i_4] [i_4]) ? (arr_5 [1]) : (arr_2 [12])))) ? 1 : (27502 * var_15)));
        var_24 = var_10;
    }
    var_25 = var_3;

    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        arr_15 [0] [0] = ((13488160043818501645 - (arr_13 [i_5])));
        var_26 = (1 <= (7427338197616566171 == 11365));
        var_27 = (((((arr_13 [i_5]) + 2147483647)) >> ((-1768286292779127799 ? (((17627 ? 1 : (arr_13 [i_5])))) : -1954440717894391706))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    arr_24 [3] [i_6] [10] = ((6213500064671585712 ? (((+(((arr_19 [i_6]) - var_0))))) : (+-18446744073709551596)));
                    arr_25 [i_6] [i_6] [21] [i_6] = (+-var_6);
                    var_28 = ((~((var_6 ? var_4 : (arr_22 [i_6] [i_6])))));
                }
            }
        }
        var_29 = (arr_23 [0]);
    }
    for (int i_9 = 1; i_9 < 13;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            arr_34 [11] = (((arr_21 [i_9] [i_10]) | (((28299 / (arr_1 [i_9] [i_10]))))));
            arr_35 [i_9] [i_10] [i_10] = 1;
        }

        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            var_30 = var_15;
            var_31 = (((arr_27 [i_9]) ? (min((arr_14 [i_9]), var_0)) : 0));
            var_32 = var_0;
            var_33 -= (arr_1 [i_9] [i_9]);
        }
        for (int i_12 = 4; i_12 < 12;i_12 += 1)
        {
            arr_43 [i_9 + 1] [i_12] = (((((arr_26 [i_12 + 1]) + (arr_5 [i_12 - 2]))) >= 0));
            arr_44 [12] [i_12] = var_10;
        }
        /* LoopNest 3 */
        for (int i_13 = 2; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    {
                        var_34 = 7138024264174643436;
                        arr_52 [i_9 + 2] [i_13 + 1] [i_13 + 1] [i_13] [i_15] = ((var_4 ? (arr_16 [i_13]) : (arr_26 [i_9])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
