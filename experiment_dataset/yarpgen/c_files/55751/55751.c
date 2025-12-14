/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] [i_1 + 2] = 26353;
            var_11 = ((!(((-11885 + (((arr_1 [i_1]) ? (arr_2 [i_0]) : var_10)))))));
            var_12 |= (arr_0 [i_1 + 2] [i_1 + 2]);
            var_13 &= ((4982965817256150492 ? ((1 ? 4294967295 : (max(0, var_10)))) : 14932814205530999292));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_14 = (((arr_6 [i_0]) ? (arr_9 [i_0] [i_0] [i_2] [6]) : (arr_9 [17] [i_0] [i_0] [i_0])));

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_15 = (min(var_15, ((((arr_3 [i_4] [i_2]) ? (arr_0 [i_0] [i_2]) : (((arr_1 [i_0]) ? var_3 : (arr_7 [i_0] [i_2] [i_0]))))))));
                    var_16 = ((74 - (arr_10 [i_0] [i_2] [i_4])));
                    var_17 |= ((13246 ? ((var_7 ? 3448863440 : var_5)) : var_8));
                    var_18 = ((~(1 / var_4)));
                }
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                arr_18 [i_0] = (1653770965 <= -1951338130854709990);
                var_19 -= (((arr_11 [i_5] [6] [6] [i_0]) / (arr_11 [i_0] [8] [i_2] [i_5])));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_20 = (max(var_20, 232207069));
                var_21 -= var_5;
                var_22 = (((arr_6 [i_0]) * var_10));
            }
            arr_22 [i_0] = (4294967295 & var_10);
        }
        var_23 ^= (((min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))) ? (max((((var_6 ? (arr_9 [i_0] [19] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0])))), (arr_17 [i_0] [i_0] [i_0] [i_0]))) : ((((!(arr_20 [i_0] [i_0] [i_0])))))));
    }
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        arr_35 [i_8] [1] [1] [i_7] = (arr_30 [i_7]);
                        arr_36 [i_7] [i_7] [i_8] [i_7] [1] [i_10] = var_5;

                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            var_24 = (((((arr_24 [i_7 + 2]) ? (arr_24 [i_7 - 1]) : var_2)) - ((1 ? (arr_24 [i_7 + 2]) : (arr_24 [i_7 - 1])))));
                            arr_39 [i_7] [i_7] [i_9] [i_9] [i_9] [i_9] = ((-(((max((arr_5 [i_8]), var_0))))));
                            var_25 += ((!(!var_8)));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_26 = ((((min(((min((arr_0 [i_7] [3]), 15))), ((-1813 ? 240 : (arr_9 [4] [i_8] [i_10] [i_8])))))) ? ((var_10 ? ((-(arr_40 [i_7] [13] [i_7] [i_10] [i_10] [13]))) : -3)) : var_1));
                            var_27 = (arr_5 [i_7 + 3]);
                        }
                        arr_43 [i_7] = (((((-var_6 / ((var_9 ? (arr_42 [i_7] [i_10] [i_9] [i_10] [i_7 + 2]) : var_5))))) ? 127 : ((((var_8 ? var_1 : (arr_14 [i_7] [i_7])))))));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_28 = (-((1950094973 ? 83 : 13692357)));

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_29 = (max((((arr_27 [i_7]) ? ((min(var_7, 2138033746))) : (arr_46 [i_7] [i_8] [i_13] [i_13] [i_13] [i_7]))), (((((min(var_7, var_3))) ? (arr_38 [i_13] [1] [i_13] [i_9] [i_8] [i_8] [i_7]) : (max(var_1, var_3)))))));
                            var_30 = (((arr_42 [i_7] [i_8] [i_9] [i_13] [i_14]) ? (min((arr_5 [i_7 - 1]), var_10)) : (arr_29 [i_7] [i_7] [i_9] [i_7])));
                            var_31 ^= ((3990061693 ? (((arr_41 [i_7] [i_7 - 3] [i_7 - 2] [i_7 - 3] [i_7 + 3]) ? (~var_9) : (arr_47 [i_7 - 3] [i_7] [i_9] [i_8] [i_7 - 1] [i_13]))) : (((((var_7 ? var_4 : 178)))))));
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                        {
                            var_32 = (max(var_32, var_2));
                            arr_51 [i_7] [i_7] [i_7] [i_13] [i_15] = ((~(max((arr_23 [i_7 + 3]), (arr_6 [i_7])))));
                            arr_52 [i_7] [0] [i_9] [i_9] [11] = 6821239885258311295;
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                        {
                            var_33 = ((var_1 - (max((max((arr_13 [i_7 + 3] [i_8] [i_7]), (arr_9 [i_7 + 1] [i_8] [i_9] [i_13]))), (!var_0)))));
                            var_34 ^= ((((((((var_9 ? var_2 : (arr_53 [i_7] [i_8] [i_9] [i_13] [i_13])))) ? var_0 : var_7))) ? 27869 : (arr_24 [i_7 - 3])));
                        }
                    }
                    var_35 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
