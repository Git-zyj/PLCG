/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((-((var_14 ? (3509967067761696682 * var_10) : -var_10))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_16 = (max(var_16, ((var_6 ? (min(var_9, 8515603607717884772)) : var_3))));
            var_17 ^= 9;
            var_18 = -12429;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_19 ^= (((max(var_2, var_3))));
            arr_8 [i_0] [i_2] [i_2] = (arr_1 [i_0]);

            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                arr_13 [i_0] [i_3] [i_3] = var_10;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_20 &= var_13;
                            var_21 += ((((((!(!159))))) < ((-(arr_2 [i_3 + 2] [i_0])))));
                        }
                    }
                }
                var_22 = (arr_1 [i_0]);
                var_23 = (((arr_18 [i_3] [i_3 - 4] [9] [i_3] [i_3 - 4]) ? (min(var_3, (var_4 && var_15))) : ((var_4 ? var_3 : 8515603607717884772))));
            }
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_23 [i_0] [i_0] = ((-(arr_4 [i_6])));
            var_24 |= (min(((var_5 ? 141 : var_7)), (((arr_0 [i_0 + 2]) ? 27158 : (arr_0 [i_6])))));
            var_25 ^= ((((!(((var_14 ^ (arr_0 [2]))))))));
            var_26 = (min(((((arr_4 [i_0 + 2]) && (var_15 <= var_5)))), var_3));

            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                var_27 = (min(var_27, (((((((((var_11 ? 159 : var_2))) ? var_11 : 9926163393466165812))) ? ((-(arr_11 [i_7 - 1]))) : ((-(var_5 + -1))))))));
                var_28 ^= min(((-8515603607717884771 ? (arr_20 [i_0] [i_0 + 1] [i_7]) : var_2)), ((min((arr_15 [i_7 - 1] [i_6] [i_6] [i_0]), (arr_5 [i_0] [i_0 - 1])))));
                arr_26 [i_0] [7] [i_6] [i_0] = 214;
            }
            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {
                arr_29 [i_0] [i_6] [i_8] [i_8] = -125;
                var_29 ^= ((((((var_12 ? var_7 : (arr_12 [i_6]))) * 394697581848178013))));
                var_30 = ((~((-(arr_21 [i_0] [i_0 + 2] [i_0])))));
                arr_30 [i_0] = (~(arr_10 [i_8 - 1] [i_0 + 1]));
            }
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_31 = var_7;
                arr_34 [i_0] [i_0] [i_0] [i_0] = var_2;
                var_32 = (((((((~(arr_21 [i_0] [i_0 + 1] [i_0]))) ^ 96))) | (((~(arr_10 [i_6] [i_6]))))));

                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    var_33 |= var_7;
                    arr_39 [0] [i_0] = ((((min((min((arr_38 [i_0 + 1] [i_0] [i_6] [i_9] [i_10]), var_4)), (arr_22 [i_0])))) ? (min((!var_1), var_0)) : (((((min(var_4, -23653))) && (arr_4 [i_6]))))));
                    var_34 = (var_14 ? -var_1 : (arr_1 [i_0]));
                }
            }
        }

        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            var_35 = ((-((~(((arr_4 [i_0]) ^ -1811969043))))));
            arr_42 [i_0] [i_11] = (((((var_11 ? -1924145348608 : -var_15))) ? ((((arr_1 [i_0]) ^ var_7))) : (max((arr_2 [12] [i_0 + 2]), ((((arr_40 [2] [i_11]) < var_6)))))));
            arr_43 [i_0] [i_0] = (((((64125 - ((var_12 ? 8515603607717884785 : var_6))))) && (((((var_1 ? 48790 : var_7))) < (max(var_9, 829030974531116509))))));
        }
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            var_36 = (((var_1 ? var_6 : 14965)));
            var_37 = ((((var_15 ? 1 : (var_8 || var_12)))) ? ((16756 ? ((var_14 ? var_10 : (arr_5 [i_0] [i_0]))) : (arr_47 [i_0 + 1] [i_12] [i_0]))) : var_7);
            var_38 = ((((min((((arr_11 [i_12]) | 8191)), var_6))) ? (((((((arr_32 [i_0] [i_0]) ? 0 : var_13))) ? 64139 : var_11))) : ((var_2 ? var_5 : (arr_6 [i_0 - 1] [i_0 - 1])))));
            arr_48 [i_0] [i_0] = var_13;
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 14;i_15 += 1)
                    {
                        {
                            var_39 ^= var_2;
                            var_40 = 178;
                            var_41 = (arr_55 [i_0] [i_15] [i_14] [i_14] [i_13] [i_13 + 1] [i_0]);
                        }
                    }
                }
            }
        }
        var_42 = ((arr_46 [i_0] [i_0] [14]) ? (arr_53 [i_0] [1] [i_0 + 1] [4]) : var_0);
    }
    for (int i_16 = 0; i_16 < 20;i_16 += 1)
    {
        var_43 = (min(var_43, 64130));

        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                for (int i_19 = 3; i_19 < 19;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        {
                            var_44 = (max(var_44, var_5));
                            arr_70 [i_18] [i_16] = ((-1 - (((arr_64 [i_19 + 1] [12] [6]) + var_13))));
                            var_45 = ((~var_4) ? var_7 : ((~((8818808391832600521 ? var_8 : var_3)))));
                        }
                    }
                }
            }
            var_46 = (-((max(var_2, (min((arr_61 [0]), var_2))))));
            arr_71 [i_16] [i_17] [i_17] &= (var_14 ? (((arr_60 [i_16] [i_17]) & (arr_67 [i_16] [i_16] [0] [i_16] [i_17] [i_17]))) : var_2);
            arr_72 [i_17] [i_16] = ((((arr_69 [i_16] [13] [i_17] [i_17] [i_17] [i_17]) < var_11)) ? (((var_14 - (arr_61 [i_16])))) : ((var_14 - (max(var_15, var_9)))));
        }
        arr_73 [i_16] [i_16] = -9203060835408333951;
        var_47 = (max(var_47, 16765));
        var_48 |= (((((arr_61 [i_16]) ? (arr_67 [i_16] [2] [i_16] [i_16] [15] [i_16]) : (((min(var_13, var_2)))))) / 31420));
    }
    var_49 = var_10;
    #pragma endscop
}
