/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_11 += (max(243, ((((arr_2 [i_0 - 1]) && (arr_2 [i_0 + 2]))))));
            arr_5 [i_0] [i_1] = ((((((!(arr_0 [i_0]))) ? var_4 : 1)) <= ((var_2 ? (((var_10 ? 222 : -1566685588))) : (max(2, (arr_2 [i_0])))))));
            var_12 = (min(var_12, (((max(2655429799, -26173))))));
            var_13 = (~var_9);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_14 = var_6;
            /* LoopNest 3 */
            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_15 [i_0 - 3] [i_0] [i_0] [i_4] [i_5] = (arr_7 [i_0] [i_3] [i_5 - 2]);
                            var_15 = (arr_3 [i_0] [i_0]);
                            arr_16 [i_0] [i_2] [i_2] [i_2] [i_5 - 4] [i_3] = (i_0 % 2 == zero) ? (((1 << (((arr_13 [i_0 - 1] [i_0] [i_3 + 1]) - 1980475985))))) : (((1 << (((((arr_13 [i_0 - 1] [i_0] [i_3 + 1]) - 1980475985)) + 1844508588)))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] = ((-(((var_3 < ((max(var_2, var_1))))))));
                            var_16 = 0;
                        }
                    }
                }
            }
            var_17 = ((((((~(arr_14 [i_2] [i_0] [i_0] [13])))) ? ((((var_7 <= (arr_10 [i_0] [i_2] [i_0] [i_0] [i_0]))))) : (max(var_10, 1948782189940252987)))));
            var_18 = var_0;
        }
        var_19 += var_6;
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 8;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 7;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        var_20 = (max((arr_26 [i_7 - 1] [i_7] [i_7] [i_7 + 2] [i_7 + 2]), (((~((max(243, var_0))))))));
                        var_21 = 2899521504;
                    }
                }
            }
        }
        var_22 = var_7;
        var_23 = 2997621785392613618;
    }
    var_24 = 1948782189940252987;
    var_25 -= (max(var_2, var_8));
    var_26 = max(var_8, (max(var_0, var_7)));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            {
                arr_36 [i_10] [i_10] [i_10] &= (-9223372036854775807 - 1);
                arr_37 [i_10] [i_11] = ((((((((var_9 ? (arr_30 [i_11] [i_11]) : 5))) ? (arr_35 [i_11]) : -var_10))) ? (-7433009686932974535 | 26173) : (((~(arr_29 [i_11]))))));
                var_27 = ((((((((max((arr_32 [i_10] [i_11]), 9223372036854775794))) ? (~29805) : (~var_6))) + 2147483647)) << (var_1 - 96)));
                arr_38 [i_11] [i_11] [i_11] = ((var_0 ? (((((0 / (arr_32 [i_10] [i_11])))) ? ((2093005867 ? (arr_29 [i_10]) : var_10)) : var_3)) : (arr_30 [i_11] [i_10])));
                var_28 = ((~((var_5 ? 1395445790 : 26173))));
            }
        }
    }
    #pragma endscop
}
