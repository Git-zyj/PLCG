/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = (~var_2);
            var_18 = (min(var_18, (arr_3 [i_0] [i_1] [i_1])));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_9 [i_0] [i_2] [i_3] = (((arr_8 [i_0] [12] [i_3]) ? 0 : ((17494 ? 1020 : -17503))));
                arr_10 [i_0] = ((var_10 ? (((((((arr_3 [0] [8] [i_3]) * 1))) ? (1 / 1) : var_2))) : ((((var_11 ? var_2 : var_6)) * 1))));
                arr_11 [1] [i_2] = ((((max(-698173711, 31643))) ? (((~(arr_1 [i_2])))) : (arr_8 [i_2] [i_2] [i_3])));
                arr_12 [i_3] = var_2;
                arr_13 [i_0] [i_0] [i_0] [i_3] = var_12;
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] [3] [i_4] = (-1466962468 ? 17494 : 85);
                    var_19 -= (arr_0 [i_0]);
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_2] [i_6] [i_6] [i_0] = ((~(min(var_0, (~var_2)))));
                    arr_22 [i_0] [i_0] [i_4] [i_6] = (((arr_15 [i_0] [i_2] [i_0] [i_6]) ^ (max((arr_15 [i_0] [i_2] [i_4] [11]), var_0))));
                }
                var_20 += 105;

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    arr_27 [i_0] [i_0] [i_4] [i_7] [i_2] = (arr_0 [i_0]);
                    var_21 = ((((arr_7 [i_0] [i_2] [i_4] [i_7]) >= (17499 && 16383))));

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_22 = ((arr_23 [i_7] [i_2] [i_4]) ? ((1006632960 - (arr_1 [i_7]))) : var_10);
                        var_23 = (max(var_23, var_1));
                        var_24 = (((((var_0 ? (arr_14 [3]) : 1693))) ? ((((var_4 || (arr_23 [14] [i_7] [i_8]))))) : ((var_9 ? 1 : var_12))));
                    }
                    var_25 = (max(var_25, var_5));
                }
                var_26 = (var_15 ? (var_3 == var_11) : (((var_13 & var_15) ? var_7 : (arr_6 [i_0] [i_2] [i_0]))));
                var_27 = (((arr_25 [i_0] [i_2] [i_2] [12] [i_4] [i_0]) + 108));
            }
            var_28 = ((+((((5 << (((arr_28 [i_0] [7] [i_0] [5] [i_2]) - 25796)))) + -1))));
            arr_30 [i_0] [i_2] [i_2] = (arr_1 [i_0]);
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_29 -= (arr_31 [i_0]);
            var_30 = (max(var_30, ((((arr_19 [i_0] [10] [i_0]) | (arr_19 [i_0] [i_9] [i_0]))))));
            var_31 = (max(var_31, ((min(325554784, (((((min((arr_26 [i_0] [i_0] [i_9] [i_9]), (arr_28 [i_0] [13] [8] [13] [i_9])))) <= (var_1 % var_7)))))))));
            var_32 = (((arr_23 [i_0] [13] [i_9]) ? (-32767 - 1) : -5804));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_33 = (min(var_33, ((((((((arr_2 [i_10]) / (arr_31 [13])))) ? ((~(arr_8 [i_0] [i_10] [i_10]))) : ((var_1 ? (arr_33 [2] [i_10]) : (arr_26 [7] [i_0] [i_10] [i_10])))))))));
            var_34 = ((max((arr_14 [i_0]), (arr_14 [i_10]))));
        }
        arr_35 [i_0] [i_0] = max((((arr_4 [i_0] [i_0]) - 1414940631)), ((((arr_4 [i_0] [i_0]) && (arr_4 [i_0] [i_0])))));
    }
    var_35 = max(-16385, var_3);
    var_36 = (((((var_3 ? var_3 : var_1)) ^ var_9)) << (((var_6 != (max(var_13, var_14))))));
    #pragma endscop
}
