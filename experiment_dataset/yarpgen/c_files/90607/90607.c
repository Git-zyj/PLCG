/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -12933267994504587334;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                            {
                                var_11 = (((((9939079486493628223 ^ 12933267994504587339) | 1)) % ((((1 - -30917) - 31)))));
                                var_12 = (1 + ((51455 + (1 + 8507664587215923393))));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                var_13 = (4294967288 + 1);
                                var_14 = (((18325 * -19389) - 9939079486493628229));
                                var_15 = (min(var_15, (1 || 1)));
                                var_16 = (12933267994504587334 != 9939079486493628222);
                            }
                            var_17 = 114;
                            var_18 = ((((((~-23560) & 10))) - (1 | 3862)));
                        }
                    }
                }

                /* vectorizable */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_19 = -573250362;
                                var_20 = (--6018);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 9;i_10 += 1)
                        {
                            {
                                var_21 = ((-((25378 << (18446744073709551615 - 18446744073709551601)))));
                                var_22 = ((~(34 & 1)));
                                var_23 = 1;
                                var_24 = (min(var_24, (((1 - (~5513476079204964312))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_25 = (((((12933267994504587304 >> (65535 - 65526)))) || 51));
                                var_26 = 17417;
                                var_27 &= (624937106 + 18446744073709551588);
                            }
                        }
                    }
                }
                var_28 = 5513476079204964276;
            }
        }
    }
    var_29 = (~(((-9223372036854775807 - 1) + -127)));
    #pragma endscop
}
