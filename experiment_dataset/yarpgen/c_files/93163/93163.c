/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((-654341045110771763 ? -654341045110771763 : 217)) + 9223372036854775807)) << (((((((39 ? var_3 : -4494776075611059095))) ? ((var_10 ? 18446744073709551615 : 60)) : ((min(237, 4494776075611059106))))) - 18446744073709551615))));
    var_14 = ((((max(272282486, 605))) >= (((var_10 ? (217 ^ var_6) : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_15 -= (max(60018, 1473721626237510149));
                            arr_10 [i_0] [i_0] [i_1] [i_2 - 3] [i_0] = 1473721626237510149;
                        }
                    }
                }

                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {
                    arr_13 [i_0] [i_1 + 2] [i_0] = (~var_3);
                    var_16 ^= ((-4494776075611059102 ? -18186 : -290312748));
                }
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((!((max(58309, 28944)))));

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        var_17 = var_1;
                        arr_22 [i_0] [i_5 - 2] = (arr_21 [i_0] [i_0] [i_5 + 1] [i_6 - 2]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_18 = (max(var_18, (~18446744073709551594)));
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((~(arr_21 [i_5 + 1] [i_1 - 1] [i_0 + 1] [i_0 + 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_32 [i_0] [i_1 + 2] [i_5] [i_8] [i_0] [i_9] = 18446744073709551607;
                                arr_33 [1] [i_1] [i_1] [i_8] [i_9] &= 4410;
                                var_19 = (~255);
                                var_20 = (arr_14 [10] [i_5 + 4] [i_5 + 4]);
                                var_21 = (arr_4 [i_0] [1] [i_5]);
                            }
                        }
                    }
                    var_22 = (max((min(-28936, -4670)), 1));
                }
                var_23 *= (17 ? 1285045668 : 18446744073709551615);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 21;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            {
                arr_39 [i_10] = (min(0, -31618));
                var_24 = (max(var_24, ((((arr_37 [i_11]) >= (--1))))));
                arr_40 [i_10] [i_11] = ((32743 & ((172 & ((6844518030405302842 << (20 - 20)))))));
                var_25 -= ((1 ? -6844518030405302816 : 4654));
            }
        }
    }
    var_26 = (max(var_26, var_5));
    #pragma endscop
}
