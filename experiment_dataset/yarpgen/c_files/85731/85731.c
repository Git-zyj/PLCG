/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (arr_0 [i_1] [9])));
                                var_19 = (max(var_14, (((!(((arr_10 [5] [1] [i_2] [i_2] [i_2] [i_2]) && (arr_10 [i_0] [i_1] [i_3] [i_3] [i_4 + 2] [i_4]))))))));
                                var_20 = (((((-16384 ? 255 : 3326051078))) / (min(274753242051793868, -37))));
                                var_21 -= var_7;
                                var_22 = (max(var_22, ((max(((((min(193, 274753242051793868))) ? ((min(-16, 891794045))) : ((var_5 ? (arr_2 [i_0] [i_1] [10]) : (arr_7 [i_0 + 1] [i_0 + 1] [i_2]))))), (((!(arr_6 [i_0])))))))));
                            }
                        }
                    }
                }
                arr_14 [8] [i_0] [i_0 - 1] = ((((((min((arr_13 [i_0] [i_0] [6] [i_1]), (arr_6 [i_0])))) % (arr_2 [i_1] [1] [i_1]))) > (min((((~(arr_7 [i_0] [i_0] [i_0])))), (arr_10 [i_0] [i_0 + 1] [i_0] [i_0] [i_1] [i_1])))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_23 += var_4;
        var_24 = ((((((arr_2 [i_5] [i_5] [8]) * (arr_0 [i_5] [i_5])))) ? (((~var_16) ? (arr_2 [i_5] [i_5] [i_5]) : ((var_10 ? (arr_4 [i_5] [i_5]) : (arr_11 [i_5] [i_5] [15]))))) : (min((arr_16 [i_5] [i_5]), (arr_2 [6] [i_5] [i_5])))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_25 -= ((((((~128) ? (arr_19 [i_6]) : ((((var_17 < (arr_0 [i_6] [i_6])))))))) ? ((max(((!(arr_5 [i_6] [i_6] [11] [11]))), ((var_15 <= (arr_0 [i_6] [i_6])))))) : var_14));
        arr_22 [1] = var_14;
        arr_23 [i_6] [i_6] = (min((arr_19 [i_6]), (arr_10 [12] [12] [i_6] [i_6] [i_6] [i_6])));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_26 = (((arr_13 [i_7] [i_7] [i_7] [3]) > (arr_13 [i_7] [i_7] [1] [i_7])));
        var_27 = (min(var_27, ((((((((!(arr_20 [i_7] [i_7]))) ? (arr_24 [16]) : (~8222)))) ? (arr_18 [i_7]) : ((-var_12 * (((arr_16 [i_7] [i_7]) ? var_9 : (arr_13 [i_7] [i_7] [i_7] [i_7]))))))))));
        arr_26 [i_7] [i_7] = var_14;
        var_28 = (max((((arr_8 [21] [i_7] [i_7] [18]) | (arr_8 [i_7] [i_7] [i_7] [i_7]))), ((~(arr_8 [i_7] [i_7] [i_7] [i_7])))));
    }
    var_29 = 27685;
    #pragma endscop
}
