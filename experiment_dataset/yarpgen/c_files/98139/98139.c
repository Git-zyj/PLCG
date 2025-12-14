/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_1] [i_0] = ((((max(((max((arr_1 [i_0] [i_1]), (arr_2 [i_0 - 4] [7])))), ((var_8 ? 17129127502569962988 : (arr_1 [i_2] [i_1])))))) ? ((((((!(arr_5 [i_2] [i_1] [i_0] [i_0])))) <= (arr_3 [i_2] [i_0 - 4])))) : (var_7 == -3)));
                    arr_7 [i_1] = (arr_1 [i_0] [i_0]);
                    var_11 = var_9;
                }
            }
        }
        var_12 ^= ((max((((23144 && (arr_3 [i_0] [i_0])))), (arr_3 [i_0] [i_0]))));
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        arr_10 [i_3] [i_3] = ((-(max(67108863, var_5))));
        var_13 = (127 | 30747);
    }
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_14 ^= ((~(~var_2)));

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_15 |= (((max(2199023255551, 23126)) / (arr_18 [i_6])));
                        var_16 = -4807564542874485823;
                    }
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            var_17 = 3291711691989189894;
                            arr_30 [i_4] [i_6] [i_6] [i_8 + 1] [i_4 + 1] [i_4] [i_4] = ((((var_7 ? (max((arr_4 [i_6]), (arr_22 [i_4] [i_4]))) : (arr_25 [i_4] [i_5 - 1] [i_6] [i_8 + 1]))) - var_0));
                        }
                        var_18 |= (((var_4 ? var_9 : (((arr_26 [2] [i_6] [i_6]) / 33488896)))));
                        var_19 = 233721542;
                        var_20 = (arr_24 [i_4] [i_5] [i_6] [i_4] [i_8]);
                    }
                    var_21 = (((arr_13 [i_5] [i_4]) ? (arr_3 [5] [5]) : var_9));
                    var_22 = ((~(max(30765, (arr_14 [i_4 + 2])))));
                }
            }
        }
        arr_31 [i_4] = var_7;
        var_23 = (max(var_23, (((~(((~-30747) / (-127 - 1))))))));
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                {
                    var_24 = (min(var_24, (((((((arr_15 [8]) ? (arr_15 [10]) : (arr_15 [8])))) ? (min((arr_15 [8]), var_1)) : (2572529070573850379 == 23112))))));
                    var_25 = (((arr_20 [i_4] [i_10] [i_4] [i_10 - 1]) == ((max(1, -32)))));
                }
            }
        }
        var_26 = ((~((max(19034, (((arr_2 [i_4 - 1] [i_4]) == (arr_24 [3] [i_4] [i_4 + 4] [i_4] [i_4 + 4]))))))));
    }
    for (int i_12 = 2; i_12 < 15;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            var_27 |= (((arr_8 [i_12 - 1] [i_12 - 1]) / var_8));
            var_28 = (arr_38 [i_12] [i_12 - 2] [i_13]);
        }
        for (int i_14 = 1; i_14 < 16;i_14 += 1)
        {
            var_29 = var_3;
            var_30 = ((-(arr_36 [i_12])));
        }
        var_31 = (max(var_31, var_7));
        var_32 = (arr_41 [i_12 + 2] [16] [i_12 + 2]);
    }
    var_33 = var_0;
    #pragma endscop
}
