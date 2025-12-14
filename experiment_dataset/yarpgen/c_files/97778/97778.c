/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_4;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 *= (((((((max(var_9, 3511523777))) ? (min(var_4, var_14)) : (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1 + 2])))) ? (((var_16 ? (var_11 || var_14) : (var_16 >= var_1)))) : ((1 ? 1 : 3511523777))));
                                var_20 |= ((((max(127, (var_3 && var_2)))) && (!var_4)));
                                var_21 = (max((min(var_3, -var_18)), (((var_8 ? var_3 : (arr_9 [i_0] [i_2] [i_2]))))));
                                var_22 = ((((max(var_16, 4849412891367687895))) | var_3));
                                var_23 = (min(var_23, (((var_2 ^ (((!(arr_13 [i_4] [i_2] [i_2 - 1] [i_0])))))))));
                            }
                        }
                    }
                    arr_18 [i_0] [10] [i_2] [i_2] = ((((var_3 ? ((min((arr_8 [i_2]), (arr_12 [i_1 + 2])))) : ((var_7 ? var_6 : var_13)))) << (12927 - 12893)));
                    arr_19 [i_2] = (((((arr_14 [i_2] [i_1 - 1] [i_2] [i_2 - 1] [i_2]) ? var_5 : -4849412891367687895))) ? ((max((arr_14 [i_2] [i_1] [i_2 + 2] [i_2 + 1] [i_1 + 1]), (arr_14 [i_2] [i_1] [i_2] [i_2 + 1] [i_1 - 4])))) : (~65529));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_24 = var_2;
                                arr_26 [i_0] [i_1] [i_0] [i_2] = var_16;
                                arr_27 [i_0] [1] [i_2] [3] [i_5] = max((arr_11 [i_2] [i_1] [i_2]), var_6);
                                var_25 += var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_26 = (((((var_10 ? (max(var_4, 1)) : (arr_29 [i_7])))) ? ((-(arr_29 [i_7]))) : (min((arr_30 [i_7] [i_7]), (((arr_28 [i_7]) ? 18 : 90))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 16;i_9 += 1)
            {
                {
                    var_27 = ((-var_18 | ((((!(((7 & (arr_31 [i_7] [i_9 - 1]))))))))));
                    var_28 |= (min((var_7 < var_1), ((-(arr_34 [i_9 + 1] [i_9 - 1] [i_9 + 1])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 16;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            arr_46 [i_13] [i_11] [i_11] = (+((min((arr_40 [i_10] [i_10] [i_11]), (arr_40 [i_11] [16] [i_11])))));
                            var_29 += ((var_2 | (((((var_6 ^ (arr_30 [i_7] [i_10])))) ? (((max(0, 41055)))) : (arr_41 [i_12] [i_12 - 1] [i_12] [i_12])))));
                            var_30 += (((((((min(53, (arr_31 [i_7] [i_7])))) ? var_1 : (var_1 >= var_17)))) ? (arr_45 [i_7] [i_12 - 1] [i_11] [i_12] [i_13] [7] [i_12 - 1]) : (~1)));
                        }
                        var_31 = (max(((min((arr_42 [i_12] [i_12 + 1] [i_11] [i_12]), (arr_42 [i_7] [i_12 + 1] [i_11] [i_7])))), (((arr_41 [i_10] [i_10] [i_12 - 1] [i_12]) ? (max((arr_33 [i_7] [i_7] [i_7] [i_7]), -4849412891367687895)) : var_6))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 4; i_16 < 14;i_16 += 1)
                {
                    {

                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            var_32 = (((max((arr_55 [i_16 + 1] [i_16 - 4] [i_16] [i_16 + 3]), ((var_7 ? var_7 : var_11))))) ? ((var_5 | (arr_48 [i_16 + 1]))) : var_18);
                            var_33 = var_16;
                        }
                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            var_34 ^= ((var_16 != (((arr_28 [i_7]) ? -99 : var_7))));
                            var_35 = (arr_41 [i_16] [i_16] [i_16] [i_16]);
                            var_36 = (min(var_36, 123));
                            arr_61 [i_18] [14] [14] [i_14] = (((arr_35 [i_16 + 2] [i_16 + 2] [i_15]) ? (var_12 | var_12) : 155));
                        }
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 17;i_19 += 1)
                        {
                            arr_64 [i_16] [i_16] [i_7] [i_7] [i_7] |= 17505310358008723203;
                            var_37 = (~(arr_49 [i_16 - 4] [15] [i_7] [i_7]));
                            var_38 = -var_16;
                        }
                        arr_65 [i_7] [i_7] [i_14] [i_7] [i_15] [i_16] = ((var_13 ? (((((arr_38 [i_7] [i_15] [i_15] [i_16 - 1]) <= (arr_40 [i_7] [i_16 + 1] [i_15]))))) : ((~(arr_38 [i_7] [i_14] [i_7] [i_16 + 2])))));
                        var_39 = ((((var_2 ? (arr_41 [7] [i_16 - 3] [i_15] [11]) : (~147))) - (arr_30 [i_16] [4])));
                    }
                }
            }
        }
        var_40 ^= ((+(((arr_58 [i_7] [i_7] [i_7] [i_7] [i_7]) * 0))));
    }

    for (int i_20 = 0; i_20 < 21;i_20 += 1)
    {
        arr_69 [i_20] = ((((max((max(3988566918931949913, 1)), (arr_66 [16])))) > ((1 / ((1 ? (arr_68 [i_20]) : var_13))))));
        arr_70 [2] |= var_7;
        var_41 = (min(((min((!var_10), (arr_66 [i_20])))), (min((var_15 || var_16), var_2))));
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 21;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 21;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 19;i_23 += 1)
                {
                    {
                        arr_79 [i_20] [i_21] [i_22] [i_23] = (min((max((~0), (var_18 | 101))), (((((var_8 ? 1 : (arr_67 [i_20] [i_20]))) >> (3988566918931949926 - 3988566918931949920))))));
                        arr_80 [i_20] [i_22] [i_21] [i_20] = ((+(max((arr_77 [i_23 + 2] [i_23 + 2] [i_20] [12] [i_20]), ((var_2 ? var_6 : var_10))))));
                    }
                }
            }
        }
        var_42 = (((((var_15 ? var_15 : (arr_75 [i_20] [i_20] [i_20])))) ? var_10 : 14));
    }
    for (int i_24 = 0; i_24 < 19;i_24 += 1)
    {
        arr_84 [i_24] = 940258255;
        var_43 = var_7;
    }
    #pragma endscop
}
