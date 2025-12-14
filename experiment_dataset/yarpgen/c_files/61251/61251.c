/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_20 &= ((!(max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        var_21 ^= (max(188, (((((0 | -17) + 2147483647)) << ((min((arr_1 [i_0] [i_0]), var_3)))))));
        var_22 = (max(var_22, var_19));
        var_23 = (max((arr_0 [i_0]), (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = var_15;
        arr_6 [i_1] = 30;
        var_24 = ((((max(var_15, (arr_4 [i_1])))) ? (arr_1 [10] [10]) : ((((arr_4 [i_1]) == (arr_4 [4]))))));
        var_25 ^= 193;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_1] [1] [i_1] [i_1] = var_12;
                                var_26 *= 1;
                                var_27 ^= (min(((188 ? -674109701 : 200)), (((62 ? 208 : 9)))));
                                var_28 = ((192 << 0) && (3840 ^ var_1));
                                var_29 = ((~(arr_0 [i_3])));
                            }
                        }
                    }
                    var_30 = (min(var_30, ((((arr_14 [i_3] [i_3] [i_3] [i_2 - 2] [i_2 - 2]) / ((var_5 ? var_2 : var_9)))))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_31 = (min(var_31, ((((arr_18 [i_6]) ? (((arr_18 [i_6]) >> (62 - 35))) : ((min(var_15, 0))))))));

        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_22 [i_7] = ((3863 ? ((max(39, (arr_18 [i_6])))) : ((-(arr_18 [i_7])))));
            arr_23 [i_6] = ((((!(arr_1 [i_6] [i_6]))) ? (32 ^ var_10) : (((!(((226 ? 9 : 30))))))));
        }
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            var_32 = (min(var_32, 190));
            arr_26 [1] [i_8] = var_0;

            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                var_33 = (min(((243 ? 63 : 110)), (max((-2147483647 - 1), ((var_15 << (arr_18 [i_6])))))));
                arr_30 [i_8] [i_9] = (max(-108, (arr_1 [i_8 + 2] [i_8 + 1])));

                /* vectorizable */
                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    arr_33 [i_6] [i_6] [i_8] [i_10] = (((!216) >= (~135)));
                    var_34 = 1;

                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_35 = 9;
                        var_36 = ((105 ? (arr_28 [i_9 - 1] [i_9 - 1]) : 0));
                        arr_36 [14] [i_8] [i_8] [i_8] [i_11] = (var_2 ? (arr_28 [i_10 + 1] [i_10]) : (~204));
                    }
                }
                for (int i_12 = 2; i_12 < 16;i_12 += 1)
                {
                    var_37 += (arr_39 [i_9] [i_9 - 1] [i_9] [i_9 + 2]);
                    var_38 = (79 ? (~var_14) : (248 * var_12));
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_39 = (max(var_39, (arr_38 [8] [i_6])));
                    arr_42 [i_9] [i_9] [i_9] [i_9 + 3] [i_8] [i_9] = (min(13, 192));
                    arr_43 [i_13] [i_8] [i_8] [1] = (arr_28 [i_6] [i_6]);
                    var_40 = var_3;
                }
            }
            /* vectorizable */
            for (int i_14 = 4; i_14 < 14;i_14 += 1)
            {
                var_41 = (arr_21 [i_8] [i_8] [i_14 + 2]);
                var_42 ^= (!2136384175);
                arr_46 [i_8] [i_8] = (((!97) ? var_1 : ((((arr_28 [i_6] [i_14]) <= (arr_29 [i_8] [i_8] [i_8] [i_6]))))));
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                arr_51 [i_6] [i_8] [i_6] [i_6] = -160;
                var_43 *= 188;
            }
            var_44 *= 224;
        }
    }
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        arr_55 [i_16] [i_16] = (((arr_21 [i_16] [i_16] [i_16]) / -140));
        var_45 = var_4;
        var_46 -= arr_48 [4] [i_16];
        arr_56 [i_16] = ((~((1 ? (arr_50 [i_16]) : (arr_44 [i_16] [i_16])))));
    }
    var_47 = 1;
    var_48 = var_18;
    var_49 = var_7;
    #pragma endscop
}
