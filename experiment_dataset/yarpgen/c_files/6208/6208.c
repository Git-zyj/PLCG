/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_3;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (arr_2 [i_0] [i_0] [i_0]);

                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        var_18 -= ((183 ? var_0 : 179));
                        arr_8 [i_0 - 1] |= ((!(arr_5 [i_0 - 1] [i_1 - 1])));
                    }
                    var_19 += ((1916020232 ? 229 : 3593653968376784100));
                    arr_9 [i_0] = (arr_0 [i_1 + 3]);
                    var_20 &= (arr_2 [i_0] [i_0] [i_0]);
                }
            }
        }
        var_21 = (var_8 / var_4);
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_22 = ((~(~-39)));
        arr_12 [i_4] |= ((~(((arr_4 [i_4] [i_4] [1]) ? var_14 : ((var_3 ? var_2 : var_12))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_15 [4] |= ((24146 != (((arr_0 [5]) ? var_6 : 0))));

        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            var_23 = -var_14;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_24 |= (~var_14);
                            var_25 = (arr_26 [3] [i_5] [i_7] [i_8] [i_9]);
                            var_26 -= ((!(((+(((arr_14 [i_7]) ? (arr_23 [i_5] [i_6] [i_6] [i_8] [i_9]) : (arr_4 [i_5] [i_5] [i_5]))))))));
                        }

                        for (int i_10 = 2; i_10 < 7;i_10 += 1)
                        {
                            arr_31 [i_5] [i_5] [i_7] [8] [i_8] [i_7] = ((!(((var_13 ? var_0 : (arr_27 [i_5] [i_6 - 1] [i_6] [i_5] [i_10 - 1] [4]))))));
                            var_27 = ((((53 ? 2136960720 : 2158006562)) << (252 - 249)));
                        }
                    }
                }
            }
            var_28 = (!var_10);
        }
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 8;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 8;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 1;i_13 += 1)
                {
                    {
                        var_29 = (((((!(arr_26 [i_13 - 1] [i_5] [i_13 - 1] [i_13 - 1] [i_13])))) != (((-var_14 || (((var_5 ? (arr_30 [i_5] [i_11] [i_5] [i_12] [i_13]) : var_6))))))));
                        var_30 = (((-(arr_32 [i_11 + 1] [6] [i_13 - 1]))));
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        arr_42 [i_14] [i_14] = var_7;
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 12;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 16;i_18 += 1)
                        {
                            var_31 = (arr_47 [i_14]);
                            var_32 -= ((~(max(var_11, (arr_54 [i_14] [4] [i_16] [i_17 + 1] [1] [i_18] [i_17 - 1])))));
                        }
                        for (int i_19 = 0; i_19 < 16;i_19 += 1)
                        {
                            arr_59 [i_17] [i_15] [i_15] = ((((((arr_47 [i_14]) ? (arr_39 [i_14] [i_14]) : (!var_6)))) / ((1 ? -256 : (arr_53 [i_17 + 3] [i_17] [i_17 + 1] [i_17 + 1] [i_17 - 1] [i_17 + 4] [i_14])))));
                            arr_60 [i_16] [i_17] = ((-(((arr_49 [i_14] [i_16] [i_17 + 2] [3]) ? ((((arr_41 [i_19]) == var_15))) : (arr_56 [i_17 - 1])))));
                        }
                        arr_61 [i_17] = (~var_6);
                        arr_62 [i_14] [i_17] [i_16] [i_17 + 2] = (arr_51 [i_17] [i_17] [i_17] [i_14]);

                        for (int i_20 = 0; i_20 < 16;i_20 += 1) /* same iter space */
                        {
                            var_33 = (max(var_33, (arr_51 [i_14] [i_14] [i_16] [i_17])));
                            var_34 = ((255 ? 33 : -24147));
                            var_35 = ((min(252, ((64687 ? 65535 : 1)))));
                            var_36 -= ((((((!(arr_63 [i_14] [i_15] [i_16] [i_14] [i_16]))))) && ((min((((!(arr_47 [i_16])))), -var_3)))));
                            var_37 = ((((((max(var_14, var_8))) ? (arr_58 [i_14] [i_15] [11] [i_17 - 1] [i_20] [i_14]) : (((arr_52 [i_14] [11] [i_16] [1] [11]) ? var_9 : var_13))))) ? 65535 : (arr_40 [i_14] [i_15]));
                        }
                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 16;i_21 += 1) /* same iter space */
                        {
                            var_38 -= arr_39 [i_14] [i_14];
                            var_39 = (~((-24134 ? 483 : 1)));
                            var_40 = (min(var_40, (((!(arr_53 [14] [i_17] [i_17 - 1] [i_17 + 1] [i_21] [i_17 + 4] [2]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
