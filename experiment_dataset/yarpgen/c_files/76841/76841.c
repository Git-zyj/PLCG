/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 1605288123037530535));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = var_17;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1] = (~5296860783004814127);
                        var_21 = (min(var_21, ((((arr_5 [i_1] [i_1] [i_3 - 1]) & (arr_5 [i_0] [i_1] [i_3 + 1]))))));
                    }
                }
            }
        }

        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            var_22 = (arr_1 [i_0]);

            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                var_23 = -1838253583374249251;
                var_24 = (arr_17 [i_5 + 3] [i_5] [i_5]);
            }
            var_25 = -7888909322544331311;
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        var_26 *= (arr_6 [i_4] [i_4] [i_6 + 1]);
                        var_27 = ((~(arr_14 [i_6 + 2] [i_6] [i_6])));
                        var_28 = -1838253583374249234;
                        var_29 *= (((arr_1 [i_0]) ? var_18 : 0));
                    }
                }
            }
        }
    }
    var_30 -= var_1;

    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        var_31 = (+-12778);
        arr_28 [i_8] [i_8] = ((+(min((arr_27 [i_8 - 1] [i_8 - 1]), var_8))));
        var_32 &= (arr_27 [i_8 - 1] [i_8 - 1]);
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 18;i_10 += 1)
            {
                {
                    arr_35 [i_10] [i_9] [i_10] &= 32;
                    arr_36 [i_8] [i_8] [i_9] = (arr_25 [i_9]);
                }
            }
        }

        for (int i_11 = 2; i_11 < 19;i_11 += 1)
        {
            var_33 = (max(var_33, (((((((var_15 ? (arr_31 [i_11] [i_11] [i_11] [i_11]) : var_15))) * (arr_29 [i_11] [i_11 - 1])))))));
            var_34 = (~1);
            var_35 += (~var_7);

            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                arr_44 [i_12] [i_12] = max(-1838253583374249241, 544679647);
                arr_45 [i_11] = var_17;
            }
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                var_36 *= ((-152 ? 503342339711165733 : -765138644359043213));
                var_37 = ((-((~(~503342339711165733)))));

                for (int i_14 = 2; i_14 < 17;i_14 += 1)
                {
                    var_38 += ((~(arr_42 [i_8 - 1] [i_11 - 1])));

                    for (int i_15 = 1; i_15 < 16;i_15 += 1)
                    {
                        var_39 = (((~1926396096) ? (((arr_48 [i_15 + 1] [i_15] [i_15 + 4] [i_15] [i_15 + 4]) ? 11252 : 8958402206277904846)) : (arr_48 [i_15 + 3] [i_15] [i_15 + 2] [i_15] [i_15 + 2])));
                        var_40 = (arr_40 [i_11] [i_11 + 1] [i_11]);
                    }
                    var_41 = (min(var_13, ((((arr_51 [i_14] [i_14] [i_8] [i_14] [i_14 + 1]) >= (arr_51 [i_14] [i_8] [i_11] [i_14] [i_14 + 3]))))));
                }
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    var_42 = (min((max((arr_42 [i_8] [i_8 - 1]), (arr_54 [i_8] [i_8] [i_13] [i_13] [i_13] [i_16]))), var_10));
                    var_43 *= ((((((1 ? var_0 : (arr_55 [i_8] [i_8] [i_11] [i_8]))) ? (arr_54 [i_8] [i_11] [i_8] [i_8] [i_16] [i_16]) : (arr_54 [i_8 - 1] [i_8] [i_8] [i_8] [i_8] [i_8 - 1])))));

                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        var_44 = 152;
                        var_45 += (arr_47 [i_8] [i_8] [i_8]);
                    }
                    var_46 = (((arr_48 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_11] [i_11 + 1]) ? (arr_42 [i_11 + 1] [i_11 - 1]) : (((var_12 == (arr_48 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_11] [i_11 - 2]))))));
                }
                var_47 ^= (((~(arr_60 [i_8 - 1] [i_8] [i_11 + 1]))));
            }
        }
    }
    var_48 ^= ((-503342339711165722 ? (var_13 <= -1) : (-315293502 != -114852038042568856)));
    #pragma endscop
}
