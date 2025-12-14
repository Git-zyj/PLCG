/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (((~var_12) ? var_15 : var_8));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_18 *= (min(((((!(arr_3 [i_2] [i_2]))) ? 63932 : var_9)), -309544921));
                        var_19 = (4294967295 | 26936);
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_10 [i_1] [i_0] = ((var_7 * (-2147483624 != 1338028096)));
                        arr_11 [i_0] [i_0] [13] [8] [i_0] = ((((((arr_0 [i_0 - 2] [i_0 + 1]) != (arr_0 [i_0 - 1] [i_0 + 1])))) >= (arr_3 [i_0] [11])));
                        var_20 = var_5;
                    }
                    var_21 = ((0 ? 0 : 12626188164540799670));

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        var_22 = (((((var_7 ? (arr_6 [i_5] [i_2] [i_1] [i_0]) : 0))) ? (arr_4 [i_0]) : (arr_1 [11])));
                        var_23 = (65317 | -13808);
                        var_24 = (((arr_14 [i_0] [6] [i_0] [i_0]) ? (((1 != (arr_1 [i_5])))) : (!var_15)));
                        var_25 = arr_0 [i_1] [i_5 - 1];
                    }
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        var_26 = (max(var_26, (((((arr_14 [i_0] [i_1] [i_6] [3]) ? (arr_8 [i_1] [i_1]) : (((arr_3 [i_1] [i_1]) ? var_4 : 21730))))))));
                        arr_17 [i_0] [i_1] [i_0] [i_2] [i_6] = ((((2147483624 ? (arr_7 [i_0] [9] [i_2]) : var_2)) == ((((arr_6 [i_0] [i_1] [i_1] [8]) >= (min(var_5, var_8)))))));
                        var_27 = (min(var_27, (((arr_12 [i_0] [i_0 + 2] [i_6 - 2] [14] [i_6] [i_6 - 1]) ? (((arr_12 [i_0] [i_0 + 2] [i_6 + 1] [i_6] [i_6] [i_6 - 1]) ? (arr_12 [i_0] [i_0 - 1] [i_6 + 1] [2] [12] [i_6 + 1]) : var_13)) : ((min(-26922, (arr_12 [i_0 - 2] [i_0 + 1] [i_6 - 1] [i_0 - 2] [i_6] [i_6 - 1]))))))));
                    }
                    var_28 = (max(1229874279, (arr_1 [i_1])));
                    var_29 = ((1 ? (max((arr_8 [i_1] [i_2]), ((var_4 ? 1 : 2178681772)))) : ((max(var_9, var_8)))));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_30 = ((-((((-127 - 1) != 4294967295)))));

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_31 = ((((max((arr_0 [i_7] [i_8]), (arr_0 [i_7] [i_8]))))) ^ (((arr_0 [i_7] [i_8]) ? ((-45 ? 2700 : (arr_16 [i_7] [i_7] [i_7] [i_8]))) : (arr_18 [i_7] [i_8]))));

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_26 [i_7] [i_8] [i_7] = (113987155 < -10040);
                var_32 = (((((!((((arr_14 [i_7] [0] [i_8] [i_9]) ? (arr_1 [i_7]) : (arr_0 [i_7] [i_7]))))))) + (arr_16 [i_7] [i_7] [i_7] [i_7])));
                arr_27 [i_7] [i_8] [i_7] [i_9] = arr_21 [12] [i_7] [i_9];
                arr_28 [i_7] [1] [i_7] = ((((max((max(1953239995, var_14)), (arr_2 [i_7] [i_8] [i_7])))) ? ((255 ? (((arr_16 [i_7] [i_8] [i_7] [i_9]) / (arr_13 [i_9] [i_8] [4]))) : (((arr_18 [i_7] [12]) ? (arr_21 [i_8] [i_7] [i_9]) : var_14)))) : (((((arr_8 [i_7] [i_8]) && (arr_16 [i_7] [i_8] [i_7] [i_9])))))));
            }
            var_33 = (((((var_8 > ((4347 >> (var_0 - 51))))))) & (4294967293 & 1338028086));
            var_34 = (max(var_34, (((((((var_8 ? (arr_16 [i_7] [i_8] [i_8] [i_8]) : var_12)))) * (((((~(arr_5 [i_8]))) < (arr_0 [0] [i_8])))))))));
        }
        var_35 = var_6;
        var_36 = -30886;
    }
    var_37 = (min(-1338028097, -30886));
    var_38 = var_2;
    #pragma endscop
}
