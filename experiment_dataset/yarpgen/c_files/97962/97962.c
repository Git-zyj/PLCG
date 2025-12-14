/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((var_4 ? 2550864538 : ((889656810 ? var_2 : 3956762615))));

        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            arr_8 [i_1] = ((4294855344 ? 234 : (~-4637)));
            var_12 += var_11;
            var_13 = (var_7 - var_3);
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_11 [i_0] = (((var_8 >= var_5) ^ var_5));
            var_14 = (max(var_14, (((var_4 >= ((var_5 >> (var_6 - 2670500149301721748))))))));
        }

        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            var_15 = (((0 * 6555) > -877696444));
            arr_15 [i_3] [i_3 + 2] [i_3] = var_7;
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            arr_19 [i_4] [9] = (var_6 > 18446744073709551615);
            var_16 = ((-((var_8 ? var_8 : var_4))));
            var_17 = ((((var_1 ? var_7 : var_3)) >= 1414071912));
            arr_20 [i_4] = (65535 ? var_7 : var_7);
            var_18 = -4646;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_24 [16] [i_5] = ((var_1 ? var_7 : var_9));

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                arr_27 [i_5] [i_5] [i_5] = ((var_0 ? var_2 : (15480 + var_3)));
                var_19 = var_1;
            }
        }
        arr_28 [1] = ((var_5 ? var_5 : 3956762615));
        var_20 ^= var_9;
    }
    var_21 = ((0 ? var_5 : ((var_9 ? var_2 : ((2 ? var_2 : var_2))))));
    #pragma endscop
}
