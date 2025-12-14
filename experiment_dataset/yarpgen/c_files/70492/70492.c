/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_19;
    var_21 = var_4;
    var_22 = (max(var_14, -15));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_23 = (arr_0 [i_0]);
        arr_2 [i_0] = min((((((max(var_4, var_18))) < (((arr_1 [5]) / var_8))))), (arr_1 [i_0]));
        var_24 = (((((!(arr_0 [i_0])) ? (arr_0 [i_0]) : (!var_1)))));
        arr_3 [i_0] = (-4430996307281252105 / 20);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                {
                    var_25 = arr_6 [1] [i_2] [i_1];
                    var_26 = ((((-1 ? 8618 : 2417861107))) ? (((arr_10 [i_2] [i_3 + 1] [i_3 - 2]) ? (((((arr_12 [i_3 - 2] [i_2] [i_1] [i_1]) == (arr_10 [3] [3] [3]))))) : (max(var_12, 3994168698)))) : (((-(var_15 * -16)))));
                    arr_13 [i_1] [i_1] [i_2] = (((((0 ? 1 : 3994168673))) ? (((arr_9 [i_3 - 2] [1] [i_1]) & (arr_11 [i_1] [7] [i_3]))) : 0));
                }
            }
        }
        arr_14 [i_1] = ((var_1 / (((arr_8 [3]) ? 1 : (arr_5 [i_1] [i_1])))));
        var_27 = ((+(((arr_4 [i_1]) * (arr_4 [i_1])))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_28 = (((arr_8 [i_1]) * (((arr_4 [i_1]) & var_11))));
            arr_17 [i_4] [i_4] = (min(((((min(1, var_16)) > (0 && 2756874173)))), (arr_16 [i_4] [i_1] [i_1])));
            arr_18 [i_4] = (16 > 3105101417);
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_29 = ((((min(3105101417, 1))) ? (arr_19 [i_5] [i_1] [i_1]) : (min(var_12, ((min(0, var_8)))))));
            var_30 = ((var_2 ? (((-(arr_4 [i_1])))) : (max(1, -4487421227106676285))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_31 = ((var_18 ? (arr_7 [i_6] [i_1]) : var_3));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_29 [i_1] [i_6] [i_1] [i_7] [1] [12] = -568520966;
                        var_32 *= (var_16 & var_19);
                        var_33 = var_8;
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {

            /* vectorizable */
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                arr_36 [i_9] [1] [i_9] = arr_22 [i_10] [i_9];
                var_34 = var_14;
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
            {
                arr_40 [12] [1] [i_9] = ((-4487421227106676285 ? -31 : ((-((var_15 ? 2147483647 : 71))))));
                arr_41 [i_9] [i_9] [i_9] [i_9] = ((-((((((arr_38 [i_1] [i_1] [1] [i_11]) & 56))) ? ((min(15, (arr_22 [i_9] [i_9])))) : ((((arr_31 [i_9] [i_1]) == (arr_15 [i_1]))))))));
                var_35 = (max(var_35, (min((arr_33 [2] [i_9] [7]), 1))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            arr_50 [i_1] [i_1] [6] [i_9] [i_12] [6] = (arr_21 [0] [1] [i_11]);
                            var_36 = ((4294967294 ? 71 : 1));
                        }
                    }
                }

                /* vectorizable */
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        arr_56 [i_1] [i_1] [i_1] [i_9] [i_1] [i_1] = (((((340736117 + (arr_4 [i_1])))) * (arr_35 [11] [i_9] [11] [11])));
                        var_37 = (((arr_12 [i_9] [i_1] [i_9] [i_1]) ? (arr_12 [i_1] [i_9] [i_11] [i_15]) : 8));
                    }
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        var_38 = 4294967295;
                        var_39 &= var_11;
                    }
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        var_40 = var_0;
                        arr_62 [i_9] [i_9] = (arr_8 [i_1]);
                    }
                    var_41 = (1 * 56);
                    var_42 = 1163840595;
                    var_43 = (arr_61 [i_1] [i_1]);
                }
                for (int i_18 = 4; i_18 < 13;i_18 += 1)
                {
                    var_44 &= (arr_43 [i_9] [i_9] [8]);
                    arr_66 [i_9] = (arr_25 [i_9]);
                    var_45 = (max(var_45, (((1803526575 || ((max((arr_55 [i_18] [14] [5] [5] [i_1] [i_1]), (arr_22 [i_9] [i_9])))))))));
                    arr_67 [i_1] [i_1] [i_9] [i_9] [i_11] [6] = -6355800506284711884;
                    var_46 = ((var_12 ? (min(1050866838, ((max(var_3, (-2147483647 - 1)))))) : (arr_46 [i_9] [i_9])));
                }
            }
            for (int i_19 = 0; i_19 < 15;i_19 += 1) /* same iter space */
            {
                var_47 = (arr_4 [i_1]);
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 15;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        {
                            arr_77 [i_19] [i_19] [i_9] [i_19] [i_19] = max(1, ((((max(-4430996307281252088, var_13))) ? 24 : -6121)));
                            var_48 = (arr_59 [11] [i_20]);
                            var_49 = var_15;
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_22 = 0; i_22 < 15;i_22 += 1)
            {
                var_50 = (arr_59 [i_22] [i_1]);
                var_51 = ((!(((1 ? (arr_70 [3] [3] [6] [3]) : (-2147483647 - 1))))));

                for (int i_23 = 1; i_23 < 13;i_23 += 1)
                {
                    var_52 = var_14;
                    var_53 = ((0 - (1 - 119)));

                    for (int i_24 = 0; i_24 < 15;i_24 += 1)
                    {
                        arr_86 [i_1] [7] [0] [i_22] [i_1] [i_9] = (var_9 <= (((var_17 == (arr_71 [i_1] [i_9] [i_22] [i_23 + 1] [i_23 + 1] [i_24])))));
                        var_54 = (!11473);
                    }
                    for (int i_25 = 3; i_25 < 13;i_25 += 1)
                    {
                        var_55 = -118;
                        var_56 = (!(var_4 ^ var_12));
                        arr_89 [i_1] [i_1] [i_1] [1] [i_9] = (!var_0);
                        var_57 |= (((arr_84 [i_23 + 2] [i_23 - 1] [i_23 + 1] [1] [i_23 - 1]) ? (arr_84 [i_23 - 1] [i_23 + 2] [5] [5] [i_23 - 1]) : var_1));
                    }
                    var_58 = (arr_11 [6] [6] [i_9]);
                }
            }
            var_59 ^= 1;
        }
        var_60 = (((min(26, (var_5 / var_8))) - 3720769671));
    }
    var_61 = (min(var_61, ((min(-6121, (-2147483647 - 1))))));
    #pragma endscop
}
