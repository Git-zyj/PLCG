/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (127 < 255);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_14 = var_3;
            var_15 = arr_5 [i_1];
            var_16 = (max(var_16, 15));
        }
        var_17 = (max(var_17, (((-((min((arr_1 [4]), (arr_1 [18])))))))));
        var_18 = (max(((var_8 - (arr_1 [i_0]))), 8));
        arr_6 [i_0] = ((-var_5 ? (max(var_9, 5710390377597438713)) : (((arr_0 [i_0]) / (arr_2 [i_0] [i_0])))));
        var_19 = (arr_0 [i_0]);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_10 [17] [i_2] = (((-var_6 && var_7) ? (((arr_5 [i_2]) ? (arr_2 [i_2] [i_2]) : 26)) : var_10));

        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_20 = (min((arr_1 [i_3]), (arr_1 [i_3])));
            var_21 = (min(((max(var_3, var_1))), ((255 ? (arr_4 [i_3]) : (arr_12 [i_2])))));
            var_22 = (((var_4 + (arr_2 [i_2] [i_3]))) ^ ((-(arr_2 [i_2] [i_3]))));
            var_23 = (min((arr_1 [i_3]), 15));
            var_24 = (min(((var_5 ? var_2 : (min(var_10, var_8)))), -37));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                var_25 = ((+((var_4 ? (arr_2 [i_2] [i_4]) : var_4))));

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_26 = -1607273951;
                        arr_24 [i_2] [i_4] [i_5 - 2] [i_6] [i_7] = (((((var_4 == (-9223372036854775807 - 1)))) <= 151));
                        var_27 = (arr_19 [i_4] [i_4] [i_5 - 2] [i_5 - 1]);
                    }
                    var_28 = ((var_11 != (!var_3)));
                }
                var_29 = (min(var_29, (arr_18 [i_2])));
                var_30 = ((~(arr_11 [i_2])));

                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_31 = ((255 ? (arr_26 [i_5 - 1] [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 1]) : var_3));
                    var_32 &= var_1;
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_33 += (arr_4 [i_4]);
                    var_34 = var_6;
                }
            }
            /* vectorizable */
            for (int i_10 = 3; i_10 < 18;i_10 += 1)
            {
                var_35 = ((var_12 << (-var_4 + 237)));
                var_36 += (arr_27 [i_2]);
                var_37 *= (((arr_32 [13]) ? var_5 : (var_11 && var_8)));
                var_38 = arr_26 [i_10] [i_10] [i_10] [i_10] [7] [i_10 - 3];
                var_39 += (arr_19 [i_2] [i_4] [i_10 - 3] [i_10]);
            }
            arr_34 [i_2] [11] [i_2] = min((((var_9 ? (arr_21 [14] [i_2] [i_2] [i_2]) : (arr_21 [2] [i_4] [i_4] [i_4])))), (max(2081688043, var_8)));
        }
    }
    for (int i_11 = 2; i_11 < 8;i_11 += 1)
    {
        var_40 = ((((min(4074603963, var_7))) ? (arr_21 [18] [18] [12] [i_11]) : ((((arr_36 [i_11 + 3] [i_11 + 2]) <= (arr_35 [i_11 - 1]))))));
        arr_38 [i_11] [i_11] = ((+((max((arr_20 [i_11 + 1] [i_11 - 1]), 124)))));
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 4; i_13 < 7;i_13 += 1)
            {
                {
                    arr_43 [i_12] [4] = 235;
                    var_41 = (min(var_41, (((-var_5 ? ((min(204, (arr_4 [i_11])))) : (var_7 > var_1))))));

                    for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                    {
                        arr_47 [i_11] [i_11] [i_11] [i_11] [i_11 + 1] [i_11 + 1] = ((((((var_8 ? var_6 : var_8)))) ? -13 : ((-122 ? ((var_8 ? -15 : 34)) : 214))));
                        arr_48 [i_11 - 1] [i_12 - 2] [i_13 - 4] [i_11 - 1] [i_12 - 2] = ((-118 && (((arr_11 [i_11 + 3]) > (((arr_28 [6] [i_12] [i_11] [16] [i_14]) ? 3056271578 : 119))))));

                        for (int i_15 = 3; i_15 < 10;i_15 += 1)
                        {
                            var_42 = ((var_0 > 33) / -4294967281);
                            arr_51 [10] [i_12 + 1] [10] [i_12 - 1] [i_12 - 2] = 288160007407534080;
                            var_43 = (max(var_43, ((max((arr_35 [i_11]), ((-1314437966685425681 ? var_0 : 33)))))));
                            var_44 = (~var_9);
                            var_45 += 100;
                        }
                        for (int i_16 = 2; i_16 < 7;i_16 += 1)
                        {
                            var_46 = (arr_27 [i_14]);
                            arr_55 [i_16] [i_14] [0] [i_12] [i_12] [0] [i_11] = ((234 ? (((arr_33 [1] [i_12 + 1]) ? (((var_9 ? var_5 : var_9))) : (min(var_12, -796687533560650486)))) : ((var_6 & (arr_45 [i_13 - 2] [i_13 - 2] [i_13 - 2] [i_13 - 2])))));
                        }
                    }
                    for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
                    {
                        var_47 = (min(var_47, (max(((min(11, var_5))), (min((((-6623885940348617589 ? var_10 : (arr_22 [3] [i_11] [3] [i_12] [3] [i_13] [3])))), (var_8 + -2948661815527033704)))))));

                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 11;i_18 += 1)
                        {
                            var_48 = var_1;
                            arr_60 [i_11] [i_11] [i_17] [3] [i_11] [i_18] [i_13] = (((arr_52 [i_11 - 2] [i_11 - 1] [i_12 - 2] [i_13] [i_13 + 4]) ? ((((arr_35 [i_17]) == 127))) : 14));
                            var_49 = (((arr_40 [i_11 - 1] [i_12 - 1] [i_13 + 2]) ? var_9 : -2636175024906220087));
                            var_50 = (arr_27 [i_18]);
                        }
                        /* vectorizable */
                        for (int i_19 = 4; i_19 < 7;i_19 += 1)
                        {
                            var_51 = (((arr_11 [i_19 - 4]) ? (arr_40 [3] [3] [i_11]) : ((var_6 ? var_4 : -8401840159410522943))));
                            var_52 ^= (((-(arr_32 [i_13]))));
                        }
                        var_53 = (!var_6);
                    }
                    var_54 = (max(((((arr_53 [i_11] [i_11] [i_11] [i_12] [i_12 - 1] [i_13]) < -28))), ((23 ? -6710238317383494449 : -6631469144084307265))));
                }
            }
        }
    }
    #pragma endscop
}
