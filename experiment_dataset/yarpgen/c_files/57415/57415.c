/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((((var_2 - ((min(var_4, var_6))))) ^ (max((3723481678 ^ 1227049419), var_0))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 = (min(var_13, (arr_4 [20] [i_1])));

            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                var_14 = ((arr_5 [i_1] [i_2] [i_2]) & (arr_5 [i_1] [i_2] [i_2 - 2]));
                var_15 = (arr_3 [18]);
            }
        }
        var_16 = (max(var_16, (((2635334683 & ((((max(4131258333, 1))) ? (min(var_0, var_7)) : (arr_0 [i_0]))))))));
        var_17 = -1484665079;
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_18 ^= (-1484665068 | -1484665079);
        var_19 = (((((1484665077 - var_5) ? 1486437025 : (max(931327371, var_11)))) != 1659632613));
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_20 = (((arr_2 [i_4]) < var_9));
        arr_11 [i_4] = (arr_5 [20] [20] [i_4 + 1]);
        arr_12 [i_4] = arr_0 [i_4];
        var_21 = 2793007210;
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] = (((arr_6 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 2]) < ((-366926493 ^ ((1231392500 ? 4294967289 : 4294967295))))));

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_20 [i_6] = var_1;
            arr_21 [i_6] = (((((((arr_14 [i_5 - 1] [i_6]) & 62914560)))) - (arr_4 [i_5] [i_5])));
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_22 = (arr_31 [i_10] [i_10] [i_7 + 1] [i_7 + 1] [i_7 + 1] [22]);
                            arr_33 [i_5 + 2] [i_7] [i_10] [i_9] [i_10] = var_3;
                            arr_34 [i_7] [i_7 - 1] [i_7] [10] [i_7] = (((arr_16 [i_7 + 1]) < (var_9 != var_2)));
                        }
                    }
                }
                arr_35 [i_5] [i_5] [i_8] [i_7] = arr_32 [i_8];
            }
            for (int i_11 = 2; i_11 < 23;i_11 += 1)
            {
                var_23 = var_3;
                var_24 = (var_1 | 1884664946);
                var_25 += (((arr_1 [i_5 + 2]) < (arr_30 [i_11] [i_7])));
                var_26 = (max(var_26, 15872));
            }
            var_27 = (arr_19 [4]);

            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                var_28 = (min(var_28, 603165422));
                arr_41 [i_5] [i_5] [i_7] [i_5 + 1] = (((arr_39 [i_5 + 2] [i_7] [i_5 + 3] [i_7 + 1]) > (arr_26 [i_7] [i_7] [i_5 + 1])));
            }

            for (int i_13 = 1; i_13 < 22;i_13 += 1)
            {

                for (int i_14 = 1; i_14 < 22;i_14 += 1)
                {

                    for (int i_15 = 1; i_15 < 23;i_15 += 1) /* same iter space */
                    {
                        var_29 = (((((arr_40 [i_7] [i_7]) - (arr_29 [i_5] [i_7] [i_13]))) - (var_8 | var_2)));
                        var_30 = 840877256;
                        var_31 = ((arr_26 [i_5] [i_7] [i_7]) - (1227049421 != var_3));
                    }
                    for (int i_16 = 1; i_16 < 23;i_16 += 1) /* same iter space */
                    {
                        arr_54 [i_5 - 1] [i_7] [i_7] [i_13] [i_14 + 2] [i_14 + 2] [i_16 + 1] = arr_37 [i_5] [i_7] [9] [i_14];
                        var_32 ^= (((arr_30 [i_7 + 1] [i_5]) ? (arr_13 [i_5 + 1] [i_7]) : var_10));
                    }
                    for (int i_17 = 1; i_17 < 23;i_17 += 1) /* same iter space */
                    {
                        arr_58 [i_17] [i_7] [i_14 - 1] [i_13 + 2] [i_7] [i_7] [i_5] = (((arr_48 [i_7] [i_5 + 3]) ^ var_6));
                        var_33 = ((-(~1217569873)));
                        arr_59 [i_5] [i_5 + 1] [i_5] [i_7] [i_5] = 1217569873;
                        var_34 = (max(var_34, var_9));
                    }
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        arr_62 [i_5 + 3] [i_7] = var_2;
                        var_35 += (((1227049419 != (arr_48 [16] [i_7]))));
                    }
                    var_36 ^= (-var_9 ^ 1835412371);
                    var_37 = var_7;
                    var_38 = (arr_26 [i_5] [i_13 + 1] [i_14 - 1]);
                }
                for (int i_19 = 0; i_19 < 24;i_19 += 1)
                {
                    var_39 = var_0;

                    for (int i_20 = 0; i_20 < 24;i_20 += 1)
                    {
                        var_40 ^= ((var_8 | 1037974351) % var_8);
                        arr_68 [i_5] [i_7] [i_13] [i_7] [i_20] [i_7] = 1735044177;
                    }
                    var_41 = (min(var_41, ((((arr_67 [i_5 + 1] [18]) && -840877257)))));
                    var_42 = var_0;
                }
                for (int i_21 = 0; i_21 < 24;i_21 += 1)
                {
                    var_43 = ((arr_60 [i_5] [i_5] [i_7]) ? ((((var_10 > (arr_65 [i_7] [i_7 + 1] [13] [i_21] [i_7]))))) : (var_1 & var_11));
                    var_44 = ((var_7 != (853730565 - -1643548136)));

                    for (int i_22 = 1; i_22 < 22;i_22 += 1)
                    {
                        arr_74 [i_7] [i_21] [i_13] [i_7 - 1] [i_7] = 1;
                        var_45 += (((arr_26 [21] [19] [i_21]) - 1718751319));
                    }

                    for (int i_23 = 0; i_23 < 24;i_23 += 1)
                    {
                        var_46 = var_6;
                        var_47 = 1217569883;
                        var_48 = (-786328538 | 3849259767);
                        var_49 *= 1496739177;
                    }
                    arr_77 [i_7] [i_7 + 1] [14] [i_13 - 1] = -16;
                }
                var_50 ^= (((var_11 > 3067917870) - -931327358));
            }
            for (int i_24 = 0; i_24 < 24;i_24 += 1)
            {

                for (int i_25 = 1; i_25 < 21;i_25 += 1)
                {
                    var_51 = ((3849259767 ? 3544820466 : 1496739177));
                    var_52 ^= -1496739178;
                    arr_83 [i_5] [i_7] [i_24] [i_7] [i_25] [i_5] = 840877255;
                    arr_84 [i_7] = var_2;
                }
                arr_85 [i_7] = ((2 ^ var_0) * -var_10);
                arr_86 [i_7] [21] [i_7] [i_7] = var_9;
                arr_87 [i_7] [i_7] = arr_61 [i_24] [i_7] [23] [i_7] [i_7] [i_7] [i_5 + 3];
            }
        }
        var_53 = (max(var_53, var_7));
    }
    #pragma endscop
}
