/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = 0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_11, 1));
                                arr_13 [i_0] [i_0] [1] [1] [i_3] [i_4] [i_4] = ((((max((arr_10 [i_0 - 1] [i_4 - 3] [i_2] [i_3] [i_2]), (min(18446726481523507200, (-127 - 1)))))) ? (~2021992015) : (arr_5 [i_0 - 1])));
                                arr_14 [3] [3] [i_0] [i_3] [i_4] = ((-((+((var_13 ? (arr_12 [i_0] [i_0] [i_0] [i_0] [15]) : 96))))));
                                arr_15 [14] [i_0] [i_1] [i_0] [i_3] [i_4] = (((max((((var_7 == (arr_4 [i_0] [i_1])))), (arr_6 [i_0] [i_1] [i_3]))) > (min(var_8, ((~(arr_4 [i_0] [i_2])))))));
                                arr_16 [i_4] [i_4] [i_0] = ((~(((((min((arr_6 [i_0] [i_1] [i_4]), (arr_6 [i_0] [i_2] [1])))) || 1)))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_1] [i_2] = (arr_10 [i_0] [i_1] [i_0] [i_1] [i_2]);
                    arr_18 [i_0] [i_0] [i_0] [i_2] = ((-1292013025528065233 ? (((arr_8 [i_0 + 1] [i_1] [i_2]) % 17592186044411)) : (((((((!(arr_12 [i_0] [i_0 + 1] [15] [i_0] [1]))))) + (((arr_4 [i_0] [i_1]) ^ var_3)))))));
                    arr_19 [i_0] [i_1] [i_1] = (arr_12 [i_0] [i_0] [6] [i_0] [i_0]);
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_23 [i_0] [i_0] [i_5] = (((arr_1 [i_0] [i_5]) > var_9));
            arr_24 [i_0] [i_5] [i_0] = 58491;
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            var_18 = var_2;
            arr_27 [i_0] = ((~(arr_21 [i_0 + 1] [i_6 - 1])));
        }
        var_19 = (((((arr_4 [i_0] [i_0 + 1]) / (var_4 != var_8))) | (~var_0)));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_20 = ((-1292013025528065232 ? (arr_25 [i_7] [i_7]) : var_0));
        var_21 = (((arr_30 [i_7]) && (arr_9 [i_7] [i_7] [i_7] [i_7] [0])));
        var_22 += (~var_13);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    var_23 = (((arr_1 [i_9] [i_9]) / (arr_1 [i_9] [i_8])));
                    arr_36 [i_8] [i_8] [i_8] = (((arr_31 [i_7] [5] [i_7]) ? var_7 : (arr_30 [i_7])));
                    arr_37 [i_7] [i_8] [i_9] = (((arr_1 [i_9] [i_9]) + (arr_28 [i_7])));
                    var_24 = (((((arr_5 [i_9]) + 9223372036854775807)) >> (var_7 - 21988)));
                    var_25 = (arr_29 [i_8]);
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        arr_40 [i_10] [i_10] = (min((arr_38 [i_10]), (max((arr_39 [i_10]), (max((arr_39 [i_10]), (arr_38 [i_10])))))));
        var_26 -= var_4;
    }
    var_27 &= ((((var_16 ? (var_10 & var_7) : (var_6 > var_6))) >= 3079944983669726549));
    var_28 |= -1649244908;
    #pragma endscop
}
