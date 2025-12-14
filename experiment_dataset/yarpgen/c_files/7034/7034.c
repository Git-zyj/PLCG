/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (((((arr_2 [i_0]) ? (var_0 && var_13) : ((var_13 ? (arr_2 [14]) : (arr_0 [i_0])))))) ^ (max(var_10, ((min((arr_1 [i_0]), -70))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = ((((arr_5 [i_1 - 1]) ? (arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : ((-1351406539 ? var_7 : (arr_3 [i_0] [i_0] [i_2]))))));

                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        var_21 = (((!1) ^ 1));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            var_22 -= ((var_14 * ((var_3 ? (arr_11 [i_3] [i_1] [i_1] [i_0]) : var_3))));
                            var_23 = -738756698;
                            var_24 = (((((var_13 ? (arr_13 [1] [1] [1] [1] [i_3] [i_4 + 1] [i_4]) : (arr_6 [i_4 + 1] [i_0] [i_0])))) == (124 ^ -7648188274924362717)));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            var_25 = 0;
                            var_26 -= ((-(arr_11 [i_3 - 2] [i_3 + 2] [i_3 + 1] [i_3 - 2])));
                            var_27 |= ((!3062660941) > (arr_16 [i_2 + 1] [i_2] [i_2]));
                        }
                    }
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        var_28 = 9264;

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_29 = 18707;
                            var_30 = (((1 - (arr_3 [i_6 + 2] [i_1 - 1] [i_2 + 1]))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_31 = (max(var_31, (((-(arr_0 [i_0]))))));
                            var_32 &= var_0;
                            var_33 |= 3454566897;
                            var_34 = (min(var_34, (((-5669657812244119228 <= -1351406533) <= ((~(arr_2 [i_2])))))));
                        }
                        var_35 = ((((-6168557456183218204 && var_16) > var_12)));
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_36 = (arr_27 [i_0]);
            var_37 = (min(var_37, ((((arr_24 [i_0]) > (((arr_24 [i_0]) ? (arr_21 [i_0] [i_9] [i_9] [1] [i_9]) : (arr_21 [i_9] [i_9] [i_0] [i_0] [i_0]))))))));
        }
        var_38 = ((!(((arr_26 [13] [i_0] [i_0] [i_0] [13] [i_0] [i_0]) != (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_39 ^= (((((arr_29 [i_0]) - var_8)) | (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 23;i_10 += 1)
    {
        var_40 = ((((arr_30 [i_10] [i_10]) ? var_0 : var_9)));
        var_41 = ((!((((arr_32 [i_10 + 1]) ? -71 : 73)))));

        for (int i_11 = 4; i_11 < 21;i_11 += 1)
        {
            var_42 = (((arr_32 [i_10 + 1]) && (var_3 || var_6)));
            var_43 = var_14;
            var_44 |= ((arr_31 [i_10 - 1]) + (arr_30 [i_10] [i_10]));
            /* LoopNest 2 */
            for (int i_12 = 3; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_45 = -71;
                        var_46 = (max(var_46, var_1));
                        var_47 = (((!3454566900) ? 575 : var_12));
                        var_48 *= ((var_2 != (arr_31 [i_10])));
                    }
                }
            }
            var_49 = arr_30 [i_11] [i_11 + 2];
        }
        for (int i_14 = 4; i_14 < 23;i_14 += 1) /* same iter space */
        {
            var_50 ^= (32 > var_4);

            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                var_51 |= (((arr_32 [i_10 + 1]) / (arr_40 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 1])));
                var_52 = (arr_34 [i_10 - 1]);
            }
            for (int i_16 = 1; i_16 < 1;i_16 += 1)
            {
                var_53 += var_17;
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_54 = ((((((arr_30 [i_16] [i_18]) - (arr_42 [i_16] [i_14] [i_16])))) ? 9223372036854775807 : (arr_30 [i_10] [i_10])));
                            var_55 = ((var_10 || (arr_40 [i_10 + 1] [i_16 - 1] [i_16 - 1] [i_10 + 1])));
                        }
                    }
                }
                var_56 = (var_1 + -57434);
            }
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                var_57 = (((((arr_30 [i_10] [i_10]) != (arr_55 [i_19] [i_19] [12] [i_19]))) ? 3426846368 : 606809116));
                var_58 = ((-(arr_42 [i_14 - 4] [i_14 + 1] [i_10 + 1])));
                var_59 = var_0;
                var_60 = (((~(arr_50 [i_10] [1] [i_10] [i_10] [i_10] [i_10]))));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 24;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 24;i_21 += 1)
                    {
                        {
                            var_61 = (((arr_35 [i_14 - 4] [i_14 - 3] [i_14]) ? (arr_35 [i_14 - 1] [i_14 - 1] [i_14 - 1]) : (arr_35 [i_14 + 1] [i_14] [i_14])));
                            var_62 = ((arr_30 [i_10 - 1] [i_10 + 1]) > var_16);
                        }
                    }
                }
            }
            var_63 = (((arr_59 [i_14 - 1] [23] [i_10] [23] [i_10]) < (arr_59 [i_10 + 1] [i_10] [1] [i_10 - 1] [i_10])));
        }
        for (int i_22 = 4; i_22 < 23;i_22 += 1) /* same iter space */
        {
            var_64 = (max(var_64, (((4253057948 ? (arr_60 [i_10] [i_10] [i_22 - 2] [1] [1]) : 3062660941)))));
            var_65 = ((1 >> (((arr_43 [i_10 - 1] [i_22 - 2]) - 43))));
        }
        var_66 = (3454566909 <= var_4);
    }
    #pragma endscop
}
