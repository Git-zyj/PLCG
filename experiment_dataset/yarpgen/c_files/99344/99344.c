/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((((((arr_1 [i_0]) <= (arr_0 [i_0])))) << (276534203 - 276534192))) << ((((519692180184413956 ? ((-(arr_1 [i_0]))) : (((arr_2 [i_0] [i_0]) + (arr_2 [i_0] [i_0]))))) + 44))));
        var_20 = (min(var_20, ((max((max((arr_2 [i_0] [i_0]), 4294967295)), ((2543418576 ? 235 : 276534203)))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] |= 255;
        var_21 -= (max((!0), (!-21)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = (((arr_1 [i_2]) + ((31 ? (arr_11 [i_2] [i_2]) : var_4))));
        arr_13 [0] [i_2] = ((29608 << (((arr_6 [i_2] [i_2]) - 2994293133))));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_16 [8] &= ((!(arr_3 [3])));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_20 [i_2] [i_3] [i_4] = (((arr_14 [i_4] [i_3] [i_2]) >> (((arr_1 [i_2]) - 26))));
                var_22 = (((((arr_15 [0]) + 9223372036854775807)) << (((((arr_15 [i_3]) + 1754296892739061202)) - 30))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_23 = (min((((arr_17 [i_5] [i_5] [i_5]) ? -276534203 : 0)), (((((((arr_11 [i_5] [9]) * (arr_14 [i_5] [i_5] [i_5])))) ? (((arr_7 [i_5]) + (arr_21 [i_5]))) : (((!(arr_9 [1])))))))));
        var_24 = (max(var_24, ((((min(((-519692180184413975 | (arr_10 [i_5]))), (((arr_5 [i_5] [i_5]) ? (arr_0 [i_5]) : (arr_21 [i_5]))))) ^ ((((~2147483647) | (min(276534203, var_19))))))))));
        var_25 -= ((-8200187470163245242 & (((max(3, (arr_2 [i_5] [i_5])))))));
        arr_23 [12] [i_5] = (((((arr_6 [i_5] [i_5]) ? 276534203 : (arr_6 [i_5] [i_5]))) != (((((arr_6 [i_5] [i_5]) < (arr_6 [2] [i_5])))))));
        arr_24 [i_5] [i_5] = 0;
    }
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        var_26 = (max(var_26, (((+((max((arr_11 [i_6 - 1] [i_6 + 1]), (max(1, var_17))))))))));
        var_27 = ((var_11 < (((arr_21 [i_6 - 1]) / ((min((arr_27 [i_6 - 1]), 3)))))));
    }
    var_28 = (!var_14);
    var_29 = ((!((min((var_4 + -1370775542), var_4)))));
    var_30 = (min(var_30, var_19));
    #pragma endscop
}
