/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!(((var_2 ? (!153) : var_11))));
    var_21 = (!(242 - var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] = max((arr_2 [i_1 + 1]), ((((!var_15) > (!242)))));
                arr_5 [i_0] [i_0] [i_1] = (((((1610612736 ? 5 : var_0))) ? 50015 : (arr_1 [i_0])));
                arr_6 [i_0 + 2] [i_0] = ((-30244 ? var_4 : 15503));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_22 -= var_10;
        arr_9 [1] = (var_11 || var_8);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                arr_19 [i_3] [i_3] [i_3] [i_3] = ((-((-564004382 ? 50017 : 12505068050161511674))));

                for (int i_6 = 1; i_6 < 24;i_6 += 1)
                {
                    var_23 = ((var_1 ? -var_12 : -84));
                    var_24 = (min(var_24, 16));
                    arr_22 [i_3] [i_3] [i_5] [17] [i_5] [i_6] = (((~var_17) ? (!var_14) : (1 - 15520)));
                    arr_23 [i_3] [i_3] [i_3] [i_6] = var_18;
                    var_25 *= 1;
                }
                arr_24 [i_3] [i_3] = ((-3283507515228322407 ? (arr_7 [i_5 - 1]) : var_12));
                arr_25 [i_3] [i_4] [i_4] [i_4] = (arr_20 [i_5 + 2] [i_5 + 3] [i_5 + 2] [i_5] [i_5 + 2]);
            }
            arr_26 [i_3] [i_4] = (((var_18 <= var_5) != (-1193738464 & var_7)));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_26 = (min(var_26, (((var_14 ? 1 : ((216598275 ? -72 : 2147483644)))))));
            arr_29 [i_3] [i_7] &= -134086656;
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 22;i_9 += 1)
            {
                {
                    arr_36 [i_3] [i_9] = (((-(arr_20 [i_9] [i_9] [i_9] [i_8] [i_3]))));
                    var_27 = (min(var_27, -var_1));
                    var_28 = (min(var_28, -29122));
                    var_29 = (-1193738468 ? (((arr_35 [i_3] [i_3]) ? var_14 : var_19)) : (arr_17 [i_3] [2] [i_9 - 3] [i_9]));
                }
            }
        }
    }
    #pragma endscop
}
