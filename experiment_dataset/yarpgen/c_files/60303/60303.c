/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 += var_2;
        arr_2 [1] = ((((min(4294967295, var_7))) ? 255 : (min(-30, 9223372002495037440))));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((36 ? 0 : 23));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_18 [i_1] [i_1] = (((((arr_16 [i_1]) ? 44 : 12666180740592846470))) ? (((-1359845819 || (arr_16 [i_1])))) : (var_0 && 2009718404));
                        arr_19 [4] [i_1] [i_3] [i_4] = (((((arr_5 [i_1]) >= 1319683213)) ? (min(0, 1)) : (((6875444837067420637 + 7) ? 7 : (((arr_0 [7]) ? 18446744073709551598 : var_12))))));

                        for (int i_5 = 1; i_5 < 7;i_5 += 1)
                        {
                            arr_22 [i_1] = (((-(~var_14))));
                            arr_23 [3] [i_4] [1] [i_1] [1] = (((!(arr_9 [i_1 - 1]))) ? 1 : (~65503));
                            arr_24 [i_5 + 2] [i_2] [i_3] [i_4] [i_1] [1] = ((((min(0, (var_6 / 625733637)))) ? ((65535 ? (8925958635837534915 * var_4) : (48 / var_1))) : 2147483647));
                        }
                        var_16 = -12485598;

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_17 = 4373;
                            var_18 = (min(var_18, var_10));
                        }
                    }
                }
            }
        }
        arr_27 [i_1] [4] |= ((((((var_6 ? var_5 : (arr_6 [i_1 + 1] [2])))) ? ((((arr_4 [1]) / (arr_9 [i_1])))) : var_3)));
    }
    var_19 = 2147483647;
    var_20 |= ((-(-1126088299 | 1359845821)));
    #pragma endscop
}
