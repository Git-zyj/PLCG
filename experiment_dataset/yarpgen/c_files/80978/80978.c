/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_2] = ((((var_3 ? (arr_2 [i_0]) : 25)) >= (((((211 ? var_7 : var_4))) ? var_6 : 0))));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_17 = (max(((var_11 ? ((26 ? var_10 : 1)) : ((max(24, 1))))), ((max(var_11, var_8)))));
                        var_18 = (min(var_18, var_0));
                        arr_12 [i_0] [i_2] [14] [i_1 + 1] [i_0] [i_0] = var_3;
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [7] = ((((((((var_5 ? (arr_2 [14]) : (arr_13 [1] [i_1] [i_1] [i_1])))) ? var_8 : var_6))) ? (arr_1 [i_0] [i_4]) : (~var_8)));
                        arr_16 [1] [i_0] [1] [i_2] [i_0] = ((var_13 ? (min(((min(var_9, var_14))), ((var_9 & (arr_4 [i_0] [i_0] [i_0] [i_0]))))) : ((min((arr_5 [i_1 + 1] [i_1 + 1] [i_4 - 1] [i_4 - 1]), var_7)))));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_19 [2] [1] [i_1] [i_1] [i_0] [1] [i_5] = (1 * 1);
                            arr_20 [i_0] [i_1] [i_0] [i_4 - 1] [i_5] = (93 / var_10);
                            arr_21 [i_5] [i_0] [i_0] [i_1 + 1] = var_15;
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_19 = (((var_12 ? 93 : var_0)) < (((var_5 < (arr_24 [i_4 - 1] [1] [i_2] [i_4 - 1] [i_1 + 1])))));
                            var_20 = (arr_23 [1]);
                            var_21 = ((var_1 ? (((arr_11 [i_4] [i_4 - 1] [i_4] [i_4 - 1] [i_4]) ? var_6 : 44)) : var_4));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_22 = ((((((!var_9) ? (var_5 * var_12) : 1))) ? (((!((max(var_7, (arr_13 [i_0] [i_1] [i_4] [i_4]))))))) : (((1 != var_2) & (~var_9)))));
                            var_23 *= var_0;
                        }
                    }
                    var_24 = (((max((arr_9 [i_0] [i_1] [i_1 + 1] [i_2]), var_5)) ? ((var_7 << (var_2 - 172))) : (~var_1)));
                }
            }
        }
    }
    #pragma endscop
}
