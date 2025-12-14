/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (min(var_15, var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] [3] = var_9;
            var_16 = (max(var_16, var_4));
            arr_6 [i_0] [2] = ((arr_4 [i_0]) / var_10);
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = var_5;

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_15 [i_0] [i_2] [i_0] [i_4] [i_3] [i_4] |= (var_5 - ((var_8 ? var_7 : var_3)));

                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        arr_20 [i_0] [i_3] [i_3] [9] [i_5 + 2] = (1871341684 / (((arr_13 [i_0] [11]) / (arr_13 [i_2] [i_2]))));
                        var_17 = -1;
                        arr_21 [i_0] [13] = (arr_12 [i_0] [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_0] = (-1246052014 % var_9);
                        var_18 = var_10;
                        var_19 = (min(var_19, ((((~-360169614) != ((var_9 ? var_13 : (arr_23 [i_0] [i_2] [i_3] [13] [i_6]))))))));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_20 = var_7;
                        var_21 = (var_6 ? 0 : (var_5 == var_7));
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -622406594;
                        var_22 ^= ((((-1282440299 != (arr_22 [i_7] [i_3] [i_2] [i_0])))) & (arr_0 [i_0]));
                        arr_29 [i_0] [i_0] [i_3] [7] [i_7] = (var_10 != var_1);
                    }
                    var_23 = -1501606330;
                    arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_24 [i_0] [13] [i_2] [i_3] [i_3] [i_4] [i_4];
                    var_24 = -var_13;
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {

                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        arr_37 [i_0] [i_0] = arr_7 [i_9] [i_2];
                        arr_38 [i_2] [i_2] [i_0] [i_8] [11] = var_13;
                        arr_39 [i_3] [i_0] = (((arr_12 [i_2] [i_8]) && -383024904));
                        var_25 = (max(var_25, (1098546092 / 807930798)));
                    }
                    var_26 = (min(var_26, (((arr_22 [i_0] [i_2] [i_3] [i_8]) / (arr_22 [i_0] [i_2] [i_3] [i_8])))));
                }
                for (int i_10 = 3; i_10 < 10;i_10 += 1)
                {
                    var_27 = (min(var_27, var_10));
                    var_28 = arr_41 [i_10 + 3] [i_10 + 3] [i_10 + 3] [i_10 + 1] [i_10 + 2] [i_10 + 2];

                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        var_29 = ((var_9 ? (arr_22 [i_0] [i_10] [i_2] [i_0]) : (arr_31 [13] [i_10] [i_2] [i_0])));
                        arr_44 [i_0] [i_0] = ((131064 ? 0 : 1120067756));
                        var_30 = (min(var_30, ((340649046 ? (((arr_4 [i_3]) ? var_3 : var_4)) : var_10))));
                    }
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        arr_47 [i_0] [i_0] [i_0] [i_0] = (((~(arr_0 [i_3]))) + ((var_2 / (arr_35 [i_0]))));
                        arr_48 [i_12] [i_10] [i_0] [i_0] [6] [i_0] = var_0;
                    }
                    var_31 = (max(var_31, var_10));
                }

                for (int i_13 = 1; i_13 < 13;i_13 += 1)
                {

                    for (int i_14 = 2; i_14 < 12;i_14 += 1)
                    {
                        var_32 = (min(var_32, var_3));
                        var_33 = (min(var_33, (arr_11 [i_3] [i_14])));
                    }
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (var_0 | ((var_8 ? 1516962977 : var_7)));
                        arr_59 [i_0] [i_2] [i_3] [i_0] [i_3] [i_2] = var_2;
                        var_34 = var_0;
                    }
                    arr_60 [i_3] [i_3] |= arr_22 [i_0] [i_2] [i_3] [i_2];

                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        arr_63 [i_0] [5] [i_3] [i_0] [i_16] = -1;
                        var_35 = arr_26 [i_0] [i_2] [i_3] [i_13] [i_16];
                        arr_64 [i_0] [i_2] [i_0] [i_13] [0] = -1954330283;
                    }
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        var_36 ^= var_8;
                        arr_67 [i_0] [i_2] [i_0] [i_13] = (~32739001);
                    }
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        var_37 = (min(var_37, ((-(arr_24 [3] [4] [i_13 + 1] [i_2] [i_18] [12] [6])))));
                        var_38 = ((var_1 / 962273628) ? (((arr_26 [i_2] [i_13] [i_3] [i_2] [i_0]) - var_1)) : (((arr_19 [i_3] [i_0] [i_3] [3] [i_18]) ? var_7 : (arr_18 [i_2] [i_0]))));
                        arr_70 [i_0] [i_2] [i_3] [i_0] [i_13] = ((arr_49 [i_13] [i_13] [i_13 + 1] [i_13]) ^ 1198939318);
                        var_39 = arr_43 [i_13] [i_13 - 1] [i_13] [i_13] [i_13];
                        var_40 = (max(var_40, (((!(arr_50 [i_3] [i_13 + 1] [i_3] [i_13]))))));
                    }
                    arr_71 [i_0] [i_0] [i_3] [i_0] [i_0] = ((((962273628 > (arr_7 [i_0] [i_0])))) % 1116862608);
                }
                for (int i_19 = 0; i_19 < 14;i_19 += 1)
                {
                    arr_75 [i_0] [i_0] [0] [i_0] = -1080882414;
                    arr_76 [i_19] [i_19] [i_0] [i_19] [i_19] [i_19] = var_12;
                }
            }
            for (int i_20 = 0; i_20 < 14;i_20 += 1)
            {
                arr_80 [i_0] [i_2] [i_20] &= -962273629;
                var_41 = var_8;
                var_42 = (max(var_42, (arr_11 [i_20] [i_2])));
            }
            for (int i_21 = 2; i_21 < 13;i_21 += 1)
            {
                arr_83 [i_0] [13] [i_21] = var_12;
                var_43 = 1701316718;
            }
        }
        arr_84 [i_0] [i_0] = (~(((arr_65 [i_0] [i_0]) ? var_9 : (arr_55 [6] [i_0]))));
    }
    for (int i_22 = 0; i_22 < 14;i_22 += 1)
    {
        arr_88 [i_22] [i_22] = arr_31 [i_22] [i_22] [i_22] [4];
        var_44 = (max(var_44, (min((arr_57 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]), 2147483616))));
    }
    for (int i_23 = 3; i_23 < 13;i_23 += 1)
    {
        var_45 = (min(var_45, ((((!var_0) && ((((var_13 || -1105737151) ? ((1885361671 ? var_6 : var_5)) : (max(var_0, var_8))))))))));
        arr_92 [i_23 - 2] = (((min((max((arr_8 [4] [i_23 - 2] [i_23]), var_6)), var_5))) ? ((1203071942 ? 766842723 : 766842723)) : var_5);
        arr_93 [i_23] [i_23] = min((max(660040886, var_3)), (max(((1136676332 & (arr_45 [i_23] [i_23] [i_23 + 1]))), -var_1)));
        arr_94 [1] [i_23] = (-((var_0 ^ (arr_33 [i_23 + 1]))));
        var_46 += (((((arr_14 [i_23] [i_23] [0]) != var_13))) * (((!(arr_81 [i_23] [i_23] [i_23])))));
    }
    var_47 |= (+(((((-2147483647 - 1) ? var_10 : 1198939318)) & var_1)));
    #pragma endscop
}
