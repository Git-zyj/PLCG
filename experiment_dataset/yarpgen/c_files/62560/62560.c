/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 788109348;
    var_11 = var_9;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] = (((((79 ? var_4 : var_2))) ? (arr_4 [i_1] [i_1 - 1] [i_1 - 2]) : ((-6623 ? (arr_2 [i_1]) : -17))));
            arr_6 [i_1] [i_1] [i_0] = ((((((arr_0 [i_0]) ? 0 : 1627032699))) ? 177 : ((246 & (arr_0 [i_1])))));
        }
        arr_7 [i_0] = var_7;
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] [i_2] = ((-(((!(arr_9 [i_2]))))));
                    var_12 -= (max((1 || 1950701043), ((!(arr_11 [i_3 - 1] [i_2 - 2] [i_4 + 1])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 17;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_25 [i_2] [i_5] [i_6] [i_7] [i_2] = (arr_9 [i_6]);
                                arr_26 [i_2] [i_5] [i_7] [i_8] = (arr_12 [i_2] [i_5 + 2] [i_6 + 3]);
                            }
                        }
                    }
                    arr_27 [i_2] = ((((221 & var_3) ? 1709660722 : var_6)));
                    arr_28 [i_2] [i_2] = ((((((max((arr_20 [i_5] [i_2]), var_5))))) < var_1));
                    var_13 = (min(var_13, ((((~((min((arr_13 [i_2] [i_5] [i_6]), var_9)))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 17;i_10 += 1)
            {
                {
                    arr_33 [i_2] [i_9] [i_10] = ((~(((!(arr_15 [i_2 - 2] [i_9 + 2] [i_9]))))));
                    var_14 ^= ((~((min(var_2, 0)))));
                }
            }
        }
        arr_34 [i_2] [i_2] = ((18446744073709551608 < (((-73 <= (min(var_6, (arr_12 [i_2] [i_2] [i_2]))))))));
        var_15 = ((var_6 > (((2667934596 ? -14748 : (arr_21 [i_2] [i_2]))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_38 [i_11] [i_11] = ((233 ? var_1 : var_7));
        arr_39 [i_11] = (var_1 & var_9);

        for (int i_12 = 2; i_12 < 16;i_12 += 1)
        {
            arr_42 [i_11] [i_11] [i_11] = 1;
            arr_43 [i_12] = (((14747 ? 4294967295 : -1011517630)));
            var_16 = (~-171808276);
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                {
                    arr_49 [i_11] [i_11] [i_13] = ((var_0 % (arr_32 [i_13] [i_14])));

                    for (int i_15 = 1; i_15 < 14;i_15 += 1)
                    {
                        var_17 = (~1429057581);
                        var_18 = (((~(-9223372036854775807 - 1))));

                        for (int i_16 = 1; i_16 < 16;i_16 += 1)
                        {
                            arr_56 [i_13] [i_16] = (arr_9 [i_15 + 2]);
                            arr_57 [i_14] [i_13] = ((29987 ? (arr_46 [i_11] [i_16 + 1] [i_14 - 1] [i_15 + 3]) : var_5));
                        }
                        for (int i_17 = 0; i_17 < 0;i_17 += 1)
                        {
                            arr_60 [i_14] [i_14] [i_14] [i_13] = 5920395428389764323;
                            var_19 += 1;
                            arr_61 [i_11] [i_11] [i_11] [2] |= (((arr_15 [i_17] [i_17 + 1] [i_17 + 1]) / (arr_18 [i_15] [i_15 - 1] [i_15 - 1])));
                        }
                        arr_62 [i_11] [i_13] [i_13] [i_15] [i_15] = ((!(arr_12 [i_14 - 1] [i_15] [i_15 + 3])));
                    }
                    for (int i_18 = 3; i_18 < 13;i_18 += 1)
                    {
                        var_20 |= (!0);
                        var_21 = (((((243 ? (arr_45 [i_13]) : (arr_30 [i_11] [i_13] [i_13])))) & (9806636614763786978 % var_3)));
                        var_22 = (arr_37 [i_13]);
                    }
                    for (int i_19 = 1; i_19 < 16;i_19 += 1)
                    {
                        arr_70 [i_11] [i_13] [i_13] [i_19] = var_6;
                        arr_71 [i_13] [i_13] [i_13] [i_13] [i_13] = (arr_11 [i_19 + 1] [i_19] [i_19]);
                        var_23 = (min(var_23, (!var_6)));
                        arr_72 [i_11] [i_13] [i_14] [i_19] = -1376940148;
                    }
                }
            }
        }
    }
    #pragma endscop
}
