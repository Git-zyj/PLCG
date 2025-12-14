/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_1 [i_0] [i_0]) ? (((arr_2 [i_0]) & -7500)) : (((max(15308, 35316))))))) ? (arr_0 [i_0]) : -8590137268183371900));

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_9 [12] &= (((!(arr_8 [i_0] [i_1] [i_0]))) ? (arr_6 [4] [4] [i_1 + 3]) : ((1 ? (((arr_5 [i_1]) << 1)) : ((((arr_8 [i_0] [i_0] [i_0]) ? 4294967281 : (arr_0 [i_0])))))));

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_14 -= ((!(((arr_8 [i_1 + 3] [i_1 + 2] [i_1 + 2]) == ((((arr_3 [i_0]) ? (arr_6 [12] [i_1 - 1] [12]) : var_0)))))));
                var_15 = (max(var_5, (arr_8 [i_2] [i_1 - 1] [i_0])));
                var_16 = ((!(arr_12 [i_1 + 2] [i_2] [i_2] [i_2])));
            }
            arr_14 [i_0] [i_0] [i_1] = (arr_5 [i_0]);
            arr_15 [i_1] [i_1] = (((((var_7 / (arr_11 [i_0] [i_1 - 1])))) ? 255 : (((!((max((arr_2 [i_0]), var_10))))))));
        }
        var_17 = (max((arr_8 [i_0] [i_0] [i_0]), (((arr_8 [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_0])))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_18 [i_3] [i_3] = ((-((-(arr_16 [i_3])))));
        arr_19 [i_3] = (max((min(((9223372036854775807 >> (((arr_5 [i_3]) - 5060670759771769871)))), (arr_17 [i_3]))), (min(((-116 & (arr_3 [i_3]))), (max(4251879642721695039, 255))))));
        var_18 = (max(((((((arr_5 [i_3]) << (((arr_6 [i_3] [i_3] [i_3]) - 455182455))))) ? (((~(arr_2 [i_3])))) : -5466250139756535133)), ((min((arr_2 [i_3]), (arr_2 [i_3]))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_22 [i_4] = (max((arr_21 [i_4]), (arr_20 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    arr_29 [i_4] [i_5] [i_5] [i_6] = (max(2, 5466250139756535135));
                    arr_30 [i_5] [i_5] [i_5] = (((arr_23 [i_4] [i_4]) / -5466250139756535136));
                    var_19 = ((~(arr_21 [i_4])));
                    arr_31 [i_4] [i_4] [i_4] [i_6] = (arr_28 [i_5]);
                }
            }
        }
        var_20 = 5466250139756535128;
        var_21 &= (min(17137, (min((arr_28 [i_4]), (arr_23 [i_4] [i_4])))));
    }
    var_22 = (((((var_1 ? var_12 : ((var_10 ? 5466250139756535135 : (-127 - 1)))))) ? var_6 : var_6));
    #pragma endscop
}
