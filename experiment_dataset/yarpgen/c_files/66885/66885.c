/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_1, ((((min(var_8, 1))) ? ((-1682910579 ? -2923995581560962393 : (-9223372036854775807 - 1))) : var_7))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = -1682910581;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = ((!(((115 + (arr_8 [6] [i_1] [i_0] [i_1] [i_1] [i_0] [i_3 - 1]))))));
                                arr_10 [i_0] [i_1] [i_2] [i_3] [1] = var_15;
                            }
                        }
                    }
                }
            }
        }
        arr_11 [i_0] = (max(((((min((arr_3 [i_0] [i_0] [i_0]), 7408997486386781260)) >= ((var_9 ? var_9 : 11037746587322770361))))), var_5));
        var_22 = (max(var_22, var_13));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    arr_22 [i_5] [1] [i_7] [i_7] = ((((((arr_2 [i_5]) ? (arr_1 [i_5] [i_5]) : (arr_1 [i_6] [i_7])))) ? -458009122 : (arr_17 [i_5] [i_6] [i_5])));

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_27 [8] [i_6] = var_5;
                        var_23 = (--16696);
                        arr_28 [i_8] [i_7] [i_5] [i_5] = ((((((arr_19 [i_6]) ? -116 : var_14))) ? (var_9 - 127) : (var_14 != -106)));
                    }
                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {
                        arr_32 [i_5] [i_7] [i_9] = (((var_0 + -1271070189) ? (var_15 != var_18) : ((var_2 << (var_3 - 50)))));

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_24 = -1;
                            var_25 += (48840 & (arr_25 [1] [i_6] [i_7] [i_9 + 1] [i_10]));
                            arr_37 [i_7] |= (arr_13 [i_9] [i_10]);
                            var_26 = (min(var_26, (((var_12 ? (arr_6 [i_10] [i_9] [i_9] [i_9 - 1]) : (((arr_35 [i_5] [i_6] [i_7] [i_9] [i_7] [i_10]) ? 127 : 5952)))))));
                        }
                        arr_38 [i_5] [i_5] [i_9] [i_6] [i_9 - 1] [i_9 + 2] = 1682910571;
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 9;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 8;i_12 += 1)
                        {
                            {
                                arr_47 [i_5] [i_11] [i_7] [i_11] [i_12] = (((arr_43 [i_5] [i_5] [i_5] [7] [i_5]) != var_13));
                                var_27 = (((arr_15 [i_12 + 1] [i_12 + 1]) ? 59584 : var_11));
                                arr_48 [i_11] [i_7] = (((arr_20 [i_11 + 1] [i_11 - 2] [i_11] [i_11 - 1]) ? (arr_18 [i_11 + 1] [i_11 - 2] [i_11] [i_11 - 1]) : (arr_18 [i_11 + 1] [i_11 - 2] [0] [i_11 - 1])));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                {
                    arr_55 [i_5] [i_13] [i_13] [i_14] = (((((106 ? var_2 : -1271070189))) ? (arr_0 [i_13] [i_13]) : (1794409041 <= var_3)));
                    var_28 = (((11037746587322770361 ? 2787644707 : -5)));
                    arr_56 [i_13] [i_13] = (arr_52 [i_5] [i_5] [i_13] [i_14]);
                    arr_57 [i_5] [i_13] [i_5] = (!0);
                }
            }
        }
        var_29 = (min(var_29, 1));
    }
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        var_30 = ((((((var_2 ? var_0 : var_12))) && 216)) && (arr_7 [i_15] [i_15] [i_15]));
        var_31 = (min((29288 != var_0), (((((arr_0 [i_15] [i_15]) > var_16))))));
    }
    for (int i_16 = 4; i_16 < 19;i_16 += 1)
    {
        var_32 = (max(var_32, ((((((((var_2 ? var_5 : var_13)) + -121))) / ((((((var_9 || (arr_63 [i_16]))))) * (var_1 - var_15))))))));
        arr_64 [i_16] = (~var_8);
    }
    #pragma endscop
}
