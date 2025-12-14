/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 &= (((arr_0 [i_0]) >= 0));
        var_18 = ((6914067516513551486 ? 11003389354392884388 : -27023));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_19 = (var_11 ? (!0) : (0 * var_9));
                        var_20 = ((-(arr_8 [i_2 - 1] [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 2])));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        var_21 = (~(max(65, (min(-1, 1)))));
                        arr_19 [i_5] = (((~var_10) ? (((arr_9 [i_7]) & var_1)) : ((((arr_13 [i_4]) ? (~0) : ((((arr_11 [i_5] [i_6] [i_5]) < (arr_12 [i_5])))))))));
                        var_22 += (arr_15 [i_6] [i_7] [i_5 - 2]);
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
        {
            arr_24 [1] = ((-(arr_20 [i_4] [13])));
            arr_25 [i_4] [i_4] [i_4] = -1410473281;

            for (int i_9 = 2; i_9 < 19;i_9 += 1)
            {
                arr_29 [i_4] [i_4] [i_4] = ((~(arr_23 [i_4] [i_8] [i_9])));

                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    var_23 = (max(var_23, (~1)));
                    arr_33 [i_10] = ((~(arr_17 [0] [i_8] [i_9 + 2] [i_9 + 2])));

                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        arr_36 [i_11] = var_6;
                        arr_37 [i_11] [15] [i_11] [i_8] [i_11] [6] [i_4] = 4503178495502421031;
                        var_24 *= ((~(((arr_9 [i_4]) + (arr_17 [i_8] [i_8] [10] [9])))));
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_25 = (arr_30 [i_9] [i_9 + 2] [i_9 - 2] [i_9 - 1] [i_9] [i_9]);
                        var_26 = (min(var_26, var_15));
                        var_27 = ((-39905 ? (arr_35 [i_12] [i_8] [i_9 + 2] [i_10] [i_12] [i_10] [i_4]) : (arr_34 [i_9 - 2] [i_9] [i_9 + 2] [i_12] [i_9 - 2] [i_9 - 2])));
                        var_28 = (min(var_28, (((arr_18 [i_4] [i_9] [i_9 + 1] [i_9 - 2]) ? (arr_18 [i_4] [i_9] [i_9] [i_9 + 2]) : (arr_18 [i_8] [i_9] [i_9] [i_9 + 2])))));
                    }
                    arr_41 [i_4] = ((~(((!(arr_11 [i_4] [i_8] [i_4]))))));
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    arr_44 [i_4] [i_4] [i_4] = (arr_17 [i_9 - 2] [i_9 + 1] [i_9 + 2] [i_9 + 2]);
                    arr_45 [i_4] [i_8] [i_8] [i_13] = var_10;
                    var_29 = (max(var_29, (arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])));
                    var_30 = (((arr_38 [i_9 + 2] [i_9] [i_9 + 2] [i_9] [i_9 - 1]) ? (-1783130511 || 1489187911185121643) : 1144531980));
                }
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    var_31 -= ((0 ? (arr_39 [i_9] [i_9 - 2] [16]) : (arr_39 [i_4] [i_9 - 1] [i_9])));
                    var_32 = ((arr_31 [i_9] [i_9] [i_9 + 2]) + (arr_35 [i_14] [i_8] [i_9 + 1] [i_14] [i_8] [i_4] [i_4]));

                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        arr_50 [i_4] [i_4] [i_4] [12] [i_14] = ((-(arr_39 [i_14] [i_8] [i_8])));
                        var_33 -= (arr_15 [i_9] [i_9] [i_9]);
                        var_34 = (arr_35 [i_14] [i_4] [i_8] [i_9 + 1] [i_14] [i_8] [i_15]);
                        var_35 = (max(var_35, ((~(arr_32 [i_9] [5] [i_9] [5] [i_9] [i_9 + 2])))));
                    }
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        arr_53 [i_4] &= 9223372036854775800;
                        arr_54 [i_14] = (arr_9 [i_4]);
                        var_36 = (max(var_36, ((((arr_11 [i_9 + 2] [i_9 + 1] [i_4]) ? (arr_43 [i_9] [i_9] [2] [i_9] [i_9 + 1] [3]) : (arr_43 [i_9 - 2] [i_9 - 2] [i_9] [i_9 - 2] [i_9 + 1] [i_9 - 2]))))));
                    }
                    arr_55 [i_9] [i_8] [i_9] [i_14] [1] [i_14] = ((var_2 + 2147483647) << (((arr_31 [2] [i_9] [i_9 - 1]) - 41)));
                }
            }
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 21;i_17 += 1) /* same iter space */
        {
            var_37 |= (-((var_4 ? (arr_52 [7] [i_4]) : 0)));
            var_38 = (arr_49 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]);
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 21;i_18 += 1)
        {
            for (int i_19 = 2; i_19 < 20;i_19 += 1)
            {
                {
                    var_39 = ((((var_14 * 3031053985) + (arr_14 [i_18]))));
                    arr_65 [i_18] = (((!-1) ? (991995832 ^ -1059396833) : 8804797599512267826));
                }
            }
        }
        arr_66 [i_4] = ((var_7 + ((~(arr_39 [i_4] [i_4] [i_4])))));
    }
    var_40 = (((127 ? 0 : 2047)) | var_16);
    #pragma endscop
}
