/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [14] = var_16;
                    var_18 = ((~(((((var_12 ? var_16 : (arr_0 [i_0 + 3])))) - (((arr_3 [18]) / var_10))))));
                    arr_12 [i_0] = ((max((arr_4 [i_2] [i_2 - 1] [i_2 - 1]), (arr_4 [i_2] [i_2] [i_2 - 1]))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_19 = 7361716286944313049;
                        arr_16 [i_0] [i_0 - 1] [i_0 - 1] [i_2] [10] = -7361716286944313047;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0 + 3] [i_0] = (((arr_14 [i_0 + 2] [i_1] [i_1] [i_1 + 1]) ? (((-7361716286944313047 + 9223372036854775807) << (21 - 21))) : ((136 ? 7361716286944313068 : var_5))));
                            arr_22 [i_2] [i_2] = 1686246808;
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_25 [i_2] [i_1] [i_2] [i_2] [i_1] [i_0] = arr_1 [i_0 + 2];
                            arr_26 [i_0] [i_0] [i_0] [i_2] [i_5] = (((((12173 ? (arr_17 [i_2]) : (arr_7 [i_0] [i_1] [i_2]))) * (((!(arr_8 [i_3])))))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((min((arr_7 [i_0] [i_0] [i_2]), (arr_4 [i_0] [i_0] [i_2])))), ((min(-24891, (arr_13 [i_2 + 1] [i_0] [i_2 + 1] [i_1 + 1] [i_0 + 2] [i_0]))))));
                            var_20 = ((-(((((var_15 ? -9 : -32767))) ? ((-8 - (arr_17 [i_5]))) : (arr_4 [i_1] [i_2] [i_1])))));
                            var_21 += var_0;
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_22 = (((arr_7 [i_6] [i_2 + 2] [i_1 + 2]) ? (arr_23 [i_0] [i_0] [i_0] [i_0]) : ((var_8 << (((((arr_29 [i_2] [i_2] [i_0] [i_0]) + 25404)) - 18))))));
                        var_23 = 511;
                        var_24 += (arr_18 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2]);
                        arr_31 [i_0] [i_1] [i_2] [i_2] [i_6] [i_6] = ((arr_13 [19] [i_1] [i_1] [i_1] [i_2] [i_6]) << (var_17 + 35503383));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    arr_42 [i_7] = (((((-5469385040346293846 ? var_15 : (arr_37 [i_7] [i_8] [i_7 - 1])))) ? ((-(arr_37 [i_7 + 1] [i_7 - 1] [i_7 + 1]))) : ((min(-851261803525856782, 5862)))));
                    var_25 = -7361716286944313041;
                    var_26 = ((((-((min((arr_34 [22] [i_8]), 242))))) << ((var_15 ? (((arr_38 [i_7] [i_8] [i_7]) - var_13)) : ((var_6 << (((arr_39 [i_7] [22] [i_7] [1]) - 15177794648873552648))))))));
                    var_27 = ((-2091350337047660030 ? 3 : 7361716286944313047));
                }
            }
        }
    }
    #pragma endscop
}
