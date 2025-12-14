/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((min((arr_1 [i_0] [23]), 1839257600))));
        arr_3 [i_0] = (((((((0 ? var_1 : (arr_1 [i_0] [i_0])))))) ^ 32767));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_14 [i_2] [i_2] [i_2] [8] = (((arr_11 [i_1] [i_2] [i_3] [i_4]) || var_6));
                        arr_15 [1] [8] [i_2] [8] [i_4] = ((var_3 ? (arr_0 [i_2]) : var_7));
                    }
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        arr_18 [i_2] = (((-42 < var_8) ? 252 : (arr_6 [i_1] [i_2 - 1])));
                        var_12 = 0;
                        arr_19 [i_2] [i_5] = (arr_16 [i_1] [i_1] [11] [i_2] [i_2] [18]);
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_23 [i_1] [i_2] [i_6] = (-(arr_10 [i_2] [i_2] [i_2]));
                        arr_24 [i_2] [i_2] [i_3] = (65535 || var_7);
                    }
                    var_13 = var_8;
                    arr_25 [i_1] [i_2] [i_3] [i_2] = (~var_2);
                }
            }
        }
        var_14 = (max(var_14, var_7));
        var_15 = 17;
    }
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        arr_29 [i_7] = (var_6 % -42);
        var_16 = var_7;
        arr_30 [i_7] = (arr_20 [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_7]);
        var_17 -= ((((((arr_9 [i_7] [i_7] [i_7]) ? (!var_7) : ((-8687 % (arr_26 [i_7 + 1])))))) ? (((28925 ? (arr_9 [i_7] [i_7] [i_7]) : 0))) : ((-(max(-1916086467077070165, var_9))))));
    }
    var_18 -= 425161405;
    #pragma endscop
}
