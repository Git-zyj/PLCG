/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_15 = (arr_1 [i_0 + 1]);
        arr_3 [i_0 - 1] = (((var_11 - var_5) >= (~-var_13)));
        var_16 = (((((24 / 29206) * (~var_11))) != 1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_17 = ((((((arr_5 [i_1] [i_1]) ? var_14 : (arr_0 [i_1])))) ? (-1038609769385866477 - var_14) : -32766));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_18 = 253;
                        var_19 = (max(var_19, (((((((var_13 < (arr_0 [i_2]))))) * ((1923145191377042345 ? -29206 : 9976849541615659580)))))));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_20 -= (arr_8 [i_5] [i_5]);
                            arr_17 [i_1] [10] [i_1] [i_1] [6] = var_11;
                        }
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            var_21 = (!523133059038289578);
                            var_22 = (~var_11);
                        }
                    }
                }
            }
        }
        var_23 = (29213 || 523133059038289583);
    }
    var_24 = (((((~(79 >= 1929143380156776361)))) ? ((((!(((16383 ? var_1 : var_12))))))) : (((var_13 ? var_2 : var_5)))));
    var_25 *= ((var_4 ^ 3100723711) >= var_1);
    var_26 = (min(var_26, ((((11595930340464985489 - 175) ? (((!var_8) ? (var_11 || var_2) : var_5)) : -2297)))));
    var_27 &= ((~(((!var_2) >> (6850813733244566143 - 6850813733244566138)))));
    #pragma endscop
}
