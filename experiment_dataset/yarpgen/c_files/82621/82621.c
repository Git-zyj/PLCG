/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -173719213054575077;
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((arr_2 [i_0]) / (arr_2 [i_0]))) / (((arr_2 [i_0]) - (arr_1 [i_0])))));
        arr_5 [i_0] = ((~(((arr_2 [i_0]) / (max((arr_3 [i_0]), (arr_1 [i_0])))))));
        var_16 = min((((arr_1 [i_0]) / (arr_3 [4]))), (arr_1 [i_0]));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1] = -var_5;
        arr_9 [i_1] = (((arr_7 [i_1] [i_1]) & (arr_1 [i_1 - 1])));
        var_17 = (min(var_17, var_3));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 += max(var_6, (43147 <= var_4));
            arr_13 [i_2] = var_5;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_19 [1] [i_3] [i_3] [0] = (arr_14 [i_1 - 1] [i_1 - 1]);
                arr_20 [i_4] [i_3] [i_3] [i_1 - 1] = ((-(arr_12 [i_1 - 2] [i_1 + 1])));
                var_19 = ((var_1 ? (arr_7 [i_1] [i_1 - 2]) : 0));
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                arr_24 [i_1] [9] [i_5] = (((((var_7 * (-32767 - 1)))) ? (arr_6 [i_1 + 1]) : 80));

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    arr_27 [i_6] [i_1 - 2] [i_6] = (((arr_3 [i_3]) + (arr_26 [i_1] [i_6])));
                    var_20 = (-9223372036854775807 - 1);
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {

                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        var_21 = (~23593);
                        var_22 = (((arr_21 [i_1 - 2] [i_1 + 1] [i_1 + 1] [3]) & var_10));
                        var_23 = (((arr_7 [i_1] [i_1 - 2]) ? var_12 : (arr_7 [i_1] [i_1 + 1])));
                        var_24 = (((arr_29 [i_5] [i_1 + 1] [i_1]) <= (arr_29 [i_8] [i_1 - 1] [i_1])));
                    }
                    var_25 = (var_11 ? var_4 : (arr_32 [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_3] [i_1 - 2]));
                }
            }
            arr_34 [13] [i_1] [i_1] = (((arr_26 [i_3] [i_1]) & (arr_32 [i_3] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1])));
        }
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 13;i_9 += 1)
    {
        arr_38 [i_9] = arr_35 [i_9 - 3];
        var_26 = -var_2;
    }
    for (int i_10 = 3; i_10 < 24;i_10 += 1)
    {
        arr_43 [i_10] [i_10] = (max((min(var_1, 23580)), 41942));
        var_27 = (min(var_27, var_0));
        var_28 += (23593 | -6516226719442978668);
    }
    var_29 |= ((((((var_4 ? var_5 : 647827483))) ? var_10 : (((var_7 ? var_2 : var_2))))));
    #pragma endscop
}
