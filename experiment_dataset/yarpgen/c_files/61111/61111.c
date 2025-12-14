/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = 1328317076736412512;
                var_12 &= 5646031697099184145;
                var_13 = 12800712376610367454;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_19 [i_2 + 1] [i_2 + 1] [i_4] [i_5] [i_4] = (min(var_10, ((((var_3 ? var_4 : (arr_8 [i_3] [i_3])))))));
                                var_14 = ((~(!var_0)));
                                var_15 = 32759;
                                var_16 = 1328317076736412521;
                                var_17 = var_7;
                            }
                        }
                    }

                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {

                        for (int i_8 = 3; i_8 < 22;i_8 += 1)
                        {
                            var_18 = (((var_2 <= -27252) ? -2362 : (max(((10500284752382278513 ? 10289323938514126631 : (arr_23 [i_3]))), (~27076)))));
                            var_19 = (arr_15 [i_8] [i_3]);
                            var_20 &= var_2;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_21 = (arr_22 [i_4] [i_7 - 1] [i_4] [i_7]);
                            arr_27 [i_2] [i_4] [i_4 - 1] [i_7] [i_2] = (arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                        }

                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_22 = max(((((!var_10) ? (arr_31 [i_4] [i_4]) : (arr_14 [i_4 - 1] [i_7] [i_7 + 2] [i_10] [i_10] [i_10])))), (arr_21 [i_4 + 1] [i_4] [i_4 + 1] [9] [i_4] [12]));
                            var_23 = (((min((min(3705017292247676788, (arr_23 [i_2]))), (~4963650287908416935)))) ? (-9223372036854775807 - 1) : ((var_9 & (((var_10 ? -1834477146920977271 : 1))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            var_24 = ((-var_4 >= (((arr_10 [i_11]) ? 4424632780224705518 : var_0))));
                            var_25 = (arr_33 [i_2] [i_3] [i_4] [i_4] [i_7 + 2] [i_11] [1]);
                        }
                        for (int i_12 = 3; i_12 < 20;i_12 += 1)
                        {
                            arr_38 [i_4] [i_3] [i_3] = ((10289323938514126634 ? (((var_4 ? var_6 : 1716252478147278037))) : (-9223372036854775807 - 1)));
                            var_26 += (max((!var_10), (min(0, -9223372036854775792))));
                        }
                        var_27 = 3796746831;
                    }
                    var_28 = (arr_28 [i_4] [i_2 - 1] [i_3] [i_2 - 1] [i_3] [i_4 + 2]);
                }
            }
        }
    }
    var_29 = 7946459321327273103;
    var_30 ^= 498220467;
    var_31 = (var_0 / 10204970939241969515);
    #pragma endscop
}
