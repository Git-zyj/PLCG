/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    var_10 = (arr_6 [i_1 + 1] [i_1] [i_1 + 1] [4]);
                    arr_7 [i_2] [23] [i_0] [i_0] = ((32 ? (((arr_4 [i_0] [i_0]) ? 247 : -5962780645330917524)) : 19722));
                }
                for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_11 = (max(var_11, -5962780645330917525));
                        var_12 = ((var_1 ? (arr_4 [i_0] [i_1]) : (arr_10 [i_3] [i_1 + 1])));
                        arr_13 [i_3] [i_4] = 5962780645330917523;
                        arr_14 [i_3] = (arr_4 [i_0] [i_4]);
                    }
                    var_13 = (max(var_13, var_9));
                }
                arr_15 [16] [i_1 + 1] [i_1 + 1] = (arr_1 [i_0] [i_1 + 1]);
                arr_16 [i_1 + 1] [i_1] [i_0] = 65531;

                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] [i_5] [i_5] = 1;
                    var_14 = var_8;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_15 += -5962780645330917531;
                                var_16 = (arr_5 [i_0]);
                                var_17 = ((1 ? 68 : -5962780645330917534));
                                arr_25 [i_0] [i_6] [i_5] = (arr_1 [i_5 - 2] [i_0]);
                            }
                        }
                    }
                }
                var_18 ^= (max((((127 ? 56935 : -6976))), ((min((((((arr_10 [i_0] [i_0]) + 2147483647)) << (5962780645330917527 - 5962780645330917527))), 1)))));
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
