/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_12;
        arr_3 [i_0] = -1439659612;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_15 = var_7;

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_16 = 1598901764;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_20 [i_5] [i_4] [i_1] [i_2] [i_1] = (((((arr_4 [i_2] [4]) > var_8))) % (arr_0 [i_5 - 1]));
                            var_17 &= (((arr_18 [i_1] [i_1]) && (var_13 < var_3)));
                            var_18 = (min(var_18, (((arr_0 [6]) ? var_0 : var_9))));
                            arr_21 [8] [i_1] = var_7;
                        }
                    }
                }
                arr_22 [i_1] = 547154022;
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_26 [1] [i_1] [5] = arr_5 [i_1 - 1] [i_1];
                var_19 = (((arr_23 [i_2] [i_2] [i_1 - 1]) && -var_8));
            }
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {

                for (int i_8 = 2; i_8 < 10;i_8 += 1)
                {
                    var_20 ^= (arr_11 [i_1] [i_1] [i_7] [11]);
                    arr_31 [i_1] [i_2] [i_1] [i_1] = (1598901761 & 974129824);
                    arr_32 [i_1 - 1] [i_1] [i_7] = (((((496371060 ? (arr_1 [i_1] [i_1]) : var_2))) || (((-972157973 ? var_5 : -972157976)))));
                }
                arr_33 [i_1] [i_2] [i_1] [i_1] = ((((arr_9 [6]) ? (arr_5 [i_1 + 1] [12]) : var_0)) & var_12);
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            arr_39 [i_1] = (!547154022);
                            arr_40 [i_1 - 1] [i_2] [i_10] [10] [8] |= ((arr_14 [i_1] [i_1 + 2] [i_1 + 2]) + 1921985877);
                            var_21 = ((-1044479805 == var_7) - 974129830);
                            var_22 = -1039697807;
                            arr_41 [i_1] [i_10] [i_10] [i_2] [i_2] [i_10] [i_1] &= ((((var_3 ? (arr_17 [i_7] [10]) : -1)) <= (-1162800875 - -1972481137)));
                        }
                    }
                }
            }

            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                arr_45 [i_1] [i_1] [i_1] [i_11] = ((((var_13 ? var_8 : var_14))) ? ((var_12 ? (arr_1 [i_1] [i_2]) : var_5)) : (arr_0 [i_1 - 1]));
                arr_46 [i_11] [i_1] [i_1] [i_11] = -1101615807;
            }
            for (int i_12 = 3; i_12 < 12;i_12 += 1)
            {
                arr_49 [i_1] [i_2] [i_1] [i_1] = ((arr_15 [i_12] [i_2] [7]) ? var_4 : ((var_2 ? var_3 : (arr_44 [i_2] [i_2] [i_1 - 1] [i_1 - 1]))));
                var_23 = -974129824;
            }
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                arr_54 [i_1] [i_1] [i_13] = ((arr_44 [i_1] [i_1 - 1] [i_13] [i_1 - 1]) ? (arr_44 [i_1] [i_1 - 1] [i_1 + 2] [i_13]) : (arr_44 [i_1] [i_1 - 1] [i_1] [1]));
                var_24 = var_14;
                arr_55 [2] [i_1] [i_1] = (~(((arr_35 [i_1] [i_1] [i_1] [i_2] [i_2] [i_13]) ? var_13 : var_9)));
            }
            var_25 = (max(var_25, ((-979499708 | (arr_29 [i_1 - 1] [i_1 + 2] [i_1] [i_1 - 1] [i_1 + 1] [1])))));
        }
        var_26 = (max(var_26, (!var_0)));
    }
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        arr_58 [i_14] = (((max((arr_1 [i_14] [i_14]), (arr_1 [16] [i_14])))) ? (arr_1 [i_14] [i_14]) : (((var_9 > (arr_1 [i_14] [i_14])))));
        var_27 = (min(var_27, ((((((((arr_1 [i_14] [i_14]) > 944053050)))) && ((((arr_1 [i_14] [i_14]) + ((var_1 ? var_0 : var_3))))))))));
    }
    for (int i_15 = 0; i_15 < 11;i_15 += 1)
    {
        var_28 ^= max((((var_14 ? var_8 : (arr_44 [6] [i_15] [i_15] [i_15])))), ((-(max(var_5, var_1)))));
        arr_61 [i_15] [i_15] = min(var_7, (2112730837 > -1598901765));

        for (int i_16 = 0; i_16 < 11;i_16 += 1)
        {
            arr_64 [5] = ((((arr_28 [i_15] [i_15] [10] [i_16]) && ((min((arr_14 [i_16] [0] [i_15]), var_13))))) ? (arr_53 [i_16] [i_16] [i_15]) : -var_6);
            var_29 = -944053050;
        }
    }
    var_30 = (max(var_30, (var_8 >= var_12)));
    var_31 = var_10;
    #pragma endscop
}
