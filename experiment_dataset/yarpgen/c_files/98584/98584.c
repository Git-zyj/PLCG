/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] = (max((min(var_6, (((arr_9 [i_0] [i_1] [1] [1] [1]) % 3033)))), (((((max(18446744073709551615, 46617935))) ? ((min(var_5, var_4))) : (max(4248349347, var_2)))))));
                        arr_11 [i_0] [i_1] [i_1] [i_1] |= ((((((2147483628 >> (var_12 + 1300022584290244260))) * 0)) + ((89 ? (arr_4 [i_0]) : var_5))));
                        arr_12 [i_3 + 1] [i_3] [i_1] [i_3] [i_0] = (!8);
                    }
                    for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_1] [i_0] [i_2] = (min(((min(86920175880056626, (251658240 || 1)))), (min(9223372036854775802, (((arr_0 [i_1] [i_1]) ? var_6 : var_0))))));
                        var_13 = (33030 >= 93);

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_14 = (((arr_13 [i_2 + 2] [i_4 + 1] [i_5] [8]) != var_4));
                            arr_20 [i_5] [i_5] [i_5] [2] [i_4] [i_4] [i_5] = -1881826345;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_23 [i_6] [i_2] [3] [i_6] = var_2;
                            var_15 |= 1;
                        }
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            arr_26 [i_0] [i_1] [9] [i_4] [6] = ((((((arr_16 [i_0] [i_1] [i_2 + 2] [i_4] [i_1] [i_7 + 2] [i_7 + 2]) ? (arr_21 [i_0] [i_2 - 1] [i_2 - 1] [i_0] [i_7 + 3]) : (arr_21 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))) && 1));
                            var_16 = (min((var_2 - var_11), (min(var_11, var_6))));
                            var_17 += (((arr_16 [i_4 + 1] [3] [3] [i_4 + 1] [i_4] [i_2] [i_2]) <= (((var_10 ? var_1 : var_4)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_18 = -5;
                                arr_32 [i_0] [i_1] [i_0] [i_8] [i_0] [i_0] = (((((((var_11 ? (arr_1 [i_0]) : var_10))) ? (!-26633) : var_8)) * var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((~(var_8 / var_12)));
    #pragma endscop
}
