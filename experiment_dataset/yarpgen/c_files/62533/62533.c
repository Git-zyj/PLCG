/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_20 ^= (((1 ? 1286768357 : 1)));
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) * var_18));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_21 = (arr_1 [i_1]);
        var_22 -= var_10;
        var_23 &= -1286768358;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {
                    var_24 &= var_5;
                    var_25 = min((((arr_11 [i_4] [i_4 - 2]) ? var_2 : 1286768357)), ((((arr_11 [i_3] [i_4 + 2]) ? (arr_11 [i_2] [i_4 + 1]) : (arr_11 [18] [i_4 - 1])))));
                    var_26 = (max(var_13, (((((min(var_18, 50557))) ? ((((arr_9 [i_2] [i_2] [i_2]) && (arr_13 [i_2])))) : ((var_0 ? -1739705723 : (arr_7 [i_2]))))))));
                    var_27 = (max(var_27, ((((((-1739705731 ? (arr_8 [0]) : (arr_8 [6])))) ? (!var_18) : ((-4705470579831591264 ? 8822290036888381898 : 1286768357)))))));
                    var_28 = (min(var_28, ((((((var_14 ^ var_3) || (!-93))) ? (min((arr_9 [i_3 - 3] [i_3 + 1] [i_3 - 1]), var_2)) : 1)))));
                }
            }
        }
        var_29 ^= (max(var_17, ((var_14 ? -194426622605006680 : (max((arr_6 [i_2] [i_2]), var_16))))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = ((arr_9 [i_5] [i_5] [11]) ? (((1 || (arr_10 [i_5])))) : ((((arr_6 [i_5] [1]) && 1))));
        arr_19 [i_5] &= var_1;
        arr_20 [i_5] [i_5] |= (arr_11 [i_5] [i_5 - 2]);

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_23 [i_6] [i_6] [i_6] = (arr_13 [i_6]);
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_30 = (max(var_30, (((-((var_19 ? (arr_10 [i_8]) : (arr_11 [i_5] [i_5]))))))));
                            arr_30 [i_6] [i_5] [i_7] = (var_0 ? (~var_18) : 2647448714794189671);
                        }
                    }
                }
            }
        }
        for (int i_10 = 2; i_10 < 15;i_10 += 1)
        {
            var_31 += ((92 ? (arr_7 [i_5 - 2]) : var_3));
            var_32 *= var_17;
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 16;i_12 += 1)
                {
                    {
                        arr_40 [i_11] [4] [i_11] [i_12] [i_5] = (arr_22 [i_10 - 1]);
                        var_33 = ((~(arr_21 [i_5 - 1] [i_11 + 1])));
                        var_34 = (arr_38 [i_12] [i_11 + 1] [i_11 - 1] [i_10] [i_10] [i_5 - 1]);
                        var_35 *= (((arr_15 [i_5 - 1]) ? var_0 : (arr_15 [i_5 - 2])));
                    }
                }
            }
        }
        for (int i_13 = 1; i_13 < 16;i_13 += 1)
        {
            arr_43 [i_5] [i_5] |= var_13;

            for (int i_14 = 2; i_14 < 16;i_14 += 1) /* same iter space */
            {
                arr_48 [i_5] [i_14] [i_5] &= ((var_19 ? (arr_12 [i_14] [i_14] [i_5]) : (arr_35 [1] [1] [i_14 - 2])));
                var_36 = (((arr_36 [i_13] [i_13] [i_14 + 1] [i_14]) || (arr_36 [i_5] [i_13 - 1] [i_14 - 1] [i_14])));
                var_37 = (((arr_12 [i_5] [i_13] [i_13]) ? (arr_44 [i_5] [i_5 + 1] [i_5] [i_5]) : var_17));
            }
            for (int i_15 = 2; i_15 < 16;i_15 += 1) /* same iter space */
            {
                var_38 = 2147483647;

                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    arr_55 [i_15] |= (arr_49 [i_5] [i_5 - 1] [i_15] [i_16]);
                    var_39 ^= (arr_12 [i_5] [i_5] [i_16]);
                    var_40 ^= (!var_16);
                }
                for (int i_17 = 1; i_17 < 15;i_17 += 1)
                {
                    var_41 = (min(var_41, (arr_45 [i_13 - 1] [i_15 - 1])));
                    var_42 = (!var_10);
                }
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    arr_61 [i_13] [i_13 + 1] [i_13 + 1] = (~(arr_7 [i_15 + 1]));
                    arr_62 [i_13] = (((-1 + 2147483647) >> (arr_22 [i_5 + 1])));
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 17;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 17;i_20 += 1)
                    {
                        {
                            var_43 ^= (!33554431);
                            var_44 = ((arr_10 [i_20]) | var_11);
                            var_45 = (max(var_45, ((((arr_31 [i_15 - 2]) ? (arr_31 [i_15 + 1]) : (arr_31 [i_15 - 1]))))));
                        }
                    }
                }
                var_46 = ((!(arr_26 [i_15] [i_15] [i_15 - 1] [i_15 + 1] [i_15] [i_13 + 1])));
            }
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                arr_71 [i_5] [i_13] [i_13] [i_21] = ((arr_56 [i_5 - 1] [i_13 + 1] [i_13] [i_5 - 1] [i_5]) ? (arr_56 [i_13] [i_13 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 1]) : (arr_56 [i_21] [i_13 - 1] [i_5] [i_5 - 1] [i_5]));
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 17;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 17;i_23 += 1)
                    {
                        {
                            var_47 = (min(var_47, (((((arr_54 [i_5] [i_5]) ? 1690215560 : (arr_63 [i_13] [i_13] [i_13] [i_13])))))));
                            var_48 = (max(var_48, (((arr_70 [i_5 - 2] [i_5] [i_5 + 1]) ? ((var_13 ? (arr_50 [i_21] [i_22] [i_23]) : 125)) : ((var_13 ? (arr_7 [i_5 - 2]) : var_19))))));
                        }
                    }
                }
            }
            var_49 = 8389374408654100743;
        }
    }

    /* vectorizable */
    for (int i_24 = 1; i_24 < 19;i_24 += 1)
    {
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 21;i_25 += 1)
        {
            for (int i_26 = 3; i_26 < 19;i_26 += 1)
            {
                {
                    arr_84 [i_25] [i_25] [i_26 + 2] [i_24] = ((!(arr_8 [i_25])));
                    arr_85 [i_26 + 2] [i_25] [10] = -2305843009213693952;
                    var_50 = (((arr_80 [i_25] [i_24]) ? (~81) : 2640530220698627768));
                }
            }
        }
        var_51 ^= ((-(arr_11 [i_24] [i_24])));
        var_52 ^= (((arr_80 [i_24 + 2] [i_24 + 2]) * var_8));
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 21;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 21;i_28 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_29 = 0; i_29 < 21;i_29 += 1)
                    {
                        for (int i_30 = 0; i_30 < 21;i_30 += 1)
                        {
                            {
                                var_53 -= ((0 ? var_17 : -var_14));
                                var_54 = (arr_10 [i_24]);
                                var_55 = (arr_88 [i_24 - 1] [i_27] [i_27] [i_24]);
                                arr_95 [i_27] [i_27] = 30788;
                            }
                        }
                    }
                    arr_96 [i_28] [i_27] [i_27] [1] = (arr_90 [i_27]);
                }
            }
        }
    }
    #pragma endscop
}
