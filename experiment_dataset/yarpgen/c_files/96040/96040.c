/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_14 = var_3;
        arr_2 [i_0] = 1;
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (((((var_12 + var_12) ? (((arr_0 [i_1]) - (arr_1 [i_1] [i_1]))) : -1)) >> (min((min(var_10, (arr_0 [i_1]))), ((((arr_4 [i_1]) <= var_7)))))));
        arr_6 [i_1] = ((!(((((min((arr_0 [i_1]), (arr_4 [i_1])))) ? -var_11 : ((var_3 ? var_6 : (arr_4 [i_1]))))))));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_15 = (((arr_7 [i_2] [i_2] [i_1]) ? (((arr_8 [i_1 - 1] [i_1 - 1]) ? 13414356907921156725 : 1227996986)) : ((1444383135363319548 ? var_2 : 13414356907921156705))));
            arr_9 [i_1] = 26178;
            var_16 = (((((-(var_6 / 46)))) ^ ((1 ? 13414356907921156725 : -1942569289733510852))));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_12 [i_3] = ((((min((var_13 == var_2), var_11))) ? (min(1883502319, 13414356907921156725)) : ((((arr_11 [i_1 - 2]) ? var_4 : (arr_11 [i_1 - 1]))))));
            arr_13 [i_1] [i_3] = ((((~((5032387165788394908 ? -65 : 2411464977)))) >> ((((~var_9) <= (~2725562195))))));

            for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
            {
                var_17 = (((((2596618986 << (13414356907921156705 - 13414356907921156685)))) ? (arr_0 [i_1 + 1]) : (arr_14 [i_4])));
                arr_16 [i_1] [i_1] [i_4] = (arr_4 [i_1]);
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {
                var_18 = (~106);
                arr_19 [i_5] [i_3] [i_3] [i_1] = (~(arr_4 [i_1 - 2]));

                for (int i_6 = 1; i_6 < 7;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_19 = 5032387165788394899;
                        var_20 = (-9223372036854775807 - 1);
                    }
                    arr_27 [i_1] [i_1] [i_3] [i_5] [i_6] [i_6] = var_9;
                    var_21 = ((arr_23 [i_1] [i_1 - 1] [i_3] [i_6] [i_6 + 2] [i_6]) ? (arr_23 [i_1] [i_1 + 2] [i_3] [i_6] [i_6 - 1] [i_6]) : (arr_23 [i_1] [i_1 - 1] [i_5] [i_6] [i_6 + 4] [i_6]));
                }
                var_22 = ((-(arr_15 [i_5] [i_3] [i_3] [i_1])));
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_33 [i_8] = ((-(((arr_15 [i_1] [i_3] [i_9] [i_1 - 2]) | var_10))));
                        var_23 = ((((max((-127 - 1), 1))) && (((((((!(arr_21 [i_1] [i_3] [i_3] [i_9]))))) | (arr_15 [i_1] [i_3] [i_1] [i_8]))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    {
                        arr_42 [i_12] [i_12] [i_12] [i_1] = 10983212926209306977;
                        arr_43 [i_12] [i_11] [i_1] [i_10] [i_1] [i_12] = (((arr_15 [i_1] [i_1] [i_1] [i_1]) ? (arr_15 [i_1] [i_1 - 2] [i_1] [i_1 + 2]) : var_3));
                        var_24 = (((((109 ? 13414356907921156725 : var_10))) ? -109 : 1));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 9;i_14 += 1)
                {
                    {
                        var_25 = (!var_4);

                        for (int i_15 = 1; i_15 < 7;i_15 += 1)
                        {
                            var_26 = ((-(arr_41 [i_15] [i_13] [i_1] [i_1])));
                            arr_52 [i_1] [i_1] [i_14] [i_1] [i_10] [i_1] = ((-(arr_28 [i_15 - 1] [i_14 - 1])));
                        }
                        arr_53 [i_14] [i_13] [i_10] [i_14] = (((arr_47 [i_14]) ? var_0 : var_5));
                        var_27 = ((arr_32 [i_1] [i_1] [i_1] [i_1] [i_14] [i_1]) ? (arr_41 [i_13] [i_13] [i_10] [i_1]) : (arr_44 [i_1]));
                    }
                }
            }
            var_28 = ((61066 ? -4760622766363539955 : -1989550011294795301));
            arr_54 [i_10] = var_6;
        }
        arr_55 [i_1] = ((min(var_0, (arr_15 [i_1 + 1] [i_1] [i_1] [i_1]))));
    }
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        var_29 = (min((-127 - 1), 107));
        var_30 = ((!((max(1, -22096)))));
    }
    var_31 = (((89 ? ((~(-127 - 1)) : var_5))));
    #pragma endscop
}
