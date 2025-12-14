/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = (arr_9 [i_0] [i_0] [i_0] [i_0 - 1]);
                                var_16 = 0;
                            }
                        }
                    }
                    var_17 |= (((arr_6 [i_0 + 2] [i_1 - 1] [i_2]) ? var_4 : ((127 ? -3846691014145337187 : 1))));

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            var_18 = ((((((((arr_7 [i_6 + 2] [i_0 - 1]) + 2147483647)) >> (((arr_7 [i_6 + 2] [i_0 - 1]) + 76))))) ? ((max((arr_9 [i_6 + 2] [i_1 + 1] [i_0] [i_0 - 1]), var_5))) : (min((arr_6 [i_0 + 2] [i_0] [i_0]), (arr_5 [i_5] [i_2] [i_1] [i_0])))));
                            var_19 = (min((max((arr_17 [i_0 + 2] [i_1] [i_1 - 1] [i_1 - 1] [i_2] [i_6] [i_6 - 1]), (arr_17 [i_0 + 2] [i_0] [i_1 - 1] [i_1 - 1] [i_5] [i_5] [i_6 - 1]))), var_14));
                            var_20 = (((((~(arr_12 [i_1 - 2] [i_0] [i_0] [i_0] [i_0 + 1]))) + 2147483647)) >> 1);
                        }
                        var_21 = 2;
                        var_22 = (((max((var_13 & 2305825417027649536), 0))) ? (min((((arr_16 [i_5] [i_5] [i_2] [i_1] [i_0] [i_0]) / var_3)), (min((arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]), var_4)))) : (arr_0 [i_0 + 1] [i_5]));
                        var_23 = ((((min(((21434 ? var_11 : var_6)), (~var_9)))) ? ((((arr_19 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) >> (4293 - 4283)))) : (((~1) ? (((2 ? 127 : (arr_8 [i_0 + 2] [i_1] [i_2] [i_5])))) : ((65534 ? 0 : var_2))))));

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_24 = (max(var_24, ((((((~(((!(arr_21 [i_1] [i_5]))))))) * ((((arr_9 [i_0] [i_1 - 2] [i_5] [i_7]) + (arr_17 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))))));
                            var_25 = 29343;
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_26 = (!14343972901377438399);
                            var_27 *= (arr_0 [i_0] [i_8]);
                            var_28 = (min(((((arr_13 [i_1] [i_1 + 1] [i_1] [i_1] [i_0]) ? ((1 >> (1736676734 - 1736676710))) : (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_1 - 1])))), (((arr_19 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]) ? -var_0 : 0))));
                            var_29 = ((~(((arr_18 [i_0] [i_0] [i_0 + 1] [i_0]) ? (arr_23 [i_1 - 1] [i_1] [i_0]) : -7573290181607541273))));
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            var_30 = 1;
                            var_31 = (1 << 15);
                            var_32 = var_2;
                            var_33 = (max(var_33, (((var_10 ? (arr_15 [i_0 - 1] [i_1] [i_2]) : (arr_15 [i_0 + 2] [i_0] [i_2]))))));
                            var_34 *= (arr_14 [i_9 - 1] [i_9 + 1] [i_9] [i_9] [i_9]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_35 &= (((~var_7) ? (((~(((arr_26 [i_0 - 1] [i_1] [i_2] [i_10] [i_10] [i_11]) ^ (arr_14 [i_0 + 2] [i_1] [i_2] [i_10] [i_11])))))) : (((arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 - 2]) ? (~1) : (((arr_9 [i_11] [i_2] [i_1 + 1] [i_0]) ? 4294967295 : 1915515747349648336))))));
                                var_36 = 12;
                                var_37 = 0;
                                var_38 = -1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_39 ^= (var_12 ? (max((((-1962291413 ? var_11 : var_14))), var_10)) : var_6);
    #pragma endscop
}
