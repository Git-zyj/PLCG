/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] &= (((((arr_4 [i_0]) ? var_1 : (min(var_2, -3))))) ? var_12 : (0 | 4241906157));
            var_14 = (((!32135) ? ((max((arr_2 [10] [i_1] [i_0]), ((var_8 ? (arr_2 [i_1] [i_1] [i_0]) : -7))))) : var_4));
        }
        var_15 ^= (arr_0 [2] [i_0]);
        arr_6 [i_0] [19] = (~var_6);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_13 [14] [6] [1] = ((~(arr_7 [i_2])));
                    arr_14 [i_4] [i_3] = (arr_8 [i_4]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_16 = (arr_18 [i_4] [i_5] [i_6]);
                                arr_21 [i_6] [4] [i_6] [i_6] [i_6] = (((arr_10 [i_6 + 2]) <= (arr_7 [i_6 - 1])));
                                var_17 = (arr_0 [i_2] [4]);
                            }
                        }
                    }
                }
            }
        }
        var_18 = var_11;
        var_19 *= var_8;
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_20 = var_6;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_21 = ((var_13 >= (~var_10)));
                                var_22 = (!var_12);
                                arr_34 [i_2] [7] [i_7] [i_9] [i_10] = (arr_29 [i_7 + 3] [i_7 + 3] [i_7 - 1] [i_7 + 1]);
                            }
                        }
                    }
                    arr_35 [10] [i_7] [i_8] [i_2] = (var_5 - var_0);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 12;i_11 += 1)
    {
        var_23 -= var_8;

        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            arr_41 [i_12] [i_12] [i_11] = ((~(arr_25 [i_11] [i_11 + 1] [2] [i_11 + 1])));
            var_24 = var_5;
        }
        for (int i_13 = 2; i_13 < 11;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {

                for (int i_15 = 2; i_15 < 12;i_15 += 1)
                {
                    var_25 *= (((arr_22 [i_11 - 1] [i_13 + 2] [6]) ? (arr_16 [12] [i_11 - 1] [i_13 - 2] [13]) : 3146496542));
                    arr_48 [6] [i_15] [i_14] [i_14] = var_2;
                    var_26 &= arr_10 [i_11];
                }
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    arr_51 [i_11] = (arr_49 [i_13 - 2]);
                    var_27 = (min(var_27, var_1));
                    var_28 = (((arr_44 [i_11 + 1] [i_11] [i_13 - 2]) ? var_7 : var_2));
                    var_29 = (((arr_49 [i_11 + 1]) ? (arr_47 [i_11 - 1] [6] [i_14] [i_16]) : (((var_12 ? (arr_0 [i_14] [i_16]) : var_0)))));
                    arr_52 [4] [0] [6] [5] = ((~(arr_3 [14] [i_11 - 1])));
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 12;i_18 += 1)
                    {
                        {
                            var_30 = ((-(((arr_43 [i_11] [i_18]) ? var_2 : (arr_28 [i_17] [i_13] [i_17])))));
                            var_31 ^= (255 <= 68719476735);
                            var_32 = (max(var_32, (arr_23 [5] [i_17])));
                        }
                    }
                }
                var_33 = ((~(~230232592)));
            }
            for (int i_19 = 1; i_19 < 11;i_19 += 1)
            {
                var_34 = (((7387064399049904184 ^ var_9) && (((~(arr_58 [i_11] [i_11] [11]))))));
                arr_59 [i_19] [i_19] [i_13] [i_11] = (((arr_24 [1] [i_13 + 2]) ^ (arr_24 [16] [10])));
                arr_60 [7] [12] [3] &= (~var_1);
            }
            var_35 *= (arr_54 [i_13 + 1] [i_13] [i_13] [i_11]);
            arr_61 [4] [2] = ((-11 ? 2993354628 : -1));
        }
        for (int i_20 = 0; i_20 < 13;i_20 += 1)
        {
            arr_66 [i_11] [i_20] [i_20] = (~1);

            for (int i_21 = 1; i_21 < 11;i_21 += 1)
            {
                var_36 = (((arr_12 [i_11] [i_21 + 2] [i_11 - 1]) ? (arr_12 [i_11] [i_21 - 1] [i_11 + 1]) : var_6));
                var_37 = var_1;
                var_38 = ((-(arr_43 [i_20] [i_21 + 1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_22 = 1; i_22 < 23;i_22 += 1)
    {
        for (int i_23 = 4; i_23 < 22;i_23 += 1)
        {
            for (int i_24 = 2; i_24 < 24;i_24 += 1)
            {
                {
                    var_39 = (max(var_39, var_2));
                    arr_77 [i_22] [i_23] [15] = -var_10;
                    arr_78 [i_23] [i_22] = (((arr_75 [i_22] [i_23] [i_22]) / (arr_76 [i_22] [i_23])));
                    var_40 = (arr_70 [i_24]);
                }
            }
        }
    }
    #pragma endscop
}
