/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93821
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
                var_17 = (((((((max(var_12, var_8))) ? (((min(8120, var_0)))) : 781481787809194583))) || (((min(126, -2107297583))))));
                var_18 = (((-2107297563 * var_12) >= (((min(((126 > (arr_1 [i_0] [i_1]))), (var_0 >= var_12)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 += (((max((2107297583 <= var_10), var_10)) ? 342650478 : ((~((var_4 + (arr_5 [i_0] [i_1] [i_0] [i_3])))))));
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((-((max(0, var_13)))));
                                arr_15 [i_1] = (((var_15 >= 3950973361813544575) <= ((((min(35662, var_8))) ? var_11 : (!var_1)))));
                            }
                        }
                    }
                }
                var_20 |= var_5;
            }
        }
    }
    var_21 += var_7;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            {
                arr_22 [i_6 + 2] = (arr_4 [i_5] [i_5]);
                var_22 = (min(var_22, ((((((-var_14 << (((arr_9 [i_5] [i_6 - 3]) - 12518720482547989059))))) ? (((((var_9 ? (arr_18 [i_5] [i_5]) : 1847925216))) ? ((((((arr_18 [i_5] [i_5]) + 2147483647)) >> (var_9 - 1606853739)))) : ((var_6 | (arr_21 [i_5] [i_5] [i_5]))))) : (((((~var_16) <= (((-(arr_8 [i_5] [i_5] [i_5])))))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            {
                var_23 = (max(var_23, ((min((min(var_8, 1), (min((arr_27 [i_7 - 1] [i_8] [i_8]), var_6))))))));
                arr_29 [i_7] [i_8] = (max((((arr_23 [i_7 - 1]) ? var_15 : (arr_23 [i_7 - 1]))), (~var_1)));
                arr_30 [i_7] [i_7] [i_7] = (min((((-(min((arr_28 [i_7 + 2] [i_7 + 2] [i_8]), var_1))))), (min((arr_23 [i_7 + 1]), 1))));
            }
        }
    }
    #pragma endscop
}
