/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((min((~var_1), ((min(var_2, (arr_2 [i_0 + 1] [i_0]))))))) >= (max((arr_3 [i_0]), (var_7 >= var_6))));
        var_17 = (min(var_17, (((!((((12368 != 2020192918) << (((arr_1 [i_0 + 1]) + 237508353))))))))));
        arr_5 [i_0] [i_0] = var_0;
        var_18 = (max(-1006466659, 147));
        arr_6 [i_0] [i_0] = ((max(1, (!4949688569756099900))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_19 *= ((((((var_13 ? var_7 : var_11)))) % var_1));
        var_20 -= (min(((max((((!(arr_9 [i_1])))), var_1))), (~var_9)));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_12 [i_2] [i_1] = (min((((arr_9 [i_1 + 3]) ? (arr_7 [i_1]) : var_3)), ((max((arr_7 [i_1]), (arr_7 [i_1]))))));
            var_21 = var_4;
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_22 |= -7178104276405076613;
        arr_16 [i_3] [i_3] = (1006466659 / 1);
    }

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_23 = -8603282509750755068;
        var_24 = var_0;
        arr_19 [i_4] = (arr_18 [i_4]);
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_25 [i_5] [i_5] [i_5] |= ((((((arr_21 [i_5]) / var_16))) ? var_1 : 58986));
            var_25 = (((var_10 && (arr_21 [i_6]))));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_26 = var_12;
                            var_27 = (max(var_27, (((arr_35 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [4]) || (arr_36 [i_7] [i_7 + 1] [16] [11] [i_7] [i_7 + 1] [i_7])))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            arr_39 [i_5] = ((((min(var_13, ((min(6565, var_4)))))) ? (min((var_3 - var_8), var_13)) : ((((var_7 ? var_7 : var_1))))));
            var_28 |= (((arr_30 [7] [i_10] [i_10] [i_5] [i_5] [i_5]) << (((((((arr_21 [i_10]) - (arr_21 [i_5])))) != -2969564143947289385)))));
        }
        var_29 = (min(var_29, (((max((arr_26 [i_5] [i_5] [i_5] [5]), (arr_26 [i_5] [i_5] [i_5] [i_5])))))));
        arr_40 [i_5] = (((-605860901 != -25853) || (((arr_33 [i_5] [i_5] [15] [i_5] [i_5]) != (arr_33 [i_5] [i_5] [i_5] [i_5] [i_5])))));
        var_30 = (((arr_26 [i_5] [i_5] [i_5] [i_5]) ? -1820685485 : (max((min(38250, (arr_32 [i_5] [i_5] [i_5] [10] [i_5]))), var_15))));
    }
    #pragma endscop
}
