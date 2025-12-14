/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_10 % var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_12 = ((((var_2 + (max((arr_1 [i_2]), 0)))) + (arr_1 [i_0])));
                    var_13 = 1;

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_14 = (min(var_14, (((((((max((arr_7 [9] [7] [9] [i_3] [1] [7]), (arr_5 [i_0] [i_0] [i_0] [i_0]))) > (((max(45440, (arr_0 [i_1])))))))) * ((-(arr_3 [i_1]))))))));
                        var_15 = 0;
                        arr_9 [i_1] [i_1] [i_1] [i_3] = (max((min((~var_7), (arr_8 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 + 1]))), (((~(arr_8 [i_0] [i_0] [i_1] [i_0] [i_3]))))));
                    }
                    var_16 = (max(var_16, 1));
                    arr_10 [i_2] [i_1] [i_1] [i_0] = (arr_4 [i_0] [i_1] [i_1]);
                }
            }
        }
    }

    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 19;i_6 += 1)
            {
                {
                    var_17 = (max((arr_16 [i_4 + 2] [i_4 - 1] [i_6 - 1]), (((arr_16 [i_4 - 1] [i_4 + 1] [i_6 - 1]) | (arr_16 [i_4 - 1] [i_4 + 1] [i_6 - 3])))));
                    arr_19 [i_6] [i_6] [i_6] = ((((((arr_12 [i_6 + 1] [i_6 - 2]) == (arr_12 [i_6 - 1] [i_6 - 3])))) & (((((-(arr_18 [i_6 - 3] [i_5] [i_4 + 1]))) == (arr_13 [i_6 - 1] [7] [i_6]))))));

                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        var_18 = (((((((arr_15 [i_4]) ? (arr_15 [i_7]) : (arr_12 [i_4] [i_4 + 2]))))) ? (!-79) : (arr_11 [13] [15])));
                        arr_23 [i_6] = (((arr_12 [i_6] [i_6]) > (((~((926443909 ? 40 : 4036641281)))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_19 ^= (arr_22 [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4 + 1] [i_4 - 2]);
                        var_20 = (min(var_20, (((-((~(arr_16 [i_8] [i_5] [i_5]))))))));
                        arr_26 [1] [1] [i_6] = (arr_11 [i_6 - 2] [i_4 - 2]);
                        var_21 ^= ((-(arr_20 [i_6 - 1] [i_6] [i_6] [18])));
                    }
                }
            }
        }
        arr_27 [i_4] [i_4] = (((~(arr_24 [i_4 + 2] [i_4 + 3] [i_4 + 1] [i_4]))));
    }
    for (int i_9 = 2; i_9 < 11;i_9 += 1)
    {
        arr_31 [i_9] = ((-(((arr_12 [i_9] [i_9]) ? 167 : -22776))));
        arr_32 [i_9] = (!((max((arr_21 [i_9 + 1]), (arr_24 [i_9 - 2] [i_9 - 2] [i_9 + 1] [i_9 - 1])))));

        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            arr_36 [i_9] [i_10] [i_10] = (((!(arr_25 [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9] [2] [i_9]))));
            arr_37 [i_9] [i_9] = (((!(arr_16 [i_9 - 2] [i_9 + 1] [i_9 + 1]))));
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            var_22 = (!((max(((((arr_38 [2] [i_11]) && (arr_28 [i_9])))), (arr_38 [1] [1])))));
            arr_42 [i_9 - 1] [i_11] = ((((((!(32754 > 0))))) + (min(var_9, (arr_29 [i_9 + 1])))));
            var_23 = (!-3792885326);
            arr_43 [i_9] = (((~42283) == var_2));
        }
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        arr_46 [i_12] [i_12] = (arr_44 [i_12]);
        var_24 *= (min((-17640 || -17209), (arr_45 [i_12] [i_12])));
        arr_47 [i_12] = var_4;
    }

    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        arr_50 [i_13] = (2581294664 - var_9);
        var_25 = (((((((min(1, -6421174014608941733))) && 8191))) ^ (arr_44 [i_13])));
    }
    #pragma endscop
}
