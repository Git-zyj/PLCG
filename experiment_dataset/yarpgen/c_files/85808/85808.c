/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, ((min((~var_12), var_6)))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_1] = var_5;

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_15 = (max(var_15, (arr_12 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_1 - 1])));
                            arr_14 [i_1] [i_1] = (var_0 ? ((min((arr_3 [i_1 - 1] [i_1]), (arr_3 [i_1 - 1] [i_1])))) : (460444269 >= 18446744073709551607));
                            var_16 = 255;
                        }
                        for (int i_5 = 2; i_5 < 24;i_5 += 1)
                        {
                            arr_17 [i_1] [19] = var_3;
                            arr_18 [i_2] [i_1 - 2] [i_2] [0] [i_5 + 1] &= ((((((arr_5 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 + 1]) ? (arr_5 [i_5 + 1] [i_5] [i_5] [i_5]) : (arr_5 [i_5 + 1] [i_5 - 2] [i_5] [i_5 - 2])))) ? ((0 / (arr_5 [i_5 - 1] [2] [i_5] [i_5 - 1]))) : ((1 ? -460444269 : (arr_5 [i_5 + 1] [i_5] [17] [i_5 + 1])))));
                            var_17 = ((1364474677 ? 2705 : (((15126920908480190847 < (((15686227780333790566 ? 0 : -2278095770143735998))))))));
                        }
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            var_18 = (min(var_18, (arr_8 [i_0] [1] [i_0] [i_2] [i_6])));
                            var_19 = (~(arr_20 [i_0] [i_1] [9] [i_3] [i_6] [i_1] [10]));
                            arr_23 [i_6 - 1] [i_0] [i_3] [i_2] [i_0] [14] |= (arr_2 [i_1 - 2] [i_6 + 3] [i_2]);
                            var_20 = (min(var_20, ((((arr_10 [i_1 - 2] [i_1 + 1] [i_0] [i_6 - 1]) > var_10)))));
                        }
                        var_21 += ((var_1 ? ((min(0, var_5))) : (arr_19 [i_0] [i_0] [12] [i_0])));
                    }
                }
            }
        }
        var_22 = (((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) || (((-1508190822 * 516096) == (arr_19 [i_0] [i_0] [18] [3])))));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 3; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_23 += var_6;
            var_24 = (min(var_24, (((((arr_25 [i_7]) << (((arr_25 [i_7]) - 25780))))))));
        }
        /* vectorizable */
        for (int i_9 = 3; i_9 < 21;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {
                        var_25 = (max(var_25, (((var_1 != (arr_1 [i_7] [i_9 + 2]))))));
                        arr_35 [9] [9] [9] [9] = (((1 + (arr_16 [i_11] [i_10] [i_9] [i_9] [13]))) | (((~(arr_19 [i_10] [i_10] [i_10] [i_10])))));
                    }
                }
            }
            var_26 = (var_10 != 0);
            var_27 = var_4;
            arr_36 [i_7] [i_7] = (arr_4 [i_7] [i_9] [i_7] [i_9]);
            var_28 = (arr_22 [i_7] [i_7]);
        }

        for (int i_12 = 2; i_12 < 23;i_12 += 1)
        {
            arr_41 [i_12] [i_7] [i_7] = (i_12 % 2 == 0) ? (((((((((~2024794710) + 2147483647)) << (((arr_3 [i_12] [i_12]) & var_6))))) ? ((((-2705 + 2147483647) >> (((arr_20 [i_7] [i_7] [i_7] [2] [i_7] [i_12] [i_12 + 2]) - 72))))) : var_13))) : (((((((((~2024794710) + 2147483647)) << (((arr_3 [i_12] [i_12]) & var_6))))) ? ((((-2705 + 2147483647) >> (((((arr_20 [i_7] [i_7] [i_7] [2] [i_7] [i_12] [i_12 + 2]) - 72)) + 201))))) : var_13)));
            var_29 = (!16);
            arr_42 [i_7] &= ((!(((min((arr_29 [i_7] [i_7] [i_7]), var_1)) == (((((arr_24 [1]) > (arr_9 [i_7] [i_12 + 2])))))))));
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 21;i_13 += 1)
        {
            arr_46 [i_13] [i_13] = (!var_2);
            arr_47 [i_7] [i_7] |= ((~((var_7 ? var_13 : var_8))));
            var_30 = ((173291543 != (arr_3 [15] [i_13])));
        }
        var_31 = (max(var_31, ((min((min((!var_6), (var_7 | var_12))), (((((var_4 ? (arr_4 [i_7] [i_7] [i_7] [i_7]) : var_3)) << (((max(5902, 137438953471)) - 137438953457))))))))));
        arr_48 [i_7] = (((((arr_27 [i_7]) < (arr_9 [i_7] [i_7]))) ? (((-0 + ((var_12 ? 176 : (arr_9 [i_7] [i_7])))))) : (((arr_19 [i_7] [i_7] [i_7] [i_7]) ? ((((arr_40 [i_7] [i_7] [i_7]) ? 26568 : var_2))) : (((arr_8 [i_7] [i_7] [i_7] [i_7] [i_7]) ? var_11 : var_10))))));
    }
    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
    {
        arr_52 [i_14] [3] = 0;
        var_32 += ((!(arr_21 [i_14] [i_14] [i_14])));
    }
    for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
    {
        arr_55 [i_15] [i_15] = (((arr_40 [i_15] [i_15] [i_15]) - ((~(arr_38 [i_15] [i_15])))));
        arr_56 [i_15] = ((min((((11 && (arr_49 [i_15])))), 4121675767)));
    }
    var_33 = ((!(max((!var_5), var_4))));
    #pragma endscop
}
