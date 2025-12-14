/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 |= var_3;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        var_17 = (-9223372036854775807 - 1);
                        arr_11 [i_0] [i_1] [22] [13] [i_4] [i_2 + 1] = arr_1 [12];
                        arr_12 [i_0] [i_4] [0] [i_3] [5] = (((arr_8 [i_0] [i_1] [i_1] [i_2 + 1] [i_2]) ? ((0 ? (-9223372036854775807 - 1) : 4030140336)) : 264826959));
                        arr_13 [1] [i_4] [i_2] [i_3] [i_4 + 2] = var_3;
                    }
                    var_18 = (arr_7 [0] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1]);
                    arr_14 [12] [i_3] [15] = arr_2 [i_2 + 1];
                    var_19 = (min(var_19, (((-(arr_8 [i_1] [15] [i_2] [i_2 - 1] [i_3]))))));
                }
                arr_15 [i_0] [i_0] [i_2 + 1] [i_1] = (((arr_8 [i_0] [1] [1] [i_0] [i_0]) != var_7));
            }
            for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
            {
                var_20 = (max(var_20, var_7));
                var_21 ^= var_12;
                arr_18 [i_0] &= (!((((arr_6 [i_0]) ? var_6 : var_14))));
                arr_19 [i_5] = var_13;
            }
            for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
            {
                var_22 = (max(var_22, (((((-(max((arr_8 [19] [i_1] [i_1] [i_6] [5]), (arr_22 [i_0] [9] [19] [i_6]))))) * (arr_3 [i_0] [i_1] [i_0]))))));
                arr_24 [i_6] [i_1] [i_0] = (min(1, (arr_1 [i_1])));
                var_23 *= ((((var_5 && (-9223372036854775807 - 1))) && ((!(arr_16 [i_1] [i_6 + 2] [i_0])))));
            }
            /* vectorizable */
            for (int i_7 = 2; i_7 < 22;i_7 += 1) /* same iter space */
            {
                arr_28 [i_7] = var_12;
                arr_29 [i_0] [i_7] = (arr_3 [i_7 - 2] [i_7 - 2] [i_7]);
            }
            var_24 = (((((((4150 ? (-2147483647 - 1) : 248))) ? (min((arr_4 [10] [10] [10] [i_1]), (arr_22 [i_0] [i_0] [i_1] [i_1]))) : (4030140350 ^ var_13))) / ((max((var_9 & var_5), (((arr_8 [i_0] [i_0] [i_0] [i_0] [i_1]) + (arr_27 [i_0] [i_1] [i_0]))))))));
        }
        var_25 ^= (min(((2701878765 ? 1 : (arr_1 [i_0]))), (((arr_17 [10] [i_0] [i_0]) ? ((((arr_9 [i_0] [i_0] [i_0] [i_0]) <= (arr_3 [i_0] [12] [12])))) : ((min((arr_3 [i_0] [i_0] [i_0]), var_3)))))));
    }
    for (int i_8 = 2; i_8 < 17;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_34 [i_9] [i_9] = 7142;
            arr_35 [i_9] = (arr_33 [i_9] [i_9]);
            arr_36 [i_9] [i_9] = var_13;
            arr_37 [i_9] [i_9] = ((~(arr_23 [i_8 - 1] [i_8 + 2] [i_8 - 2] [i_8 - 1])));
        }
        var_26 = (((var_6 != -61426) ? var_10 : var_6));
        var_27 = (arr_4 [i_8 + 2] [i_8] [i_8 + 2] [i_8 + 2]);
        var_28 = (min(var_28, (((((min(1, (arr_33 [14] [8])))) ? ((((arr_3 [i_8 + 2] [i_8 - 1] [i_8]) ? (arr_9 [i_8] [i_8 + 2] [i_8] [i_8]) : var_2))) : (min((arr_33 [i_8] [0]), (arr_33 [i_8] [0]))))))));
    }
    for (int i_10 = 1; i_10 < 9;i_10 += 1)
    {
        var_29 = (max(1593088520, var_3));
        var_30 = (min((9223372036854775801 < -5576139412710134246), (((arr_38 [i_10] [i_10]) + (((arr_3 [i_10] [i_10] [1]) + 61426))))));
    }
    #pragma endscop
}
