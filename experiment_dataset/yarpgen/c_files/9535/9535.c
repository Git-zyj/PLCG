/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (arr_0 [1]);
        var_14 = var_6;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 += (((arr_8 [1] [1] [1] [i_2 + 1]) ? (((1 ? (arr_2 [5] [9] [5]) : (arr_0 [i_3])))) : var_10));
                                arr_14 [5] [i_0] = -7396444225484227740;
                                var_16 = var_7;
                            }
                        }
                    }
                    var_17 *= var_2;
                }
            }
        }
        var_18 = (arr_9 [i_0] [i_0] [0]);
    }

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_17 [i_5] = (arr_15 [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 22;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_19 = -126;
                            var_20 = (((-((-(arr_18 [i_6] [i_6]))))));
                            var_21 = (max(var_21, (((+(((arr_24 [i_8 - 1] [i_6] [i_7]) / (arr_18 [i_5] [i_8 - 2]))))))));
                            var_22 += (arr_24 [i_8] [16] [i_6]);
                        }
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            var_23 = (((((-66540115 ? (((-7396444225484227740 + 9223372036854775807) << (((-5625271977773264307 + 5625271977773264349) - 40)))) : (((max((arr_16 [10]), (arr_23 [i_6] [0] [i_6] [15])))))))) ? var_0 : (((((min(21, (arr_23 [i_6] [i_6] [i_6] [i_6])))) ? (min(1, var_10)) : (arr_31 [12]))))));
                            arr_33 [21] [21] [i_6] [13] [i_5] = (((((((min(1, -5625271977773264287))) ? var_4 : 31))) ? (arr_26 [i_6]) : ((((!(arr_32 [24] [i_6] [i_8 - 1] [i_10] [1])))))));
                            var_24 = ((!((((arr_25 [i_8 + 3] [9] [i_8 - 2] [i_8 - 1]) / var_7)))));
                            var_25 = arr_25 [i_8 + 2] [3] [14] [16];
                        }
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            arr_36 [i_5] [i_5] [i_7] [22] [13] [i_6] = (-var_2 ? ((min(var_4, (arr_24 [i_5] [18] [7])))) : ((((arr_25 [i_5] [i_5] [i_8 + 1] [i_5]) == ((1 ? (arr_32 [i_11] [i_6] [i_7] [i_6] [17]) : (arr_19 [i_6] [13] [5])))))));
                            arr_37 [i_6] [i_6] [i_7] [i_5] [10] [i_5] = ((~((5625271977773264306 ? (arr_22 [i_8 + 1] [i_8 + 3] [i_8 + 1]) : (arr_22 [i_8 - 1] [i_8 - 2] [i_8 + 3])))));
                            var_26 = (max(var_26, ((((((arr_18 [i_5] [2]) | (min((arr_19 [i_5] [i_7] [20]), (arr_22 [i_5] [i_5] [3]))))) % (((-var_5 % (~var_5)))))))));
                            var_27 = (min((max(((5625271977773264307 ? (arr_20 [3] [i_6]) : (arr_21 [10] [i_7] [7]))), 5625271977773264315)), ((max((max((arr_30 [i_5] [i_6] [i_5] [i_6] [i_7]), 1632823319)), var_2)))));
                            var_28 = var_3;
                        }

                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            var_29 = (-7 ? 1 : (-127 - 1));
                            var_30 = var_6;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
