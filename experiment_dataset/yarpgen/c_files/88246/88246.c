/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (((((((var_0 ? 1446803047397852293 : (arr_0 [i_0])))) ? var_7 : (!-1496473882297263408))) | (max((var_7 | var_11), var_10))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_19 ^= var_8;
                        arr_10 [0] [i_1] [i_2] = (((((((var_4 ? var_10 : (arr_2 [i_1]))) & (var_1 & var_8)))) * (((((arr_3 [i_0]) / var_9)) / ((((arr_5 [i_3] [i_0] [i_0]) ? var_11 : (arr_8 [i_0] [5]))))))));
                        var_20 ^= max((arr_6 [i_0] [i_1] [i_2] [1]), (max(-4251024426401660784, -1496473882297263406)));
                    }
                }
            }
            arr_11 [i_0] &= -1496473882297263406;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_16 [i_0] = (~var_11);
            arr_17 [i_0] [i_4] [i_0] = (16280 ? ((-(arr_4 [i_4]))) : var_2);
            var_21 *= (~var_8);
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = max(536870896, (max((13 % -6962293952358600000), ((var_14 ? (arr_2 [i_5]) : 9079256848778919936)))));

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_22 -= ((max(9, (max(var_15, (arr_4 [i_6]))))));
            var_23 = 9;
            arr_24 [i_5] [i_5] = (~var_10);
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
    {
        var_24 -= (arr_19 [i_7] [i_7]);
        var_25 = ((!(arr_4 [i_7])));
        var_26 -= ((var_4 ? (((arr_6 [i_7] [i_7] [i_7] [13]) ? (arr_6 [i_7] [i_7] [i_7] [i_7]) : 113)) : var_15));
        arr_27 [i_7] [i_7] = var_8;
        var_27 *= (((arr_15 [i_7]) / ((-(arr_22 [i_7])))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        arr_31 [i_8] [i_8] = (((arr_5 [i_8] [i_8] [i_8]) ? (arr_5 [i_8] [i_8] [i_8]) : (arr_22 [i_8])));
        var_28 ^= (arr_18 [i_8] [i_8]);
        arr_32 [i_8] = (var_3 >= var_16);
        arr_33 [i_8] = (!var_15);
        arr_34 [i_8] = ((!(~var_14)));
    }
    var_29 = ((((((((max(4939357973088727136, var_8))) && (var_2 ^ var_13))))) % var_9));
    var_30 = var_7;
    #pragma endscop
}
