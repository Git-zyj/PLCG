/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = (min(var_13, var_9));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_14 = (min(var_14, (((~(var_3 % var_2))))));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_15 = (min(var_15, (arr_2 [i_0 + 1] [i_0 + 1])));

            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                arr_6 [i_0] [2] [i_2] [i_2] = var_7;
                var_16 = (min(var_16, ((((arr_1 [i_0] [i_0]) ? (((arr_5 [0] [0]) ? var_7 : var_8)) : ((((!(arr_3 [i_0 - 1]))))))))));
            }
            var_17 ^= (!var_6);
        }
        for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
        {
            arr_11 [i_3 + 3] [i_0] = var_6;
            arr_12 [i_0] [i_0] = (var_7 != -226);
            arr_13 [i_0 + 4] [i_0] = arr_9 [i_0];
            arr_14 [1] [1] [i_0] = (var_4 == var_7);
        }
        for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
        {
            var_18 = (((arr_8 [i_0] [i_0 + 3] [i_4]) >> (((arr_3 [15]) - 1348828876))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_19 = (!12088);
                        var_20 = (min(var_20, ((((((arr_7 [i_6] [i_4 + 3]) ? var_5 : (arr_1 [i_6] [18]))) == (~2800456673))))));
                        var_21 = ((var_11 && (arr_9 [i_0])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {

                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        var_22 = var_3;
                        arr_30 [i_8] [i_8] [i_0] [i_8] [i_8] [i_8] = ((((!(arr_2 [i_0] [i_0]))) && (((var_7 ? var_2 : (arr_26 [i_0] [i_7] [i_0 + 1] [8]))))));
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_23 = (min(var_23, (((var_0 ? 59163 : (((!(arr_2 [i_0] [i_0])))))))));
                        arr_33 [i_0] [i_10] [1] [i_10] = 0;
                        arr_34 [1] [i_7] [1] [i_0] = (((arr_3 [i_0 + 1]) ? (arr_3 [i_0 + 2]) : (arr_26 [i_0 + 1] [i_0 + 1] [i_0 + 4] [i_0 + 4])));

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_24 = ((arr_18 [i_7] [i_8] [i_10] [i_11]) << (((arr_18 [i_7] [i_8] [1] [i_11]) - 3855796899)));
                            arr_38 [i_0 + 4] [i_0] [i_0 + 4] [i_8] [i_10] [i_11] = ((var_6 ? var_0 : ((738364862 ? (arr_29 [i_0 + 4] [i_7] [i_8] [i_10] [i_0 + 4]) : var_5))));
                            arr_39 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = (((1 && var_7) ? var_4 : (var_4 - -3988)));
                        }
                        for (int i_12 = 2; i_12 < 17;i_12 += 1)
                        {
                            arr_42 [i_0] [i_7] = (arr_20 [i_0] [i_0] [i_7] [i_8] [i_0] [i_12]);
                            var_25 = var_4;
                            arr_43 [i_0] [i_7] [i_7] [i_7] [i_8] [i_0] [i_0] = var_0;
                            var_26 = 738364862;
                        }
                        for (int i_13 = 3; i_13 < 18;i_13 += 1)
                        {
                            arr_46 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0 + 3] = (63 != var_7);
                            var_27 = ((arr_35 [i_13] [i_13] [i_13] [i_13 - 1] [i_0]) << (59541 - 59531));
                            var_28 = (min(var_28, ((((var_8 || 28637) + (arr_44 [i_0 - 1]))))));
                            var_29 = (((~var_4) ? var_8 : 428));
                        }
                    }
                    for (int i_14 = 1; i_14 < 18;i_14 += 1)
                    {
                        var_30 = (min(var_30, (arr_47 [i_0] [i_0] [i_0] [i_0])));
                        arr_50 [i_0] [i_0] [i_0] [i_0] = var_6;
                    }
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        var_31 = var_0;
                        arr_54 [i_0] [i_0] [i_0] = -1717099278;
                        arr_55 [i_0 + 4] [i_7] [i_0 + 4] [i_0] = 17180;
                        arr_56 [i_0] [i_0] [i_8] [i_0] [i_0] = (((((arr_27 [i_0 + 4] [i_0] [i_0] [i_0] [i_0 - 2]) ^ -26930)) * (((arr_31 [6] [i_0] [6] [i_15]) - 0))));
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 4; i_16 < 16;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            {
                                var_32 = var_0;
                                arr_61 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0] [i_0] = (((arr_26 [i_0 + 2] [i_0 + 1] [i_16 - 2] [i_16 + 2]) ? ((((arr_60 [i_0 - 1] [i_0] [i_0 + 3] [i_0] [i_0]) * (arr_17 [i_0])))) : (((arr_1 [i_0] [i_0]) ? var_7 : (arr_20 [i_0 + 2] [i_7] [i_0 + 2] [i_0 + 2] [i_0] [i_17])))));
                            }
                        }
                    }
                    var_33 = (min(var_33, (arr_16 [i_8] [i_7] [i_0])));
                    arr_62 [i_7] [i_7] [i_0] = var_0;
                }
            }
        }
    }
    #pragma endscop
}
