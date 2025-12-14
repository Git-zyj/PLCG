/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_15 [i_4] [1] [1] [1] [i_4] = ((-16752 ? -25472 : 20));
                            arr_16 [i_0] [i_0] [i_2] [i_3] [i_2] [i_0] |= ((52308 ? (((arr_2 [i_1]) ? var_6 : 29)) : (arr_0 [i_0] [i_0])));
                            arr_17 [i_1] [i_1] [i_1] [i_4] [i_4] [2] = var_4;
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (~58);
                        }
                        arr_19 [i_3] [i_2] [i_0] [i_0] = (arr_5 [i_1] [i_2 + 3] [9]);
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_13 [i_1 - 1] [i_1 - 1] [i_2] [1] [1] [i_2 - 1]) ? (arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2 + 1]) : 44410));
                    }
                    arr_21 [8] [8] [i_1 - 1] [i_1] = (arr_1 [i_1 - 1]);
                    arr_22 [i_0] [i_0] [i_0] = var_3;
                }
                arr_23 [i_1] |= var_11;
            }
        }
    }

    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        arr_26 [i_5] [i_5] = ((((((arr_25 [i_5] [i_5 - 1]) ? 255 : (arr_25 [i_5] [i_5 - 2])))) ? ((var_5 ? (arr_25 [i_5] [i_5 - 1]) : var_11)) : (((!(arr_24 [i_5 + 1] [i_5]))))));
        arr_27 [1] = 10304;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_42 [i_5 - 2] [i_6] [i_9] [i_7] [i_7] [8] = (((((~(var_2 && 0)))) ? var_6 : -12411));
                                arr_43 [1] [i_6] [i_6] [i_6] [i_6] [i_5] [i_9] = (((arr_41 [i_8 - 1] [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8]) == 65292));
                                arr_44 [i_5] [i_9] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] = (arr_40 [i_5] [i_9]);
                                arr_45 [i_5] [6] [i_5] [i_7] [i_7] [3] [i_9] = (((((var_1 ? (arr_38 [1] [i_7 - 1] [i_5 - 1] [i_7 - 1] [i_8 - 1]) : var_3))) ? var_1 : 0));
                            }
                        }
                    }
                    arr_46 [i_5 - 1] [8] [20] [20] = ((!(-57 && var_8)));
                }
            }
        }
    }
    var_12 = (((~var_8) & ((var_0 ? ((var_5 >> (var_7 + 74))) : (var_5 & var_0)))));
    #pragma endscop
}
