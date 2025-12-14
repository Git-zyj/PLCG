/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((max(215, 215)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_13 = (min(var_13, var_10));
                    var_14 = 111;
                }
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    var_15 = (min(var_15, (((-172 ^ (arr_2 [i_0] [i_3]))))));
                    var_16 = (!1);
                    arr_9 [5] [i_1] [i_1] [14] = (arr_6 [i_3] [i_1] [i_0]);
                }
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    var_17 ^= var_7;
                    arr_12 [5] [i_1] [i_0] = 0;
                    arr_13 [0] [0] [0] [0] = var_11;
                    arr_14 [i_0] [19] [i_1] [i_0] &= (((((var_0 ? (arr_5 [i_4 - 2] [20]) : (var_2 || var_5)))) ? ((var_9 ? ((var_2 ? 10832041532944798903 : 7614702540764752712)) : (((1548629770570600621 ? 15 : (arr_5 [i_0] [i_1])))))) : ((((!(!var_4)))))));
                }
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    arr_17 [i_0] [8] [i_5] [i_5 - 1] = ((var_9 ? ((((!(((var_3 ? 6306512482248708331 : var_11))))))) : (~var_8)));

                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        var_18 = ((7614702540764752712 ? 817050685 : 12140231591460843284));
                        arr_21 [i_6] [i_5] [i_5] [i_5] [i_5] [i_0] = arr_6 [i_5] [20] [i_0];
                        var_19 = (max(var_19, (!-var_3)));
                        var_20 = (arr_16 [i_0] [i_5] [i_5 - 1] [i_5]);
                        arr_22 [i_0] [i_0] [i_5] [i_0] = 125;
                    }
                    var_21 = (((10257685389162805839 ? 3626490467 : 19087)));
                    var_22 = ((~(arr_15 [i_0] [i_1 - 1] [i_0] [i_5])));
                    var_23 = (arr_7 [4] [i_1] [i_1]);
                }
                arr_23 [i_0] [i_0] = ((-((var_8 % (arr_18 [i_1 - 1])))));
                var_24 = (min(var_24, (arr_20 [i_0] [i_0] [i_1] [i_1])));
                arr_24 [i_1] |= 3389601666;
            }
        }
    }
    var_25 *= (((((-var_8 ? 14 : -var_5))) ? -var_6 : (min((var_3 & 215), ((var_6 ? var_9 : var_3))))));
    var_26 *= (((var_11 * var_3) ? (max(-var_2, (max(215, var_4)))) : ((((var_5 & var_1) ? (var_9 & var_10) : var_9)))));
    #pragma endscop
}
