/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (968815605 / var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (arr_4 [i_0])));
                    arr_9 [i_0] [i_1] [i_2] = (max((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((arr_0 [i_0]) | 215))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = 215;
                                var_17 = min(-121, 1);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_18 = var_2;
                        var_19 = (min(var_19, ((((((var_6 ? (arr_14 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5] [i_5]) : (arr_14 [i_2] [i_1] [i_2] [i_5] [i_2] [i_1] [i_1])))) ? (max((arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5]), (arr_15 [i_5] [i_5] [i_2] [i_1] [i_1] [i_0]))) : ((max((arr_8 [i_0] [i_1] [i_2] [i_5]), (arr_1 [i_1] [i_0])))))))));
                        var_20 = ((63 + ((var_3 ? (((0 ? 0 : var_12))) : (0 + var_10)))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_6] [i_6] [i_0] [i_0] [i_1] [i_0] = (((((var_12 * (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) && ((((arr_13 [i_6] [i_0] [i_2] [i_0] [i_0]) ? (arr_13 [i_6] [i_0] [i_2] [i_0] [i_0]) : (arr_13 [i_0] [i_0] [i_0] [i_2] [i_6]))))));
                        var_21 |= var_7;
                        var_22 = (arr_2 [i_1] [i_2] [i_6]);

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_23 = ((((((arr_16 [i_2] [i_1] [i_2] [i_2]) && ((max(var_0, (arr_16 [i_6] [i_2] [i_1] [i_0]))))))) <= ((((((arr_20 [i_0] [i_1] [i_2] [i_2] [i_6] [i_7]) % (arr_16 [i_7] [i_6] [i_2] [i_0]))) != -27342)))));
                            var_24 = var_13;
                        }
                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            var_25 = ((((var_8 ? (((var_6 ? var_5 : (arr_13 [i_8 - 1] [i_0] [i_2] [i_0] [i_0])))) : (((arr_20 [i_0] [i_0] [i_8 - 1] [i_6] [i_8 + 1] [i_1]) ? 4514763322177049164 : (arr_2 [i_1] [i_1] [i_1]))))) | var_3));
                            var_26 = (max(var_26, ((max(1, (max((arr_19 [i_8 - 1] [i_8 + 1]), var_5)))))));
                            var_27 = (max(((536608768 ? 18446744073709551615 : (27342 <= var_0))), (((2147483647 * (((arr_2 [i_0] [i_2] [i_8 + 1]) ? (arr_28 [i_0] [i_1] [i_2] [i_6] [i_1] [i_1]) : 0)))))));
                            var_28 = (max((((arr_16 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 - 1]) ? (arr_16 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 - 1]) : (arr_16 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))), (arr_16 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1])));
                        }
                    }
                }
            }
        }
    }
    var_29 = (var_2 + var_0);
    #pragma endscop
}
