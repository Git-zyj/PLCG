/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_21 = ((((min((arr_1 [i_0]), (arr_0 [i_0])))) ? -11683620494803472147 : -32));
        var_22 = ((!((((arr_0 [i_0]) + (arr_1 [i_0]))))));
        var_23 = (((((var_3 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0])))) & (max(711276696972272687, 1))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            {
                var_24 = (max(var_24, (((((+((1647505525 ? (arr_3 [i_1]) : 2147483647)))) ^ (((!2652969640) ? ((3591568413 ? (arr_1 [i_1]) : (arr_0 [i_2 - 1]))) : 1)))))));
                var_25 = var_14;

                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    var_26 = (((min(-3914501397328540327, 1)) - ((-(max((arr_7 [i_2] [i_2] [i_2]), -1933276172))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_27 = ((-(arr_13 [i_1] [i_2 - 2] [i_3] [i_4] [i_2] [i_2])));
                                var_28 = (max(var_28, ((((min(2081341371, (arr_12 [i_3] [i_3] [i_3 + 2] [i_3 + 2] [i_3] [i_3] [i_3]))) + (min(((16101826199734558860 ? var_11 : -8238536924981901301)), (((1 || (arr_1 [i_1])))))))))));
                                var_29 = ((-(!1779377820)));
                                var_30 |= (arr_0 [i_5]);
                            }
                        }
                    }
                    var_31 = (((((((((arr_2 [i_2] [i_2]) ? 817 : 0))) ? -1933276178 : var_9))) ? (arr_5 [i_1] [i_2] [7]) : ((((-7886602135037733371 <= (arr_9 [i_2] [i_3 + 2])))))));
                    var_32 = ((1 ? (((~(((61921 == (arr_8 [5]))))))) : (((arr_5 [i_1] [i_2 + 1] [i_3 + 1]) ? (arr_5 [i_1] [i_2 - 2] [i_3 - 2]) : (arr_5 [i_1] [i_2 - 1] [i_3 - 1])))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_33 = ((~(arr_12 [i_2 + 1] [i_6] [i_6] [i_6] [i_2 + 1] [i_6] [i_1])));
                    var_34 = 2305843009213693952;
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_35 = (((arr_4 [i_2 - 1] [i_2 + 1]) * ((var_10 ? (((((arr_16 [i_7] [i_2] [i_1]) == var_10)))) : 2684869578987098817))));
                    var_36 = (max(9701710057117442518, 30));
                }
                var_37 = (((max(-75, (arr_14 [i_2] [i_2 + 1] [i_2 - 1]))) > -116));
                var_38 = -4679059783651542219;
            }
        }
    }
    var_39 = var_9;
    #pragma endscop
}
