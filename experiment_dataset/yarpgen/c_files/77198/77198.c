/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_1 & (min(var_2, var_15)))));
    var_17 = ((((max(-var_3, var_9))) ? var_0 : ((var_0 ? ((var_10 ? var_9 : var_0)) : -var_10))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_18 = max(((((arr_10 [i_0] [12] [i_2] [i_3]) ? (arr_10 [i_3] [i_0] [i_0] [i_0]) : 0))), ((max(var_12, var_13))));
                        var_19 = 0;
                        var_20 *= ((((min((1356084631 | 2), var_0))) ? -5168330689682314168 : var_14));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_21 = ((((((((~(arr_2 [i_1])))) ? (min(-1356084629, var_4)) : ((((arr_3 [0] [i_2] [i_4]) < var_13)))))) ? (min(((var_11 << (((arr_9 [i_1]) - 66)))), (((1 ? var_3 : 56743))))) : var_2));
                        var_22 += arr_11 [i_0] [0] [i_4] [1] [i_2] [i_4];

                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            var_23 ^= (max(var_7, (((arr_4 [i_0] [10] [i_5 + 1]) ? (arr_4 [i_0] [i_1] [i_0]) : (arr_4 [i_0] [i_0] [i_5 + 1])))));
                            var_24 = (max(var_24, (((((var_14 ? (arr_6 [7] [i_1] [i_2] [i_2]) : 8799)) >= ((((1356084649 == (arr_14 [i_5] [i_4] [i_2] [i_4] [i_0 - 1]))))))))));
                            arr_16 [i_0 - 1] [1] [i_1] [i_2] [i_0 - 1] [i_5 - 1] = (~(max((arr_0 [i_1 - 1] [i_5 - 2]), var_8)));
                            var_25 = ((var_12 * (arr_3 [i_0 - 1] [i_1 - 1] [i_5 + 1])));
                        }
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            var_26 += ((~(~var_5)));
                            arr_19 [i_0 - 1] [i_1 - 1] [i_2] [i_2] [i_1] [i_1 - 1] [i_6 - 2] = max(var_11, ((max(var_12, var_2))));
                            arr_20 [i_1] [i_1] [i_2] [1] [i_6 - 2] [1] = (((arr_9 [i_1]) & var_4));
                            var_27 *= var_1;
                            arr_21 [i_0] [i_1] [i_1] [i_0] [i_0] [i_6] = (min(var_1, (((!(((~(arr_10 [i_0] [i_0] [i_4] [i_6])))))))));
                        }
                    }
                    var_28 -= (arr_8 [i_0] [i_1] [0] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
