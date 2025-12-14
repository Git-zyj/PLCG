/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_2;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] |= (((((arr_0 [1]) ? ((-(arr_0 [16]))) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))) & ((((((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))) || var_7))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1] = ((((((!(arr_5 [i_1 - 1] [i_1 - 2] [i_1]))))) - ((~(arr_5 [i_1 + 1] [i_1 + 2] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] = (max((arr_0 [i_0]), ((max((!var_5), -71)))));
                                arr_17 [i_1] [i_1] = var_3;
                                var_11 = 7;
                            }
                        }
                    }
                }
            }
        }
        var_12 -= ((var_2 & (((((arr_6 [4]) / var_3))))));
        var_13 = max((((arr_5 [2] [i_0] [12]) ? -7454564284290643662 : (((arr_1 [i_0]) - (arr_1 [i_0]))))), (arr_11 [18] [18]));
    }
    for (int i_5 = 4; i_5 < 9;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = (arr_6 [i_5]);
        var_14 = (max(var_14, ((min((arr_11 [i_5 - 4] [i_5]), ((min(var_4, (arr_3 [i_5] [i_5])))))))));
        arr_22 [i_5] &= ((+((((max((arr_9 [5] [i_5] [i_5]), -83))) ? ((~(arr_0 [i_5]))) : ((-(arr_0 [14])))))));
        arr_23 [i_5 + 2] [i_5] = var_4;
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_26 [i_6] &= (max((((~1) ? ((((240 <= (arr_9 [i_6] [i_6] [i_6]))))) : (((arr_11 [16] [16]) ? (arr_0 [i_6]) : var_6)))), (((((((arr_11 [i_6] [14]) == 0)))) & 576460717943685120))));
        arr_27 [i_6] [i_6] = ((((!((((arr_24 [i_6]) ? var_2 : (arr_0 [i_6])))))) ? (9 < -1400161411) : var_0));
    }
    var_15 = (max(var_15, var_5));
    var_16 = (max(var_16, -var_9));
    var_17 = var_6;
    #pragma endscop
}
