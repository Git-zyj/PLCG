/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = var_4;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                var_13 += max(var_3, (((arr_8 [i_2 - 1] [i_1] [i_2]) ? (1641328056 + -22052) : var_7)));
                arr_9 [i_2] = ((!(((-(var_9 + -110))))));
            }
            var_14 = (min((max(((var_10 ? (arr_5 [i_0] [i_0] [i_0]) : var_8)), (arr_7 [i_0] [8] [8]))), (arr_8 [i_0] [i_0] [i_0])));
        }
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            arr_12 [i_0] = max((arr_8 [i_0] [i_3 - 1] [5]), (226 || 9700832168654768396));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_15 = (max(var_15, (((((226 ? (((arr_7 [i_0] [8] [i_6]) * var_11)) : (arr_0 [i_5])))) ? (((arr_17 [i_0] [i_0] [i_0] [i_0]) & ((19041 + (arr_3 [i_3]))))) : var_4))));
                            arr_21 [i_0] [i_3] [i_4] [i_5] [i_6] = var_4;
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        arr_25 [i_7] = (!var_9);

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 24;i_10 += 1)
                {
                    {
                        arr_35 [i_8] = ((2064384 < 1) ? 1 : ((((arr_23 [i_10 - 1]) == -var_10))));
                        var_16 *= ((-(((~var_8) * (~56)))));
                        var_17 = (min(226, ((30 ? (((arr_30 [i_7] [i_8] [i_9]) & 1)) : ((var_2 ? var_9 : 226))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        arr_42 [i_7] [i_8] [i_11] = (((var_1 ? (arr_30 [i_7] [i_8] [i_7]) : (arr_26 [i_7]))));
                        var_18 = (arr_22 [i_7]);
                        var_19 = (arr_33 [i_8] [i_11] [i_12]);
                        var_20 = (min(var_20, ((((-(arr_41 [16] [i_7] [i_11] [i_12] [i_11])))))));
                    }
                }
            }
        }
        var_21 = (max(var_21, (((!(arr_24 [i_7]))))));
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {

        /* vectorizable */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            arr_48 [i_13] [i_14] [i_13] = var_7;
            var_22 = (((arr_27 [i_14]) & var_11));
            var_23 = ((3305065657706749371 ? 29 : 227));
            arr_49 [i_13] [i_14] = ((226 ? 6592385275969816110 : 227));
        }
        var_24 = (min(var_24, (arr_31 [i_13] [0] [i_13])));
        var_25 *= (min(var_6, (max((min((arr_32 [i_13] [i_13] [i_13]), (arr_26 [i_13]))), (!var_3)))));
        var_26 = ((((!(arr_28 [i_13]))) ? (min((min(var_0, var_8)), (!var_5))) : (((var_6 ? (arr_30 [i_13] [i_13] [i_13]) : (!var_4))))));
    }
    var_27 = ((((((var_8 ? var_2 : var_11))) || -var_9)));
    var_28 = (min(var_0, (min((min(var_0, var_1)), var_10))));
    var_29 = var_3;
    #pragma endscop
}
