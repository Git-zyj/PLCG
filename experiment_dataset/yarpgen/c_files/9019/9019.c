/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 *= (min(((((((((arr_5 [i_1]) && 0)))) <= (arr_4 [i_1 + 1])))), (+-107)));
                arr_6 [i_0] [i_1 - 1] = ((((((arr_3 [i_1 + 3] [7] [i_1 + 4]) ? (arr_3 [i_1 + 2] [i_1] [i_1 + 3]) : (arr_3 [i_1 + 3] [i_1 + 1] [i_1 + 1])))) ? (max(var_2, (arr_3 [i_1 + 1] [i_1] [i_1 + 2]))) : (((31 / (arr_3 [i_1 + 3] [1] [i_1 + 2]))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_19 = (((((arr_1 [i_0]) ? (arr_8 [i_0] [1] [i_0]) : (((arr_5 [i_2]) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0] [5])))))) ? (((var_9 >= var_16) ? (arr_2 [5] [10]) : ((((arr_3 [i_2] [i_2] [i_2]) <= (arr_4 [4])))))) : (((arr_2 [i_1 + 3] [i_1 + 3]) ? (arr_2 [i_1 + 3] [i_1 + 2]) : (arr_2 [i_1 - 1] [i_1 - 1]))));
                    var_20 = ((((((arr_9 [i_1 - 1] [6]) ? (arr_9 [i_1 - 1] [i_1]) : -8667136063727867279))) ? (arr_4 [i_0]) : (((1128391964 ? ((((var_13 > (arr_1 [i_1]))))) : (arr_9 [i_0] [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    var_21 = (min((min((arr_4 [i_1 + 2]), var_9)), (arr_3 [i_1 + 2] [i_1 + 2] [i_1 + 3])));

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_22 = ((!(arr_17 [8] [i_3])));
                        var_23 = ((((((((arr_14 [i_3]) == var_7)) ? (((-8978367321675779730 + 9223372036854775807) >> (((arr_4 [i_0]) - 12369848559274037948)))) : 135))) ? ((min(var_17, (arr_3 [i_0] [i_1] [i_1 - 1])))) : (((arr_10 [i_3] [5] [i_0]) ? ((var_11 ^ (arr_17 [i_0] [i_1]))) : (arr_7 [8] [i_3] [i_3])))));
                        var_24 = (((((!(((-(arr_1 [i_3])))))))) != (((~1821933662) ^ (arr_17 [i_1 + 1] [i_1 + 1]))));
                    }
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        arr_21 [i_3] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_3] = (!768174608);
                        arr_22 [i_3] = ((((((arr_20 [i_1 + 2] [i_5 + 3] [i_5 + 3] [0]) ? (arr_20 [i_1 + 1] [i_5 + 1] [i_3] [i_5 - 1]) : (arr_20 [i_1 + 4] [i_5 + 3] [i_3] [i_3])))) ? ((((arr_5 [i_1 + 3]) * 65531))) : 268435455));
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    var_25 -= var_3;
                    var_26 = ((6044615958494181725 ? (((arr_1 [i_0]) ? 105 : var_5)) : (arr_15 [i_0] [i_1 - 1] [i_0] [i_1 + 2] [i_1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            {

                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_34 [i_7] [i_9] [i_7] [i_7] = (~(arr_3 [i_8] [11] [i_8 + 2]));
                    var_27 = (((arr_25 [i_8 + 2]) ? (arr_25 [i_8 + 2]) : (arr_25 [i_8 - 1])));
                }
                var_28 = ((max(((1 * (arr_4 [i_7]))), (arr_12 [i_8 + 2] [i_8 + 2]))) * (max(8071836120932826648, (min(var_6, (arr_31 [i_7] [i_8 - 1] [1] [i_8]))))));
                var_29 = (min((arr_14 [i_7]), ((((arr_18 [i_8] [i_8] [i_8] [7] [i_8 + 2] [i_8]) || (arr_18 [i_8] [12] [i_8 - 1] [6] [i_8 + 2] [i_8]))))));
            }
        }
    }
    var_30 = var_17;
    var_31 = var_4;
    #pragma endscop
}
