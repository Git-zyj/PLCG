/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_2 ? (((~var_15) ? var_0 : (min(var_5, var_3)))) : ((((((var_5 ? var_12 : var_15))) ? var_4 : var_17)))));
    var_19 = ((!var_2) & (max(((var_7 >> (var_16 - 10219323920239126155))), var_12)));
    var_20 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (!var_16);
        arr_4 [0] = var_2;
        arr_5 [i_0] = arr_0 [1];

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = ((!(arr_0 [i_0])));
            arr_9 [i_0] [i_0] [3] |= (arr_0 [i_0]);
            arr_10 [i_0] = (arr_0 [2]);
            var_21 = (max(var_21, (arr_1 [i_0])));
        }
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            arr_13 [i_2] = (((((arr_2 [i_0] [i_0]) ? (arr_7 [5] [i_0] [i_0]) : var_12))) ? (((!(arr_2 [i_0] [i_0])))) : (arr_2 [2] [2]));
            arr_14 [i_0] [10] [10] = ((-(arr_0 [i_0])));
            var_22 = ((arr_2 [5] [i_2 - 2]) ? var_13 : (arr_0 [i_2 - 2]));
        }
        for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_23 = (!var_4);
            arr_17 [i_3] = ((-(((arr_6 [i_0] [i_0]) ? var_15 : (arr_11 [i_3])))));
        }
        for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_4] [i_0] = (((arr_15 [i_0] [i_0] [i_0]) ? (((arr_6 [i_0] [i_0]) & var_16)) : (arr_6 [i_4 + 1] [i_0])));
            arr_22 [i_4] = (arr_19 [i_0] [i_0]);
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        arr_26 [i_5] = ((min((arr_23 [i_5]), (max((arr_23 [i_5]), var_6)))));
        arr_27 [9] [i_5] = var_13;
        arr_28 [i_5] [i_5] &= (((var_9 && (arr_23 [i_5]))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        arr_31 [i_6] [i_6] |= (((arr_29 [i_6]) ? (((arr_25 [6]) ? (((((arr_29 [6]) <= (arr_25 [i_6]))))) : var_8)) : ((((arr_23 [i_6]) - (arr_25 [i_6]))))));
        arr_32 [i_6] [1] = (((((arr_23 [i_6]) * (((arr_29 [i_6]) ? (arr_23 [i_6]) : (arr_30 [i_6]))))) / var_15));
        arr_33 [i_6] [i_6] = (arr_30 [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                {
                    arr_40 [10] [i_7] = ((-var_9 ? (((arr_38 [i_7 + 1] [i_8 - 1]) ? (arr_38 [i_7 + 1] [i_8 - 1]) : (arr_38 [i_7 + 1] [i_8 - 1]))) : (arr_38 [i_7 + 1] [i_8 - 1])));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_44 [i_6] [i_7] [i_8] [i_6] = (((arr_39 [i_6] [4] [3] [i_6]) && (!var_11)));
                        arr_45 [4] [4] [i_7] [4] [11] [4] = (arr_24 [i_6] [i_6]);
                        arr_46 [10] [10] [i_8] [i_8] [i_7] = var_7;
                        arr_47 [i_7] [11] = (((arr_43 [i_8 + 1] [i_9] [i_8 + 1] [i_9]) ? (arr_34 [i_8 - 1] [i_8 - 1] [i_8 - 1]) : (arr_34 [i_8 - 1] [i_8 - 1] [i_8 - 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_53 [i_6] [i_6] [i_7] [i_10] [i_6] = (((((((((arr_52 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) << (((arr_34 [0] [0] [0]) - 7653153744167825350))))) ? (arr_39 [4] [4] [0] [0]) : -var_17))) ? ((min((arr_23 [i_6]), (((arr_30 [i_6]) ? (arr_38 [i_7] [i_10]) : (arr_37 [i_8] [i_8])))))) : (max((max((arr_41 [i_6] [i_6] [i_6] [10] [i_7]), (arr_41 [i_7] [i_8] [i_8] [i_7] [i_7]))), ((((arr_51 [i_6] [i_6] [1] [i_6]) != var_5)))))));
                                var_24 ^= ((var_3 ? var_7 : ((var_11 ? var_2 : (arr_39 [i_6] [10] [i_10] [i_11])))));
                                arr_54 [6] [6] [i_6] [6] [i_6] &= ((((~(arr_34 [9] [9] [4]))) <= (((~((max(var_12, (arr_36 [i_6])))))))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            arr_59 [i_6] [i_6] [i_12] = (arr_30 [i_6]);
            var_25 *= var_12;
            arr_60 [i_6] [i_12] = (((((arr_57 [i_6] [i_12]) * var_12)) & (((var_4 | (arr_35 [i_12] [i_12]))))));
            arr_61 [i_6] [i_6] [6] &= (arr_23 [i_12]);
        }
    }
    var_26 = (var_11 ? (min((max(var_2, var_14)), (((var_14 >> (var_14 - 52)))))) : (((var_16 ? var_10 : var_11))));
    #pragma endscop
}
