/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = 62760;
        var_17 = (min(var_17, -4922));
        var_18 = ((((!(arr_0 [i_0] [i_0])))));
    }
    var_19 = ((((!(var_9 + var_14))) ? (4919 & 4921) : (max((4923 + -4925), 1))));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_2 [i_1]) + (arr_4 [i_1] [i_1])));
        var_20 = var_6;
        var_21 = (max(var_21, var_3));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] = ((var_6 ? (arr_7 [i_2]) : 4921));
        var_22 += -4911;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            var_23 += (((arr_12 [i_4 + 1] [i_4]) ? var_11 : (arr_8 [i_4 - 1] [i_3 - 1])));
            var_24 += ((126 ? 1 : -36));
            var_25 = 107;
            arr_15 [4] [i_4 - 1] [4] &= ((arr_6 [i_3 - 1] [i_3 - 1]) ? -42 : var_12);
        }
        var_26 = (((-32767 - 1) ? (arr_2 [i_3 - 1]) : (arr_2 [i_3 - 1])));
        var_27 = var_3;
    }

    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        var_28 = (min(var_28, (((((var_15 ? (arr_19 [i_5 - 2]) : 127)) + ((max(-36, (arr_17 [i_5 + 1])))))))));

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_29 = ((+(((arr_23 [i_5] [i_5] [i_5]) - (arr_19 [i_6])))));
            var_30 = (min(var_30, var_5));
            arr_24 [i_6] [i_5] = (~var_4);
            arr_25 [i_5] = (max((-2147483647 - 1), ((var_4 ? var_6 : ((-47 ? (arr_23 [i_5] [i_6] [10]) : 0))))));

            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                var_31 = (min(var_31, ((1265694574637319625 ? 375085511 : ((0 ? 52103 : 6062063604269149610))))));
                arr_30 [i_5 - 2] [9] [i_5 - 2] [i_7] = 17181049499072231991;
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_32 = var_0;
            var_33 = (max(-8244945003510180545, ((var_12 << ((((var_10 ? var_7 : var_4)) + 99))))));
            var_34 = ((var_1 | (+-1)));
            var_35 = ((-((((max(107, (arr_33 [i_5] [i_8] [i_5 + 1])))) << (((var_5 < (arr_22 [i_5] [i_8]))))))));
        }
    }
    for (int i_9 = 2; i_9 < 21;i_9 += 1)
    {
        var_36 = (max(((((-4919 ? var_3 : (arr_35 [i_9]))) & (arr_35 [i_9 + 3]))), (min(1, (((arr_36 [i_9] [i_9]) ? (arr_35 [i_9]) : 4140))))));
        var_37 &= (((((-((var_14 ? var_5 : 65532))))) ? 1 : ((-(arr_35 [i_9 - 2])))));
        var_38 = (((min(-9223372036854775788, ((min(211, 1))))) >= var_11));
        var_39 = ((((((-112 ? -47 : 44)))) + var_2));
    }
    #pragma endscop
}
