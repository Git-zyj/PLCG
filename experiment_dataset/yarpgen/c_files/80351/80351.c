/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [7] = (arr_3 [i_0] [i_0] [i_0]);
            var_20 = (((((var_9 && (arr_3 [i_0] [i_0 + 1] [i_0 + 1])))) ^ 32768));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_21 = (((arr_4 [i_0]) ? ((((arr_4 [i_0]) >= (arr_4 [i_0])))) : (arr_4 [i_0])));
                            var_22 = (((((arr_1 [i_0 + 1] [i_3 + 1]) ? (arr_1 [i_0 + 1] [i_3 + 1]) : var_15)) | var_19));
                            var_23 = 125;
                            var_24 = var_0;
                        }
                    }
                }
            }
            var_25 = ((((((arr_1 [13] [13]) | var_16))) ? ((~((((arr_4 [i_0]) > var_19))))) : ((min(((min((arr_8 [i_0] [10] [i_1] [1]), var_12))), (arr_9 [i_0] [i_0] [i_1]))))));
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_15 [i_0] = ((max(((min(27543, var_3))), ((-126 ? 9223372036854775807 : (arr_7 [i_0] [i_0]))))));
            var_26 = 0;
            var_27 += ((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]), (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? var_13 : var_19)))));
        }
        var_28 = 3462993530;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_29 *= (((~3462993530) ? (((!(arr_10 [i_6] [13] [13] [i_6] [13])))) : (arr_14 [i_6] [i_6])));
        var_30 = ((27 ? ((-(arr_13 [i_6] [i_6] [i_6]))) : (((var_1 >> (-1 + 7))))));
        var_31 = (((17354952590293612397 | 132) & (((1 ? -126 : -26593)))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    var_32 += (!-126);
                    var_33 *= (((arr_14 [i_8] [i_7]) == 0));
                    var_34 *= ((!(((var_0 ? var_10 : 1916749309)))));
                    var_35 = (6272159725185073828 * 0);
                }
            }
        }
        var_36 = (min(var_36, (arr_0 [i_7])));
    }
    var_37 += var_3;
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 14;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                var_38 *= ((~(max((max(var_12, var_16)), (arr_7 [i_11] [i_10 - 2])))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_39 = (max(var_39, ((((((var_1 | (((arr_0 [13]) << 0))))) ? (((16136 + var_12) >> (((((arr_37 [i_10 + 1] [7] [7] [i_12] [i_12] [7]) ? var_5 : var_8)) - 2670592676561677095)))) : ((((132 % (arr_18 [i_10]))) | 85)))))));
                            var_40 = (max(var_40, (((((27543 / var_14) ? (((-(arr_34 [i_11] [i_12])))) : (0 / var_16)))))));
                            var_41 *= ((-(((((arr_9 [i_10] [i_12] [i_10]) + 2147483647)) << (((((arr_9 [i_13] [i_12] [16]) + 14062)) - 31))))));
                            var_42 = (max(13, 17592185782272));
                        }
                    }
                }
                var_43 = (min(((~(arr_28 [i_10] [i_10]))), (arr_28 [13] [1])));
                var_44 = 0;
            }
        }
    }
    var_45 = (min(var_45, 0));
    var_46 = (((var_17 ? (var_19 | var_2) : 1)));
    #pragma endscop
}
