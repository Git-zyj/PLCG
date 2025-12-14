/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((127 || var_11) ? -23 : ((0 ? var_7 : (min(25, var_15))))));
    var_17 = (var_4 << (((((max(var_5, var_8)) + (max(0, var_15)))) - 964518358)));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_18 = (max(var_18, (arr_3 [i_0] [i_0])));
        var_19 += (((((2088960 ? var_11 : 0))) ? (((min(var_14, (arr_2 [i_0]))) ^ (arr_3 [4] [i_0]))) : (max((min(var_9, 1073217536)), (((arr_3 [3] [i_0 - 1]) | 2040))))));
        var_20 = (min((min((arr_0 [i_0 + 1] [i_0 - 2]), (arr_3 [i_0 + 3] [i_0 + 3]))), (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_21 = (((max(1, 1)) ? (min(1, (arr_3 [i_1] [i_1]))) : (((0 * (arr_2 [i_1 + 1]))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_14 [i_1] [i_2] [i_2] = (56208013 | 3556040818);
                var_22 = ((arr_3 [i_1 + 1] [i_2]) ? 250 : (var_12 & var_14));
                arr_15 [2] [i_2] [2] |= ((var_0 << (41 - 27)));
            }
            var_23 = var_12;
            var_24 -= (arr_11 [i_1] [0]);
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {

                for (int i_6 = 4; i_6 < 9;i_6 += 1)
                {
                    arr_25 [i_5] [i_5] [i_5] [i_5] = ((738926492 ? 112 : 2342394408));
                    var_25 -= ((-65 ? 647597609 : ((((!(arr_7 [i_4])))))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_26 = ((arr_6 [i_5]) * var_7);

                    for (int i_8 = 1; i_8 < 6;i_8 += 1)
                    {
                        var_27 = (40 > 2016892555);
                        var_28 = 3986011083;
                        var_29 += (((4294967295 || 8) ? (1 != 0) : (1 * var_5)));
                        arr_32 [i_1 + 1] [i_4] [i_5] [3] [i_5] [i_8] [i_1 + 1] = (((arr_8 [i_5] [i_1] [i_5]) && (arr_2 [i_1])));
                        arr_33 [i_1] [i_1] [i_5] = (arr_24 [i_5]);
                    }
                    arr_34 [i_5] [i_5] [i_5] [i_5] = (i_5 % 2 == 0) ? (((1 & var_13) >> (((((arr_29 [i_1] [i_4] [i_1] [i_7] [i_1]) ? (arr_31 [i_7] [i_5] [i_5] [i_1] [i_1]) : 25)) - 243)))) : (((1 & var_13) >> (((((((arr_29 [i_1] [i_4] [i_1] [i_7] [i_1]) ? (arr_31 [i_7] [i_5] [i_5] [i_1] [i_1]) : 25)) - 243)) + 219))));
                    var_30 = (~1);
                    var_31 = (((arr_11 [i_5] [i_5]) * (arr_4 [i_1 + 1])));
                }
                var_32 = (min(var_32, (arr_29 [5] [i_4] [5] [i_4] [i_4])));
            }
            var_33 = ((((((arr_26 [i_1] [i_4] [i_1 + 1] [i_1]) ? (arr_26 [i_4] [i_4] [i_1 + 1] [i_4]) : (arr_5 [i_1] [i_4])))) ? (arr_26 [i_1] [i_4] [i_1 + 1] [i_1 + 1]) : ((((arr_5 [i_1] [i_4]) && 2728408783)))));
        }
        var_34 = (min(4294967295, ((min(5, (arr_1 [i_1 + 1]))))));
    }
    #pragma endscop
}
