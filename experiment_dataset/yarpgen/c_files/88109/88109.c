/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (((var_5 / 2579314895) * -0));
        var_18 = (((!(arr_0 [i_0] [i_0]))) ? (arr_1 [i_0]) : var_8);
        arr_3 [i_0] |= (~((~(arr_2 [5]))));
    }
    var_19 = 904834206;

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_20 *= ((((var_1 ? 0 : ((0 ? 3840 : (arr_0 [i_1] [i_1])))))) ? (((((arr_1 [i_1]) ? var_7 : (arr_1 [i_1]))) >> (((arr_1 [i_1]) - 1824935258)))) : ((((!1) << (((arr_0 [i_1] [i_1]) - 2116104261))))));
        var_21 = (max(var_21, (((((var_5 ? (arr_1 [i_1]) : ((var_14 / (arr_1 [i_1]))))) < (((arr_1 [i_1]) ? ((var_12 >> (((arr_0 [i_1] [i_1]) - 2116104243)))) : (((min((arr_4 [i_1] [i_1]), (arr_6 [i_1]))))))))))));
        var_22 -= (((((-(arr_2 [i_1])))) ? (min((arr_2 [i_1]), (arr_2 [i_1]))) : (arr_2 [i_1])));
        var_23 = ((((((arr_0 [i_1] [i_1]) ? (((arr_6 [i_1]) << (15786400 - 15786379))) : var_8))) ? ((153 + ((2847449500 << (((arr_2 [i_1]) - 3842121314)))))) : ((((var_6 < ((var_1 ? 3142745591 : (arr_5 [i_1])))))))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_24 = (max(var_24, ((min((((arr_10 [1]) - (arr_0 [i_2 - 1] [i_2]))), (max((arr_0 [i_2 - 1] [i_2]), 3845)))))));
        var_25 = ((var_16 <= (max((arr_8 [i_2]), (var_16 <= var_1)))));
        arr_11 [i_2] = ((!(((((((arr_0 [i_2 - 1] [i_2 - 1]) >> (((arr_2 [i_2]) - 3842121332))))) ? (arr_2 [i_2 - 1]) : (3834 || 1))))));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_23 [i_3] [i_3] [i_6 - 2] = (max(((max(4062950449, var_12))), ((min(var_7, var_12)))));
                        var_26 = (arr_19 [i_3] [i_3]);
                        var_27 = ((62006 + (((arr_12 [i_3]) ? 3871 : 62004))));
                    }
                }
            }
            var_28 += (((((min(61695, var_4)))) / (arr_17 [i_3] [i_3])));
        }
        for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
        {
            var_29 += (min(((!(arr_0 [i_3] [i_7 - 1]))), ((!((max(var_9, (arr_17 [i_3] [i_7]))))))));

            for (int i_8 = 4; i_8 < 15;i_8 += 1)
            {
                var_30 = ((((((arr_25 [i_7 + 1] [i_8 + 1] [i_8]) ? (arr_0 [i_8 - 3] [i_3 - 1]) : var_4))) || var_3));
                var_31 = (((((((arr_10 [i_3]) * (arr_14 [i_7 + 1]))))) | (arr_7 [i_3])));
                var_32 = (max(var_32, ((((((((max(var_9, (arr_16 [i_8] [i_3] [i_3])))) ? (arr_7 [i_8]) : (65532 << var_4)))) || ((((arr_9 [i_8] [i_7 - 1]) ? var_9 : (arr_9 [i_8] [i_7 + 1])))))))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_33 += (var_7 || ((max((~3848), (arr_28 [i_3 - 1] [i_7 - 1] [i_3 - 1] [i_8])))));
                            var_34 = arr_7 [i_3];
                            var_35 -= (((arr_10 [i_8]) ? (((arr_10 [i_8]) << (arr_10 [i_8]))) : (((!(arr_10 [i_8]))))));
                            arr_35 [i_3] [i_9 - 1] [i_3] [i_9] [i_9 - 1] [i_7] = (min((((arr_27 [i_3 - 1] [i_3] [i_3 - 1]) - (arr_10 [i_3]))), (arr_10 [i_3])));
                        }
                    }
                }
                var_36 = var_7;
            }
            var_37 *= (arr_10 [0]);
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 15;i_11 += 1) /* same iter space */
        {
            arr_39 [i_3] = 58747;
            var_38 -= arr_29 [i_3] [1] [i_3] [i_11];
            var_39 *= ((~(arr_31 [i_3] [4] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])));
        }
        var_40 = (max(var_40, 61688));

        for (int i_12 = 2; i_12 < 15;i_12 += 1) /* same iter space */
        {
            arr_44 [i_3] [i_3] [12] = ((((((arr_28 [i_12] [i_12] [i_12 + 1] [i_3]) ? var_8 : (arr_28 [i_12] [i_12] [i_12 - 2] [i_3])))) ? (((arr_28 [i_12] [i_12] [i_12 - 2] [i_3]) ? 1 : (arr_28 [i_12] [8] [i_12 - 2] [i_3]))) : (((arr_28 [1] [1] [i_12 - 2] [i_3]) << (((arr_28 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_3]) - 19900))))));
            var_41 -= ((min((4294967287 + 1956495815), (arr_33 [i_12 - 1] [i_12] [i_12 - 2] [i_3 - 1] [i_12 - 1]))));
        }
        /* vectorizable */
        for (int i_13 = 2; i_13 < 15;i_13 += 1) /* same iter space */
        {
            var_42 = (min(var_42, ((((var_13 - 6775) < 3847)))));
            var_43 -= var_14;
        }
    }
    var_44 *= 6996;
    #pragma endscop
}
