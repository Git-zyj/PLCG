/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min((!var_9), 18181014542077311159))) ? var_10 : ((-((var_12 ? var_18 : 33554400))))));
    var_21 = 27085;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_1] [i_1 + 1] [i_2 - 2]);
                                var_22 = ((arr_13 [i_0] [i_1] [i_0] [i_3] [i_3]) + (!var_2));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] = 1853225552;
                    var_23 = (arr_10 [i_0] [i_0 - 2] [i_0]);
                    arr_16 [i_0] [i_0] = (max((((arr_7 [i_0 + 1] [i_0 + 1] [i_0]) ? ((var_2 ? (arr_2 [i_0] [i_0] [i_0]) : 5708796454666980617)) : (((arr_8 [i_2] [i_1] [i_0]) ? 5151985616428330937 : (arr_6 [11] [i_0]))))), (arr_1 [i_0])));

                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        var_24 = (max(var_24, (arr_12 [i_0] [i_0] [i_0] [i_0] [6] [i_1])));
                        arr_21 [i_0] [i_0] [i_1] [i_0] [i_1] [i_5] = (arr_17 [i_0] [i_1 + 1] [i_0 - 1] [i_2 - 3]);
                        var_25 -= -27086;
                        var_26 = (max(var_26, (((((max((arr_18 [i_0 - 2] [i_1 + 2] [i_2] [i_2] [i_1 + 2] [i_5 - 3]), (arr_18 [i_0 + 1] [11] [i_2 - 1] [i_1] [i_1 - 1] [i_5 - 1])))) ? (arr_18 [i_0 + 1] [i_1] [i_1 + 3] [i_5] [i_1 + 2] [i_5 + 4]) : ((max((arr_18 [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_2 + 1] [i_1 - 1] [i_5 + 4]), var_2))))))));
                    }
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        arr_24 [i_0] [i_1] [14] [i_6] = (arr_9 [i_0 - 1]);

                        for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_27 = arr_10 [i_0 - 2] [i_0] [i_0];
                            arr_27 [i_0] [i_1] [i_6 - 2] [8] = ((+(((arr_12 [i_0] [i_1 + 2] [i_1] [12] [i_1] [i_0]) & var_3))));
                        }
                        for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, ((min((arr_10 [i_1 + 2] [i_8 + 2] [i_6]), (arr_10 [i_1 + 2] [i_8 - 1] [i_1]))))));
                            var_29 = (arr_11 [i_0] [i_0] [7]);
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 13;i_9 += 1)
                    {
                        var_30 -= (arr_19 [6] [i_1] [6] [6] [i_2 - 3] [i_9]);
                        var_31 = var_12;
                        var_32 = ((0 ? (arr_26 [i_9 - 2] [i_9] [i_2 - 1] [i_1 + 2]) : (arr_26 [i_9 - 2] [i_2] [i_2 - 1] [i_1 - 2])));
                        var_33 = (((arr_0 [i_0]) & (arr_0 [i_0])));

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_34 [i_0] [i_9] [i_0] [i_1] [i_0 + 1] = (arr_8 [i_0 - 2] [i_0 - 2] [i_10]);
                            var_34 |= (((90828012 ^ var_15) ? (arr_19 [i_0] [i_1] [i_2] [i_1 + 3] [i_9 - 3] [4]) : var_0));
                        }
                        for (int i_11 = 4; i_11 < 11;i_11 += 1)
                        {
                            var_35 += (((arr_22 [i_1 + 1] [i_1] [i_2] [i_0 - 2]) ? (arr_10 [i_0 - 1] [i_1 - 1] [i_1]) : (((arr_1 [i_0]) ? 255 : (arr_9 [i_0])))));
                            var_36 = (((arr_6 [i_0 + 1] [i_1 - 2]) < (arr_6 [i_0 - 2] [i_1 - 1])));
                            var_37 = var_6;
                            arr_37 [i_0] = (((arr_35 [0] [i_2 - 2] [i_0] [i_9 - 1] [i_11] [0] [i_9 - 1]) ? (arr_20 [i_2 + 1] [1] [i_0] [i_9]) : (arr_18 [i_0 - 2] [i_1 + 1] [i_2 - 3] [i_9 + 1] [i_9 - 2] [i_11 + 4])));
                        }
                        for (int i_12 = 2; i_12 < 13;i_12 += 1)
                        {
                            var_38 = (arr_1 [i_1]);
                            arr_42 [i_0 - 1] [i_1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] &= var_7;
                        }
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            var_39 = (arr_2 [i_0] [i_1 - 1] [i_1 - 1]);
                            arr_45 [i_0] [7] [i_9 - 1] [i_13] = (arr_26 [i_13 - 1] [i_2 - 1] [i_2] [i_1 + 1]);
                        }
                    }
                }
            }
        }
        var_40 = ((3072 << (((-27059 + 27087) - 19))));
    }
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        var_41 = (min(var_41, (arr_46 [i_14] [i_14])));
        var_42 *= var_4;

        for (int i_15 = 1; i_15 < 14;i_15 += 1)
        {
            var_43 -= var_11;
            var_44 = (max(var_44, (arr_46 [i_14] [i_14])));
            var_45 *= (arr_48 [i_15]);
            var_46 = (arr_46 [i_14] [i_15]);
        }
        for (int i_16 = 1; i_16 < 12;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 13;i_18 += 1)
                {
                    {
                        var_47 = (max(var_47, ((((((((arr_48 [i_16 + 2]) ? var_4 : -32759))) ? ((65535 ? -1853225540 : 7366972673867441854)) : ((var_16 ? 23 : (arr_50 [i_14] [i_17] [i_14])))))))));
                        var_48 -= (((arr_54 [i_18 + 2] [i_18 + 2]) ? ((max((~var_5), (((arr_50 [i_14] [i_16] [i_14]) ? 240 : -126))))) : (arr_50 [i_14] [i_17] [i_14])));
                    }
                }
            }
            var_49 *= (arr_57 [i_14] [i_14] [i_14]);
        }
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            var_50 *= ((~(arr_51 [i_14])));
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 15;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 16;i_21 += 1)
                {
                    {
                        var_51 = (arr_65 [i_21] [i_20 + 1] [7]);
                        var_52 = ((((max((!var_15), ((1 ? 1 : var_0))))) ? (((arr_47 [i_14] [i_19]) ? (arr_57 [i_21] [i_21] [i_19]) : (arr_61 [i_21]))) : (arr_63 [i_14] [i_19] [i_21] [i_14])));

                        /* vectorizable */
                        for (int i_22 = 2; i_22 < 12;i_22 += 1)
                        {
                            arr_69 [i_14] [i_21] [i_14] [9] [i_21] = var_2;
                            var_53 = var_4;
                            var_54 *= (((((arr_46 [i_14] [i_21]) ? var_17 : (arr_48 [i_14])))) ? (arr_49 [i_14]) : ((~(arr_58 [7]))));
                        }
                    }
                }
            }
        }
    }
    var_55 = ((var_17 ? ((~((min(var_5, var_13))))) : var_3));
    #pragma endscop
}
