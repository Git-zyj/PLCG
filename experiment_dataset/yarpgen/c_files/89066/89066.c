/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((var_12 - var_8), ((max(var_5, var_7)))));
    var_18 = (max(var_18, var_12));
    var_19 = var_11;

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_20 = 5937930268797016549;
        var_21 = ((((max((arr_2 [i_0]), (arr_2 [i_0 - 1])))) ? (((arr_2 [i_0 + 1]) / (arr_2 [i_0 + 1]))) : (((arr_2 [i_0 + 2]) / (arr_2 [i_0 - 1])))));
        var_22 = ((((((((arr_2 [i_0]) < (arr_0 [i_0]))) ? (((arr_2 [i_0 + 1]) ? var_13 : (arr_2 [i_0]))) : (((!(arr_1 [i_0] [i_0]))))))) && 743886963));
        arr_3 [i_0] [1] = (arr_1 [i_0] [3]);
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_11 [i_1 - 1] [5] = (((((arr_4 [i_2] [i_1]) - ((-(arr_6 [i_1] [i_2]))))) + var_4));

            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                var_23 -= (arr_15 [i_1] [i_1]);
                arr_16 [i_1] [i_2] [i_1 + 1] [i_1] = ((arr_6 [i_3] [i_2]) ? (min((arr_7 [i_1]), (arr_5 [i_3]))) : (((((arr_4 [i_1] [i_1]) == (((arr_13 [i_3] [i_3] [i_1] [i_1]) ? (arr_8 [i_2] [i_2]) : (arr_15 [i_1 + 1] [i_1 + 1]))))))));
            }
            var_24 = (47950 - -311552412);
        }
        var_25 = (((arr_8 [7] [i_1]) <= (arr_8 [i_1] [6])));
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = (((((min((arr_18 [i_4]), (arr_13 [i_4] [i_4] [i_4] [i_4])))) ? (arr_17 [i_4 + 2]) : (((~(arr_7 [i_4])))))));

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_22 [i_4] = ((((min((arr_21 [5] [5] [5]), (arr_5 [i_5])))) ? ((((arr_18 [i_4 - 1]) != (arr_18 [i_5])))) : (arr_21 [i_4 + 2] [i_5] [i_5])));
            var_26 = (min(var_26, ((max((((min((arr_15 [i_4 + 1] [i_4 + 1]), 1)))), ((((arr_10 [i_4] [i_4 + 2]) ? (arr_13 [4] [i_5] [i_5] [i_5]) : (arr_5 [3])))))))));
        }
        var_27 = (min(var_27, var_15));

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_26 [i_4] [i_4] [i_6] = (arr_18 [i_6]);
            var_28 = (max(var_28, (arr_14 [i_4] [i_4])));
            var_29 |= (arr_14 [i_4 - 1] [i_4 + 1]);
            arr_27 [i_6] |= (47961 ? 9223372036854775807 : 17575);
        }
        for (int i_7 = 1; i_7 < 8;i_7 += 1)
        {
            arr_30 [i_4] [i_4] [i_4] = ((~((~(arr_21 [i_4] [i_7 + 1] [i_4 + 1])))));
            var_30 = (max(var_30, (((17564 ? 1 : 6666)))));
            var_31 |= arr_7 [i_4];
        }
    }
    var_32 |= ((((((var_13 + 2147483647) >> (var_2 - 10074)))) ? (13465386768642328833 + 1) : var_7));
    #pragma endscop
}
