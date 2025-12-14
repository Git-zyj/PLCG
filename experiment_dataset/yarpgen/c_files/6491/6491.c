/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_3 [7] [i_0] = max((((!(arr_0 [i_0])))), var_0);
        arr_4 [i_0 - 2] = (((arr_1 [i_0]) * (arr_1 [i_0])));
        var_16 -= ((~((((min((arr_0 [i_0 - 2]), var_5))) ? (arr_2 [i_0]) : var_1))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_19 [i_4] [i_2] [i_2] [i_1] = ((~(arr_13 [i_2] [i_1])));
                        var_17 -= ((((!(arr_0 [i_1 - 1]))) ? var_9 : (((!(arr_7 [i_4]))))));
                        var_18 = (((arr_5 [i_3]) || (arr_5 [i_3])));
                    }
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_19 = ((-(arr_21 [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_2 + 1] [i_2 + 1])));
                        var_20 ^= arr_7 [0];
                    }

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_21 = (min(var_21, ((max(var_4, (((((arr_12 [i_1] [3] [i_3]) ? var_0 : (arr_14 [i_2] [i_2] [i_2 + 1]))) ^ ((var_8 ? var_7 : (arr_23 [i_6] [i_3] [1] [i_1]))))))))));
                        arr_26 [i_2] [i_2 + 1] [i_3] [i_6] = 86;
                        arr_27 [i_2] = var_11;
                        arr_28 [i_1] [i_1] [i_2] [i_1 + 1] [i_1 - 2] = (arr_8 [i_6]);
                    }
                    arr_29 [i_2] [i_3] = ((!((((var_2 ? 4294967295 : var_11))))));
                    var_22 = (max(var_22, var_14));
                    var_23 = ((((3 ? var_5 : 4294967295))));
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_24 = ((((var_15 ? var_8 : 7053264010686094485)) == (arr_14 [i_1] [i_1] [10])));
                            var_25 ^= (var_9 ? (-27205 || var_13) : -279444378);
                        }
                    }
                }
            }
            arr_40 [i_1] [i_7] = arr_23 [i_1] [5] [i_1] [i_1];
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 8;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    {
                        var_26 = (max(var_26, var_6));
                        var_27 = (arr_46 [i_1 + 1] [i_1 - 2] [i_7 - 1] [i_12]);
                        var_28 -= (((!1) ? ((var_10 ? 1 : (arr_0 [i_1]))) : (((!(arr_44 [i_1]))))));
                    }
                }
            }
        }
        arr_47 [i_1] = (arr_42 [1] [1] [i_1] [8]);
    }
    for (int i_13 = 1; i_13 < 16;i_13 += 1)
    {
        var_29 = (var_9 ? (((arr_50 [i_13 + 2] [i_13 + 2]) ? var_1 : (arr_50 [i_13 + 1] [i_13 + 3]))) : (arr_50 [i_13 + 2] [i_13 + 3]));
        var_30 = var_13;
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 0;i_14 += 1)
    {
        for (int i_15 = 2; i_15 < 8;i_15 += 1)
        {
            {
                var_31 ^= ((!((max(((var_5 ? 4172405268852594839 : (arr_37 [i_14 + 1] [i_15 - 2] [9] [i_14] [i_14]))), (arr_20 [1] [0] [0] [i_15] [i_15 - 1] [i_15]))))));

                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    var_32 = (79 ^ 14);
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 9;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 12;i_18 += 1)
                        {
                            {
                                var_33 = 110;
                                arr_63 [i_14] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_18] [i_15 - 1] = (((((((var_13 ? (arr_23 [i_14] [i_15 + 3] [i_14] [i_17]) : var_13))) || 4294967293)) || var_6));
                            }
                        }
                    }
                }
                arr_64 [i_14 + 1] [4] [i_15] = (!var_6);
            }
        }
    }
    var_34 = var_8;
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 14;i_19 += 1)
    {
        for (int i_20 = 1; i_20 < 13;i_20 += 1)
        {
            {

                /* vectorizable */
                for (int i_21 = 0; i_21 < 14;i_21 += 1)
                {
                    var_35 ^= ((((-(arr_73 [i_19] [i_20] [13] [i_21]))) < var_5));
                    var_36 = (max(var_36, var_13));
                    arr_75 [i_19] [1] [i_20 + 1] [i_19] = (~1);
                }
                for (int i_22 = 0; i_22 < 14;i_22 += 1)
                {
                    var_37 = (max(var_37, (((min((max((arr_70 [i_19]), 156)), var_14))))));
                    var_38 = (!var_2);
                    arr_78 [i_22] [i_22] [i_22] [i_19] = (88 <= 4294967295);
                }
                var_39 = (((((var_3 / (arr_50 [i_20 - 1] [i_20 - 1])))) ? (max(3377071614, ((156 ? (arr_70 [i_20]) : var_3)))) : var_7));
                var_40 = ((((((arr_65 [i_20 + 1] [i_20 + 1]) * var_14))) ? ((min(var_13, (arr_74 [i_20 - 1] [i_20 - 1] [i_20 + 1])))) : ((-((var_2 ? var_6 : (arr_68 [i_20 - 1])))))));
            }
        }
    }
    var_41 = ((((var_15 >= ((min(2013265920, var_14))))) ? var_3 : var_12));
    #pragma endscop
}
