/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -1640096786;
        var_12 = 1148098094;
        var_13 = (min(3146869221, 3146869201));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_14 = (1148098094 < 350137070029474698);
        var_15 += min((((((arr_3 [8]) > var_8)) ? (arr_4 [1]) : 1148098077)), 55823);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_16 = ((1 ? ((1148098095 ? 1148098094 : (arr_1 [i_2]))) : (((-(arr_8 [i_3]))))));
            var_17 = (max(var_17, (arr_8 [i_2])));
            var_18 = ((0 ? ((3 + (arr_8 [i_2]))) : (arr_6 [i_3 + 1] [i_3 + 1])));
        }
        var_19 = var_11;
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_20 = ((+(min((62691 - -18), (arr_12 [i_6])))));
                            var_21 = (arr_20 [i_4] [3] [i_7] [i_7]);
                            var_22 = (max(var_22, ((((var_11 % 40992) * ((~(arr_15 [i_4] [0] [0]))))))));
                            var_23 = (min(var_23, (((arr_15 [5] [5] [5]) && ((min(65535, -2638585294723547525)))))));
                        }
                    }
                }
            }
            arr_23 [i_5] [i_4] [11] = (((((((min(var_11, var_1))) ? (((min((arr_13 [i_5]), 47192)))) : (((arr_4 [11]) ? (arr_18 [13] [i_4] [i_4]) : (arr_4 [i_4])))))) < ((0 ? 17513507388339637788 : 18328))));
            var_24 = (min(var_5, ((((((-(arr_11 [12])))) && (arr_15 [i_5] [i_5] [i_4]))))));
        }
        var_25 = (arr_4 [i_4]);
    }
    var_26 += var_8;
    #pragma endscop
}
