/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_18 ? ((var_11 ? var_11 : var_11)) : (((max(var_16, var_17))))))) ? var_15 : var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 *= (((arr_4 [i_0] [i_2] [i_1]) << (((((max(4755067753472926585, var_3)) / 1307471366)) - 14108717432))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_22 ^= ((7911977651520454553 || ((max((arr_6 [i_0] [i_1]), (((53362 ? -50 : (arr_3 [i_0] [i_2] [i_3])))))))));
                        var_23 = ((((((var_17 ? (arr_3 [i_0] [i_1] [i_2]) : (arr_3 [i_0] [i_0] [i_0]))))) ? (max((max(12181, (arr_1 [i_1] [i_3]))), (arr_7 [i_0] [i_0] [i_1] [i_3] [i_1]))) : var_11));
                    }
                    var_24 = (((var_2 ? (max(13168065446003661097, 212)) : (((max((arr_5 [i_2] [i_1] [i_0]), (arr_4 [i_0] [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_25 ^= ((((arr_12 [i_0] [i_1] [i_0] [i_0] [i_5]) ? (arr_12 [i_0] [i_1] [i_2] [i_4] [i_4]) : (arr_12 [i_0] [i_1] [i_2] [i_4] [i_5]))));
                                var_26 = ((((max((arr_10 [i_5] [i_4] [i_2] [i_1] [i_0]), var_4))) ? ((((((!(arr_5 [i_0] [i_0] [i_0]))))) ^ (arr_0 [i_0]))) : 53377));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            {
                var_27 = var_11;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_28 = (max((((max((arr_7 [i_8] [i_6] [i_8] [i_7] [i_8]), var_11)))), 12165));
                            var_29 ^= ((max(((((arr_11 [i_6] [i_7] [i_8] [i_7]) ? var_1 : 12190))), (var_11 ^ 1))));
                        }
                    }
                }
                arr_25 [i_6] = -3736070258657866295;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_30 = (((max((min(var_0, var_19)), 1))) ? (min(((((arr_31 [i_6] [i_7] [i_10] [i_11]) + (arr_2 [i_6])))), (((arr_23 [i_6] [i_7] [i_10] [i_11]) ? 1 : (arr_10 [i_11] [i_10] [i_7] [i_7] [i_6]))))) : (((((var_11 ? 675178532 : var_10))) ? (min(var_2, 3238216072719115431)) : (arr_7 [i_6] [i_7] [i_7] [i_10] [i_11]))));

                            /* vectorizable */
                            for (int i_12 = 0; i_12 < 16;i_12 += 1)
                            {
                                var_31 *= (-1 + 16208);
                                arr_36 [i_6] [i_12] = 8272599631700403895;
                                var_32 = var_10;
                                var_33 = (arr_23 [i_6] [i_7] [i_11] [i_12]);
                                var_34 = ((-11025 ? -1569819482692542494 : var_6));
                            }
                            for (int i_13 = 0; i_13 < 16;i_13 += 1)
                            {
                                var_35 -= ((!(((12196 ? 1 : 16876924591017009135)))));
                                var_36 = (max((((((min(-112, (arr_15 [i_6])))) ? 53349 : 53377))), ((min(53348, 1569819482692542504)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_37 = var_2;
    #pragma endscop
}
