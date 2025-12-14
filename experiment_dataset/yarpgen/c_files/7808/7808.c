/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    var_12 = (max(var_12, (arr_7 [i_0] [i_1] [i_2])));

                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        var_13 ^= ((!(!46857)));
                        var_14 ^= arr_8 [i_0] [i_1] [i_3 - 2];
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_15 = (min(var_15, ((-(arr_2 [i_0])))));
                        arr_12 [12] [2] [8] [i_0] = ((61585 == (arr_0 [i_0])));
                        var_16 -= ((!(arr_8 [i_0] [i_2 + 1] [i_4 - 1])));
                        var_17 = (arr_5 [i_2 - 1] [i_4 + 1] [i_0]);
                    }
                }
                var_18 ^= ((((((max(7, 0)) | 4294967295))) ? var_1 : (((~(arr_4 [i_0] [i_0]))))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_19 = (((arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]) == (((arr_15 [i_5] [i_5]) ? var_0 : (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])))));
        var_20 = var_8;

        /* vectorizable */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            var_21 = (arr_5 [i_6] [i_5] [i_6]);
            arr_19 [i_6] = 0;
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            var_22 ^= ((arr_1 [i_5]) + (((max(var_9, var_5)) + var_3)));
            var_23 = ((~((0 ? (arr_10 [0] [i_5] [i_5] [0]) : (arr_4 [i_7] [i_5])))));
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {

            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                var_24 = (min(var_24, ((((((arr_1 [i_8]) && (arr_27 [i_9] [i_8]))) || -var_5)))));

                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    var_25 = var_7;
                    arr_30 [6] = ((((((var_2 ? -673061238 : (arr_7 [i_5] [i_8] [13]))) + (arr_10 [i_5] [i_10] [4] [i_9 - 1]))) / (arr_24 [i_9 + 2] [i_8] [i_9 - 1])));
                    var_26 = (((-5 + 9223372036854775807) << (((arr_15 [i_5] [8]) - 1255237776))));
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    arr_33 [i_9] = (-((-22 ? 65535 : 0)));
                    arr_34 [i_5] [i_8] [10] [i_9] [2] = ((5 ? var_1 : ((((arr_26 [i_11] [i_9 + 1]) ? 6 : var_2)))));
                }
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        var_27 = 65535;
                        var_28 = (min(var_28, ((((var_5 ? -1 : 48))))));
                    }
                    var_29 += min((((!(((var_7 ? var_2 : (arr_7 [i_5] [i_5] [i_5]))))))), (min(-22, var_1)));
                }
                var_30 = ((-(arr_35 [i_9] [12] [i_5])));
                arr_39 [i_5] [i_5] [i_9] [i_9] = (((((((var_7 - (arr_15 [i_8] [i_9 + 1]))) + (arr_27 [i_9 + 1] [i_9 + 1])))) ? (arr_9 [i_5] [i_8] [i_5] [8]) : (arr_16 [i_5] [0])));
            }
            arr_40 [i_5] [i_8] = (((((!(arr_36 [i_5] [i_8] [0] [i_5] [i_8] [i_8])))) * ((var_6 % ((((arr_32 [1] [8] [i_8] [i_8]) && (arr_8 [i_5] [i_5] [i_8]))))))));
        }
        for (int i_14 = 2; i_14 < 11;i_14 += 1)
        {
            var_31 = arr_21 [i_14];

            for (int i_15 = 1; i_15 < 12;i_15 += 1)
            {
                var_32 = min((arr_27 [7] [i_14]), 1304292978017384186);
                arr_46 [i_15] [i_14] [6] = (min((arr_45 [i_14 + 2] [i_15 + 1] [i_15]), ((((((arr_13 [i_5] [i_15 - 1]) ^ (arr_13 [i_14 - 1] [5]))) - ((var_8 ? (arr_25 [i_5]) : (arr_37 [i_14]))))))));
                /* LoopNest 2 */
                for (int i_16 = 3; i_16 < 10;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        {
                            var_33 = (((arr_9 [i_16 - 1] [i_16 - 1] [i_14] [i_16]) / (arr_6 [i_5] [i_5] [i_14 - 1])));
                            var_34 &= ((-(arr_23 [i_16 + 3] [i_14 + 2])));
                            var_35 &= (max(65535, (((arr_27 [i_15 + 1] [i_16 + 2]) ? (arr_23 [i_17] [i_14]) : ((50148 ? (arr_29 [1] [i_16] [i_17]) : var_8))))));
                            var_36 ^= (max((arr_24 [i_15] [i_16] [i_17]), (arr_35 [i_5] [i_15 - 1] [i_5])));
                            var_37 = ((~((15402 / (arr_2 [i_15 - 1])))));
                        }
                    }
                }
                var_38 = (min(var_38, (arr_41 [i_5] [12])));
            }
        }
        var_39 = 2553;
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 13;i_18 += 1)
        {
            for (int i_19 = 3; i_19 < 11;i_19 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        var_40 ^= ((!(arr_27 [i_20] [i_19])));

                        for (int i_21 = 0; i_21 < 13;i_21 += 1)
                        {
                            arr_67 [i_5] [i_5] [i_5] [i_18] = (((arr_37 [i_18]) / 11314));
                            arr_68 [i_18] = var_5;
                        }
                        var_41 = 4294967290;
                    }
                    var_42 = (((arr_52 [i_5]) ? (((arr_52 [i_5]) ? (arr_52 [i_5]) : (arr_52 [i_5]))) : (((arr_52 [i_5]) ? (arr_52 [i_5]) : 1058562669))));
                }
            }
        }
    }
    for (int i_22 = 1; i_22 < 18;i_22 += 1)
    {
        /* LoopNest 3 */
        for (int i_23 = 2; i_23 < 18;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 21;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 21;i_25 += 1)
                {
                    {
                        var_43 = (min(var_43, ((min((min(var_1, (!17))), (65535 - 54222))))));
                        arr_79 [i_22] [4] [i_24] [i_22 - 1] [i_25] [i_25] &= (arr_72 [i_23]);
                        arr_80 [i_22] = (((arr_70 [i_22 + 1]) ^ 1));
                    }
                }
            }
        }
        var_44 ^= ((!(arr_70 [i_22])));
        arr_81 [i_22] [i_22] = arr_76 [i_22] [i_22] [i_22 + 3] [i_22 + 3];
    }
    #pragma endscop
}
