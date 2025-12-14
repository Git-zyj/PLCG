/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (~201);
                    var_13 = ((!(((max(-18, 451960472)) >= var_0))));
                    arr_8 [i_0] [i_2] = (((((-var_5 >> (((var_4 ^ var_10) - 23181))))) < (max(var_8, var_0))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                arr_15 [i_3] = ((((max(var_11, var_10))) ? (var_4 - var_8) : ((max(var_10, var_6)))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_14 = (max((var_4 & var_9), var_6));
                            var_15 = var_7;
                        }
                    }
                }
                var_16 = (min(var_16, ((((((-var_4 ? var_8 : (!var_7)))) ? (((min(var_7, var_5)))) : -var_11)))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            arr_26 [i_3] = (!-var_11);
                            arr_27 [i_3] [i_3] [i_3] [i_3] = ((((((var_9 ? var_0 : var_1)))) & (((var_5 ? var_1 : var_0)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            {
                var_17 -= (max(var_4, (var_4 | var_3)));
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_18 = (((min(var_8, (-7 < 1))) * ((((!(var_5 > var_5)))))));
                                var_19 -= ((var_10 ^ (~26)));
                                arr_41 [i_13] [i_10] = (var_3 > var_3);
                                arr_42 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_13] = (max(((var_5 ? var_1 : var_2)), (var_11 ^ var_3)));
                                var_20 = (min(var_20, ((min((53260 == 18), ((((var_0 ? var_1 : var_9)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_0 == (((!((max(var_2, var_6))))))));
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                {
                    var_22 -= (min(((var_2 ? ((var_6 ? var_10 : var_11)) : (((min(var_3, var_10)))))), ((((((var_10 ? var_7 : var_6))) ? var_0 : (var_0 <= var_8))))));
                    var_23 = ((~((var_7 ? (var_8 || var_1) : (var_9 && var_1)))));
                    var_24 = (min((((max(var_9, var_2)) + (var_3 & var_10))), (((var_0 && var_2) ? var_8 : var_5))));
                }
            }
        }
    }
    #pragma endscop
}
