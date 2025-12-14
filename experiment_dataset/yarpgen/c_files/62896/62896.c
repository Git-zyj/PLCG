/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_6;
        arr_4 [i_0] = ((var_14 ? var_6 : var_5));
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            arr_10 [i_2] [i_2] = (((arr_9 [i_1 + 1]) / 4483010942044605260));

            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                arr_14 [i_1] [i_2 + 4] [i_2] = ((!(((var_12 ? 58140 : var_16)))));
                arr_15 [i_1] [i_2] [6] |= -var_15;
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_17 *= ((~(arr_2 [i_4])));
                            var_18 += ((-((15872 ? var_11 : (arr_8 [i_1 + 1] [i_1] [i_1])))));
                            var_19 -= ((4483010942044605247 ? 7413508407347018623 : var_14));
                            arr_21 [i_1] [9] [i_3] [i_1] [i_2] = 261632;
                        }
                    }
                }
                var_20 = (arr_12 [i_1] [i_1] [i_1] [i_1]);
            }
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_24 [i_1] [i_2] = ((var_1 ? (arr_17 [i_2] [i_2 + 4]) : var_7));
                arr_25 [i_1] [i_2] [i_2] [i_6] = (((((4483010942044605247 ? var_15 : 4483010942044605264))) ? (arr_0 [i_1 - 1]) : (arr_22 [i_1] [i_6])));
            }
        }
        arr_26 [i_1] [i_1] = var_14;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_21 = var_16;
        var_22 = ((15872 / (arr_27 [i_7] [i_7])));

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_33 [i_7] [i_8] = ((var_12 ? 2322799985628126256 : var_1));
            var_23 = ((-(arr_31 [i_7])));
            var_24 = 20319;
            var_25 = var_4;
        }
        var_26 -= ((2140041855942378470 ? ((13963733131664946389 ? var_13 : var_15)) : ((8051498679303449848 ? var_0 : 67))));
    }
    var_27 = ((var_15 ? var_0 : var_7));
    #pragma endscop
}
