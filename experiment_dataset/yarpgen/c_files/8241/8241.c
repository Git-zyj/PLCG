/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (min(157, 871365902));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 |= (min(671423774, (min((arr_6 [i_0] [i_0] [i_1] [1]), 121))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (max((min(((((arr_10 [15] [i_1] [i_2] [i_3 - 2] [i_4]) / var_1))), var_14)), ((max((4503599627108352 && 3663544617915771458), -671423784)))));
                                var_17 = (max(var_17, (671423767 | -18399)));
                                var_18 = (max(var_18, -64));
                                var_19 = (min(-3663544617915771464, -5273260865036727207));
                            }
                        }
                    }
                    var_20 = (var_3 / 6977979902455716531);
                    var_21 += var_3;
                }
            }
        }
        var_22 = (((143 % 108) ? (((((min((arr_5 [i_0 - 1] [i_0 - 1] [i_0]), var_13)))) % var_10)) : (arr_0 [i_0 - 1])));
    }
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        var_23 = (min(var_23, 99));
        arr_15 [i_5] [i_5] = ((((((arr_11 [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1]) ? (arr_4 [i_5] [i_5]) : (arr_4 [i_5] [i_5 - 1])))) ? (180 | 1) : (((var_12 > (arr_4 [i_5] [19]))))));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_24 = (min(var_24, 1));
                    var_25 = 63;
                }
            }
        }
        arr_22 [i_5] = ((((min(((((arr_18 [i_5]) || var_5))), (min((arr_19 [7] [i_5]), var_7))))) || (0 && -7775827976535094994)));
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_26 = var_3;
        arr_25 [i_8] = ((var_10 | (min((arr_0 [i_8]), (min((arr_3 [i_8]), var_0))))));
        arr_26 [i_8] [i_8] = (((max(3638106061, -7591923263986787583)) / ((((-18399 ? 1 : -5221705875842342451)) * ((109 ? 5538965520204714887 : 0))))));
    }
    #pragma endscop
}
