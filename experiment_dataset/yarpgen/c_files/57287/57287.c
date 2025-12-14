/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (!var_4)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [9] &= (arr_3 [i_0]);
        arr_5 [10] &= (31049 - 129);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_19 = (max(31049, 31055));
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_20 |= ((((-(max(-2018184828, -693821145)))) / 13988));
                        arr_19 [i_1] [i_2 + 2] [i_2] [i_3] [i_3] [i_4] = (!-61138);
                        arr_20 [i_1] [i_2] [i_2] [i_1 + 2] [i_4] [12] = max((min(4395, (~255))), ((~(max((arr_14 [11]), (arr_8 [i_2] [i_3] [i_4]))))));
                        arr_21 [9] [i_2] [12] [i_3] [i_3] = (max((((arr_14 [i_2 - 1]) ? (arr_14 [i_2 - 2]) : (arr_12 [i_2 - 4] [i_1 + 2] [i_3] [i_4]))), (~-1)));
                    }
                }
            }
        }
        var_21 ^= ((~((((!(arr_9 [i_1] [6] [i_1])))))));
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        var_22 = (((min(((61132 | (arr_22 [i_5] [i_5]))), (((arr_23 [i_5]) ? (arr_22 [0] [10]) : (arr_23 [i_5]))))) >> (10891029313195667904 - 10891029313195667900)));
        var_23 = (((arr_22 [i_5] [i_5 + 2]) ? (((arr_23 [i_5 + 2]) >> (((arr_23 [i_5 + 2]) - 25808)))) : (((arr_22 [i_5 - 1] [i_5 + 1]) ? (arr_23 [i_5 - 1]) : (arr_22 [i_5 + 1] [i_5])))));
        arr_24 [i_5] [i_5] = arr_22 [7] [i_5];
        var_24 &= (min(-31070, (((((-31850 ? (arr_23 [i_5]) : 448))) ? 673966124945922195 : ((-1 ? (arr_23 [i_5]) : (arr_23 [i_5 - 1])))))));
    }
    var_25 |= ((((((var_7 > (max(262143, -247784847945226878)))))) > (min((max((-9223372036854775807 - 1), 7565)), ((min(167, 202)))))));
    #pragma endscop
}
