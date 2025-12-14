/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 ^= var_1;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [3] [i_0] = ((((-3731504440467089542 ? 26 : 2627513535907137392)) == ((((!(arr_0 [i_0])))))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        var_20 = (max(var_15, (arr_8 [i_3] [i_3 - 2] [i_3 - 2] [i_3] [i_3 + 1])));
                        var_21 += ((var_10 ? ((var_7 ? (arr_7 [i_0] [i_0] [i_0] [i_2] [i_3]) : (min(126, 6888206641627216006)))) : (((-(arr_8 [i_1] [i_3 - 2] [i_3 - 2] [i_3] [i_3 - 2]))))));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_14 [i_0] [1] [i_0] [i_3] [i_3] = var_3;
                            var_22 = ((!(arr_7 [i_0] [i_0] [i_2] [i_3] [19])));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_3] = (((arr_1 [i_3 - 1]) ? 247 : (var_8 != 3676897983717909532)));
                            arr_18 [i_0] = (((arr_11 [i_3 + 1] [i_5]) ? (((arr_1 [7]) ? (arr_15 [i_0] [i_0]) : var_13)) : ((7473869407298700364 ? -9105328330724834090 : 80))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_23 = ((((var_8 ? var_1 : var_11)) << (var_1 - 159)));
                            arr_22 [i_0] = ((var_7 ? var_14 : 80));
                            arr_23 [i_0] [i_1] [i_2] [i_0] [3] = ((+(((arr_20 [i_0] [i_1] [i_1] [i_3 - 1] [i_0]) ^ var_9))));
                        }

                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            var_24 *= (7159587819836035145 ? (((((min(-15581, 3676897983717909532))) ? (arr_10 [i_0] [i_1] [i_0] [i_3 - 1] [i_7 + 1] [i_0] [i_7]) : (var_2 && var_13)))) : var_5);
                            arr_27 [i_0] [i_1] [i_2] [i_0] [i_0] = 61;
                            var_25 = (max(var_25, (arr_7 [i_7 - 1] [i_7] [i_7] [i_7] [i_7])));
                            var_26 = ((var_1 ? ((-30282 ? -var_13 : var_11)) : var_9));
                        }
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            var_27 = 7159587819836035127;
                            var_28 = (min(((17408710283302924982 ? 195 : 2211612318398249348)), (7159587819836035127 / -26208)));
                            var_29 = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] [19] [19]);
                            arr_30 [i_0] [i_0] [i_8 + 2] [3] [i_8] [i_0] = (arr_5 [i_0] [i_1] [i_2] [i_0]);
                            var_30 = (((((var_12 ? var_4 : (var_0 != 2149459909419407378)))) ? var_12 : ((175 ? (max(-8747121565813370993, (arr_26 [i_0] [i_0] [i_0] [i_3]))) : (arr_11 [i_0] [11])))));
                        }
                        var_31 ^= (((((arr_29 [i_3] [i_1] [i_2]) + 9223372036854775807)) << (var_5 - 3372042821)));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            arr_38 [i_0] [8] [i_0] [i_0] [i_0] = ((~(((((121 ? 11053 : 107))) ? (((64 ? -6402737179058093055 : (arr_7 [i_0] [i_1] [i_9] [i_10] [i_0])))) : 8590254251739505370))));
                            var_32 += var_4;
                        }
                    }
                }
            }
            var_33 = ((((min(var_6, -4803557514063898488))) ? ((min((((7211773550010988571 || (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))), var_16))) : ((var_17 * (arr_10 [i_1] [i_1] [i_1] [2] [i_0] [i_0] [i_0])))));
            arr_39 [i_0] [i_0] = var_13;
        }
        for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
        {
            arr_42 [i_0] = (((((((arr_0 [i_0]) ? -3943993563206255297 : var_0))) && (var_6 || var_17))));
            var_34 += 19690;
        }
        var_35 += arr_5 [i_0] [i_0] [i_0] [18];
        arr_43 [i_0] = (((var_1 ? var_4 : (arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
    {
        var_36 = ((-((var_12 ? var_15 : (arr_20 [i_13] [9] [i_13] [i_13] [0])))));
        arr_46 [i_13] = 11340380836434021117;
    }
    #pragma endscop
}
