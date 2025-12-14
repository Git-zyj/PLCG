/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_10 ? var_1 : ((var_17 ? ((-118 ? 24 : -10670)) : -112))));
    var_20 |= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_9 [i_1] [i_2] [i_1] [i_1] = var_12;
                    arr_10 [i_1] = (arr_7 [13] [6] [i_0]);
                    var_21 = (((var_8 ? 117 : 1)));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_22 = (~1783511245);
                    var_23 = (((127 ? var_13 : (arr_11 [i_1 - 2] [i_1 - 2] [i_1 - 1]))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0] = ((((arr_15 [i_3] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 + 1]) ? (arr_15 [i_4] [i_1 + 1] [i_1] [i_1] [i_1 - 2] [i_1 - 1]) : var_17)));
                        arr_18 [i_4] [i_1] [i_1] [i_1] [i_1] [i_0] = 2834226789;
                        var_24 = ((!(((-4294967295 << ((((9 ? (arr_11 [i_0] [i_3] [i_0]) : (-2147483647 - 1))) + 26797)))))));
                        arr_19 [i_1] [i_1] [i_1 - 2] [i_1] = ((1 ? 65424 : -101));
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        arr_22 [i_5] [i_1] [i_1] [3] = (max(2307508999297401104, 974834004));
                        var_25 = (((arr_3 [i_0] [i_0]) ? ((((((arr_1 [i_0]) ? 2423 : 2))) & (arr_20 [i_5 + 3] [i_5 - 1] [i_5 - 1] [i_1 - 2] [i_1 - 1]))) : var_12));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        var_26 = (((((3187312999728924289 ? var_18 : (arr_21 [i_6])))) ? var_0 : 2305807824841605120));
                        arr_26 [i_6] [14] [14] [i_0] |= ((!(arr_5 [i_6 + 1] [i_1 - 1] [i_1])));
                    }
                    arr_27 [4] [i_1] [i_1] [i_0] = 0;
                }
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    arr_31 [i_1] [i_1] [i_1] = var_12;
                    var_27 = ((!(!-100)));
                    arr_32 [i_7] [i_1] [i_1] [1] = ((var_7 ? ((-32763 & (arr_28 [i_1] [i_1] [i_1]))) : 9611));
                    arr_33 [i_1] [16] [i_1] = ((!(!-32766)));
                }
                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    arr_36 [i_1] [i_1] = (((((1 ? var_8 : var_14))) - 2305807824841605134));
                    arr_37 [i_1] [i_1] [i_1] = (!((((arr_11 [i_1 - 1] [i_1 - 1] [i_0]) ? (arr_8 [i_1] [i_1]) : 14336))));
                }
                var_28 = ((!(--1468)));
            }
        }
    }
    #pragma endscop
}
