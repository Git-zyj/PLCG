/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (min(var_7, (!-9929)));
    var_12 = ((!(((((min(8049243655972055352, 80))) ? ((116 ? 1515970130 : 885283090)) : 0)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = var_4;
        arr_3 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_14 = (min(var_14, (((54 >> (((arr_4 [i_1 - 1]) - 11982)))))));
        var_15 = (min(var_15, (((((1 ? 266812175221211173 : (arr_4 [i_1 + 1]))) == ((((arr_5 [i_1 + 1] [i_1 + 1]) / (arr_4 [i_1 - 1])))))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_16 = (min(var_16, ((((((!((!(arr_4 [i_2])))))) == (((((arr_8 [1]) ? (arr_8 [i_2]) : (arr_6 [i_2]))))))))));
        var_17 = -50;
        var_18 = (((((53988 ? var_3 : 6))) & ((~(arr_6 [i_2])))));
        var_19 = (arr_9 [i_2] [i_2]);
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        arr_13 [13] = (arr_12 [7]);
        arr_14 [i_3] = ((((var_10 == (((15975341840028306416 ? var_1 : (arr_11 [i_3])))))) ? (~var_7) : var_9));
        var_20 = ((var_0 >> (-5588 + 5619)));

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_21 = (min(var_21, ((((20 >> (var_1 - 1257693045)))))));
            var_22 = (min(var_22, ((((arr_10 [i_3 - 1] [i_3 + 1]) ? (arr_10 [i_4] [17]) : (var_3 == 1177302212))))));
            var_23 = (max(var_23, 2905516123));
            var_24 = (min(var_24, ((((max(2559415268, 1)) == (arr_12 [i_3 + 1]))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_25 [i_3] [i_3] [7] [i_3] [7] = (min(((((~159) == 1))), (max((min(var_3, -1395922365714889467)), ((var_3 ? 2147483647 : var_6))))));
                            arr_26 [16] [1] [16] [1] = var_0;
                            var_25 = (max(((var_4 ? (arr_21 [i_3] [13] [i_7 + 1] [4] [i_3 - 1] [i_7]) : var_9)), ((var_9 >> (((arr_21 [i_7 + 2] [1] [i_7 + 2] [i_7 + 2] [15] [i_5]) + 68))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_26 += ((!(arr_21 [i_3] [20] [i_3] [i_3] [i_3] [i_8])));
            var_27 = 148;
            var_28 += ((~(arr_20 [3] [3] [i_3])));
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        var_29 -= var_5;
                        var_30 = 11460944025734173824;
                    }
                }
            }
            var_31 ^= ((!((!((min((arr_22 [i_3] [i_3] [i_3]), (arr_22 [i_9] [i_9] [i_3]))))))));
        }
        arr_37 [5] [5] = ((+((((arr_17 [i_3 + 1]) == (arr_17 [i_3 - 1]))))));
    }
    #pragma endscop
}
