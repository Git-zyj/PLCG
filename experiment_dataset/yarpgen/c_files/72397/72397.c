/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-2093334524 && ((((var_10 ? var_9 : 65535))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_2] [i_4] [i_3] [i_4] [i_0] = var_3;
                                var_16 *= (((4294901760 | 2249880274655180751) ? ((16196863799054370864 ? -var_2 : (arr_0 [i_1 + 1]))) : (((-(arr_13 [i_4 - 1] [i_1 + 3]))))));
                                arr_15 [i_0] [i_1] [i_2] [i_4] [i_4] = ((4191037112 && (((-(max(1621332780, var_1)))))));
                            }
                        }
                    }
                    var_17 = var_14;
                    arr_16 [i_0] [i_1] [i_1 - 2] [i_2] = ((-(((arr_7 [i_0 - 1] [i_1 + 2] [i_2]) ? 2093334524 : 2147483647))));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_18 = (max((((arr_4 [i_0 - 1] [i_1 + 2] [i_1 + 2]) ? (arr_1 [i_0 + 1] [i_0]) : ((-(arr_2 [i_0] [i_2] [i_5]))))), 1270507778));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_19 ^= var_3;
                            var_20 = (max(var_20, (((((((arr_4 [i_0 + 1] [i_1 + 2] [i_1 + 2]) ? ((124 ? (arr_10 [i_0 - 1] [i_1 + 1] [i_2] [i_5] [i_6]) : var_13)) : (arr_1 [i_0] [i_5])))) ? (((min(103930183, 3)))) : (0 == var_10))))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        arr_24 [3] [i_1] [i_2] [i_7] |= (max((3267564795 != 0), (((arr_7 [i_0 - 1] [i_2] [i_2]) & (arr_7 [15] [15] [i_7])))));
                        var_21 -= (((((arr_9 [i_0] [i_1] [i_2] [i_2]) <= ((((arr_1 [i_2] [i_7]) <= -65536))))) || -458476480));
                    }
                }
            }
        }
    }
    #pragma endscop
}
