/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_20 = (!-1);
                            var_21 = ((15761213346540406317 ? (((1534285715114165057 || (arr_6 [i_1] [i_1])))) : (arr_4 [i_0] [i_0] [i_3])));
                        }
                    }
                }
                var_22 ^= (18446744073709551590 ^ 9223372036854775793);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_23 = (min((arr_18 [11] [i_7] [i_5] [i_4]), -1269));
                                var_24 += (min((((var_2 & ((9223372036854775800 << (9223372036854775780 - 9223372036854775780)))))), (((((var_19 ? var_2 : 9223372036854775800))) ? (2126239046 != var_8) : (max(var_15, var_13))))));
                                var_25 = ((((((((-1 ? 9223372036854775798 : 8486338691003285967))) ? (!-16) : (127 / -9223372036854775784)))) ? var_19 : -2168728250));
                                var_26 = ((~((((-30880 / var_4) && var_12)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_27 = var_17;
                                var_28 = (max(var_28, (((var_4 && (arr_10 [i_11]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                {
                    var_29 = -20557;
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            {
                                var_30 = (max(var_30, ((max(((((1 ? var_6 : var_4)) / 3104498985)), (1 >= 1))))));
                                var_31 = (min(var_31, var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 4; i_17 < 17;i_17 += 1)
    {
        for (int i_18 = 3; i_18 < 19;i_18 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 18;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        {
                            arr_50 [i_19] [i_19] [i_19 + 2] [i_20] = (min(((-(arr_48 [i_17 - 1] [i_19] [i_19 - 1] [i_19]))), 1));
                            var_32 += (~-1);
                            var_33 = 9223372036854775804;
                        }
                    }
                }
                var_34 = ((((var_1 > (arr_32 [i_17] [i_17] [i_17]))) ? ((var_6 ? 2585259774 : (arr_32 [i_18 + 1] [i_18 + 1] [i_18]))) : (min((arr_32 [1] [i_17] [i_18 + 1]), 1190468314))));
            }
        }
    }
    #pragma endscop
}
