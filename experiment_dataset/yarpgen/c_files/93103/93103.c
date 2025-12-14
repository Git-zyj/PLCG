/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-var_8 ? (((16469888046648039833 ? 0 : 2373034839))) : (((((16469888046648039845 ? var_3 : (-32767 - 1)))))));
    var_12 = ((min(((var_4 ? var_3 : var_0)), var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 *= max(var_4, var_1);
                var_14 = ((((min(var_0, var_8))) * (!-29425)));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 = ((((((((var_2 ? var_9 : var_0))) ? var_0 : -3547305568))) ? ((-28419 ? 2616314666 : ((-29411 ? 3386733756 : 4561)))) : (((min(var_10, var_5)) & var_6))));
                    arr_8 [i_2] [i_2] [i_2] [i_2] = ((~(var_0 ^ var_0)));
                }
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    arr_11 [i_1] [i_3] [i_3] [i_0] = (~((min(var_1, var_6))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_4] [i_3] [i_1] [i_0] |= (min(((4567 ? var_2 : var_8)), var_7));
                                arr_18 [i_5] [i_3] [i_3] [i_1] [i_0] = ((((1068519920 ? 1812301913 : -9223372036854775789)) - var_6));
                                arr_19 [i_3] [14] [i_3] [i_3] = (max(-11169, 13514));
                            }
                        }
                    }
                    var_16 = (max(var_16, var_1));
                    var_17 = (min(var_17, ((((~var_9) ? ((var_5 ? var_8 : var_8)) : (var_6 && var_7))))));
                    arr_20 [i_0] [i_0] [i_3] [i_3] = max((-15133 > 1), ((var_3 && (((var_1 ? var_2 : var_0))))));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    arr_23 [i_6] = (max((min(var_3, var_2)), (!3256728204598818583)));
                    arr_24 [i_0] [i_1] [i_6] = (!var_5);
                }
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    var_18 = (min(var_18, 0));
                    var_19 = (((~var_9) || (((((min(var_1, var_3))) ? var_10 : var_3)))));

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_20 = (((((~((var_5 ? var_1 : var_4))))) ? (((((var_1 ? var_2 : var_4)) ^ (var_4 & var_4)))) : (((var_1 ? var_9 : var_7)))));
                        arr_30 [i_0] [i_7] [i_7] = ((+(((var_1 < var_0) ? 8283 : ((var_5 ? var_0 : var_7))))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    arr_39 [i_10] [i_10] = ((((((var_3 && var_4) ? var_6 : (((min(var_6, var_3))))))) ? -var_1 : ((((((min(var_2, var_5))) + 2147483647)) << (var_9 - 3553817924)))));
                    arr_40 [i_9] [i_9] [i_10] = ((((((((var_2 + 2147483647) >> (var_1 - 29198))) < ((var_7 ? var_5 : var_0))))) << ((((var_2 << (((65 >> 0) - 32)))) - 18446572953622544354))));
                    arr_41 [i_9] [i_11] [i_11] [i_11] |= min((-var_4 > var_8), var_1);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                arr_46 [i_10] [i_10 - 2] [i_10 - 2] [i_10] [i_10] [i_12] [i_13] = ((((max(var_8, var_6))) && ((((max((-32767 - 1), 20994))) || 92))));
                                var_21 = (max((max((max(1819328955, 92)), var_5)), var_5));
                                var_22 = (max(var_22, ((((max(var_8, var_1)))))));
                                var_23 = (max((32753 | 1978666095), ((3512047077 ? 0 : 1573))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 *= ((max((var_0 != var_10), ((var_8 ? var_10 : var_3)))));
    #pragma endscop
}
