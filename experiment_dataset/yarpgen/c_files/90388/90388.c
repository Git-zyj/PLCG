/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (var_1 | var_12);
        arr_4 [i_0] = ((var_15 ? ((var_6 ? var_8 : var_7)) : (var_3 / var_13)));
        var_16 = (((((var_8 ? var_12 : var_4))) + ((var_9 ? var_0 : var_11))));
        arr_5 [i_0] = ((var_2 ? var_3 : var_14));
        arr_6 [i_0] = (((var_6 + 2147483647) >> var_2));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_12 [i_1] [i_2] = (min((var_0 - var_2), (var_9 > var_9)));
            arr_13 [i_1] [i_1] [i_2] = (var_7 || var_15);
            var_17 = (((((((var_12 ? var_1 : var_4)) ^ var_11))) & (((var_0 & var_14) ^ (var_7 | var_6)))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_18 = (min((max(var_7, (var_1 == var_9))), (((((max(var_15, var_8))) * var_12)))));
            arr_16 [i_1] [i_1] [i_1] = (min((((((var_11 ? var_14 : var_1))) ? (max(var_10, var_3)) : var_10)), (max((var_4 || var_1), (min(var_7, var_15))))));
            var_19 = var_7;
            arr_17 [i_1] [i_3] [i_3] = (max(var_1, (((((max(var_13, var_12))) >= var_3)))));
            arr_18 [i_1] = var_11;
        }
        var_20 = var_14;

        /* vectorizable */
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            arr_23 [i_1] [i_1] = (((var_2 >> var_2) < ((var_7 ? var_0 : var_2))));
            arr_24 [i_4] = (var_1 <= var_8);
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                arr_29 [i_1] [i_1] [1] = var_5;

                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {

                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        var_21 = ((((((var_2 <= var_7) * (var_8 >= var_1)))) * (max(var_14, ((var_8 ? var_5 : var_0))))));
                        arr_35 [i_5] [i_6] [i_8] = ((((max(((min(var_8, var_12))), (var_0 & var_11)))) ? (((min(var_10, var_3)) | var_2)) : (min(var_3, ((var_3 ? var_5 : var_7))))));
                    }
                    arr_36 [i_1] [i_5] [i_6] [i_7] = (max((((((var_12 ? var_11 : var_12))) ? (var_9 % var_7) : var_6)), ((max(((max(var_15, var_6))), ((var_5 ? var_0 : var_12)))))));
                    var_22 = (((((var_11 % var_4) == ((max(var_11, var_15))))) ? (min(((((var_8 + 2147483647) << (((var_8 + 4787) - 26))))), (min(var_10, var_5)))) : (max((var_6 & var_15), ((var_12 ? var_12 : var_5))))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    arr_39 [i_1] [i_1] [i_6] = ((var_4 >> (var_0 - 2717478976009961965)));
                    var_23 = (((var_11 + var_4) ? (var_12 - var_12) : ((var_0 >> (var_4 - 21454)))));
                }
            }
            var_24 = ((((min(var_12, var_3))) | (max(var_6, var_10))));
        }
    }
    var_25 = (max(((((var_9 / var_15) != (max(var_8, var_10))))), var_0));
    var_26 = min(var_6, var_13);

    /* vectorizable */
    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
    {
        var_27 = ((var_11 ? var_0 : var_3));
        arr_44 [i_10] = (((var_12 + var_13) * ((var_10 ? var_14 : var_10))));
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
    {
        arr_47 [i_11] = (min((var_8 * var_9), (min(var_5, var_5))));
        var_28 = ((((var_8 ? (var_8 | var_8) : var_3)) - ((max(var_11, var_14)))));
        arr_48 [i_11] [i_11] = var_10;
        arr_49 [i_11] = var_0;
    }

    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {

        for (int i_13 = 1; i_13 < 21;i_13 += 1)
        {
            arr_54 [i_13 + 1] [i_13] [i_13] = ((((min(var_14, var_6))) ? (((var_7 < var_13) ^ (var_11 ^ var_4))) : (((var_4 < (var_8 + var_7))))));
            arr_55 [i_13] = (((max(var_5, var_3)) < (var_4 & var_0)));
        }
        arr_56 [i_12] = (min(((var_2 ? var_8 : var_8)), (((var_15 | var_11) ^ var_14))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {

        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            arr_65 [1] [i_14] [i_14] = var_9;

            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                arr_69 [i_14] [i_16] = var_5;
                arr_70 [i_14] [i_16] [i_15] [i_16] = var_2;
            }
        }
        for (int i_17 = 1; i_17 < 1;i_17 += 1)
        {
            var_29 = (var_7 * var_0);
            var_30 = var_10;
        }
        for (int i_18 = 0; i_18 < 21;i_18 += 1)
        {

            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                arr_78 [i_18] [i_18] [i_18] [i_18] = var_14;
                var_31 = ((var_10 ? var_14 : (var_6 * var_2)));
                arr_79 [i_14] [i_18] [i_19] = (var_6 & var_4);
            }

            for (int i_20 = 1; i_20 < 17;i_20 += 1)
            {
                arr_84 [i_14] [i_18] [i_14] [i_14] = (var_14 ^ var_7);
                arr_85 [i_18] = (var_12 / var_15);

                for (int i_21 = 1; i_21 < 1;i_21 += 1)
                {

                    for (int i_22 = 0; i_22 < 21;i_22 += 1)
                    {
                        arr_90 [i_14] [i_18] [i_20] [i_21] [i_20] [i_18] = ((var_5 ? var_4 : ((var_4 ? var_3 : var_11))));
                        arr_91 [i_14] [i_18] = (var_8 <= var_6);
                        arr_92 [i_18] [i_18] [i_18] [16] [i_18] = (var_3 || var_8);
                    }
                    arr_93 [i_14] [5] [i_20] [i_18] = (var_13 * var_5);
                }
                arr_94 [i_18] [1] [1] [i_18] = ((var_13 ^ (var_11 & var_11)));
                arr_95 [i_18] = ((var_7 >> (var_0 - 2717478976009961959)));
            }
            for (int i_23 = 1; i_23 < 20;i_23 += 1)
            {
                arr_99 [i_18] [i_18] [i_23] = ((var_10 ? (var_1 + var_12) : (var_7 < var_1)));
                var_32 = (var_12 ? var_5 : var_14);
                var_33 = ((var_13 ? var_3 : var_13));

                for (int i_24 = 1; i_24 < 19;i_24 += 1)
                {
                    var_34 = (((((var_13 ? var_6 : var_0))) ? var_13 : (var_11 < var_15)));
                    var_35 = ((var_12 <= (var_5 >= var_7)));
                    arr_102 [i_18] = (((var_6 & var_15) * var_12));
                    arr_103 [i_18] = var_9;

                    for (int i_25 = 3; i_25 < 19;i_25 += 1)
                    {
                        arr_107 [i_18] [i_24] [15] [i_18] = var_11;
                        var_36 = var_15;
                    }
                    for (int i_26 = 0; i_26 < 21;i_26 += 1)
                    {
                        arr_110 [i_14] [i_14] [i_18] [i_23] [1] [i_18] = (((var_10 && var_5) + ((var_5 ? var_4 : var_7))));
                        var_37 = (var_7 <= var_14);
                    }
                }
                for (int i_27 = 1; i_27 < 20;i_27 += 1)
                {
                    arr_114 [i_14] [i_18] [i_23] [i_18] = (var_7 & var_3);
                    arr_115 [i_18] = ((var_5 ? (var_12 % var_9) : var_0));
                }

                for (int i_28 = 0; i_28 < 0;i_28 += 1)
                {
                    arr_118 [i_18] [i_18] [i_23 - 1] = (var_7 == var_9);

                    for (int i_29 = 4; i_29 < 19;i_29 += 1)
                    {
                        arr_121 [i_18] [i_28 + 1] [i_23 - 1] [i_23] [i_18] [i_14] [i_18] = ((var_0 ? var_4 : var_9));
                        arr_122 [i_18] [9] [i_28] [i_23] [i_18] [17] [i_18] = (((var_1 == var_10) ? var_7 : var_11));
                    }
                    for (int i_30 = 0; i_30 < 1;i_30 += 1)
                    {
                        var_38 = (((var_1 | var_2) & var_9));
                        arr_125 [i_14] [1] [i_18] [1] = (var_10 * var_2);
                    }
                }
                for (int i_31 = 0; i_31 < 1;i_31 += 1)
                {
                    var_39 = ((var_15 % (var_14 - var_12)));

                    for (int i_32 = 0; i_32 < 21;i_32 += 1)
                    {
                        var_40 = (var_8 >= var_8);
                        var_41 = var_10;
                        var_42 = (((var_7 <= var_6) >> (var_8 + 4776)));
                        var_43 = ((var_7 + (((var_0 ? var_14 : var_3)))));
                        arr_132 [i_14] [11] [i_18] [i_31] [7] [i_32] [0] = ((var_11 ? var_11 : (var_14 + var_7)));
                    }
                    for (int i_33 = 0; i_33 < 1;i_33 += 1)
                    {
                        arr_136 [i_14] [i_18] [i_18] [i_31] [i_33] [i_18] [i_14] = ((var_12 != ((var_11 ? var_8 : var_0))));
                        arr_137 [i_33] [5] [i_33] [i_18] [i_33] = var_3;
                    }
                    for (int i_34 = 0; i_34 < 21;i_34 += 1)
                    {
                        arr_140 [i_14] [i_18] [i_23 - 1] [i_18] [i_31] [i_34] [i_34] = (var_4 || var_8);
                        arr_141 [i_18] [i_31] [i_23 - 1] [1] [i_18] [i_18] = ((var_9 ? (((var_5 ? var_2 : var_15))) : (var_10 + var_8)));
                    }
                }
            }
        }
        for (int i_35 = 2; i_35 < 19;i_35 += 1)
        {
            arr_144 [i_14] [i_14] = ((((var_6 ? var_10 : var_11)) | var_4));
            var_44 = (var_0 - var_14);
            arr_145 [i_14] [i_35] = ((var_6 < ((var_13 >> (var_5 - 7734657684829815653)))));
        }
        var_45 = var_15;
        var_46 = var_0;
    }
    for (int i_36 = 0; i_36 < 15;i_36 += 1)
    {
        arr_148 [i_36] = var_4;
        arr_149 [i_36] [i_36] = ((((max((((var_8 + 2147483647) << (var_7 - 7698466988254460705))), (var_15 <= var_7)))) ? ((((var_10 || var_1) ? (var_4 || var_1) : ((max(var_6, var_2)))))) : (min(var_10, ((min(var_14, var_3)))))));
        var_47 = ((((((((var_15 >> (var_0 - 2717478976009961966)))) <= var_5))) & ((min(var_8, var_4)))));
    }
    #pragma endscop
}
