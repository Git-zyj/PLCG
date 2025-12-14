/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = var_2;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 &= (arr_3 [i_0] [i_0]);
                            arr_9 [i_0] [12] [12] [i_3] = (((arr_2 [i_0]) ^ 2664489845));
                            arr_10 [i_0] &= ((!((((var_2 >= 98) ? var_2 : (!var_2))))));
                            arr_11 [i_0] [i_0] = ((var_15 ? ((((min(var_6, var_6))) ? var_11 : (var_2 - var_8))) : var_6));
                        }
                    }
                }

                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    var_18 = ((((((max(var_11, 2664489839)) ^ (((var_4 >> (var_12 - 64))))))) ? (((((arr_7 [1] [1] [1] [i_0]) >= ((((arr_12 [i_0] [i_1] [i_1]) ? var_1 : var_4))))))) : var_13));
                    var_19 = ((((((arr_8 [i_4] [i_4 + 3] [i_4 + 2] [i_4 + 3]) + var_14))) ? (((arr_8 [i_4] [i_4 + 3] [i_4 + 2] [i_4 + 3]) ? (arr_8 [i_4] [i_4 + 3] [i_4 + 2] [i_4 + 3]) : (arr_8 [i_4 - 1] [i_4 + 3] [i_4 + 2] [i_4 + 3]))) : (((((arr_8 [i_4] [i_4 + 3] [i_4 + 2] [i_4 + 3]) + 9223372036854775807)) << (((((arr_8 [6] [i_4 + 3] [i_4 + 2] [i_4 + 3]) + 6490865925264560903)) - 62))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_20 ^= ((var_6 ? -var_9 : 7138311864655706566));
        var_21 = (((((var_14 ? var_1 : var_4))) ? 16384454474037453573 : var_5));
        arr_17 [i_5] [i_5] = ((var_9 ? ((var_1 ? var_12 : var_7)) : var_9));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_22 = (arr_14 [i_5]);
                    var_23 = ((2126979968 ? (var_13 >= var_3) : var_9));
                    var_24 = (max(var_24, (!var_8)));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    var_25 = (min((max((7138311864655706566 / 2664489843), ((max(var_5, var_12))))), (var_3 * 2936612882)));

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_26 += (arr_25 [i_8] [i_8] [1]);
                        var_27 = 494365580;
                    }
                }
            }
        }
        arr_35 [i_8] = (6375109694932338593 - 480);
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_28 = (max(var_28, ((max(((15 ? (((min(51067, 109)))) : var_14)), (var_12 <= 2664489839))))));
        var_29 = (((((var_9 * var_12) / (((arr_26 [i_12] [i_12] [i_12]) * 65531)))) / ((var_6 * (var_5 / var_5)))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                {

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_30 = (((max((max(var_13, (arr_38 [i_12] [i_12]))), var_11))) ? (arr_41 [i_12] [i_12] [i_12]) : (((3936017531 / var_0) * (min(var_4, -6647786728024419312)))));
                        var_31 *= ((var_6 <= (((max(2824727187833767041, 76)) ^ (arr_42 [13] [i_14] [i_14])))));

                        /* vectorizable */
                        for (int i_16 = 1; i_16 < 1;i_16 += 1)
                        {
                            var_32 = 3547216628;
                            var_33 = (arr_32 [17]);
                        }
                        var_34 ^= 65055;
                    }
                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        var_35 -= 2664489839;
                        arr_54 [i_12] [i_12] [i_12] [13] = var_3;
                    }
                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        var_36 = var_11;
                        var_37 = ((((((((min(var_15, 65516)))) * ((var_8 * (arr_15 [21])))))) ? (arr_22 [i_14] [i_13]) : (!var_2)));
                        arr_57 [i_12] = (max(var_13, (arr_24 [i_12] [i_12])));
                        var_38 = ((((max((((var_8 ? var_15 : var_13))), (max((arr_55 [i_12] [16] [i_14] [i_12]), var_5))))) && ((min((min((arr_23 [i_12]), var_1)), (((4396972769280 ? var_15 : var_9))))))));
                        arr_58 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((-(max((max(-6647786728024419325, var_6)), (((208 ? (arr_51 [i_12] [i_12] [i_12] [i_18]) : 29148)))))));
                    }
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 17;i_19 += 1)
                    {
                        var_39 = (~(arr_44 [i_12] [i_13] [i_12] [i_19]));
                        arr_61 [12] [i_13] [i_12] [i_19] = (((((arr_39 [i_12]) / (arr_20 [11] [11] [11] [11]))) << (!var_6)));
                        arr_62 [i_12] [i_12] [i_14] [i_19] [i_12] = (arr_56 [i_19] [i_14]);
                        var_40 += ((var_2 ? (arr_20 [i_12] [i_13] [i_14] [i_19]) : (arr_20 [i_12] [i_12] [i_14] [i_14])));

                        for (int i_20 = 3; i_20 < 15;i_20 += 1)
                        {
                            var_41 += (arr_34 [i_20] [i_20] [i_20] [i_20 - 1] [i_20]);
                            var_42 *= (arr_21 [i_20 - 3] [i_20 - 3] [i_20]);
                        }
                    }
                    var_43 = ((((max((arr_47 [i_12] [i_12] [i_13] [i_13] [i_13] [i_14]), ((-6647786728024419312 ? var_1 : 146))))) < ((-(max((arr_44 [i_12] [i_13] [i_14] [i_13]), var_10))))));
                }
            }
        }
    }
    var_44 = (max(((var_6 != (min(var_1, 36379)))), (var_4 || var_8)));
    #pragma endscop
}
