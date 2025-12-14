/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_3 ? ((~((var_2 ? -6217584494852033083 : var_6)))) : ((min(1825786487, 2469180809)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = ((~(((18446744073709551604 && ((min((arr_3 [i_0] [i_1] [i_1]), 12))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_4] [i_1] [i_1] = (min(((((((65532 ? (arr_4 [i_0] [i_4]) : 2469180809))) && 5))), ((-8811308773724428581 ? 36655 : 18446744073709551604))));
                                arr_13 [i_1] [i_0] [i_0] [i_3 - 1] [i_2] = (max(36655, 1825786464));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_19 ^= 5;
                    arr_24 [i_5] [i_5] [i_7] = 18446744073709551604;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_20 -= (arr_30 [i_6 - 1] [i_6] [i_7] [i_8] [i_8] [i_9 + 2]);
                                var_21 |= ((+(((arr_27 [i_9] [i_6 + 2]) ? (arr_17 [i_5] [i_9]) : 18446744073709551601))));
                            }
                        }
                    }
                    var_22 -= (34 ? 31 : 2807181224);
                }
            }
        }
    }
    var_23 &= var_4;
    #pragma endscop
}
