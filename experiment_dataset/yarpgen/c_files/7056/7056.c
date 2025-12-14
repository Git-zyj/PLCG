/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_14 = ((~(min(((min(var_11, var_0))), ((var_6 ? (arr_0 [i_0] [i_0 - 2]) : -2057407535))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = (~-8655282383637064089);
                    var_16 += var_0;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        arr_8 [i_2] [i_2] [i_0 - 2] [i_2] = (~2057407534);
                        var_17 = (((arr_3 [i_1 - 2] [i_0 - 2]) >> (((arr_3 [i_1 - 2] [i_0 - 2]) - 9215))));
                        var_18 = (arr_5 [i_1 - 2] [i_2 - 1] [i_3 + 2]);
                        var_19 = ((-((255 ? -8655282383637064089 : var_5))));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_20 = var_9;
                        var_21 = (max(var_21, (((arr_4 [i_0 - 1]) ? var_2 : ((((-125 && (arr_9 [i_4] [i_2] [i_1] [i_0]))) ? 2057407535 : (max(-2057407535, var_6))))))));
                        var_22 = var_1;
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_0] [i_5] = (arr_5 [i_0 + 2] [i_0 + 2] [i_5]);
            arr_16 [5] [i_5] [11] = (arr_2 [8]);
            var_23 = (arr_3 [i_0 - 1] [i_5]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
        {
            var_24 = 280364971;
            arr_20 [i_6] [1] = ((8655282383637064089 ? 2741024722223701115 : (-32767 - 1)));
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
        {
            var_25 = (((((var_12 <= var_12) ? var_12 : ((((125 && (arr_19 [i_0]))))))) > (124 & 1)));
            var_26 = (~var_2);
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
        {
            var_27 = (arr_6 [i_0]);

            for (int i_9 = 1; i_9 < 12;i_9 += 1) /* same iter space */
            {
                var_28 = 1;
                var_29 = (arr_0 [i_0] [i_0 - 2]);

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    arr_30 [i_0] [i_8] [i_10] [i_9] [i_10] [1] = -2057407535;

                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        var_30 &= var_3;
                        var_31 -= ((1 ? 4480756417538745471 : 0));
                    }
                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 11;i_12 += 1)
                    {
                        var_32 = var_1;
                        var_33 = (max(var_33, (4691685600827567746 == 4260422450)));
                        var_34 = (((arr_24 [i_0]) <= var_10));
                        var_35 = (46646 ^ 0);
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        var_36 = ((min((-5763568387128930146 != var_8), ((2057407534 ? (arr_29 [i_0] [i_8] [i_9 + 1] [10] [i_13] [9]) : (arr_5 [i_13] [i_10] [i_8]))))));
                        var_37 = ((arr_31 [i_0] [i_8] [4] [i_10] [i_8]) ? (((45893 < (arr_34 [10] [10] [5] [5] [10] [10])))) : (arr_3 [i_0] [i_0]));
                        var_38 = (max(var_38, (!-2057407535)));
                        var_39 = (((1 ? 19643 : var_3)));
                    }
                    arr_38 [4] [i_10] [4] [i_10] = 19643;
                }
            }
            /* vectorizable */
            for (int i_14 = 1; i_14 < 12;i_14 += 1) /* same iter space */
            {
                var_40 = (!1468);
                var_41 = (-(((arr_28 [i_14] [i_8] [6] [i_0] [i_0 + 2] [i_0]) ? (arr_11 [i_8] [i_8] [i_14]) : (arr_41 [i_0] [12] [11]))));
                var_42 = (((((3 >> (-2057407564 + 2057407569)))) ? ((748493087 ? 7040520900016285869 : 18890)) : 127));
                var_43 = 7514491894025521957;
            }
            for (int i_15 = 1; i_15 < 12;i_15 += 1) /* same iter space */
            {
                arr_46 [i_0] = ((((((arr_3 [i_15 + 2] [i_15 + 1]) < (arr_3 [i_15 - 1] [i_15 + 2])))) / (arr_42 [i_0])));
                var_44 = (-748493081 & 18173);
            }

            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                var_45 = (55215 ? 20313 : (((((arr_4 [i_0 + 1]) != (arr_45 [i_0 + 2] [i_0 - 2] [i_0]))))));
                var_46 = (arr_32 [i_16] [4] [i_16]);
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        {
                            var_47 = (min(-2697486113088672575, var_5));
                            var_48 = ((~(arr_12 [i_0 + 2] [i_0 + 1])));
                        }
                    }
                }
            }
        }
    }
    var_49 = (max(var_4, ((min(var_9, (0 < 748493103))))));
    #pragma endscop
}
