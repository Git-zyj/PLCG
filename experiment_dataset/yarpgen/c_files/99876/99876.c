/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = var_4;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_0] [i_1] [i_1] [7] = (max(7629, (((arr_4 [i_0 + 4]) - (arr_4 [i_0 + 2])))));
                        var_15 = (-9223372036854775807 - 1);
                        arr_9 [i_1] [i_1] [i_1] [i_1] = (arr_0 [i_0 + 4]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_14 [i_0 + 3] [5] [i_5] = (arr_10 [i_0 + 4] [i_0 + 2]);

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_16 = (min(var_16, ((((((arr_1 [i_6]) > (arr_15 [i_0] [i_4 - 1] [7]))) ? (((arr_16 [i_0] [7] [i_5] [i_6]) ? (arr_2 [i_0]) : (arr_2 [i_5]))) : (arr_11 [i_0] [i_0 + 4]))))));
                        var_17 = (min(var_17, (((((250 << (arr_7 [i_0 + 3] [i_4] [i_4] [6] [i_4])))) ? (-2147483647 - 1) : (arr_1 [i_0 + 2])))));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        var_18 = (~-9223372036854775800);

                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_19 = (min(var_19, (((-(max(((min((arr_5 [i_0] [i_5] [i_0] [i_8]), (arr_21 [i_4] [i_4] [2] [i_5] [i_5])))), (((arr_22 [i_0]) - var_7)))))))));
                            arr_24 [i_5] [i_0] [i_4] [i_5] [6] [0] |= (max(224, -15109));
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            var_20 = ((var_2 ? (((-(262143 || 9223372036854775800)))) : (((max((arr_25 [i_0] [i_0] [i_4 - 1] [i_5] [i_7] [i_7] [i_0]), var_11)) - (((max((arr_7 [i_0] [i_7] [i_5] [i_0] [i_0]), 57902))))))));
                            arr_27 [i_0 + 3] [i_0 + 3] [i_0 + 4] [i_0 + 3] [i_0 + 2] [i_0 + 4] [i_0 + 1] = (-32752 <= 18017);
                        }
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                    {
                        arr_30 [i_4 - 1] = (~60053);
                        arr_31 [i_0] [i_4] [i_5] [i_5] [i_10] = (max((arr_29 [i_0 + 3] [i_0 + 1] [i_0 + 2] [i_4 - 1]), (((((((arr_0 [i_10]) >= 240))) >= ((1699716317641236855 ? 47 : 1)))))));
                    }
                    var_21 = (min(var_21, ((min(((~(arr_4 [i_0 + 1]))), (((((4294967295 > (arr_17 [i_0] [i_0] [i_4 - 1] [8]))) || 7642))))))));
                    var_22 += ((var_5 ? (arr_17 [i_0] [i_0] [i_4] [i_4]) : ((-(arr_17 [i_0] [i_0] [2] [i_0])))));
                }
            }
        }
        arr_32 [i_0] [i_0] = (~0);
        var_23 |= (min((((arr_28 [5] [i_0] [i_0] [6]) ? (16747027756068314761 || 16747027756068314753) : (arr_18 [i_0] [1] [11] [1] [i_0] [i_0]))), (((9 != 48) ? ((0 - (arr_20 [i_0] [i_0] [1] [i_0]))) : 4))));
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        var_24 = (237 < -32762);
        var_25 = (var_7 > 1022614948218070530);
        var_26 *= ((57891 ? -1585262129513029 : 57917));

        for (int i_12 = 1; i_12 < 17;i_12 += 1) /* same iter space */
        {
            var_27 = (min(var_27, (((-(((arr_37 [i_11] [8]) ? (arr_37 [i_12 + 1] [14]) : (arr_34 [0]))))))));
            arr_40 [i_11] [i_11] = (((arr_33 [i_11]) ? (((arr_39 [i_12] [i_12 + 3]) ? (arr_37 [i_11] [i_11]) : var_10)) : (arr_37 [i_11] [i_11])));
        }
        for (int i_13 = 1; i_13 < 17;i_13 += 1) /* same iter space */
        {
            arr_45 [i_11] [i_11] = (arr_39 [i_11] [i_11]);
            arr_46 [i_11] = (max((((max((arr_42 [i_11] [i_13]), 2047)) + ((min(2038, var_5))))), 1023));
            arr_47 [i_11] [i_11] [i_11] = 224;
        }
    }
    #pragma endscop
}
