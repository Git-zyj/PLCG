/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max((((var_7 ? var_7 : var_9))), -119);
    var_12 = (((-var_1 && var_8) ? (((!(((-23 ? var_0 : -77)))))) : var_2));
    var_13 *= var_2;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = var_5;

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_14 = ((~(arr_4 [i_1 + 1] [18])));
            var_15 += ((+(((-127 - 1) & var_10))));
            var_16 = ((~(arr_6 [i_1] [i_0] [i_0])));
            var_17 -= var_9;
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_0] [i_2] = var_9;
            var_18 += (min(((((var_3 ? (-127 - 1) : -77)))), ((((min(var_4, var_6))) ? (arr_2 [i_0]) : (((arr_5 [i_2]) / 127))))));

            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                arr_13 [i_2] = (((((((((arr_4 [i_2] [i_2]) * var_1))) ? ((min((arr_8 [i_0] [i_0] [i_3]), 45))) : ((min((-127 - 1), -124)))))) && ((max((arr_12 [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3]), (arr_12 [i_3 + 1] [i_3 + 1] [i_3] [i_3]))))));
                arr_14 [i_0] [i_0] = ((~((~(arr_12 [i_3 + 2] [i_2] [i_3] [i_2])))));
            }
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                var_19 *= ((!((((arr_12 [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4 - 1]) % -77)))));
                var_20 = arr_5 [i_2];
                var_21 = var_3;
                arr_19 [i_2] = (arr_16 [i_0] [i_0] [i_0]);
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                arr_22 [i_0] [i_0] [i_5] = arr_21 [i_5];
                var_22 += arr_10 [i_0] [i_2] [i_5];
                var_23 = (((((arr_1 [i_0] [21]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_5] [i_0]))) > (((!(((-(arr_10 [i_0] [i_2] [i_5])))))))));
                var_24 = 30;
                arr_23 [i_0] [i_2] [i_2] [i_0] = ((!(!-var_0)));
            }
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_25 = (((arr_11 [8] [i_6]) == (arr_11 [i_6] [i_6])));
        var_26 |= ((!(((((-127 - 1) ? 44 : (arr_18 [i_6] [i_6])))))));
        var_27 *= max((((var_9 ? 114 : (arr_1 [i_6] [i_6])))), (!-32));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        arr_31 [i_7] = (((((~(arr_24 [2]))))));
        var_28 = ((-(arr_11 [i_7] [i_7])));
        arr_32 [i_7] [i_7] = -38;
    }
    #pragma endscop
}
