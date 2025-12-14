/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((((((arr_4 [10] [i_1 - 2]) ? (arr_4 [i_0] [i_1 + 2]) : (arr_4 [i_0] [i_1 - 2]))) / ((min((arr_4 [i_0] [i_1 + 1]), (arr_4 [i_0] [i_1 - 1])))))))));
                var_14 += ((12560 ? 12560 : 12551));
                arr_6 [i_1] = (var_2 > var_1);
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            arr_14 [i_2] [i_3] = (arr_12 [i_3] [i_3]);
            var_15 = (arr_7 [i_3] [i_3]);
            arr_15 [i_2] [i_3] = (max(((((max(12577, -12561))) ? (12561 || 12566) : (12555 ^ -12581))), var_0));
            arr_16 [i_3] [i_3] [i_3] = max(-12569, -12581);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_16 = ((((12559 || (arr_13 [1]))) ? (-12561 | 12581) : var_0));
            var_17 = (max(var_17, ((((12587 ? 12592 : -12561))))));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_18 = (min(var_18, -12553));
            var_19 = var_2;
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_20 -= (((~12560) || 12567));
                            arr_28 [i_6] [i_5] [2] [i_7] [i_8] = (max(((12555 ? -12560 : 12554)), (!-12569)));
                            arr_29 [i_2] [i_5] [i_6] [i_7] [i_8 + 2] [i_6] = var_11;
                        }
                    }
                }
            }
        }
        var_21 = (((-12581 ? -12561 : 12547)));
        var_22 = var_9;
        arr_30 [i_2] [i_2] = (arr_24 [i_2] [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 17;i_9 += 1)
    {
        arr_34 [i_9 + 1] = (arr_11 [i_9 + 3] [i_9 + 3] [i_9 + 3]);
        arr_35 [16] [i_9 + 3] = (12561 ? -12544 : -12582);
        var_23 ^= ((((-12586 < (arr_12 [i_9] [i_9]))) ? (((arr_32 [i_9 - 1]) * 12570)) : var_7));
        var_24 = (-12573 ^ -12560);
    }
    var_25 = (max(var_25, (((!(((var_5 ? (((-12581 ? 12561 : 12581))) : 12560))))))));
    var_26 = ((var_10 ? var_7 : var_0));
    var_27 = (((!-12587) ? ((12577 ? -12585 : -12581)) : (((-12581 + 2147483647) >> (-12582 + 12593)))));
    #pragma endscop
}
