/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (min(var_20, var_4));
        var_21 = 18;
        var_22 = ((-(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
                    {
                        var_23 -= (((max((arr_9 [i_0] [i_2 - 1] [i_2 - 1] [i_3 + 1] [i_3 + 1]), var_0))) - (arr_6 [i_0] [0]));
                        arr_11 [i_0] [i_1] [i_3] [i_3] = var_17;
                        var_24 = (~28439);
                    }
                    for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                    {
                        var_25 *= (((((((max(-100, (arr_5 [i_0] [i_0] [21] [21])))) ? (arr_10 [i_4 + 1] [i_2] [i_2 - 1]) : (!var_18)))) ? (max(2913292868, 1)) : 1));
                        arr_15 [9] = ((233 ? (25 && 1) : (((4294967295 / 1282) ? var_3 : var_1))));
                    }
                    var_26 = (min(var_26, ((230 ? 1 : 1))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_27 ^= 4294967274;
                    var_28 ^= (((((!1) ? (arr_9 [i_0] [i_5] [i_5 - 1] [20] [i_5 - 1]) : (max(3236963260, var_1)))) == ((((arr_4 [i_5 + 2] [i_5 + 2]) ? (arr_4 [i_5 + 1] [i_5 - 2]) : (arr_4 [i_5 + 1] [i_5 - 2]))))));
                    var_29 = (max(var_29, ((max((((arr_4 [i_5 + 1] [i_5 - 1]) & (arr_13 [i_5 + 1] [i_5 - 1] [i_5 - 1]))), 1)))));
                    var_30 = ((-787444087 ? 6039312808273351475 : 1883418190));
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        var_31 = (arr_21 [i_7]);
        var_32 = (-6039312808273351481 ? (arr_1 [i_7]) : ((-3454 ? (~-5448754023656950213) : (arr_14 [i_7] [1] [i_7 + 1]))));
    }
    var_33 = (min(var_33, var_13));
    #pragma endscop
}
