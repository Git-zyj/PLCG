/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((10762 ? (((var_3 ? var_1 : (var_8 <= var_7)))) : var_9));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_11 = (((arr_0 [i_0] [i_0]) * var_4));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_12 = (arr_11 [i_0] [i_1] [i_2] [i_3]);
                            var_13 = (((((var_6 ? (arr_0 [i_4 + 1] [i_4 - 2]) : (arr_0 [i_4 + 3] [i_4 - 1])))) ? ((var_7 + (arr_9 [i_3 + 2] [i_3] [i_3 + 2] [i_4 + 2] [i_4] [i_4]))) : (~10762)));
                        }
                    }
                }
            }
        }
        for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
        {
            var_14 = var_1;
            var_15 = (((~-4) ? ((min(var_4, (arr_6 [i_5 - 1] [i_5 + 1] [i_5 - 2])))) : ((-(arr_9 [i_5] [i_5] [i_5] [i_5] [i_5 + 1] [i_0])))));

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_16 = var_7;
                var_17 = ((((min((arr_15 [i_0] [i_0] [i_0]), (arr_15 [i_0] [i_5] [i_0])))) % 4));
                var_18 = (arr_10 [i_0] [i_0] [i_5] [i_5] [i_0] [i_0]);
            }
            var_19 *= (max(1268654394, 46));
        }
        for (int i_7 = 2; i_7 < 22;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        var_20 = (((((var_5 ? var_0 : (arr_20 [i_9] [i_9] [i_9 - 1] [i_9 - 1])))) ? (arr_8 [i_8] [i_7]) : ((min(var_5, var_4)))));
                        var_21 = (arr_4 [i_7 + 1]);
                        var_22 = (((-4 | var_5) ? (min(var_7, var_9)) : (((max((arr_13 [i_7] [i_7 - 1] [i_7]), (arr_13 [i_7] [i_7 - 2] [i_8])))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {
                        var_23 = (max(var_23, -19));
                        var_24 |= ((-((((var_8 + (arr_1 [i_0]))) - var_7))));
                    }
                }
            }

            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {

                /* vectorizable */
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    var_25 = var_0;
                    var_26 = ((((20 ? 5 : 969669952)) >= ((((arr_24 [i_0] [i_0] [i_0] [i_7] [i_7]) / var_6)))));
                    var_27 = (arr_27 [i_7] [i_7 + 1]);
                }
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    var_28 = (min(var_28, var_5));
                    var_29 = var_1;
                    var_30 ^= (((arr_0 [i_7 - 1] [i_7 - 2]) | ((var_6 ? var_1 : (arr_0 [i_7 + 1] [i_7 - 1])))));
                    var_31 -= var_6;
                    var_32 = ((~((~(arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                }
                for (int i_15 = 3; i_15 < 21;i_15 += 1)
                {
                    var_33 ^= 25;
                    var_34 = min((!var_8), ((~((-1 ? var_9 : var_5)))));
                    var_35 = (arr_27 [i_15] [i_12]);

                    for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                    {
                        var_36 = ((1011039544 ? -10764 : 121));
                        var_37 = (((((arr_12 [i_12 - 1]) > var_0)) ? -13112 : -13112));
                        var_38 = var_6;
                        var_39 = var_5;
                    }
                    for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                    {
                        var_40 = var_1;
                        var_41 = (max(((max(11485, 0))), ((((((arr_48 [i_15]) + (arr_4 [i_17])))) ? (arr_4 [i_0]) : -1))));
                        var_42 = (arr_18 [i_12] [i_12 - 1] [i_12 - 1]);
                    }
                    for (int i_18 = 3; i_18 < 22;i_18 += 1)
                    {
                        var_43 = (arr_50 [i_18] [i_0] [i_12] [i_15] [i_15]);
                        var_44 = min((arr_33 [i_18]), var_3);
                    }
                }
                var_45 = (max((((arr_27 [i_7 - 2] [i_12]) / (arr_2 [i_12] [i_0]))), var_1));
            }
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 23;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        {
                            var_46 = ((~(arr_53 [i_20] [i_20] [i_7 - 1] [i_7])));
                            var_47 = ((var_9 <= (((-(arr_12 [i_20]))))));
                            var_48 = (var_1 % var_8);
                            var_49 = (arr_9 [i_0] [i_0] [i_0] [i_7] [i_7] [i_7 - 2]);
                        }
                    }
                }
                var_50 ^= ((((((((arr_61 [i_0] [i_0] [i_0] [i_7] [i_19] [i_19]) - (arr_48 [i_0])))) ? (arr_37 [i_0]) : (var_2 != var_2))) >= ((219 ^ ((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 10748)))))));
                var_51 = (max((max((arr_2 [i_0] [i_7 + 1]), var_8)), (arr_2 [i_0] [i_7 + 1])));
            }
            /* vectorizable */
            for (int i_22 = 0; i_22 < 23;i_22 += 1)
            {
                var_52 = (arr_52 [i_0] [i_7] [i_7 - 2]);
                var_53 = ((18 >= (arr_52 [i_0] [i_7] [i_22])));
                var_54 ^= 38;
            }
            var_55 = (min(var_55, var_7));
        }

        for (int i_23 = 0; i_23 < 23;i_23 += 1)
        {
            var_56 = (min(var_56, (((~((min(241, (arr_67 [i_0])))))))));
            var_57 = ((17457150856701075942 ? 17457150856701075942 : 7));
            var_58 = (min(var_58, (((var_7 || ((min((arr_14 [i_0] [i_23]), (arr_14 [i_0] [i_0])))))))));
        }
        var_59 = ((46 ? -8473785869650558508 : 9164879));
        var_60 = (arr_33 [i_0]);
        var_61 ^= ((((((arr_41 [i_0] [i_0] [i_0]) ? (arr_41 [i_0] [i_0] [i_0]) : (arr_33 [i_0])))) ? var_8 : (((arr_50 [i_0] [i_0] [i_0] [i_0] [i_0]) ? -10764 : (arr_50 [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    for (int i_24 = 1; i_24 < 9;i_24 += 1)
    {
        var_62 = (((((((((arr_18 [i_24] [i_24] [i_24]) ? var_0 : var_9))) ? var_3 : ((1011039545 ? (arr_62 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]) : (arr_31 [i_24] [i_24] [i_24])))))) ? ((var_4 ? 3026312899 : 10336293534675019495)) : (((var_3 ? var_4 : (arr_8 [i_24 - 1] [i_24 + 1]))))));
        var_63 = ((((var_0 ? 0 : (arr_55 [i_24 - 1] [i_24])))) ? var_4 : ((~(arr_51 [i_24 - 1] [i_24 - 1] [i_24 + 1]))));
    }
    #pragma endscop
}
