/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 81;
    var_16 = var_12;
    var_17 = (max(var_17, (((((((var_12 ? var_11 : 4294967295)) / (22 | var_11))) >> (var_14 + 247040960434617568))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = 170;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [5] [i_0] = var_9;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((max((~var_2), -67)));
                        arr_14 [0] [i_2] [10] [2] = (arr_9 [i_2] [i_2]);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_18 = (min(((~(arr_10 [i_4] [i_4] [i_4] [i_4]))), ((~(arr_10 [i_4] [i_4] [i_4] [i_4])))));
        arr_18 [i_4] [i_4] = ((((arr_4 [i_4] [i_4] [i_4]) < 2147483647)));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {

        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_28 [i_5] [i_6] [i_7 - 1] [19] = var_9;
                        arr_29 [i_5] [i_5] = max((arr_26 [i_8] [i_7] [i_6] [13] [11]), var_2);
                        var_19 = ((-(var_4 < 61)));
                    }
                }
            }

            /* vectorizable */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                var_20 ^= 375817389;
                var_21 = var_3;
                var_22 = (max(var_22, 18));
            }
            for (int i_10 = 3; i_10 < 17;i_10 += 1)
            {
                var_23 = (min(var_23, (~3244092040703083059)));
                var_24 *= (((252 ? ((((arr_30 [11] [i_6]) && -1))) : (arr_22 [i_5] [0]))));
                arr_36 [i_5] [i_5] = 1;
                arr_37 [i_5] [i_5] [i_10] = -62;
                var_25 |= 6040922776657419916;
            }
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            arr_40 [i_5] [i_5] = 17;
            arr_41 [i_5] [i_11] [i_11] = ((((((min(96, 1))) * (arr_23 [i_5] [i_11]))) == (arr_19 [i_5])));
        }
        arr_42 [i_5] = 1;
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                {
                    arr_47 [i_5] [i_12] [i_13] [i_5] = (((arr_39 [i_5] [i_13 - 1] [i_13]) >= var_3));

                    /* vectorizable */
                    for (int i_14 = 3; i_14 < 19;i_14 += 1)
                    {
                        arr_52 [i_5] [i_12] [i_5] [8] [10] |= var_9;
                        arr_53 [i_5] [i_12 - 2] [i_13] [6] &= (arr_43 [i_5]);

                        for (int i_15 = 1; i_15 < 19;i_15 += 1)
                        {
                            arr_56 [6] [6] [6] [i_13] [i_5] [i_15] [i_15] = ((-(arr_55 [i_12] [i_12] [i_12 - 2] [i_5] [i_12 - 1])));
                            var_26 = (max(var_26, (arr_30 [i_13 - 1] [i_15 + 1])));
                        }
                        arr_57 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((-64 * 4294967293) ? (~30833) : -64630);
                    }
                    var_27 = 134;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 10;i_16 += 1)
    {
        arr_61 [i_16] [i_16] = 2508416288;
        arr_62 [i_16] &= ((7 ? 1 : 9007199254740991));
        var_28 ^= (arr_5 [i_16] [i_16]);
        arr_63 [i_16] = 1;
        /* LoopNest 2 */
        for (int i_17 = 3; i_17 < 7;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                {
                    arr_70 [i_16] [i_16] [i_17] = 81;
                    var_29 = (min(var_29, (1 | 63)));
                    arr_71 [0] [i_17] [i_17] [i_18] = var_11;
                    arr_72 [i_18] [i_17] [9] = -62;
                }
            }
        }
    }
    #pragma endscop
}
