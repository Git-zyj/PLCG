/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (min(((((min(var_7, 2046))) ? var_13 : (((var_13 ? 120 : var_9))))), ((~(var_5 ^ var_1)))));
    var_15 = var_0;
    var_16 &= var_8;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = var_7;
            arr_7 [i_0] [i_1] = ((var_2 * (min((100 * var_13), 28501))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_17 = (max(var_17, (arr_0 [i_0])));
                arr_12 [i_0] [i_0] [10] = (((arr_10 [i_2 + 3] [i_2 - 1] [i_0]) & (arr_10 [i_3] [i_3] [i_2 + 1])));
                var_18 = (min(var_18, (arr_1 [i_0])));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_19 ^= (((var_12 + 2147483647) << (((((((arr_9 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_2]))) + 98)) - 17))));
                arr_17 [i_0] [5] = (arr_3 [10] [i_2 + 1]);
            }
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                arr_20 [i_0] [1] [1] [1] = (((((arr_1 [i_2]) & var_2)) | (arr_4 [i_0] [i_2 + 2] [i_0])));
                var_20 ^= ((((var_7 ^ (arr_16 [0]))) != (arr_19 [i_5] [1] [i_0] [i_0])));
                arr_21 [i_5] [1] [i_0] = -100;
            }
            var_21 = (((arr_15 [i_2 + 3] [i_2 + 1]) ? (arr_15 [i_2 + 2] [i_2 - 1]) : (arr_15 [i_2 - 1] [i_2 + 1])));
            var_22 &= var_12;
        }
        for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
        {
            var_23 = (min(var_8, (((((arr_11 [i_6 + 2] [i_0] [i_0] [i_0]) || (arr_13 [8] [i_0] [i_0] [i_0]))) ? (!-109) : ((var_12 ? var_1 : var_1))))));
            var_24 = 120;
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 8;i_7 += 1) /* same iter space */
        {
            arr_26 [6] = (((arr_24 [i_7 + 2]) ? (arr_19 [i_7] [i_7 - 1] [i_7 - 1] [i_7]) : (((arr_5 [i_7]) % var_10))));
            var_25 = (max(var_25, 231));
        }

        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            var_26 = ((-((-(((arr_19 [10] [7] [i_8] [2]) ? var_5 : -7445))))));
            var_27 -= var_6;
            var_28 = (max(var_28, 47785));
            var_29 ^= ((!(((arr_27 [i_0]) && (arr_27 [i_8])))));
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
        {
            var_30 = ((~(((var_12 | 89) ? (arr_28 [i_9] [i_0]) : ((var_6 ? var_5 : var_5))))));

            /* vectorizable */
            for (int i_10 = 3; i_10 < 9;i_10 += 1)
            {
                var_31 = (((var_5 ? var_1 : (arr_8 [i_10]))));
                arr_35 [i_10] [9] = ((!(arr_0 [i_10 - 1])));
                arr_36 [i_0] = (arr_18 [i_10 + 1] [i_10 + 1] [i_10 + 2]);
            }
            for (int i_11 = 4; i_11 < 10;i_11 += 1)
            {
                var_32 = (min((((-101 ? (arr_22 [i_9] [i_11 - 4] [i_9]) : 31))), (arr_38 [i_0] [i_0] [i_9] [i_11])));
                var_33 = (max(var_33, ((((arr_23 [i_0]) / (min(((((arr_29 [i_0] [i_9] [i_11 + 1]) - (arr_19 [i_11 + 1] [i_9] [i_9] [6])))), (((-32767 - 1) + (arr_9 [i_9]))))))))));
            }
            var_34 ^= var_7;
            arr_39 [i_0] [i_9] [i_9] = (((((arr_37 [i_0] [i_9]) ? (arr_2 [i_0]) : (arr_38 [i_0] [9] [i_0] [i_0]))) * ((((17750 == ((min(148, var_10)))))))));
        }
        for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
        {
            arr_43 [i_12] = (((((arr_33 [i_12] [i_0]) * (arr_33 [i_12] [i_0]))) + var_12));
            var_35 = var_0;
            var_36 = (arr_15 [1] [1]);
            var_37 = (min(var_37, (((((((arr_30 [i_0]) ? (min(267386880, var_10)) : (((arr_8 [i_0]) & var_1))))) ^ (min((var_2 & var_12), (arr_16 [i_0]))))))));
            var_38 = (min(var_38, ((((((((var_0 ^ (arr_18 [i_0] [i_0] [1]))) | (arr_40 [i_12] [i_0])))) ^ (((~(arr_8 [i_0])))))))));
        }
        for (int i_13 = 1; i_13 < 10;i_13 += 1)
        {
            arr_48 [i_0] [3] [i_13 + 1] = (arr_47 [i_13] [i_0] [i_0]);
            var_39 = (min(0, (~4117292014)));
        }
        var_40 *= var_5;
    }
    #pragma endscop
}
