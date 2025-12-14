/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_7 / -4148126593659250772) * (((var_10 % var_8) ? 0 : (28585 | 7116104512930103998))));
    var_21 = (max(-7116104512930103998, (!var_7)));
    var_22 = ((((721411222 ? (((max(var_12, var_3)))) : 1664035167)) >> (((((-66 ? 7967 : -7116104512930103977)) > 28562)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_23 = (((max((arr_1 [i_0]), (arr_0 [i_0]))) + (((((arr_0 [i_0]) <= 7116104512930104016))))));
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_24 = (min(var_24, (((((max((arr_1 [i_0]), ((-2913977522753388318 ? (arr_0 [i_0]) : (arr_1 [i_0])))))) ? ((((max(-31495, 90))) ? (0 / var_14) : (arr_0 [i_0]))) : var_17)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [8] [8] [0] [i_2] |= ((((max((arr_4 [i_2] [i_3]), (7973 == var_18)))) ? (!38632) : 127));
                                arr_16 [0] [i_0] [i_4] [i_3] [i_4] [i_4] = ((-((((var_10 > (arr_1 [i_2])))))));
                                arr_17 [i_0] [4] [i_2] [i_4] [6] [i_0] [i_4] = (9176800274387362280 & 10359);
                                var_25 = ((65527 ? (arr_4 [i_3] [i_0]) : (max(29660, (~1)))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_2] [i_0] = (((arr_12 [i_2] [1] [i_2] [i_1] [i_0] [0]) ? 0 : (((arr_3 [i_0] [i_0] [i_0]) & 2147483647))));
                }
            }
        }
        var_26 = (arr_6 [i_0] [i_0] [i_0]);
    }

    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        var_27 = ((((((var_4 ? (arr_19 [i_5]) : 127))) ? (7116104512930103998 - var_19) : (~var_15))));
        var_28 = ((max((arr_19 [i_5]), -21845)));
    }
    #pragma endscop
}
