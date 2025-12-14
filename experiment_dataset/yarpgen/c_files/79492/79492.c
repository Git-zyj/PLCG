/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (((arr_3 [i_0]) ? (((~(arr_3 [i_0])))) : (min(8089143347794510711, 2147483647))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] = var_7;
                    var_16 -= (arr_2 [i_1] [i_1 - 1]);
                    var_17 = var_6;
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_17 [i_5] [i_1] [i_3] [4] [i_5] [i_0] [i_4] = (((-127 - 1) ? (arr_3 [i_4]) : 61440));
                                var_18 = ((((9 % -112) ? 32047 : 32043)));
                            }
                        }
                    }

                    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_19 = (min(((104 ? 4294967288 : ((4294967281 ? (arr_18 [i_0] [i_3] [i_3] [i_0]) : 0)))), var_8));
                        arr_20 [1] [i_3] [i_1] [i_0] = (((max((arr_0 [i_0 - 3]), (arr_19 [i_0] [i_0] [i_6 + 1] [i_6 + 1]))) != (arr_16 [i_0])));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_7] [1] [i_1 + 1] [i_0 - 4] [i_0] = arr_5 [i_1 + 1] [i_0 - 1];
                        var_20 = (min(var_20, (16 + -1)));
                    }
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    arr_26 [i_0 - 4] [i_1] [i_8] [3] = ((((!((-13 <= (-2147483647 - 1))))) ? ((((134729649 > (var_8 ^ 7062))))) : -var_9));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_34 [i_0 - 3] [i_0 - 3] [i_0] [i_0] [1] = 10;
                                var_21 = (arr_25 [i_0] [7] [i_0]);
                                arr_35 [i_0] [i_0 - 4] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] = var_0;
                            }
                        }
                    }
                    arr_36 [i_8] = ((((min((max(var_2, (arr_9 [i_0] [2] [i_0]))), (2995010848 & var_1)))) ? var_4 : (((945951056 != (!18446744073709551615))))));
                }
            }
        }
    }
    var_22 = ((~(min(-81, (65535 / -32)))));
    #pragma endscop
}
