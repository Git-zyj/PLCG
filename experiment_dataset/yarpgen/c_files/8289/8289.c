/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max(var_17, ((max(((var_15 ^ (arr_0 [i_0] [i_0]))), (((var_15 ? (arr_2 [i_0]) : (arr_2 [i_0])))))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_18 = (max(var_18, (arr_5 [i_1] [i_1] [i_0])));
            arr_8 [6] [6] |= ((~(((((arr_6 [0] [0]) / 145)) << ((var_14 ? var_2 : var_6))))));
            var_19 = var_5;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_11 [i_2] [i_2] [i_0] = var_14;
            var_20 = (min(var_20, (((var_15 - (arr_9 [i_0] [i_0] [i_2]))))));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_21 = -7056;

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_18 [1] [1] [i_4] = ((((((max(253952, (arr_6 [i_0] [i_3]))) == (arr_4 [i_0] [i_3] [i_4])))) % var_5));
                var_22 -= ((((((arr_9 [i_0] [i_0] [i_4]) << (((arr_9 [i_4] [i_3] [i_0]) - 17928899444569945366))))) ? (-123 | 1722) : (min((arr_9 [i_0] [i_0] [i_4]), (arr_9 [i_4] [i_3] [i_0])))));

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_23 *= 53638;
                    var_24 *= ((((min(((120 ? -7072 : 80)), (arr_3 [i_0] [i_0])))) ? (max(41963, var_1)) : (((((arr_2 [5]) <= ((10 ? (arr_10 [i_0] [i_0]) : (arr_5 [i_5] [i_3] [i_0])))))))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        var_25 = (((arr_17 [i_0]) ? (arr_17 [i_0]) : (arr_17 [i_3])));
                        var_26 = (!(((3268677297 ? (arr_12 [i_0] [i_3] [i_0]) : var_13))));
                        var_27 = (((arr_19 [i_0] [i_3] [i_3] [i_6 + 1]) ? (arr_19 [i_0] [i_0] [i_0] [i_6 + 1]) : (arr_19 [i_3] [i_3] [i_3] [i_6 + 1])));
                    }
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_28 = (!var_13);
                    var_29 = ((((52713 ? (arr_24 [i_0] [i_3] [i_0] [i_7]) : (arr_4 [i_0] [i_3] [i_0]))) & (((4294967286 ? 1028504117 : 50366)))));
                }
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    arr_29 [i_0] [i_0] [i_3] [i_0] [i_4] [i_8] = ((max(-0, (arr_14 [1] [0] [1]))) | (arr_1 [i_8 - 1]));
                    var_30 = (((arr_2 [i_8]) < ((var_1 ? (65535 << var_7) : (arr_16 [i_3] [i_4] [i_4])))));
                    var_31 ^= max((arr_7 [i_8 + 1]), (min((arr_4 [i_4] [i_3] [i_4]), (arr_21 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_0] [i_0]))));
                    var_32 = (((((1890427362 ? 6 : 1))) && ((max((arr_24 [6] [i_3] [i_8 + 1] [i_8 + 1]), 1)))));
                }
            }
            var_33 = ((-80 ? 1890427362 : 3254121269));
            var_34 = (((arr_9 [i_3] [i_0] [i_0]) < ((max(0, (arr_3 [i_3] [i_0]))))));
            var_35 = (~(((arr_1 [1]) ? 87 : (max(340700681, (arr_26 [i_3] [i_3] [i_0] [i_3]))))));
        }
    }
    for (int i_9 = 2; i_9 < 7;i_9 += 1)
    {
        arr_33 [i_9 + 3] = ((((((var_1 ? (arr_0 [i_9 - 1] [i_9]) : var_0)))) << (((max(1, ((var_11 ? (arr_19 [i_9] [i_9 + 3] [i_9] [i_9]) : 536)))) - 27133))));
        var_36 = (((arr_12 [i_9 + 3] [i_9] [i_9]) ? ((max((arr_12 [i_9 - 1] [i_9 - 1] [i_9]), (arr_12 [i_9 + 3] [i_9] [i_9])))) : ((max(0, 7)))));
    }
    var_37 = ((var_11 ? (((var_10 ? var_2 : 1602540051))) : var_1));
    var_38 = 1;
    var_39 = 1;
    var_40 = ((var_14 | ((max(var_9, var_8)))));
    #pragma endscop
}
