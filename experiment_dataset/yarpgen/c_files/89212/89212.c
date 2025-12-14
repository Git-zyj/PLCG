/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 ^= var_18;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 |= (arr_0 [i_0] [i_0]);
        var_22 |= max((arr_0 [i_0] [i_0]), (((!(arr_1 [12])))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_23 &= (arr_2 [i_1]);
        arr_4 [i_1] = (arr_2 [i_1]);
        var_24 = (max(((min((arr_2 [i_1]), (arr_2 [i_1])))), (((arr_3 [i_1]) ? var_9 : var_16))));
        var_25 = (((-(((!(arr_3 [i_1])))))));
        arr_5 [i_1] [i_1] = ((~((~(arr_3 [10])))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_26 |= ((~((((var_1 + (arr_3 [i_2])))))));

        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            var_27 = (arr_3 [i_3 - 2]);

            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                arr_14 [i_4] [i_3] = ((-(arr_3 [i_4 + 2])));
                arr_15 [i_2] [i_2] [i_3] [4] |= (((arr_12 [i_3] [i_4]) >= (arr_3 [i_2])));
                var_28 = (max(((min((arr_8 [i_3 - 1] [i_4] [i_4 + 3]), (((!(arr_13 [i_2] [14] [i_2] [i_2]))))))), (max((arr_8 [i_2] [i_2] [i_2]), (arr_9 [16])))));
            }
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                arr_24 [i_2] = ((!((max((arr_2 [i_2]), (arr_2 [i_2]))))));
                var_29 = -31198;
            }
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                var_30 |= (min(((max((((var_8 > (arr_17 [i_7 + 1])))), (arr_26 [i_7 + 1] [i_7 + 1] [i_7 + 1])))), ((~(arr_23 [i_5] [10] [i_7 - 2] [i_2])))));
                var_31 ^= ((min((((arr_18 [i_7]) ? (arr_12 [i_2] [i_2]) : 234)), (arr_16 [i_2] [i_2]))));
            }

            for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    var_32 |= ((((var_10 == ((59475 ? 52 : 4294967275)))) ? (((var_13 == var_6) * (max(var_17, (arr_8 [i_2] [i_8] [i_8]))))) : ((((7766949350483237193 && ((min(1570533833, var_7)))))))));
                    arr_34 [19] [3] [i_8] [19] = ((var_2 ^ (max((min((arr_16 [i_2] [i_2]), (arr_33 [i_2] [i_5] [i_8]))), ((~(arr_11 [i_2] [i_2])))))));
                }
                var_33 = var_7;

                for (int i_10 = 2; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    var_34 += 2608558929;
                    var_35 = (arr_19 [17] [17] [i_10 - 1]);
                    arr_38 [i_2] [i_2] [i_8] [i_10] = var_13;
                }
                for (int i_11 = 2; i_11 < 19;i_11 += 1) /* same iter space */
                {
                    var_36 = (max(var_36, (((17997 ? -1570533833 : -1)))));
                    var_37 = ((!(((((arr_27 [7] [i_5] [0] [i_11]) | var_15))))));
                    var_38 = (arr_36 [i_11] [i_11 + 1] [i_8 - 1] [i_11]);
                    var_39 = ((-(arr_11 [10] [i_2])));

                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        arr_47 [i_2] [i_5] [14] [16] [i_11] = var_4;
                        var_40 = ((!(((97 << (3859332549316127576 - 3859332549316127574))))));
                        var_41 = (arr_41 [i_2] [i_5] [i_8] [i_11] [11] [i_12]);
                    }
                }
            }
            for (int i_13 = 1; i_13 < 19;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    var_42 = (min((arr_30 [i_13 + 1] [i_13 - 1] [i_13 + 1]), 97));
                    var_43 |= (min((arr_30 [i_13 - 1] [i_13 + 1] [i_13 + 1]), (((!(arr_18 [i_13 - 1]))))));
                }
                for (int i_15 = 1; i_15 < 17;i_15 += 1)
                {
                    arr_56 [i_13] [18] = (arr_52 [i_2] [7] [i_2] [i_13] [i_13]);
                    arr_57 [i_2] [i_2] [i_13] [i_15] = ((var_6 > (((((arr_7 [i_2] [i_2]) - (arr_36 [i_2] [i_5] [i_13] [i_13]))) - (arr_30 [i_15] [i_13 - 1] [i_2])))));
                    var_44 = var_6;
                    arr_58 [i_13] [i_5] [i_13] [i_13] [i_13] = var_8;
                }
                arr_59 [i_5] &= ((~(arr_23 [i_13] [16] [i_2] [i_2])));
            }
            arr_60 [17] [i_5] |= (((((max((arr_3 [i_5]), (arr_3 [i_5]))))) % (arr_41 [i_5] [i_5] [i_5] [i_5] [2] [i_2])));
            arr_61 [i_5] = ((((arr_51 [i_2] [i_5] [i_5]) & (max(var_11, 38)))));
        }
    }
    var_45 = var_3;
    var_46 += (max(var_5, (((var_7 * (var_6 / var_7))))));
    #pragma endscop
}
