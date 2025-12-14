/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_5 / var_11) ? ((var_1 ? 12490 : var_6)) : var_3)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((7 ? 7 : 236));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_2] = (arr_8 [i_2] [i_0] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [i_4] [i_0] [i_0] [i_0] [i_4] [i_0] = (max((min((~var_3), ((((arr_9 [i_0]) - (arr_8 [i_0] [i_0] [i_2] [i_0])))))), -31644));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (max((min(var_7, (arr_8 [i_0] [14] [i_0] [i_0]))), (((!(((-1094461288 ? 44650 : var_3))))))));
                            }
                        }
                    }
                    arr_19 [i_2] = ((!((((arr_7 [i_2]) ? var_0 : ((var_10 + (arr_15 [i_0] [i_1] [i_2] [15] [i_0]))))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = (!-1908845660);
        arr_23 [i_5] = var_2;
        arr_24 [i_5] [i_5] = (((arr_8 [i_5] [i_5] [i_5] [i_5]) ? (arr_7 [i_5]) : (((var_5 | (arr_8 [i_5] [i_5] [i_5] [i_5]))))));
        arr_25 [i_5] = var_11;
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_36 [i_5] [i_6 - 1] [i_5] = (((!var_5) / (arr_2 [i_5])));
                        arr_37 [i_8] [i_7] [i_6] [i_5] = (!0);
                        arr_38 [i_5] [i_6] [i_7] [i_8] [i_8] |= (((((~(arr_30 [i_6 - 1] [i_7])))) ? -1972284735 : (arr_35 [13] [13] [13] [i_8])));
                        arr_39 [2] [i_7] [i_7] = ((-var_10 ? (((var_8 ? -1 : var_5))) : (((arr_34 [i_5]) ? var_3 : (arr_14 [i_8] [i_6] [i_6] [i_6] [i_5])))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        arr_42 [i_9] = (((arr_15 [i_9] [i_9] [i_9] [i_9] [i_9]) && var_5));
        arr_43 [i_9] = (arr_30 [i_9] [i_9]);
    }
    var_13 = (max(var_7, 38400));
    #pragma endscop
}
