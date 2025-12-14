/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_1] [i_1 + 2] [i_2] = (((arr_2 [i_0] [i_0] [i_1]) == var_11));
                    arr_9 [i_1] [i_0] = var_5;
                }
                for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_14 = 16058;
                    var_15 = (((arr_4 [i_0] [i_1] [i_1]) ? ((~((((arr_7 [i_1] [i_1 - 4]) != 3366952372222800323))))) : (arr_7 [i_1] [i_1])));
                    var_16 = (((((arr_3 [i_3] [i_3] [i_3 - 3]) ? 49477 : (arr_4 [i_3] [i_3] [12]))) - ((((!((((arr_0 [i_0] [11]) ? var_6 : var_0)))))))));
                    arr_12 [i_1] [i_1] [9] [i_1 + 3] = (max(0, (min((~var_10), (!var_8)))));
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_18 [i_5 + 2] [i_1] [i_5 + 1] [i_5] = (60014 ? 18 : (var_4 | var_3));
                            var_17 ^= (((((max(var_3, 3721361805)) >> (((var_1 + var_6) - 456393048)))) - -var_9));
                            var_18 += (((!14) ? (max(3366952372222800323, (arr_4 [i_5 + 3] [i_1] [i_4]))) : ((((!(arr_16 [i_0] [i_1 + 2] [i_4] [i_5 - 1] [i_5])))))));
                            arr_19 [i_0] [i_1] [i_0] [i_5] [i_5] [i_1] = ((((46 <= var_10) >= (max(var_3, (arr_5 [i_1] [i_1] [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_6, (((((81 ? 14 : var_9))) ? 3869 : var_10))));

    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = 3364960044;

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_26 [i_7] = (((arr_24 [i_7]) * (max(-1935125529378750324, var_8))));
            var_20 |= ((-(arr_25 [18])));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 20;i_10 += 1)
                {
                    {
                        var_21 = 49478;
                        var_22 = (((((-(arr_31 [i_10 - 2] [i_8] [i_9] [i_10])))) ? (min((arr_31 [i_10 - 2] [i_8] [i_9] [13]), var_6)) : ((((!(arr_31 [i_10 - 1] [i_8] [i_9] [i_9])))))));
                        arr_34 [i_6] [15] [15] [i_10] = (arr_28 [i_10 + 2]);
                    }
                }
            }
            var_23 = ((-((min(var_0, (arr_27 [i_6]))))));
        }
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        arr_37 [i_11] = var_11;
        arr_38 [i_11] = (min((((arr_36 [3]) << ((((49 ? (arr_32 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) : 12938685578806697761)) - 18446744073668825306)))), ((min(var_4, 64)))));
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
    {
        arr_42 [i_12] = ((!((((!12938685578806697761) ? (min((arr_36 [i_12]), 30)) : (!7552336914881611276))))));
        var_24 = 4294967295;
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_14 = 1; i_14 < 15;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 14;i_16 += 1)
                {
                    {
                        var_25 = (((arr_32 [i_13] [i_13] [i_14] [i_15] [i_16 + 3] [i_16]) ? (arr_27 [i_14]) : var_3));

                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            arr_57 [i_13] [i_13] [i_15] [i_17] = 3090759851;
                            var_26 = ((~(arr_22 [i_17] [i_14 + 1])));
                            arr_58 [16] [9] [1] [i_16] [i_16 + 2] [i_16] [i_16] = ((-(arr_54 [i_14 + 2] [i_14 + 2])));
                        }
                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            var_27 = var_5;
                            var_28 *= 47;
                            arr_62 [i_13] [16] [i_15] [i_15] [16] = (((arr_33 [i_14 - 1] [i_16 + 1] [i_16]) ? (arr_33 [i_14 - 1] [i_16 + 2] [i_18]) : (arr_33 [i_14 + 1] [i_16 - 1] [i_18])));
                            arr_63 [i_18] = (((!11462) > 37));
                        }

                        for (int i_19 = 3; i_19 < 14;i_19 += 1)
                        {
                            var_29 ^= ((var_5 > ((var_1 ? 58989 : (arr_22 [i_16] [i_14 + 2])))));
                            arr_66 [13] [13] [2] [i_16] [i_16] = ((~(arr_28 [i_13])));
                            arr_67 [i_13] [i_13] [i_13] [11] [i_13] [i_13] [i_13] = var_4;
                            var_30 = ((-30 / (arr_55 [i_13] [i_14] [i_13] [i_16] [8])));
                        }
                        for (int i_20 = 0; i_20 < 17;i_20 += 1)
                        {
                            var_31 = 4294967282;
                            var_32 = 12182609313588465778;
                            var_33 = var_6;
                        }
                        for (int i_21 = 3; i_21 < 16;i_21 += 1)
                        {
                            arr_74 [i_15] = var_10;
                            var_34 *= ((((var_0 && (arr_49 [i_13] [i_14] [i_15]))) ? 4294967282 : var_1));
                            var_35 = ((-((-(arr_60 [i_13] [i_13] [i_13] [i_13])))));
                        }
                    }
                }
            }
        }
        var_36 = ((-3177066234216008507 / (-77 || 1406826126)));
    }
    #pragma endscop
}
