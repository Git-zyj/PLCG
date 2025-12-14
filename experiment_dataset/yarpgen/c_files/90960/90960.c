/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((-((-(arr_1 [i_2]))))))));
                    arr_7 [7] [11] [0] [11] = var_13;
                    var_15 += ((-(max(var_1, (arr_1 [i_1 - 1])))));
                }
            }
        }
        var_16 = (min(var_16, ((+(((arr_5 [1] [i_0] [i_0] [i_0]) ? var_10 : ((var_9 ? (arr_2 [i_0]) : var_13))))))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_17 = (max((max((arr_9 [i_3] [18]), (((arr_9 [i_3] [i_3]) ? (arr_8 [i_3]) : (arr_8 [i_3]))))), (((!((((arr_9 [i_3] [16]) ? (arr_9 [i_3] [i_3]) : var_2))))))));
        arr_10 [3] |= ((9223372036854775807 ? 1744 : 63792));
        arr_11 [i_3] = (arr_9 [18] [i_3]);
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_18 *= ((+((~(max((arr_12 [i_4]), var_6))))));
        arr_16 [i_4] = ((63798 >> (-29 + 45)));
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((((((873513507 == 22787) >= 3))) == (((-var_13 + 2147483647) >> (var_5 + 116)))));
        var_19 &= (max((((((arr_17 [i_5] [i_5]) + 2147483647)) << ((((873513507 ? 1 : 3421453792)) - 1)))), (((((7900958989367964529 ? 65535 : 1744))) ? var_7 : ((var_12 ? (arr_18 [i_5]) : (arr_18 [i_5])))))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] [i_6] = (arr_20 [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        arr_35 [1] [i_7] [i_9] [i_7] = (((((arr_17 [i_7 - 1] [i_7 + 1]) ? (arr_17 [i_7 - 1] [i_7 - 1]) : (arr_17 [i_7 - 1] [i_7 - 1]))) / var_13));
                        var_20 = ((((min((arr_17 [i_7 - 1] [i_7 + 1]), (arr_17 [i_7 - 1] [i_7 + 1])))) * (var_0 / var_3)));
                    }
                    var_21 = (((arr_30 [i_6] [i_6] [i_8] [i_6]) ? (((arr_29 [i_7] [i_7 + 1] [i_7 - 1]) ? (arr_31 [i_7 - 1] [i_6] [i_7 + 1] [i_7 + 1]) : (arr_31 [8] [i_6] [i_7 - 1] [i_7 + 1]))) : (((var_2 - var_5) ? ((var_8 + (arr_30 [i_7] [i_7] [i_7] [18]))) : (arr_27 [i_7 - 1] [i_7])))));
                }
            }
        }
    }

    for (int i_10 = 3; i_10 < 14;i_10 += 1)
    {
        var_22 = var_5;
        var_23 = (max(var_23, (((+((var_11 - (((arr_38 [8]) ? (arr_18 [i_10]) : var_8)))))))));
    }
    #pragma endscop
}
