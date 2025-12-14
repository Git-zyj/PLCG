/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (max(((max((!var_2), (!var_8)))), (min(var_6, var_1))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((((((-((64 << (4294967295 - 4294967276)))))) ? (min((arr_6 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]), ((var_10 >> (var_8 - 5526380516679053200))))) : (max((arr_6 [i_0] [i_0] [i_0] [i_2 - 1]), (((arr_3 [i_0]) ? var_5 : 1)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_0] [i_3] [i_2] [i_1] [i_0] [i_0] = (((((((max(var_3, (arr_10 [i_0] [i_0] [1] [i_0 - 1] [i_1] [i_1])))) ? (((var_10 - (arr_7 [i_3])))) : (((arr_5 [i_0] [i_0] [i_2] [i_0]) ? 28 : var_5))))) / (((var_3 - 32064) / var_7))));
                                var_14 = (min((min(((var_4 ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]) : var_2)), ((max(30275, var_10))))), (1 != 0)));
                                arr_12 [i_4] [i_3] [i_2] [i_2 - 1] [i_0 - 2] [i_1] [i_0 - 2] = (max((min(((max((arr_3 [i_4]), (arr_9 [i_1] [i_0] [i_2] [i_0] [i_1] [i_0])))), (max(4294967295, var_0)))), (((-((max(-32064, 1))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_15 = (min(((1 * ((((arr_0 [i_2]) > 255))))), (var_7 | var_1)));
                                var_16 ^= ((1 ? -1 : -32064));
                                var_17 = (min(var_17, (((((max((((arr_1 [i_0] [i_6]) ? var_1 : 1)), (((arr_4 [i_1]) ? (arr_0 [i_5]) : 30275))))) ? (((arr_10 [i_0] [i_1] [i_2 - 1] [i_2 - 1] [i_5 - 1] [i_5 - 1]) + 1)) : ((((arr_6 [i_0] [i_1] [i_2] [12]) ? var_6 : (0 < var_7)))))))));
                            }
                        }
                    }
                    var_18 = (min(var_18, ((min(0, -831206325)))));
                }
            }
        }
    }
    var_19 = (((((max((min(var_2, var_1)), var_0)))) >= ((((max(var_8, 1))) ? (((max(0, var_0)))) : ((1116892707587883008 ? var_9 : var_0))))));
    var_20 = max((min(var_11, var_6)), (!127));

    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 24;i_9 += 1)
            {
                {

                    for (int i_10 = 3; i_10 < 24;i_10 += 1)
                    {
                        var_21 = (-(var_1 % var_6));
                        arr_31 [i_7] [i_8] [i_10] = ((var_10 ? 1 : var_7));
                    }
                    var_22 *= -12358466400208237925;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 24;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 22;i_14 += 1)
                        {
                            {
                                var_23 *= ((((127 - (arr_18 [i_7] [i_14]))) + ((134217727 ? -757057758 : (arr_35 [i_7])))));
                                arr_45 [i_7] [i_14] [i_14] [i_7] = ((31 ? 32071 : (arr_27 [i_14] [i_12 - 2] [i_11] [i_14])));
                                arr_46 [i_7] [i_7] [i_14] [i_13] [i_14] [i_14] = ((~(~var_8)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 24;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            {
                                arr_53 [i_7] [i_11] [i_11] [i_7] [i_12] [i_15] [i_16] = (((31 || var_11) % var_6));
                                var_24 = ((((((arr_19 [i_7]) ? 1 : (arr_38 [i_7])))) ? (((var_8 ? var_10 : (arr_50 [i_16] [i_7] [i_11] [i_11] [i_7])))) : (((arr_47 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15]) ? (arr_23 [i_12] [i_12]) : var_10))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 0;i_18 += 1)
                        {
                            {
                                var_25 = 1;
                                var_26 = ((var_1 || (arr_54 [i_12 - 1] [i_12 - 1] [i_12 - 2] [i_12] [i_12 - 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
