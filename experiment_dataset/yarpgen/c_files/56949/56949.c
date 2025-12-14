/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1 + 1] = var_10;
            arr_8 [i_0] [i_0] [i_1] = (-(arr_1 [i_0]));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_18 [i_0] [i_2] [i_0] [i_2] [18] [13] = (-(((((160 >> (2873870590 - 2873870576)))) ? (arr_2 [2]) : (((((arr_11 [i_3] [i_0]) && var_11)))))));
                        var_12 = (max(var_12, ((((((140736710 ? var_4 : (arr_16 [i_0 - 1] [i_2] [i_0 + 1] [i_0 + 1])))) ? ((var_10 ? 11487346169169722760 : var_2)) : (((arr_2 [i_0 - 2]) ? (arr_2 [i_0 - 2]) : 948854171)))))));
                        arr_19 [i_2] &= 11487346169169722760;
                    }
                }
            }
            var_13 = 2873870594;
        }
        var_14 = ((~(arr_16 [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_5 = 3; i_5 < 8;i_5 += 1)
    {
        var_15 = 1421096706;
        var_16 = ((max((((~(arr_9 [i_5] [i_5])))), ((4154230585 ? (arr_21 [i_5 + 2]) : 0)))));
    }
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        var_17 = arr_0 [i_6 + 1] [i_6];
        arr_24 [i_6] = (((arr_5 [i_6] [i_6] [i_6 + 1]) ? (((max(177, (arr_14 [1] [i_6 + 1] [1]))))) : ((6959397904539828855 ^ (arr_21 [i_6 + 1])))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_18 = ((+(((arr_4 [4]) ? 0 : (arr_27 [i_8])))));
            arr_30 [i_8] = -var_8;
            arr_31 [i_7] [i_7] [i_7] = var_1;
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_19 = (min((((arr_27 [i_7]) ^ var_6)), (((-(max(255, (arr_4 [i_7]))))))));

            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    arr_40 [i_11] [i_11] [i_11] [i_11] [i_11] = -45;
                    var_20 = 1;
                }
                var_21 = (max(255, 0));
                var_22 = var_4;
            }
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    {
                        var_23 = 11152344695523027987;
                        arr_46 [i_13] = (min(0, var_2));
                        var_24 = -18446744073709551614;

                        /* vectorizable */
                        for (int i_14 = 1; i_14 < 11;i_14 += 1)
                        {
                            var_25 = ((var_2 ? var_11 : (arr_49 [i_14 - 1] [i_13] [i_12] [i_12 - 1])));
                            var_26 = (arr_36 [i_7] [i_7] [i_7]);
                        }
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            var_27 = (((((min(var_9, 140736680)))) <= 76));
            arr_54 [i_7] [i_15] [i_15] = (((arr_10 [16] [i_15] [16]) == (max(10040955565754895343, 76))));
            arr_55 [i_7] [9] |= var_0;
            arr_56 [i_7] = 4154230631;
        }
        /* vectorizable */
        for (int i_16 = 4; i_16 < 13;i_16 += 1)
        {
            arr_60 [i_7] [i_7] [i_7] = (arr_27 [i_16 - 1]);
            arr_61 [i_7] [i_7] = (arr_37 [i_16 - 4]);
        }
        arr_62 [i_7] [i_7] |= ((((min((arr_16 [i_7] [14] [i_7] [i_7]), 11964553975082063030))) ? (((-(arr_16 [i_7] [16] [16] [i_7])))) : (76 + 2456497296)));
        var_28 *= (arr_13 [i_7] [1] [i_7]);
        arr_63 [i_7] [i_7] = (((((arr_36 [i_7] [i_7] [1]) ? (arr_45 [i_7] [i_7] [8] [i_7]) : var_4)) < ((-((1002001868 ? var_8 : (arr_29 [i_7])))))));
    }
    var_29 = ((((~var_7) ? var_11 : ((var_11 ? 156009643 : 4154230631)))));
    var_30 = 1811342800;
    var_31 = var_9;
    #pragma endscop
}
