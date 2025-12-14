/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_16 = (((((arr_3 [i_2]) * (arr_3 [i_2]))) != (((!(arr_3 [i_0]))))));
                            var_17 = (max(var_17, 1516733957));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        {
                            arr_16 [i_4] [i_4] [i_1] [i_1] [i_0] = ((((((var_11 == (((arr_12 [1] [1] [9] [i_5]) | (arr_5 [8]))))))) | ((-5596 ? (((max(192, var_3)))) : (arr_10 [9] [i_1] [i_4])))));
                            var_18 = (((((~(arr_13 [i_5] [i_0] [i_0])))) != ((var_1 ? ((((arr_5 [i_0]) ? -1031570340 : var_11))) : (~-2785313840717504160)))));
                            arr_17 [i_4] [i_4] [i_4 + 1] [i_4] = (max(var_9, (~-var_14)));
                            arr_18 [1] [i_1] = (((((var_11 >= (arr_12 [i_4] [i_4] [6] [i_4 + 1])))) < ((120 ? (var_7 == 135) : var_14))));
                        }
                    }
                }
                var_19 -= var_9;
            }
        }
    }
    var_20 = ((var_3 ? var_8 : var_0));
    var_21 = ((((min(((max(var_7, (-32767 - 1)))), (var_11 + 2785313840717504160)))) ? ((((!-75679331107648531) <= 0))) : var_1));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    var_22 = (min((arr_23 [i_7 - 2] [i_7 - 1] [i_7 + 1]), (((arr_23 [i_7 - 2] [i_7 - 2] [i_7 - 2]) >> 1))));
                    arr_29 [i_7] [i_8] = ((((((~var_6) ^ 116))) ? (min((arr_25 [i_7 - 2] [i_7 - 1] [i_7 + 1]), 1024)) : var_2));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_36 [i_6] [1] [i_6] |= (((arr_33 [13] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7]) ? (((!((((arr_30 [i_6] [i_6]) ? 120 : var_4)))))) : (((arr_32 [0] [i_7] [6] [9] [i_7] [i_7]) + var_1))));
                                var_23 = ((!((max(((min(-21, (arr_30 [i_7] [i_10])))), (min(var_9, var_12)))))));
                            }
                        }
                    }
                    var_24 = 35622;
                }
            }
        }
    }
    #pragma endscop
}
