/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((var_12 ? ((var_10 ? var_9 : var_3)) : var_9))));
    var_21 = var_8;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 247;
        arr_5 [i_0] [i_0] &= ((((arr_3 [i_0]) != (((arr_3 [i_0]) ? var_14 : 75)))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            arr_8 [i_1] = 5;
            arr_9 [i_0] [i_1] = ((5 ? (((arr_1 [i_1]) & 250)) : (((!((max(3316518337, var_2))))))));
            arr_10 [i_1] [i_1] = ((~((max(254, 127)))));

            /* vectorizable */
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                arr_15 [i_1] [i_1 + 4] [i_1] = (1 != (arr_7 [i_1 + 1] [i_2 - 1] [i_2 - 2]));
                arr_16 [i_0] [i_1] = var_8;
            }
            arr_17 [i_1] [i_1 + 3] [i_1] = -28;
        }

        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            arr_21 [i_0] [0] [i_3] = (((((-(arr_12 [i_3 + 2] [i_3] [i_0] [i_3])))) ? (max((max(9223372036854775807, (arr_20 [i_0] [i_0] [i_0]))), -0)) : (arr_11 [i_0] [i_0] [i_3] [0])));
            arr_22 [i_0] [i_3] = ((2 || (~5418363328228599689)));
            arr_23 [i_3] [i_3] = (-1062486427 != 21);
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 4; i_5 < 21;i_5 += 1)
            {
                arr_28 [i_4] [i_5] &= min((min(4938300511078374542, 4938300511078374542)), (arr_12 [i_0] [15] [i_5] [i_0]));
                arr_29 [i_5] [i_0] [i_0] [i_0] = (max((~3), var_4));
                arr_30 [i_0] = ((-(((min((arr_14 [i_5] [i_5]), 255)) * (((124 * (arr_18 [i_4] [i_4] [i_5]))))))));

                for (int i_6 = 3; i_6 < 21;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_36 [i_0] [i_4] [i_5 - 1] [i_6 - 1] [i_6] [i_7] = (239 + 251);
                        arr_37 [i_0] [i_6 + 1] [i_6] [i_6] [i_4] [i_0] = (+-254);
                        arr_38 [i_5 - 3] [i_4] [i_5] [i_6] [i_6] = 254;
                    }

                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        arr_41 [i_6] = (((arr_20 [i_5 - 2] [i_8 + 2] [i_8]) || ((((33 ? 947062671 : -7089))))));
                        arr_42 [i_0] [i_5] [i_0] [i_4] [i_0] [i_6] [6] = var_3;
                    }
                    for (int i_9 = 2; i_9 < 21;i_9 += 1)
                    {
                        arr_47 [i_6] = (((1 ? (((var_13 <= (arr_6 [i_6])))) : 7677)));
                        arr_48 [i_0] [i_6] [i_0] = 0;
                    }
                    arr_49 [i_5] = 9;
                    arr_50 [i_6] [i_4] = ((((64 >> (((arr_25 [i_4]) + 136)))) << ((((max(var_6, (arr_25 [i_4])))) - 130))));
                    arr_51 [i_6] [i_6] = ((-(((4294967295 < (arr_46 [i_0] [i_4] [i_0] [9] [i_6 - 2]))))));
                }
            }
            arr_52 [i_0] = (((((arr_14 [6] [i_4]) ? (arr_19 [i_0] [4]) : (arr_43 [i_0] [i_4] [i_4] [i_4] [20]))) >> ((((61 ? (arr_11 [i_4] [i_0] [i_0] [i_0]) : (arr_11 [6] [i_4] [i_4] [i_4]))) - 9507826903674265353))));
        }
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 13;i_10 += 1)
    {
        arr_55 [0] [0] = ((-38 ? -65 : (arr_45 [2] [i_10 + 2] [1] [i_10 + 1] [i_10 + 3] [i_10 - 1])));
        arr_56 [i_10 - 2] = -var_9;
    }
    #pragma endscop
}
