/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (var_10 > var_11);
        arr_3 [i_0] [i_0] = 2814088733;

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_18 = (2814088746 == -942388724);
            var_19 = (min(var_19, ((((arr_6 [20] [i_0] [i_1 + 2]) <= (arr_0 [i_1 - 1]))))));
            var_20 = (max(var_20, ((((((var_10 ^ (arr_6 [18] [i_1] [i_1])))) ? (((arr_0 [i_0]) / var_5)) : (arr_4 [i_1 + 1] [16] [i_1 + 2]))))));
            arr_7 [i_0] = (i_0 % 2 == 0) ? (((((((-(arr_6 [i_0] [i_0] [i_1]))) + 2147483647)) << (((arr_4 [i_1] [i_0] [i_0]) - 64))))) : (((((((-(arr_6 [i_0] [i_0] [i_1]))) + 2147483647)) << (((((((arr_4 [i_1] [i_0] [i_0]) - 64)) + 176)) - 16)))));
        }
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_0] = ((-(arr_9 [i_0] [i_2] [i_2 + 1])));
            var_21 = (arr_9 [i_0] [i_0] [i_2]);
            var_22 = (((arr_5 [i_0]) / (arr_5 [i_2 - 1])));
            var_23 = (max(var_23, (((~(arr_6 [i_2] [i_2] [i_2]))))));
        }
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            arr_13 [i_0] [i_0] = (arr_6 [i_0] [i_3 - 1] [i_0]);
            var_24 = var_1;
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        arr_18 [i_4] = var_2;
        var_25 |= (((arr_14 [i_4 - 2] [i_4 + 1]) != var_15));
        arr_19 [i_4] |= (arr_14 [i_4] [i_4]);
        var_26 = (min(var_26, (arr_17 [i_4 - 1] [i_4 + 2])));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {

        for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        var_27 = ((((26083 || 91) / 2814088733)));
                        arr_31 [i_5] [i_7] [i_6] [i_5] = (((min((arr_20 [i_7 - 3] [i_6 + 2]), (arr_20 [i_7 - 1] [i_6 + 1])))) ? (((arr_20 [i_7] [i_6 - 2]) | (arr_9 [i_7 + 1] [i_7] [i_6 - 2]))) : var_13);
                    }
                }
            }
            var_28 = (var_12 >= var_1);
        }
        /* vectorizable */
        for (int i_9 = 3; i_9 < 9;i_9 += 1) /* same iter space */
        {
            var_29 |= (((((arr_16 [i_9]) != 112))) != (((arr_15 [i_5] [i_9]) ? (arr_21 [2]) : -17)));
            var_30 = ((((var_6 ? 24045 : var_8)) % (arr_33 [i_5] [i_5] [i_5])));
        }
        var_31 = (min(var_31, (((-(max(((min((arr_33 [i_5] [6] [i_5]), (arr_22 [i_5] [i_5])))), (arr_22 [i_5] [i_5]))))))));
    }
    var_32 = ((var_13 >= ((var_15 >> (-16744 + 16744)))));
    #pragma endscop
}
