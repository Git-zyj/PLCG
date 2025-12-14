/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0 - 1] = (arr_0 [i_0] [i_0]);

        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0 - 1] = (max(((((var_3 ? (arr_5 [0] [0]) : var_3)))), -var_16));
            arr_7 [i_0] [i_0] = (min((((((var_6 ? var_10 : (arr_2 [1] [6])))) ? (min(var_6, -1748953345)) : (arr_4 [i_1]))), ((((max(2443, (arr_2 [i_1] [i_1 - 2])))) ? (!var_1) : var_15))));
            arr_8 [i_0] = ((!((max(var_16, (arr_2 [i_1 - 2] [i_0 - 1]))))));
        }
        arr_9 [0] [i_0 - 1] = ((((((var_6 ? 0 : var_9))) ? (var_13 - var_10) : -99)));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = 2147483647;

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_18 [i_2] [i_2] [i_2] = (min(((-(arr_4 [4]))), (arr_11 [i_2])));
            arr_19 [9] [9] = ((((((var_15 / (arr_14 [20] [i_3] [i_3]))))) * ((var_2 ? 0 : (((max(var_15, (arr_17 [i_3] [i_3] [21])))))))));
            arr_20 [i_2] [i_3] = ((min(-99, 22459)));
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_23 [i_4] = ((var_8 ? 2444 : (((((var_14 - (arr_15 [i_4] [i_4])))) ? ((1050 ? var_3 : 4050761298951543948)) : var_3))));
        arr_24 [i_4] = var_10;
        arr_25 [2] = (arr_1 [i_4] [i_4]);
        arr_26 [3] [i_4] = ((32767 && ((var_10 && (arr_22 [i_4])))));
    }
    var_17 = ((((14604222215904535567 ? var_1 : var_13))));
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                {
                    arr_36 [14] [i_6] [8] = (((((((!(arr_0 [i_5] [16]))) ? (arr_35 [i_5] [i_5]) : -6))) ? ((((arr_31 [i_5 + 1]) && 839543794225323839))) : 0));
                    arr_37 [i_6] = var_9;
                    arr_38 [i_5] [i_5] [i_7] = (!-24435);
                    arr_39 [i_5] [i_7] [i_7 + 2] [i_6] = (((((~(((arr_29 [11]) ? -975896786289647366 : 32767))))) ? ((-(arr_35 [11] [i_7 + 2]))) : (arr_29 [i_7 + 2])));
                    arr_40 [i_6] [i_6] = (((arr_15 [i_5] [i_7]) && -1));
                }
            }
        }
    }
    var_18 = (var_2 ? ((1729059205 ? (var_2 < var_2) : var_12)) : (((var_11 | -15124) ? (min(48742, var_12)) : (!65535))));
    #pragma endscop
}
