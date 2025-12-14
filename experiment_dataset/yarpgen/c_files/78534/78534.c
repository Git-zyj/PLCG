/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_15 = (min((~var_9), (min((arr_0 [i_0 - 2] [i_0 - 2]), (arr_1 [i_0 - 3])))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 = (~-4051358253008035490);
            var_17 = ((-((var_2 ? ((4051358253008035490 ? (arr_0 [i_0] [i_0]) : var_5)) : ((((var_2 == (arr_3 [i_1] [i_0] [i_1])))))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_18 = (arr_5 [i_2 + 1] [i_2] [16]);
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_19 ^= (((~(arr_4 [i_0] [i_0] [i_0]))));
                        arr_13 [i_0] [i_2] [1] [i_3] [i_4] = ((~((var_8 ? var_10 : (arr_11 [i_0] [i_2] [i_3])))));
                        arr_14 [i_2] [i_3] [8] [i_2] [i_2] = ((!(arr_12 [i_0] [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0])));

                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            var_20 = ((var_2 ? 4051358253008035490 : (arr_17 [i_0 + 2] [i_0 + 2])));
                            var_21 &= ((~((215 ? var_3 : 1))));
                            arr_19 [i_2] [i_2] [i_3] [i_5] [i_5] [i_5] = (((arr_16 [i_0 - 2] [i_2 + 3] [i_3 - 1] [13] [i_5 + 2]) ? -4051358253008035490 : var_2));
                        }
                        var_22 = ((var_9 ? 1 : (((-(arr_5 [i_0] [i_2] [i_4]))))));
                    }
                }
            }
            var_23 = (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]);
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            var_24 = (((~(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
            var_25 = var_10;

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_26 ^= (min(((min((arr_26 [i_6 - 1] [i_6] [i_6]), var_9))), (arr_1 [i_0])));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_27 = (((max((max(4051358253008035490, var_3)), (((!(arr_21 [i_9] [i_6])))))) & -var_2));
                            var_28 = ((-((var_11 ? var_0 : (arr_22 [i_0 + 2] [i_6 - 1] [i_8 - 1])))));
                            var_29 = (max(var_29, ((min(-199, ((((max(var_1, -8338258))) ? (max(var_3, (arr_10 [i_0] [i_0] [4] [4] [4] [4]))) : (arr_22 [i_0] [i_6] [i_0]))))))));
                            var_30 = max(((((arr_26 [i_8 - 1] [i_8 - 1] [i_8 - 1]) ? (arr_26 [i_8 - 1] [i_8 - 1] [i_8 - 1]) : 166))), ((var_6 ? var_6 : 49173)));
                            arr_31 [i_0] [i_6] [i_7] [18] [i_9] [i_6] = ((((min((max(var_10, -4051358253008035465)), (~var_10)))) ? (((~(arr_25 [i_0] [i_0] [i_0 - 3])))) : var_0));
                        }
                    }
                }
            }
        }
        var_31 = (min(var_31, ((max(var_6, ((var_2 && (arr_22 [i_0] [i_0 - 1] [i_0 - 1]))))))));
    }

    for (int i_10 = 1; i_10 < 12;i_10 += 1)
    {
        var_32 = (arr_17 [i_10] [i_10]);
        var_33 = (min(var_33, ((min((((0 >= 16348) ? (arr_6 [i_10] [i_10]) : (arr_15 [1] [9] [1] [9] [i_10]))), ((36086 ? 4051358253008035490 : (arr_7 [i_10 + 1]))))))));
        arr_34 [1] &= ((((~(arr_10 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 - 1]))) < (arr_33 [i_10 - 1])));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_34 = (max(var_34, ((((arr_3 [i_11] [i_11] [i_11]) ? 1 : (arr_3 [i_11] [i_11] [5]))))));
        var_35 &= (((var_2 ? var_4 : (arr_24 [i_11] [i_11] [i_11] [i_11]))));

        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            var_36 = (arr_10 [1] [1] [1] [10] [i_12] [i_12]);
            arr_39 [i_11] [9] [i_11] = ((52 <= (arr_30 [i_11] [i_11] [i_11] [i_11] [11] [i_11])));
        }
    }
    var_37 *= ((var_10 << (var_7 - 166)));
    #pragma endscop
}
