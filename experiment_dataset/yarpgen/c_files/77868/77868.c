/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((!var_6) || var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    var_15 = (arr_7 [i_0] [10] [i_0] [i_2]);
                    var_16 = (arr_8 [6]);
                    arr_10 [i_0] [17] [i_2] = (arr_5 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_4] [i_2] [i_3] [i_4] = max((arr_8 [i_2]), ((max(-108, var_12))));
                                var_17 = ((~((~(min(var_9, var_8))))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    var_18 = (max((((max(var_13, var_11)))), (max((arr_18 [i_0] [i_0]), (arr_15 [i_1] [i_1])))));

                    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_6] [i_5] [i_1] [i_6] = (((arr_14 [i_6] [i_6] [i_6 + 1] [i_6] [16]) >= (3938680434 ^ 3549155734)));
                        arr_22 [i_1] [i_1] [20] [i_6] [0] = (max(3071105744, 296033870));
                    }
                    for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_28 [i_0] [i_8] [i_5] [i_7 + 1] [1] = var_1;
                            var_19 = (max((arr_9 [i_0] [i_5] [i_5]), (arr_3 [i_0] [i_0] [i_0])));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_32 [i_0] [i_9] [i_5] [i_9] [i_9] = (arr_5 [i_0]);
                            var_20 = ((13163308803809394344 + (max((arr_14 [i_0] [i_7 + 1] [i_5] [i_0] [i_0]), (arr_14 [i_0] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_9])))));
                            arr_33 [i_9] [i_7 + 1] [8] [i_7 + 1] [i_5] [i_7 + 1] = var_6;
                        }
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            var_21 = ((((((arr_13 [i_0] [7] [i_0] [i_7] [i_10]) ? (arr_13 [i_0] [i_1] [i_5] [11] [i_10 - 1]) : (arr_13 [i_0] [6] [i_0] [i_0] [i_0])))) ? (arr_13 [i_5] [i_7 + 1] [i_5] [i_1] [i_0]) : (((var_3 == (arr_13 [i_0] [i_1] [i_5] [i_7] [i_10]))))));
                            arr_37 [i_0] [i_1] [i_0] [i_5] [i_7] [i_7] [i_10] = ((((!5283435269900157272) >> (((arr_14 [i_0] [16] [i_5] [i_7 + 1] [i_10 - 1]) - 12340579879610175300)))));
                            var_22 = ((+((min((arr_18 [i_10 - 1] [i_7 + 1]), (arr_8 [i_7 + 1]))))));
                            arr_38 [i_10 - 1] [i_0] [i_0] [i_0] [i_0] = ((+((+(((arr_15 [i_0] [i_10]) / (arr_15 [i_1] [i_0])))))));
                            arr_39 [i_0] [7] [i_5] [i_5] [i_7] [i_10] [0] = ((~(((max(20567, 1229432692224689913))))));
                        }
                        var_23 = 16257075565924947478;
                        var_24 = (arr_30 [i_0] [i_1] [i_5] [i_5] [i_5]);
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_25 = ((0 ? -104 : 296033870));
                        var_26 = (arr_0 [i_0]);
                    }
                    var_27 = 1;
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                {
                    arr_45 [14] [i_0] [20] = arr_4 [i_0] [i_1] [i_12];
                    arr_46 [i_0] [i_1] [i_1] [i_12] = (!1229432692224689913);
                }
                arr_47 [i_0] [i_1] [i_1] = ((+((-(((arr_1 [i_1] [i_1]) ? (arr_9 [i_0] [i_1] [11]) : var_7))))));
            }
        }
    }
    var_28 = 54240;
    #pragma endscop
}
