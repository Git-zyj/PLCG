/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_1 ^ (var_10 % var_8)))) ? (((var_9 || 196) ? 55 : -59)) : var_0));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (arr_2 [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = (max((arr_2 [i_1]), (arr_7 [i_0] [i_0] [i_4 + 1] [i_0])));
                                var_17 = (min(var_17, 18446744073709551615));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_18 *= (((arr_5 [i_0] [i_2]) ^ (arr_3 [i_1 - 1] [i_1 + 2] [i_2])));
                                var_19 = 4095;
                            }
                        }
                    }

                    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_20 *= (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 2] [i_1 - 1] [i_2] [i_0 - 1]);
                        var_21 = 123;

                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            arr_21 [i_0] = (arr_9 [i_8] [i_1 - 1] [i_0]);
                            var_22 ^= (((((min((arr_4 [i_8 - 1] [i_8] [i_8]), (arr_4 [i_8 + 1] [1] [i_8]))))) ^ 0));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_23 = (!196);
                            var_24 = (max(var_24, var_9));
                            var_25 = (arr_19 [i_1]);
                        }
                        var_26 = (98 ? -4913 : 123);
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_27 = var_7;
                        var_28 = var_10;
                        var_29 += ((-((1 ? var_10 : var_4))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 0;i_12 += 1)
        {
            {
                var_30 = (arr_5 [i_11] [i_11]);
                var_31 = (arr_31 [i_12] [i_12] [i_11]);
            }
        }
    }
    #pragma endscop
}
