/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (min((((max(var_2, var_8)))), var_5));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_12 += ((var_2 ? (arr_0 [i_1]) : (((arr_1 [i_1]) ? (arr_2 [i_1] [i_2]) : (arr_4 [i_1])))));
                arr_7 [i_0] [i_0] [i_0] = (((arr_5 [i_0] [i_1] [i_2] [i_2]) ? (((!(arr_4 [i_0])))) : (arr_2 [i_1] [i_2])));
            }
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                arr_11 [i_0] [i_0] [i_3] = (arr_2 [i_0] [i_0]);
                var_13 = ((-(arr_0 [i_3 + 1])));
                var_14 = (max(var_14, var_1));
            }
            arr_12 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? ((~(((((arr_5 [i_0] [i_0] [i_1] [i_1]) + 2147483647)) >> (((arr_9 [i_0]) - 1)))))) : ((~(((((arr_5 [i_0] [i_0] [i_1] [i_1]) + 2147483647)) >> (((((arr_9 [i_0]) - 1)) - 138))))));
            var_15 = (((arr_6 [i_0] [i_0] [8]) <= (((arr_2 [i_0] [i_0]) ? (arr_8 [i_0] [8] [8]) : var_8))));
        }
        for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_16 = min((min(((var_2 + (arr_21 [i_6] [i_6]))), (arr_16 [i_0] [i_0] [i_0] [i_0]))), (((((max((arr_6 [i_0] [i_0] [i_0]), (arr_21 [i_0] [i_4])))) < ((-(arr_0 [i_0])))))));
                            var_17 = ((var_10 ? ((max((((arr_20 [i_0] [i_0] [i_0] [i_6] [i_0]) ? (arr_20 [i_0] [i_4] [i_5] [i_4] [i_7]) : (arr_0 [i_0]))), (min((arr_3 [i_0] [i_0]), var_8))))) : ((((((arr_9 [i_0]) / var_3))) * (((arr_15 [i_7]) / var_5))))));
                            arr_24 [i_0] [1] [i_5] [i_6] [i_7] [i_0] = arr_2 [i_4] [i_6];
                        }
                    }
                }
            }
            var_18 = (((~(arr_14 [i_4 - 2] [i_0] [i_4 + 1]))));

            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                var_19 = arr_20 [i_0] [i_4 + 1] [i_8] [i_8] [i_8];
                var_20 = (min(((((max((arr_16 [i_0] [1] [i_0] [1]), var_9))) ? (arr_19 [i_0] [i_0] [i_8] [i_0]) : (arr_5 [i_0] [i_0] [i_0] [i_0]))), (((((-(arr_10 [i_0] [i_0] [i_4] [i_8]))) >> ((max((arr_21 [i_0] [i_8]), (arr_17 [i_0] [i_4] [i_0] [i_8])))))))));
            }
            var_21 = ((!(((((max((arr_25 [i_0] [i_0] [i_4] [i_4]), (arr_13 [i_0] [i_4] [i_4])))) ? -var_8 : (arr_1 [i_0]))))));
        }
        for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
        {
            arr_30 [i_0] = (((min((((arr_16 [i_0] [i_9] [i_9] [i_9]) ? (arr_16 [i_0] [i_0] [i_9] [i_9]) : (arr_15 [i_0]))), (((arr_29 [i_0] [i_0] [i_9]) ? var_10 : (arr_10 [i_0] [i_0] [i_9] [i_9]))))) != ((+((var_7 ? (arr_23 [i_0] [i_0] [i_0] [i_9] [i_0]) : (arr_20 [i_0] [i_0] [i_0] [i_9 + 1] [i_0])))))));
            var_22 = (arr_6 [i_0] [i_0] [12]);
            var_23 = (((arr_23 [i_0] [i_9 - 2] [i_9 + 1] [i_0] [i_0]) ? ((min((arr_23 [i_0] [i_0] [i_9 + 1] [i_9] [i_9 + 1]), (arr_23 [i_0] [i_0] [i_9 - 2] [i_9] [i_9 + 1])))) : ((~(arr_23 [i_9] [i_9] [i_9 - 1] [i_9] [i_9])))));
            var_24 = -var_1;
        }
        arr_31 [i_0] = (min((min((arr_23 [i_0] [i_0] [i_0] [i_0] [13]), (((!(arr_15 [i_0])))))), ((((min((arr_4 [i_0]), var_0)) < (((-(arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
    }
    var_25 = max((max((max(var_4, var_2)), var_2)), (max((var_7 - var_2), (max(var_7, var_8)))));
    #pragma endscop
}
