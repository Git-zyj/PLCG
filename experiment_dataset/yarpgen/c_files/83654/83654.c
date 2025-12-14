/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_8, (1 & -25263)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_0] [i_1] = 1;
                    arr_8 [i_0] [i_1] [i_2] [i_1] = -8;
                    var_14 = (((max(var_2, (arr_6 [6] [1] [1]))) <= ((min((arr_4 [4]), var_3)))));

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_15 += ((max(var_7, (arr_10 [12] [i_2] [i_1 + 1] [2]))) != (!var_3));
                        arr_11 [i_0] [i_2] [i_0] [i_3] |= (((((-((var_3 ? var_2 : var_9))))) ? ((var_5 ? ((-7891 ? 4 : 15)) : (-8 | 23))) : (arr_3 [i_2])));
                        var_16 = ((((max(var_2, (arr_4 [i_0 + 1])))) ? var_6 : ((37 ? 0 : -6))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_17 |= (((33833 / var_8) < var_6));
                            var_18 = var_5;
                            var_19 = (min(var_19, ((max((arr_16 [i_0] [i_0] [1] [i_4] [i_0] [3]), (~-8))))));
                        }
                        arr_17 [i_1] = ((+((-(((arr_14 [i_0] [i_1 - 3] [i_2] [i_4]) ? (arr_15 [9] [i_1] [i_2]) : 1))))));
                        var_20 *= ((((((~1) ? (!0) : (min(21, 5500907859549355036))))) ? (max((var_2 && 217), ((-(arr_4 [i_2]))))) : var_0));
                        var_21 |= ((-7875 || (((((arr_5 [i_4] [i_2] [8] [i_0]) ? (arr_10 [i_0] [i_1] [i_2] [i_4]) : var_7))))));
                    }
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    var_22 = (max(var_22, -var_3));
                    arr_22 [i_1] [5] = (((arr_16 [12] [1] [i_6] [2] [i_0 + 1] [i_1 - 3]) | ((((33 | 35) != (arr_5 [i_1 + 1] [i_1 - 3] [i_0 - 1] [i_0 + 2]))))));
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_23 += var_0;
                    var_24 = ((7755932982721525487 ? 0 : 206));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_31 [5] [i_1] [5] [i_8] [i_1] = (min(-var_8, (((((var_9 ? var_7 : var_1)) > (((var_5 && (arr_16 [i_9] [i_8] [i_1] [i_0] [i_1] [i_0])))))))));
                                var_25 |= ((!((max(var_9, (arr_9 [i_0] [i_1]))))));
                            }
                        }
                    }
                    var_26 = ((~(max(191, -386532022))));
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                {
                    var_27 = var_7;
                    arr_36 [i_1] [i_10] = (((-(var_11 & var_2))));
                }
                var_28 = (min(var_28, var_11));
                arr_37 [i_0] [i_1] [10] = ((!(((-(arr_35 [i_0 + 1]))))));
            }
        }
    }
    #pragma endscop
}
