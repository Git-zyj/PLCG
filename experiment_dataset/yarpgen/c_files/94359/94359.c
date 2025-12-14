/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((max((((var_1 ? -var_11 : ((var_3 ? var_6 : var_10))))), ((~(min(var_8, var_7)))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
            {
                var_13 = (((arr_2 [i_0]) ? ((-(arr_8 [i_2] [i_1]))) : (((!(arr_3 [i_1] [i_1]))))));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_14 = ((!(arr_4 [i_0])));
                    var_15 += 1;
                }
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    var_16 = (min(var_16, 8));
                    arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = (-(arr_3 [i_0] [i_4 - 2]));
                    arr_16 [i_0] [i_0] = ((~(arr_3 [i_2] [14])));
                }
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
            {
                arr_19 [i_0] = (arr_12 [i_0] [i_0] [i_0] [i_1] [i_0]);
                var_17 ^= (min(((~(arr_7 [i_0] [i_1] [i_5]))), (arr_7 [i_0] [i_1] [i_0])));
            }
            /* vectorizable */
            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                var_18 |= (arr_7 [i_6] [12] [i_6 - 2]);
                var_19 = ((arr_7 [i_6 - 3] [13] [i_6 - 3]) ? (arr_20 [i_6 + 1] [i_6 + 1] [i_6 - 2]) : (arr_20 [i_6 - 2] [i_6] [i_6]));
                var_20 = ((183 ? 1 : 31573));
                arr_22 [i_0] [i_1] [i_0] = (arr_7 [i_1] [i_6 + 1] [i_6 - 1]);
            }
            var_21 = (max(var_21, ((-((((max((arr_18 [i_0] [i_0] [i_0] [6]), (arr_8 [19] [i_1])))) ? (max((arr_14 [i_0] [i_0] [i_0] [i_1] [12]), (arr_9 [i_0] [1] [12] [i_0] [i_0] [10]))) : (arr_2 [i_0])))))));
            arr_23 [i_0] = (((arr_20 [i_1] [5] [i_0]) ? ((-(arr_20 [i_0] [i_0] [i_0]))) : ((max((arr_20 [i_0] [i_0] [3]), (arr_20 [i_0] [i_0] [i_0]))))));
        }
        var_22 = (min((max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))), (arr_3 [i_0] [i_0])));
    }

    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_23 += (!((min((arr_4 [i_7]), (arr_24 [i_7] [i_7])))));

        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            arr_30 [i_7] [i_7] [i_7] = (max((max(532979225, 1)), ((((max((arr_14 [18] [18] [i_8] [18] [17]), (arr_25 [i_7] [i_8])))) ? ((1 ? (-2147483647 - 1) : -115)) : -57))));
            var_24 = (arr_29 [3] [3] [i_7]);
        }
    }
    for (int i_9 = 1; i_9 < 21;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_38 [18] [i_10] = ((~(((!((min((arr_18 [i_10] [i_10] [i_10] [14]), (arr_1 [15])))))))));
            arr_39 [13] [5] [13] = (-(arr_20 [i_10] [i_10] [i_10]));
            arr_40 [i_10] [i_9] [i_9] = (-(max((((arr_34 [i_9] [10]) ? (arr_10 [i_9] [i_9] [i_9] [i_10] [i_10]) : (arr_17 [1] [6]))), ((min((arr_5 [i_9]), (arr_13 [1] [i_10] [i_10])))))));
            var_25 = (min(((~(arr_11 [i_9 + 1] [i_9 - 1] [i_9 - 1]))), ((max((((!(arr_21 [i_9 + 1] [i_9] [14] [16])))), ((-1296334129 ? 71 : 193)))))));
            arr_41 [i_10] [7] [i_9] = (arr_5 [i_10]);
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            arr_46 [i_9] [i_11] = (max((((~(arr_9 [i_9 + 1] [i_9 + 1] [i_11] [i_11] [7] [i_9 - 1])))), (arr_32 [i_11] [i_9 + 1])));
            var_26 = ((~((-(((arr_42 [i_11] [i_9] [i_11]) ? (arr_3 [5] [i_9]) : (arr_9 [i_9] [i_9] [i_11] [i_11] [7] [i_9])))))));
            arr_47 [i_11] [5] = (arr_9 [i_9 + 1] [i_11] [i_11] [12] [i_9] [i_9]);
            var_27 = (max((arr_32 [i_9 - 1] [i_9 - 1]), ((((arr_13 [i_9] [i_9] [i_9]) ? (arr_43 [i_9] [16] [i_11]) : (((arr_9 [1] [1] [i_11] [i_11] [i_11] [i_11]) ? (arr_20 [i_9] [1] [i_11]) : (arr_13 [i_9] [i_9] [i_11]))))))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_28 = ((62 ? (((arr_11 [i_12] [i_9 + 1] [i_9]) ? (arr_48 [20] [20]) : (arr_50 [i_12] [i_12] [i_9 + 1]))) : (arr_7 [1] [i_12] [i_12])));
            arr_51 [i_9] = ((!((!(arr_18 [i_9] [i_9 + 1] [8] [0])))));
            var_29 |= (arr_33 [i_9 + 1]);
            var_30 ^= (((((~(arr_48 [4] [i_12])))) ? (arr_9 [i_9 + 1] [i_9 + 1] [22] [i_9 + 1] [i_9] [i_9]) : ((-(arr_31 [i_9])))));
        }
        var_31 |= (min(((max((arr_50 [i_9] [10] [i_9 - 1]), (arr_21 [i_9] [20] [4] [20])))), (((-(arr_50 [i_9] [i_9 + 1] [i_9]))))));
        var_32 += (min((min(((max((arr_10 [i_9] [19] [i_9] [1] [i_9]), (arr_21 [i_9 - 1] [i_9] [18] [20])))), (arr_17 [i_9 - 1] [i_9 - 1]))), ((-(min((arr_0 [i_9 - 1]), (arr_48 [i_9] [i_9])))))));
    }
    for (int i_13 = 1; i_13 < 21;i_13 += 1) /* same iter space */
    {
        arr_55 [i_13] = (arr_17 [i_13] [i_13]);
        var_33 = (max(((~(max((arr_35 [i_13]), (arr_48 [i_13] [i_13]))))), ((((arr_52 [i_13 - 1]) ? (arr_52 [i_13 + 1]) : (arr_52 [i_13 + 1]))))));
        arr_56 [i_13] [15] = (min((((34 ? 646498719 : 62))), (min((((-(arr_20 [i_13] [12] [i_13])))), (arr_45 [i_13] [i_13])))));
    }
    var_34 = (min((((-var_7 ? var_0 : var_11))), ((~((var_10 ? var_5 : var_10))))));
    #pragma endscop
}
