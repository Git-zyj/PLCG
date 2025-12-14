/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (((((!((((arr_5 [i_1] [i_0]) ? var_5 : var_9)))))) < ((var_3 ? ((min(42, (arr_4 [i_2] [i_1] [i_0])))) : ((var_4 ? var_9 : (arr_2 [6])))))))));
                    var_13 = (max(var_0, var_4));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                arr_14 [i_3] = ((!((((var_1 ? 42 : var_6))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_21 [21] [i_4] [i_5] [i_5] = var_10;
                            arr_22 [9] [22] = 1013630278;

                            for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                            {
                                var_14 = (min(var_14, (((var_7 % (var_6 & var_8))))));
                                var_15 = var_6;
                            }
                            for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                            {
                                var_16 += ((~((~(~202)))));
                                var_17 = (((((!var_11) != (min(var_5, var_4)))) ? 3 : ((-((var_9 ? var_2 : var_9))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 1; i_9 < 10;i_9 += 1)
    {
        var_18 = ((~(((((var_10 ? 66 : var_0))) ? var_5 : (arr_0 [i_9 - 1])))));
        var_19 = 49;
        var_20 = ((var_5 ? 183 : var_2));
    }
    var_21 = ((var_5 ? (-223077881 > var_11) : var_8));
    var_22 |= 65535;
    #pragma endscop
}
