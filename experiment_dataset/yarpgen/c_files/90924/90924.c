/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [1] &= var_8;
        var_17 += (((var_13 ? ((~(arr_1 [0] [i_0]))) : (~var_15))) & ((((~(arr_0 [8]))))));
        var_18 = (max(var_18, (arr_1 [6] [i_0])));
        var_19 = ((((123 ? var_5 : var_10))));
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = ((((arr_5 [i_1]) == (arr_4 [i_1]))));
        var_20 = (arr_4 [i_1 + 2]);
        var_21 += ((var_15 ? var_1 : (arr_4 [i_1 + 2])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_22 = ((arr_9 [3] [i_3 - 1]) - ((65532 * (arr_9 [5] [i_3 - 1]))));
            var_23 = (((arr_10 [i_2]) | ((min((arr_8 [i_2]), 3)))));
            var_24 = var_10;
            arr_12 [i_2] [20] |= var_6;
        }
        arr_13 [i_2] [i_2] = var_12;
    }

    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                arr_21 [i_5] = (~(arr_15 [i_4] [i_4]));
                var_25 = (min(var_25, ((((((((-1465971195 ? var_14 : (arr_15 [10] [5])))) ? (((~(arr_16 [i_4])))) : ((var_5 - (arr_17 [16]))))) < (max(((((arr_18 [11] [11] [11]) >= (arr_16 [i_4])))), (max(65532, (arr_17 [18]))))))))));
            }
            var_26 = (+((1 >> (((arr_16 [12]) - 16676)))));
        }
        var_27 ^= ((((((min(var_0, 0)) < -3260274497526279236))) >= 18518));
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            arr_26 [i_7] [i_7] = (((((-3260274497526279235 ? (arr_17 [i_7]) : (arr_11 [i_8] [i_8] [14])))) ? var_3 : ((-(arr_15 [i_7] [i_7])))));
            var_28 *= arr_11 [i_7] [i_8] [i_7];
        }

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                var_29 |= (((((min(var_15, (arr_11 [i_9] [i_9] [i_9]))))) ? ((-(~0))) : ((((arr_20 [i_7] [i_9] [4] [4]) && (((arr_24 [i_7]) > var_6)))))));
                arr_31 [i_7] [i_7] [i_7] = ((((min(var_12, var_2))) << (((arr_14 [i_7]) - 9032663255471739858))));
            }
            arr_32 [i_7] = (65531 && 56746);
            var_30 += (((((((var_10 && (arr_14 [i_9]))) ? ((3260274497526279235 >> (1207038170 - 1207038119))) : var_4))) || -8789));
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 0;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    {
                        var_31 = ((((-(arr_10 [i_7])))));

                        /* vectorizable */
                        for (int i_14 = 1; i_14 < 8;i_14 += 1)
                        {
                            arr_45 [0] [i_7] [i_14] = (arr_4 [i_12]);
                            arr_46 [1] [0] [1] [i_7] [1] = (((arr_40 [i_7] [i_13] [i_12 + 1] [i_14 + 2]) ? (((arr_4 [i_13]) + var_2)) : 1207038197));
                            arr_47 [i_7] [i_7] [i_13] [i_13] [i_14] = ((0 ? (((arr_0 [i_7]) & 1207038170)) : (((8793 ? (arr_10 [i_7]) : (arr_11 [i_7] [i_11] [i_12]))))));
                            var_32 = ((var_15 << (((arr_18 [i_7] [17] [17]) - 106648758))));
                        }
                        var_33 *= (max(4, -1207038170));
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
    {
        arr_52 [10] [2] = ((var_6 ? (~-var_16) : (arr_18 [i_15] [i_15] [i_15])));

        for (int i_16 = 3; i_16 < 10;i_16 += 1)
        {
            arr_56 [i_16] [i_16] = var_11;
            var_34 = ((((arr_14 [i_15]) ? (min(3260274497526279236, 6846262462181979754)) : var_3)));
        }
        arr_57 [7] [7] = (arr_27 [i_15] [i_15] [i_15]);

        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            arr_61 [i_17] [i_17] [9] = 65531;
            /* LoopNest 2 */
            for (int i_18 = 1; i_18 < 10;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    {
                        var_35 *= min((arr_62 [i_18 - 1]), (var_7 + 21));
                        var_36 ^= var_7;
                    }
                }
            }
            var_37 += ((arr_2 [10]) && (arr_15 [14] [7]));
            var_38 = (arr_18 [13] [i_17] [i_17]);
            var_39 = ((~((-(arr_10 [i_17])))));
        }
        /* vectorizable */
        for (int i_20 = 1; i_20 < 8;i_20 += 1)
        {

            for (int i_21 = 0; i_21 < 11;i_21 += 1)
            {
                var_40 += (((arr_38 [8] [i_20 - 1]) / var_0));
                var_41 &= var_0;
                var_42 = var_2;
            }
            arr_73 [1] [i_15] [i_15] = (arr_40 [i_15] [7] [i_15] [i_15]);

            for (int i_22 = 0; i_22 < 11;i_22 += 1)
            {
                var_43 += ((-((var_2 ? var_8 : var_9))));

                for (int i_23 = 3; i_23 < 9;i_23 += 1)
                {
                    var_44 = (arr_18 [i_20 - 1] [i_23 + 2] [i_22]);
                    var_45 = (arr_44 [i_22] [i_20 + 1] [i_20 + 3] [i_22]);
                    var_46 = ((~(arr_39 [i_22] [i_20 - 1] [i_22] [i_22])));
                }
                for (int i_24 = 0; i_24 < 11;i_24 += 1)
                {
                    arr_83 [i_24] [i_22] [i_15] [i_15] = var_13;
                    var_47 = (((var_15 / var_6) / (arr_4 [i_24])));
                    arr_84 [i_15] = ((((arr_74 [i_20] [i_24]) / var_10)));
                }
                for (int i_25 = 0; i_25 < 11;i_25 += 1)
                {
                    var_48 = ((arr_14 [i_15]) ? var_12 : var_14);
                    var_49 = (max(var_49, ((-(arr_35 [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 - 1])))));
                    arr_87 [i_15] = -var_8;
                }
                arr_88 [i_15] = ((var_5 * (4 > 67)));
            }
        }
    }
    #pragma endscop
}
