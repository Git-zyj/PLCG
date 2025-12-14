/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((!(arr_0 [i_0] [i_0 + 2])));
        arr_4 [i_0] = (((((((min(var_9, 2072765897))) ? var_8 : var_2))) ? (!16384) : (!var_15)));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                {
                    arr_15 [i_3] = -16371;

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_20 = ((var_2 + (~16384)));
                        var_21 ^= (arr_1 [i_3 + 1]);
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_22 = (!1);
                        arr_20 [i_3] [21] [11] [13] = (arr_19 [i_3] [i_3] [i_3]);
                        var_23 = ((var_9 ? (((((arr_0 [i_1] [i_1]) > var_6)))) : (arr_18 [13] [17] [i_3 - 1] [13])));
                        var_24 = (min(var_24, ((((1 && var_16) ? var_9 : 0)))));
                        var_25 = (67108863 && var_8);
                    }
                }
            }
        }
        var_26 = ((var_19 ? 6008261088954754767 : ((16395 ? var_9 : -1842842350))));

        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            var_27 = (((1 ? var_17 : var_3)));
            var_28 = (max(var_28, 16384));
        }
        arr_23 [13] = (!var_18);
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        arr_27 [1] [i_7] = ((-(arr_0 [i_7] [i_7])));
        arr_28 [i_7] = ((~((((((var_1 ? 237 : (arr_26 [i_7] [i_7])))) && (((var_0 ? 4227858434 : 2074605743))))))));
        arr_29 [i_7] = (i_7 % 2 == zero) ? (((!((((-var_11 + 9223372036854775807) >> (((arr_11 [i_7] [i_7] [i_7] [11]) + 717979017)))))))) : (((!((((-var_11 + 9223372036854775807) >> (((((arr_11 [i_7] [i_7] [i_7] [11]) - 717979017)) - 1039332884))))))));
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        arr_32 [i_8] = var_13;
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 18;i_10 += 1)
            {
                {

                    for (int i_11 = 1; i_11 < 18;i_11 += 1)
                    {

                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            var_29 = var_14;
                            var_30 = (max(var_30, ((((arr_19 [i_9 + 1] [i_11 + 2] [i_10 - 2]) ? (arr_19 [i_9 - 1] [i_11 + 1] [i_10 - 1]) : (arr_41 [i_10 + 2] [17] [i_10 - 2]))))));
                            var_31 = var_3;
                            var_32 = (max(var_32, 67108870));
                            arr_43 [i_9] [i_9] [16] [i_9] = var_10;
                        }
                        /* vectorizable */
                        for (int i_13 = 3; i_13 < 18;i_13 += 1)
                        {
                            var_33 = 740533054;
                            var_34 = (((!(arr_42 [19]))) ? var_11 : (1 / var_8));
                            var_35 = ((var_5 ? 166 : -var_18));
                            var_36 = (arr_35 [2] [17] [i_9] [i_11]);
                        }
                        for (int i_14 = 3; i_14 < 18;i_14 += 1)
                        {
                            var_37 = (max(var_37, var_5));
                            var_38 = (min((((-1583417003314202999 <= 26330) ? (((1 ? var_4 : 3407113470))) : -1583417003314202999)), (((~(max(var_19, (arr_1 [i_10]))))))));
                            var_39 -= ((((226 ? (arr_46 [1]) : (740533056 | var_0))) > (29 <= var_1)));
                            arr_48 [i_8] [10] [i_8] [i_9] [i_10] [i_10 + 2] = var_2;
                        }
                        var_40 = (min(((~(((arr_33 [i_11 - 1]) ? 0 : 538744580)))), ((~((var_6 ? var_2 : var_2))))));
                        arr_49 [i_9] [i_9] [i_10] [i_9] = (((((1 / -981709935) << (192 - 168))) << (var_19 > 1)));
                    }
                    for (int i_15 = 2; i_15 < 18;i_15 += 1)
                    {
                        var_41 *= 0;
                        var_42 = (var_14 / 1);
                        var_43 = (max(var_43, ((((arr_22 [i_8] [i_10 + 2] [i_10 + 2]) ^ (!var_3))))));
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 3; i_16 < 19;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            {
                                var_44 = (arr_9 [i_8]);
                                var_45 = (max(var_45, var_17));
                            }
                        }
                    }
                    arr_58 [i_9 - 1] [i_9] = (~-var_4);
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 11;i_18 += 1)
    {
        var_46 &= (~var_16);
        arr_61 [i_18] = (min((((!(arr_12 [i_18] [10] [i_18] [i_18])))), (min(var_6, ((max(1, var_14)))))));
        var_47 = 2740059896;
        arr_62 [i_18] = ((((max(var_19, (((arr_41 [i_18] [i_18] [i_18]) ? 1842842350 : (arr_11 [i_18] [i_18] [i_18] [i_18])))))) ? (max((var_10 >= var_4), (max(3448117742251077024, 1)))) : ((((arr_44 [i_18] [7] [14] [i_18] [9]) ? var_7 : (arr_44 [i_18] [i_18] [i_18] [4] [i_18]))))));
    }
    /* LoopNest 3 */
    for (int i_19 = 0; i_19 < 13;i_19 += 1)
    {
        for (int i_20 = 3; i_20 < 12;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 13;i_21 += 1)
            {
                {
                    arr_69 [i_19] [i_19] [8] [i_20] = -var_12;
                    var_48 = var_9;
                }
            }
        }
    }
    var_49 = (min(var_6, var_3));
    #pragma endscop
}
