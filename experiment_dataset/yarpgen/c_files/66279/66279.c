/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_1));
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((16383 >> (26553 - 26525)));
        var_13 = 4229960751;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((var_1 ? (arr_1 [i_1]) : -var_8));
        arr_9 [i_1] = ((!((((max((arr_3 [i_1]), 65006544)) * (127 > 127))))));
        var_14 = (~65006536);
        arr_10 [i_1] = var_8;
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        arr_13 [i_2] = ((!(((!var_7) || (arr_11 [i_2 - 1])))));
        var_15 = (arr_12 [i_2 - 1] [i_2]);
        var_16 = (((var_6 ? (arr_1 [i_2 - 1]) : (min(0, var_8)))));
        arr_14 [i_2] [i_2] = (((((arr_6 [i_2 - 1]) ? (arr_6 [i_2 - 1]) : (arr_6 [i_2 - 2])))) ? (arr_6 [i_2 - 1]) : (((arr_6 [i_2 - 1]) | (arr_6 [i_2 - 2]))));
        var_17 = var_6;
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            var_18 = (max(var_18, -120));
            arr_21 [i_3] = var_8;
            arr_22 [i_3] = ((var_4 ? (((var_8 ? 15 : var_5))) : (arr_7 [i_4 + 3])));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_19 -= ((((12601 ? 92 : 2147483647)) != (arr_4 [i_5])));
            arr_27 [i_3] = (((arr_16 [i_3] [i_3]) + (arr_17 [1] [i_5] [i_5])));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_30 [i_6] [i_6] [i_3] = ((~(arr_4 [i_6])));

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    var_20 *= ((((((arr_26 [i_8 + 1]) ? 81967372 : var_7))) ? (~var_3) : ((var_4 ? 65006544 : (arr_16 [i_6] [i_6])))));
                    var_21 *= var_9;
                    arr_36 [i_3] [i_3] [i_7] [i_8] = (2147483647 != -50);
                }
                for (int i_9 = 2; i_9 < 11;i_9 += 1)
                {
                    arr_40 [11] [i_3] |= var_2;
                    var_22 ^= ((((((arr_23 [i_3]) ? -50 : var_7))) ? var_8 : (-127 - 1)));
                    var_23 ^= (arr_26 [i_9]);
                    var_24 = (min(var_24, (arr_33 [i_3] [i_6] [i_3] [i_9 - 1])));
                }
                var_25 = (((-(arr_29 [i_3] [i_3] [i_3]))));
                var_26 *= var_0;
                var_27 = (max(var_27, (arr_39 [0] [10] [i_3] [i_6] [i_7] [9])));
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {

                for (int i_11 = 4; i_11 < 12;i_11 += 1)
                {
                    arr_46 [i_11 + 1] [i_11] [i_11] [i_11] [i_3] [i_3] = var_9;

                    for (int i_12 = 3; i_12 < 10;i_12 += 1)
                    {
                        var_28 = (min(var_28, (((-((~(arr_16 [i_11] [i_3]))))))));
                        arr_51 [i_11] [i_11] = var_0;
                        var_29 += (((((-24673 + 2147483647) << (81967372 - 81967372))) ^ (((arr_24 [i_11] [i_11] [2]) ? var_4 : -75))));
                        arr_52 [i_11] = var_7;
                    }
                }
                var_30 = ((~((65520 ? (arr_5 [i_3]) : (arr_20 [i_6] [i_3])))));

                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    var_31 = ((0 * (226 / 4229960752)));
                    arr_55 [i_6] [1] [1] [i_6] [i_6] [i_3] = var_3;
                    var_32 = var_5;
                    arr_56 [i_3] [i_6] [i_6] [i_10] [i_13] = var_1;
                    arr_57 [i_3] [i_3] = (!10875);
                }
                for (int i_14 = 1; i_14 < 12;i_14 += 1) /* same iter space */
                {
                    var_33 += (((((4194303 ? 60831 : 56885))) ? (arr_17 [i_3] [i_6] [i_6]) : (arr_1 [i_14 + 1])));
                    arr_60 [i_14] [i_14] [i_10] [i_6] [i_14] [0] = (!(arr_29 [i_14] [i_14 + 1] [5]));
                }
                for (int i_15 = 1; i_15 < 12;i_15 += 1) /* same iter space */
                {
                    arr_65 [i_15] = (!15);
                    arr_66 [i_15] [i_6] = (arr_41 [i_3] [i_6] [i_3] [i_15 + 1]);
                }
                arr_67 [i_3] [i_3] [6] [i_3] = (arr_49 [i_10] [i_10] [i_6] [i_6] [12] [i_3] [i_3]);
            }
            arr_68 [i_6] = ((var_7 ? (((80 ? 0 : -81967372))) : ((var_2 ? var_2 : var_5))));
        }
        arr_69 [i_3] [2] = var_0;
    }
    for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
    {
        arr_74 [i_16] = (((arr_73 [11] [6]) < 13034));
        arr_75 [i_16] [i_16] = ((1 ? 17279 : var_2));
        arr_76 [5] [i_16] = (((6 ? (arr_37 [i_16] [i_16]) : (arr_37 [i_16] [i_16]))));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
    {
        var_34 ^= (arr_70 [i_17]);
        arr_79 [i_17] = ((((arr_6 [i_17]) ? (arr_59 [i_17] [i_17] [i_17]) : var_2)));
        arr_80 [i_17] = ((-22 != ((-(arr_28 [11] [i_17] [i_17])))));
    }
    #pragma endscop
}
