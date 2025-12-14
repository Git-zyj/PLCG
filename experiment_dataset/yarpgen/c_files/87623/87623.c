/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_13;
    var_21 += (min((((min(var_14, 245760)))), 6767558431173306659));
    var_22 = ((((-var_0 >= (((-747573276 ? 2047 : 9030897899397252444))))) ? (((((var_1 ? -1 : var_1))) ? ((var_14 ? var_3 : var_7)) : (((var_16 ? var_16 : 118))))) : ((min(((var_6 ? var_8 : -5111)), (487821627 && var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_23 = ((var_8 << ((((((min(var_12, var_16))) ? 561672715 : var_13)) - 561672695))));
                var_24 = var_19;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_18 [i_5] = (min(0, (((!(((747573279 ? (arr_12 [i_6] [i_3] [i_3]) : 802128060))))))));
                                var_25 &= ((((!(var_0 ^ -747573269))) ? (((var_17 ^ var_15) % var_7)) : ((min(var_3, (arr_8 [i_5] [i_4] [i_3]))))));
                                var_26 = (min(1, (min(var_9, var_18))));
                                var_27 -= (min(-118, 1));
                            }
                        }
                    }
                    arr_19 [i_2] [i_3] [i_2] [i_3] = var_17;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_28 = (((((var_9 & -25795) ^ (((arr_20 [i_8] [19] [i_3] [1]) ? -400389675 : var_14))))) & ((~(((arr_23 [i_2] [i_2] [i_2] [i_3] [i_4] [i_7] [i_8]) | var_8)))));
                                var_29 = ((var_15 ? var_15 : (((302162988 ? ((var_1 ? -1263 : (-9223372036854775807 - 1))) : (var_8 >> 1))))));
                                arr_24 [7] [i_3] [i_7] [i_2] [9] = (min(-5111, -747573269));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
