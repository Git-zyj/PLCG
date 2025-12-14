/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    for (int i_0 = 1; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = var_15;
        var_17 = var_3;
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_18 += 7171843829229477994;
        arr_6 [8] [8] &= (min((((arr_4 [20]) * (((!(arr_0 [10])))))), (arr_0 [24])));
        var_19 = (min(var_19, (((+((max((arr_1 [i_1 + 1]), (((var_11 > (arr_5 [2]))))))))))));
    }
    for (int i_2 = 1; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (arr_7 [i_2] [i_2]);
        var_20 += (((((-(arr_8 [8])))) && (~var_10)));
        arr_10 [i_2] = var_11;
    }
    for (int i_3 = 1; i_3 < 24;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 24;i_6 += 1)
                {
                    {
                        var_21 = (min(var_21, (((((-(arr_7 [i_3 + 1] [8])))) ? var_12 : (arr_22 [1] [i_3] [i_3] [i_3])))));

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_22 ^= ((((-(arr_20 [i_3 - 1] [0] [4] [0]))) < (min(-var_4, (arr_18 [i_6 + 1])))));
                            arr_26 [i_3] [i_3] [10] [i_3] [i_7] [i_3] |= (((arr_4 [18]) ? ((((arr_4 [4]) >= (arr_4 [22])))) : ((-(arr_4 [0])))));
                            var_23 = ((4294967295 << ((10 ? 19 : (arr_14 [i_7])))));
                        }
                        arr_27 [4] [8] [i_4] [8] [i_3 - 1] &= (!4);
                        arr_28 [i_4] [i_6 - 2] [i_5] [i_4] = (arr_25 [i_3] [i_4] [i_5] [i_4] [i_6]);
                    }
                }
            }
        }

        for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_24 = ((-29992 < ((~(arr_20 [i_3] [24] [24] [i_3])))));
            arr_32 [i_3] = var_3;
            var_25 = (min(var_25, (arr_15 [i_8 + 1] [i_3] [i_3 - 1])));
            arr_33 [i_3] = -var_7;
        }
        for (int i_9 = 1; i_9 < 21;i_9 += 1) /* same iter space */
        {
            var_26 = (max((arr_15 [i_3] [i_3] [i_3]), (((var_5 < ((var_6 ? var_6 : (arr_29 [i_3]))))))));
            arr_37 [4] [i_9] [4] |= (arr_31 [i_9 + 3] [i_3 - 1]);
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_41 [i_3] |= (arr_38 [i_3 - 1] [i_3 - 1]);
            arr_42 [i_10] [i_10] [i_3 + 1] &= arr_38 [i_3 + 1] [i_3];
            arr_43 [i_3] [i_10] = (((arr_0 [i_10]) && var_1));
            var_27 = (((var_5 / (arr_36 [i_3] [i_3]))));
        }
        arr_44 [i_3] [i_3] = ((~(((((((arr_13 [6]) * var_5))) && ((min(var_9, var_7))))))));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            {
                                arr_55 [i_3] [i_11] [8] [i_13] [i_11] = ((((((arr_51 [i_13] [i_11] [i_13] [i_11] [i_3 + 1]) | (arr_0 [i_11])))) ? ((-(arr_30 [i_3] [i_3]))) : var_5));
                                arr_56 [i_11] [i_12] [i_13] = (arr_25 [i_3] [i_3] [i_3] [i_11] [i_3]);
                                arr_57 [i_3] [i_11] [i_12] [i_13] [i_14] = ((~((((-(arr_51 [i_3] [i_11] [i_11] [i_13] [i_14])))))));
                            }
                        }
                    }
                    arr_58 [i_3] [i_11] [i_3] [i_3] = (~-19);
                    var_28 = (arr_54 [i_3] [i_3] [i_3] [i_3] [i_3]);
                    var_29 = (arr_40 [i_11 + 1] [i_3] [i_3 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
