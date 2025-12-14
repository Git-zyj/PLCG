/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_12 * ((18326 ? var_6 : var_12))));
    var_19 = (min(var_14, ((((-18326 ? var_11 : 1))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = (((((((!(arr_1 [4] [0]))) ? (((32767 ? (arr_0 [i_0] [i_1]) : 0))) : (max(-1, -5280612979295257678))))) ? ((4096 ? var_1 : ((min((arr_6 [i_0]), var_0))))) : -18325));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] [i_3] [i_2] [i_2] [i_4] [i_2] = ((((((arr_7 [10] [i_3 + 1] [i_0 - 3] [i_0]) ? var_1 : var_16))) ? ((((-18337 >= (arr_0 [i_0] [i_3 - 1]))))) : ((max(1, (min(var_17, var_5)))))));
                                arr_17 [i_4] [i_1] [i_4] = (min((max((arr_6 [i_3 - 2]), (min(var_10, (arr_5 [i_0 - 2] [i_0 - 2]))))), var_5));
                                arr_18 [i_0] [i_3] [i_0] [i_3] [i_0 - 1] = (((arr_11 [i_0 - 2] [i_0] [i_3] [i_2] [i_3 - 1] [i_4]) ? ((~(var_3 - var_7))) : (((min(13095, var_15))))));
                                arr_19 [i_4] [i_3] [i_3] [i_3] [i_1] [i_0] = (((1 || 5825190623712503651) ? (arr_0 [i_2] [3]) : ((min((arr_6 [i_0 + 2]), (arr_6 [i_0 + 2]))))));
                                arr_20 [i_3] [i_0] [i_3] = (((((~((var_9 ? var_0 : 83))))) ? (((~1) ? (((arr_10 [i_0] [i_0] [i_3] [i_0]) * var_16)) : 88)) : ((((90 ? (arr_3 [i_2] [i_2] [i_2]) : (arr_7 [i_0] [i_0 - 4] [i_0] [3]))) * (var_6 < 127)))));
                            }
                        }
                    }
                    arr_21 [i_1] [i_0] = (max((arr_11 [i_0] [i_1] [8] [i_0 + 2] [i_2] [i_0 + 2]), (((~1) ? var_6 : var_9))));
                }
            }
        }
    }
    var_20 = ((((var_14 ? var_8 : 13526))) && var_16);

    for (int i_5 = 4; i_5 < 11;i_5 += 1)
    {
        arr_24 [i_5] = var_14;
        arr_25 [i_5] = ((((!((min(1, 18337))))) ? ((105 ? (((var_2 ? 15 : (-127 - 1)))) : (arr_22 [i_5 - 2] [i_5 - 2]))) : (((var_11 * (((123 == (arr_11 [i_5] [i_5] [4] [4] [i_5] [i_5])))))))));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_28 [i_6] = (min(((((1 <= 31) < -3))), 2));
        arr_29 [i_6] = (((((((min(var_7, 1))) ? -var_4 : var_12))) && ((min(21, (var_13 > 24576))))));
        arr_30 [i_6] = ((((((arr_26 [i_6]) ? (arr_27 [i_6]) : (arr_26 [i_6])))) || var_17));
        arr_31 [i_6] = ((((min(var_4, var_1))) ? ((min((min(-18354, 1)), (arr_27 [i_6])))) : ((((((max(var_0, 0)))) <= (((arr_26 [i_6]) ? var_16 : var_14)))))));
    }
    #pragma endscop
}
