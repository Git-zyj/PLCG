/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (arr_2 [i_0])));
        var_21 *= (arr_0 [16]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = (arr_2 [i_0]);
            var_22 = (max(var_22, 1));
        }
        arr_6 [i_0] [i_0] = ((~(~var_14)));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_23 = -var_11;
            var_24 = (min(var_24, (((!(!-4537086291178548455))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_20 [i_2] [i_3 - 1] [i_4] [i_4] [i_4] = ((~((((((arr_18 [i_5] [i_5] [i_4] [i_3] [i_2] [i_2]) ^ 0))) & (arr_9 [i_2] [i_5])))));
                        var_25 = 189;
                        arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] = (max((max((arr_19 [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 1] [i_3]), 0)), var_17));
                        arr_22 [i_2] [7] [i_4] [i_5] [i_2] [i_2] |= ((-(((max(8913486955764395283, 16388688637593014677)) - 1))));
                        arr_23 [i_2] [i_3] [i_4] [i_5] = (+-8913486955764395283);
                    }
                }
            }
        }
        for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_26 = 7494387421445152783;
            var_27 = max((arr_9 [i_6 - 1] [i_2]), -1);
            var_28 = (max(var_28, (((~(max(249, (var_17 | var_3))))))));
            var_29 = (max(var_29, (arr_1 [i_2])));
            arr_28 [i_2] [i_2] [i_2] = ((1 ? 240 : ((-(((arr_8 [i_6]) * 22))))));
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        var_30 -= (((3469298362 + (arr_30 [i_9]))));
                        arr_38 [i_2] [i_2] [i_7] [i_7] [i_2] = var_17;
                        arr_39 [i_8] [i_8] = (arr_13 [i_8] [i_7 - 1] [i_7 - 1] [i_2]);
                    }
                }
            }

            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                var_31 = (8913486955764395286 && 4015832251);
                var_32 = ((!(~-67)));

                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_33 += (((((1 ? (arr_11 [1]) : (arr_10 [i_2] [i_2])))) ? (((1 + (-2147483647 - 1)))) : (arr_27 [i_10])));

                    for (int i_12 = 3; i_12 < 16;i_12 += 1)
                    {
                        arr_48 [i_11] [i_11] [i_11] [i_10] [i_11] [i_11] = (((var_16 + 9223372036854775807) >> (arr_31 [4] [4] [i_7 + 1])));
                        var_34 = 550905495;
                    }
                }
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    var_35 = var_7;
                    var_36 = (((~(arr_45 [4] [4] [4] [i_2] [i_13] [1] [i_13]))));
                }
            }
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                arr_53 [i_2] [i_2] = ((545543689775406945 ? var_2 : ((~(arr_14 [i_2])))));
                var_37 &= 0;
                arr_54 [i_2] [i_2] [i_14] [0] = (((arr_33 [i_7]) + (arr_13 [i_14] [i_7 - 1] [i_2] [i_2])));
            }
            var_38 = (!var_10);
        }
        for (int i_15 = 1; i_15 < 17;i_15 += 1) /* same iter space */
        {
            var_39 = (~var_17);

            for (int i_16 = 0; i_16 < 19;i_16 += 1)
            {
                var_40 *= 9533257117945156319;
                var_41 = (((!(!65522))) ? (((var_9 || (((arr_56 [i_16] [i_15]) || 1))))) : (!3469298362));
                var_42 += ((-(max((arr_13 [i_2] [i_15 + 1] [i_15 + 1] [i_16]), (arr_13 [i_2] [i_2] [i_2] [i_2])))));
            }
            var_43 = (var_9 - var_18);
            var_44 = (min(var_44, ((((arr_33 [i_15]) <= (arr_0 [i_2]))))));
            var_45 = (-((-(arr_46 [3] [i_15] [i_15 - 1] [i_15] [i_15] [i_15] [i_15]))));
        }
        arr_60 [i_2] = (max((~8913486955764395307), (arr_2 [i_2])));
    }

    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        arr_63 [i_17] |= (((((arr_61 [i_17]) >> (-39 + 46)))) || ((!(-127 - 1))));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 21;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                {
                    var_46 *= arr_66 [5];
                    var_47 *= (!var_13);
                    var_48 = (((arr_65 [i_17]) ? ((-(arr_62 [i_18] [i_19]))) : ((+(((arr_66 [i_19]) ? 48 : var_1))))));
                    var_49 = 1;
                }
            }
        }

        /* vectorizable */
        for (int i_20 = 1; i_20 < 17;i_20 += 1)
        {
            var_50 = ((arr_73 [i_20] [i_20 + 1] [i_20]) / (arr_73 [i_20] [i_20 - 1] [i_20]));

            for (int i_21 = 0; i_21 < 21;i_21 += 1)
            {
                var_51 = var_18;
                arr_77 [i_17] [i_20] = (arr_61 [i_20 - 1]);
                var_52 = 186;
            }
            arr_78 [16] [18] [i_20] = (arr_66 [i_20 + 2]);
            var_53 = 1;
        }
        /* vectorizable */
        for (int i_22 = 0; i_22 < 1;i_22 += 1)
        {
            var_54 = (max(var_54, (((~(arr_72 [1] [i_22] [1]))))));
            var_55 = (!-38);
        }
        var_56 = (((arr_72 [1] [1] [6]) ? 6513 : ((((arr_65 [i_17]) > (arr_65 [i_17]))))));
    }
    for (int i_23 = 0; i_23 < 25;i_23 += 1)
    {
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 25;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 25;i_25 += 1)
            {
                {
                    arr_88 [i_23] [i_24] [i_25] = 45758;
                    var_57 = (max(var_57, -var_11));
                }
            }
        }
        arr_89 [i_23] [i_23] = (max((((!(arr_87 [i_23] [i_23] [i_23] [i_23])))), (arr_87 [i_23] [i_23] [i_23] [i_23])));
        /* LoopNest 3 */
        for (int i_26 = 0; i_26 < 25;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 25;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 25;i_28 += 1)
                {
                    {
                        var_58 = 65535;
                        var_59 *= ((-(3579977713 < var_1)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 1;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 0;i_30 += 1)
            {
                {
                    arr_105 [i_23] [i_29] [i_29] [i_23] = (((arr_86 [i_30 + 1] [i_30 + 1] [i_30 + 1]) >= ((-7494387421445152784 ^ (((var_1 ? var_2 : (arr_81 [i_30] [i_23]))))))));
                    var_60 = (((~(~var_2))));
                    var_61 = ((-(arr_84 [18])));
                    var_62 -= -var_18;
                }
            }
        }
    }
    #pragma endscop
}
