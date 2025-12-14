/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1023;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 = ((!(((~(65534 || 1))))));
                            var_17 = ((((((6705833720971168804 <= 32767) ? 18849 : (-32767 - 1)))) && (((~(~11740910352738382812))))));
                            var_18 &= (((!-15112) ? (((~(var_4 + 1)))) : (((((1 ? 162 : 6705833720971168813))) ? var_8 : (((140 ? 1 : var_2)))))));
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    arr_12 [i_0] [i_1] [i_1] [i_4 + 1] = (137 ^ 2113578282);
                    var_19 = var_13;
                }

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((~(~128))))));
                                var_21 ^= ((-(-1811 == 11740910352738382812)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] [9] [i_0] [i_0] [i_0] = 12149561722241864980;
                                var_22 = (max(var_22, ((((((var_4 ? -6297182351467686637 : var_11))) ? var_0 : ((var_14 ? var_1 : (1 / var_2))))))));
                                arr_29 [i_9] [i_1] [i_1] [i_0] = 0;
                                var_23 = (+(((((~255) + 2147483647)) >> (-124 >= -8))));
                            }
                        }
                    }
                }
                for (int i_10 = 3; i_10 < 14;i_10 += 1)
                {
                    arr_32 [8] [i_0] &= (~var_11);
                    arr_33 [i_1] [1] = (((((-((8191 << (var_11 - 9842520984736584656)))))) * ((var_4 ? var_14 : 1))));
                }
                arr_34 [i_1] = var_6;
                var_24 = (((var_9 || var_7) && ((!(((var_8 ? var_5 : var_14)))))));
            }
        }
    }
    var_25 = var_5;
    var_26 = (((((var_10 == var_0) >= 12)) || 18446744073709551613));
    #pragma endscop
}
