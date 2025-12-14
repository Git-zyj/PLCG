/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = var_6;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 ^= ((((((arr_0 [i_0]) % 15451524920583314294))) ? (((min((arr_6 [i_1] [i_1] [i_1] [i_0]), var_12)))) : (2995219153126237321 ^ 1073741823)));
                    arr_7 [i_1] [10] [i_0] [8] = 2995219153126237321;

                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        var_17 = var_5;
                        arr_10 [i_1] = min((((!(arr_3 [i_0] [i_0] [i_0])))), (max((arr_5 [i_0] [i_0] [i_2]), (arr_9 [i_2] [i_1] [i_0]))));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_18 = (!var_5);
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_3] [i_4] = (max(var_6, (max((arr_6 [0] [0] [i_3 - 1] [i_0]), var_4))));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_19 = (min(var_19, ((((var_6 ? (arr_12 [i_3 - 2] [i_3 + 3] [i_3] [i_3 + 3] [i_3 - 1]) : (arr_12 [i_3 - 2] [i_3 + 3] [i_3] [i_3 + 3] [i_3 - 1])))))));
                            arr_18 [i_0] [i_1] [i_0] [10] = ((~(min((arr_1 [i_0]), var_1))));
                            var_20 = (arr_12 [i_0] [i_0] [i_5] [i_5] [11]);
                            var_21 = (min(var_21, var_1));
                        }
                        arr_19 [i_1] [i_1] = ((arr_12 [i_1] [i_3 + 4] [i_3 + 4] [i_3 - 2] [i_3 - 1]) ? ((15451524920583314294 ? (arr_12 [i_2] [i_3 - 1] [11] [i_3 + 2] [10]) : (arr_12 [i_0] [i_3 + 4] [i_3] [i_3 + 1] [i_3 + 1]))) : (min(var_14, (arr_12 [i_3] [i_3 + 3] [i_3] [i_3 + 4] [i_3 - 2]))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_22 = (((arr_2 [1] [i_1]) - (arr_22 [i_0] [i_0] [i_0] [i_0])));
                        var_23 = ((((((arr_3 [i_0] [i_0] [i_0]) / var_2))) ? -var_5 : (arr_4 [i_1])));
                        var_24 = 0;
                        var_25 = (((((arr_6 [i_0] [i_1] [11] [i_6]) * (arr_20 [i_2] [i_2] [i_2] [i_6] [13] [i_2]))) >= var_7));
                        arr_24 [i_0] [i_0] [i_1] [i_0] = arr_16 [i_1];
                    }
                    arr_25 [i_1] [i_1] [i_1] = ((-((var_13 ? var_2 : var_3))));
                    var_26 = (((((var_6 ? ((var_3 ? (arr_0 [i_0]) : var_7)) : var_11))) || (((!var_0) && var_9))));
                }
            }
        }
        var_27 = (max(((min(1, (max((arr_17 [i_0] [i_0] [i_0]), var_14))))), (arr_16 [i_0])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        arr_30 [i_7] = var_14;
        var_28 = var_0;
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    arr_38 [i_8] [i_8] [i_8] [i_8] = ((((max(((var_1 ? var_11 : 2995219153126237321)), var_2))) ? var_1 : (arr_32 [i_9] [i_9])));
                    var_29 = ((min((arr_33 [i_8] [i_8] [i_9 + 1]), 0)));
                    arr_39 [i_10] [i_8] = ((((((!(arr_33 [i_9 - 1] [i_9 + 1] [i_9 - 1]))))) - var_2));
                    var_30 = 1580192054;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            {

                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    var_31 = (max(((min(1, 1402863459))), var_2));
                    arr_49 [0] [4] [i_12] [4] = ((((min((arr_0 [i_11]), (arr_0 [i_12])))) ? (arr_33 [i_13] [i_12] [i_11]) : var_8));
                    var_32 ^= ((((((arr_44 [i_11]) >> (817303902 - 817303888)))) % var_6));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 11;i_15 += 1)
                        {
                            {
                                var_33 = ((var_3 ? (var_3 || var_2) : (arr_26 [i_15 + 3] [i_12])));
                                var_34 = (((((((arr_2 [11] [i_12]) ? var_13 : 0))) ? ((var_5 ? var_4 : 26007987)) : 11102526675499061656)));
                                var_35 = (min(35, 22827));
                                var_36 = (max(var_36, ((((((var_12 ? (max(var_12, (arr_31 [i_13]))) : (var_10 >= var_3)))) ? (((15451524920583314294 ? (arr_26 [i_13] [i_13]) : (min(817303902, 109))))) : (min((15451524920583314295 ^ var_6), (238 <= 11784407187292166653))))))));
                                arr_56 [i_12] [i_12] [i_12] [i_14] [i_12] = var_4;
                            }
                        }
                    }
                }
                for (int i_16 = 1; i_16 < 12;i_16 += 1)
                {
                    arr_59 [i_11] [i_12] [i_12] = (max(((((65535 ? 238 : var_4)))), ((var_8 ? ((min(var_5, 157))) : (0 * 15872)))));
                    arr_60 [i_12] [i_12] = ((((max((arr_50 [0] [0] [0] [0] [i_12]), (((arr_34 [i_12]) ? (arr_12 [i_11] [i_11] [i_12] [i_11] [i_11]) : var_5))))) ? (((((var_5 ? var_1 : 13509574048002174375))))) : (min((var_2 != var_0), var_0))));
                }
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    var_37 = (min(var_37, ((((var_11 + var_5) ? var_11 : (max((min(var_4, var_7)), (arr_57 [i_11] [i_11] [i_11]))))))));
                    arr_65 [i_11] [i_12] = (((max(((-(arr_55 [i_11] [i_12] [i_12] [i_12] [i_12]))), 13))) ? (max(var_14, (arr_46 [i_11] [i_12] [i_17] [11]))) : 1);
                    var_38 += var_4;
                    var_39 = (~-7127846675449224063);
                    var_40 = (((min(((~(arr_43 [12] [i_12] [12]))), var_10))) ? (min(var_0, (arr_37 [i_11] [i_11] [i_12]))) : ((((arr_11 [i_11]) % (arr_11 [i_11])))));
                }
                /* LoopNest 2 */
                for (int i_18 = 4; i_18 < 13;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        {
                            var_41 *= ((var_0 ? ((((var_11 - var_1) / (min(var_14, (arr_43 [i_11] [i_11] [i_12])))))) : ((((-100 ? var_3 : var_2)) % ((var_12 ? (arr_1 [i_11]) : var_9))))));
                            arr_70 [i_11] [i_11] [i_11] [i_12] = (arr_15 [i_11] [i_11] [i_11] [i_12] [i_12] [i_11]);
                        }
                    }
                }
            }
        }
    }
    var_42 = (13509574048002174375 == -370113533);
    #pragma endscop
}
