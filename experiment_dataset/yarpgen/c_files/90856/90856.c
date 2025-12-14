/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((-(((!var_0) << (var_6 - 120)))));
    var_12 = (((1792 <= var_2) ? 39846 : (!38892)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (!38906);
        arr_2 [i_0] [i_0] = ((-(((((min(var_9, (arr_1 [i_0])))) || 39846)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = var_4;
        var_14 += (arr_3 [i_1]);
        var_15 = ((((((arr_4 [i_1]) >= (arr_5 [4])))) <= 67));
        var_16 = (min(var_16, (((-(arr_3 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_17 = (max(var_17, (arr_10 [i_3] [i_3] [i_2])));
            arr_12 [i_2] [i_3] = 104;
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {
                        var_18 -= (((arr_15 [i_6 - 1] [i_6 - 1] [i_5] [i_6 - 1]) * (11076 >= 21328)));
                        arr_20 [i_4] [i_4] [i_4] [9] = ((22 ? 30419 : 38911));
                        arr_21 [1] [i_4] [13] [1] = 7162;
                        var_19 = (((((93 % ((min(57583, var_8)))))) && (arr_17 [i_2] [i_2] [i_2])));
                        var_20 = var_0;
                    }
                }
            }

            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    arr_28 [i_7] [i_4] [i_4] [i_8] [i_4] = 65519;
                    arr_29 [i_2] [i_2] [i_7 - 1] [i_7] [i_2] [i_7] = ((48 > (arr_23 [i_2] [i_7] [i_7 - 1])));
                }
                /* vectorizable */
                for (int i_9 = 2; i_9 < 14;i_9 += 1)
                {
                    arr_32 [i_4] [i_4] [i_7] [i_9] [11] = ((!(arr_5 [i_9 + 1])));
                    arr_33 [i_9 - 2] [i_7] [i_9 - 2] [i_9] [13] = ((206 <= (((!(arr_16 [i_4] [i_4] [i_4] [i_4]))))));

                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        var_21 = var_0;
                        var_22 = ((201 / ((~(arr_9 [i_2])))));
                        arr_36 [i_2] [i_4] [i_4] [4] [i_10] [i_7] = (((arr_34 [i_2] [i_9 + 1] [i_10 - 1] [i_10] [i_10]) >= 57583));
                        arr_37 [i_2] [i_9] [i_2] [i_2] &= (arr_24 [i_2] [i_9 + 1] [i_10 - 1]);
                        var_23 += (!var_5);
                    }
                }
                arr_38 [i_7] [i_7] = 86;
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                arr_42 [i_2] [i_2] [i_11] = ((!(~var_8)));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_24 = (max(var_24, ((((!var_6) >> (-var_0 + 167))))));
                            arr_50 [i_11] [i_13] = 81;
                            var_25 = ((-(arr_3 [i_2])));
                        }
                    }
                }
            }
        }
        var_26 -= arr_27 [i_2] [i_2];

        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            var_27 = (max(var_27, ((((!var_9) ? (arr_48 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : 48)))));
            var_28 = (min(var_28, (arr_31 [i_2])));
            var_29 = (((arr_26 [i_2] [i_2] [i_2] [i_2]) != (~var_7)));

            for (int i_15 = 1; i_15 < 14;i_15 += 1) /* same iter space */
            {

                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    var_30 = var_4;
                    arr_58 [i_2] [i_14] [i_2] [i_15 - 1] [i_16] = (max((max(((min((arr_22 [i_14] [i_14] [7]), (arr_56 [i_2])))), ((~(arr_10 [i_2] [i_2] [i_2]))))), (min((((arr_46 [i_16] [i_15] [i_2] [i_2] [i_2]) ? 57827 : (arr_4 [i_2]))), (~124)))));
                    var_31 = (((((((arr_24 [i_2] [i_15] [i_16]) ? (arr_27 [i_16] [i_2]) : 9540))) ? -var_10 : 112)));
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    var_32 = (max(var_32, 39218));
                    arr_62 [i_17] [i_14] [i_2] [i_14] = ((!(arr_16 [i_2] [i_15 + 1] [i_15 - 1] [i_17])));
                }
                arr_63 [5] [i_2] [i_2] = ((-(((65535 >= ((min((arr_55 [i_15] [i_14] [i_14] [i_2]), 112))))))));
                arr_64 [i_2] [i_2] [6] = (max(((((min((arr_13 [6] [i_14] [14]), 54477))) ? 57826 : (65535 == 57827))), (arr_35 [i_2] [i_2] [i_2] [i_2] [2])));
            }
            for (int i_18 = 1; i_18 < 14;i_18 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        {
                            arr_74 [i_2] [i_14] [i_2] [i_19] [i_19] [14] [i_18 + 1] = ((~(arr_56 [i_2])));
                            arr_75 [i_19] [i_19] = -0;
                            var_33 = (~65);
                        }
                    }
                }
                arr_76 [i_2] &= (((arr_13 [i_18 + 1] [i_18 - 1] [i_18 + 1]) ? 9218 : 81));
                var_34 = ((((+(((arr_4 [i_2]) ? (arr_53 [i_18]) : var_4)))) > (arr_60 [7] [7] [i_14] [i_14] [11])));
            }
            for (int i_21 = 1; i_21 < 14;i_21 += 1) /* same iter space */
            {
                arr_79 [i_14] = 196;
                arr_80 [i_2] [i_14] [i_14] = 54452;
            }
        }
        for (int i_22 = 0; i_22 < 15;i_22 += 1)
        {
            var_35 = (max((min(var_6, ((46401 >> (54459 - 54431))))), ((((94 ? 143 : 38383))))));
            arr_85 [i_2] [11] [i_2] = ((!(((((((arr_14 [i_22] [i_22]) ? 34815 : 677))) ? var_0 : 65535)))));
        }
        for (int i_23 = 1; i_23 < 13;i_23 += 1)
        {
            arr_88 [i_2] [i_23] = (((((-(arr_81 [i_2] [i_23] [i_23 - 1])))) ? (arr_81 [i_2] [i_23] [i_23 + 2]) : ((-(arr_81 [i_2] [i_23] [i_23 + 1])))));
            arr_89 [i_2] [i_23 + 2] [i_23] = arr_48 [7] [7] [7] [i_23] [i_23] [i_23];
        }
        var_36 = ((((arr_81 [i_2] [i_2] [i_2]) && -65532)));
    }
    #pragma endscop
}
