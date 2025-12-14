/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (arr_0 [i_0] [9]);
        var_21 = max(((((arr_0 [i_0] [i_0]) <= var_13))), -1617981149);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = (((arr_4 [i_1]) ? -2147483633 : var_16));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                var_23 = (((((var_9 ? var_7 : var_6))) ? 2147483612 : var_14));
                var_24 = (var_3 && var_19);
                arr_12 [15] |= ((var_12 ? (arr_11 [i_3 - 3] [i_3] [i_3] [i_3 - 1]) : 2147483612));

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_25 = ((~(arr_13 [i_3 + 2] [i_3 + 2] [i_3 - 2] [i_3 + 1])));
                    arr_15 [i_1] [i_2] = -2147483613;
                    var_26 |= (((arr_1 [i_3 - 3]) < var_17));
                }
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_27 += var_18;
                            arr_23 [i_1] [i_1] [i_2] [i_5] [i_5] [i_7] = ((var_1 < (arr_17 [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_5])));
                            var_28 = ((-(arr_19 [i_5] [i_6 - 2] [i_6 - 2] [i_6 - 3])));
                            arr_24 [i_1] [i_1] [i_2] [i_5] [i_1] [i_5] [i_7] = var_15;
                            arr_25 [i_5] [i_2] [i_5] [i_2] [i_5] = (((((!(arr_16 [5] [i_5] [i_6 - 1] [i_7])))) % (arr_3 [i_7] [i_7])));
                        }
                    }
                }
                var_29 = (arr_9 [i_2]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_30 = (!2147483612);
                            arr_32 [i_1] [i_2] [i_2] [i_8] [i_5] = (((((var_12 ? 4611 : var_14))) ? 152 : ((var_1 ? var_11 : var_9))));
                        }
                    }
                }
                var_31 = 1;
            }
            arr_33 [i_1] [i_1] [i_2] = (arr_5 [i_1] [i_2]);
            var_32 = (max(var_32, (var_5 % 194)));
        }
        var_33 = (var_1 - var_16);
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                {
                    arr_38 [i_10] [i_10 + 1] [i_11 - 1] = var_19;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_34 = ((((((arr_31 [i_13 + 2] [0] [i_11 + 1] [0] [i_1]) ? -32755 : (arr_17 [10] [10] [i_12] [i_10])))) ? (arr_40 [i_10 - 2]) : var_4));
                                var_35 *= var_1;
                                arr_45 [i_13] [i_12] [i_10] [i_10] [5] [15] = ((!(arr_22 [i_10] [i_13 + 1] [i_11 - 1] [i_10 - 1] [i_10])));
                                var_36 = (((arr_30 [i_10 - 1] [i_11 - 1] [i_10] [i_13 - 4] [i_13 - 4]) & 4219465645));
                                var_37 = (max(var_37, (((((-32764 ? var_11 : var_12)) - (!var_9))))));
                            }
                        }
                    }
                    var_38 = (((arr_18 [i_11 + 1] [i_11] [i_11 - 1] [i_11 + 1] [4]) ? (arr_18 [i_11] [i_11] [7] [i_11 + 1] [i_11 + 1]) : var_7));
                }
            }
        }
        arr_46 [i_1] = (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    for (int i_14 = 0; i_14 < 12;i_14 += 1)
    {
        /* LoopNest 3 */
        for (int i_15 = 2; i_15 < 9;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    {
                        arr_59 [i_14] [i_14] [i_16] [i_17] = (((((-(arr_54 [i_14] [i_15 + 2] [i_15 + 2] [i_17])))) && ((((arr_49 [i_15 + 3] [i_17]) ? -28434 : var_0)))));
                        arr_60 [i_17] [i_14] [i_15] [i_14] = (((((!((((arr_20 [i_15 - 1] [i_15] [i_15] [i_15]) ? 40 : (arr_52 [i_14] [i_16] [i_17]))))))) | 20));
                        arr_61 [i_14] [i_15] = (~-2147483612);
                    }
                }
            }
        }
        arr_62 [i_14] &= (min(((((arr_47 [i_14] [i_14]) ? (arr_43 [i_14] [i_14] [i_14] [i_14] [i_14]) : var_12))), (max(((max(155, -31515))), var_16))));
        var_39 ^= ((((!(arr_40 [i_14]))) ? (arr_40 [i_14]) : ((-1 ? var_11 : var_15))));
    }

    for (int i_18 = 0; i_18 < 12;i_18 += 1)
    {
        arr_67 [i_18] = var_13;
        var_40 = (var_9 != var_12);
        arr_68 [i_18] [i_18] = ((~(min(((var_11 & (arr_34 [i_18] [i_18]))), (-6876497429171514579 & 4294967273)))));
    }
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 25;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {
            {
                var_41 ^= -28434;
                var_42 = (((((1 ? (((arr_71 [i_19] [i_19]) & var_0)) : (((((arr_72 [i_19] [4] [4]) || 727834373))))))) || ((((arr_74 [i_19] [i_20]) + (arr_69 [i_19]))))));

                /* vectorizable */
                for (int i_21 = 0; i_21 < 25;i_21 += 1)
                {
                    arr_78 [i_19] [i_19] = ((var_0 ? ((var_3 ? -2147483644 : var_13)) : ((-(arr_77 [i_19] [i_19] [i_21])))));
                    arr_79 [i_19] = (arr_73 [i_19] [i_20] [i_19]);
                }
            }
        }
    }
    #pragma endscop
}
