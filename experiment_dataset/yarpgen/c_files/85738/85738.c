/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 -= (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, ((min((max((arr_4 [i_2] [i_2] [i_2] [i_3 + 3]), (arr_6 [i_0] [i_1] [i_2] [i_3 - 1]))), (arr_0 [i_2] [i_3]))))));
                        arr_9 [i_0] [i_3] [i_3] [i_0] = ((!((1 && ((((arr_2 [i_1] [i_0]) ? (arr_8 [i_3]) : (arr_3 [0]))))))));
                        arr_10 [i_0] [0] [i_2] [i_3 + 2] [i_3] = (arr_8 [i_3]);
                        var_14 *= var_10;
                        var_15 += var_1;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_16 *= ((arr_12 [i_4] [i_4]) ? (max((424770548 - 12816), (min(24, (arr_11 [i_4] [i_4]))))) : var_4);
        var_17 += ((((((arr_12 [i_4] [i_4]) - (arr_12 [i_4] [i_4])))) ? (((arr_12 [i_4] [2]) * (arr_12 [i_4] [i_4]))) : ((max((arr_12 [i_4] [i_4]), -10)))));
    }
    for (int i_5 = 2; i_5 < 24;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {

            for (int i_7 = 4; i_7 < 24;i_7 += 1)
            {

                for (int i_8 = 3; i_8 < 21;i_8 += 1)
                {
                    arr_24 [i_5] = ((((arr_19 [i_5] [i_6] [i_7 - 1] [i_8 + 4]) | (arr_20 [i_5 + 1]))));
                    arr_25 [i_5] [i_5] [i_7] [i_8 - 2] &= -886027558;
                    arr_26 [i_5] [i_5] [i_5] [i_8] [22] [i_8] = arr_22 [i_6] [i_5] [i_6] [i_5] [i_5];
                }
                var_18 = ((((min((arr_16 [i_7 - 4] [i_5 + 1]), 3907918543))) ? ((max(-96, 20124))) : (((var_4 && ((((arr_20 [i_5]) - (arr_16 [i_5] [i_6])))))))));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_19 += 26;

                    for (int i_10 = 1; i_10 < 23;i_10 += 1)
                    {
                        var_20 = (min(var_20, (!-21514)));
                        arr_31 [i_5 - 2] [i_6] [i_7] [i_10] = (arr_19 [i_5 - 2] [15] [i_7] [i_5 - 2]);
                        var_21 -= -96;
                    }
                    var_22 -= (((((422758133 - (arr_14 [i_7])))) ? -12543 : 26));
                }
                arr_32 [i_5] [i_6] [i_7] = ((((max((arr_23 [i_5 - 1] [i_7 - 3] [17] [i_5 - 1] [i_7]), (arr_22 [i_5 + 1] [i_7 - 1] [i_7 - 3] [i_7] [i_7 - 1])))) ? (((arr_19 [i_5] [i_6] [i_7 - 3] [i_7 - 4]) ? (916007095 || var_2) : (max((arr_16 [i_7 - 4] [9]), (arr_23 [i_5 - 1] [i_5] [13] [i_6] [i_5 - 1]))))) : (((((~(arr_20 [i_6]))))))));
                var_23 *= (((arr_28 [i_5 - 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1]) && (((max(10, -8547))))));
            }
            var_24 += (arr_14 [i_5 - 1]);
        }
        var_25 &= (~var_9);
    }
    for (int i_11 = 4; i_11 < 20;i_11 += 1)
    {
        arr_36 [i_11] = (max(var_7, (arr_27 [i_11] [i_11] [1] [i_11])));
        arr_37 [i_11 - 4] = (min((arr_33 [i_11] [i_11]), (((((max((arr_34 [i_11]), -86))) ^ -20126)))));
        var_26 ^= (-(((!0) ? var_8 : (min(var_5, -524157303)))));
        arr_38 [i_11] [i_11 - 3] = (((((((arr_34 [i_11]) - -102)) * 4)) < ((min((arr_13 [i_11 - 1]), -7)))));
    }
    var_27 &= var_0;
    var_28 = var_10;
    #pragma endscop
}
