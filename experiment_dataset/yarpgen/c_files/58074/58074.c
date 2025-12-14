/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_3 ? 1 : -223))) ? var_8 : var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 *= arr_0 [1] [i_0];
        arr_3 [i_0] = 255;
        var_16 = ((((~(arr_1 [1] [i_0]))) <= ((46 ? 1 : 53))));
        var_17 *= (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 = ((128 % ((~(arr_4 [i_1 - 1] [i_2])))));

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                var_19 = (min(var_19, 1));
                var_20 = (max(var_20, 64));

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_21 = (min(var_21, 152));
                    var_22 *= ((!(arr_6 [i_3 - 1] [i_1 - 1])));
                    var_23 *= -81;
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_24 = (min(var_24, ((((arr_13 [i_3 - 1] [2] [1] [1] [i_1 - 1] [i_3]) ? (arr_10 [i_1] [i_1 - 1] [i_3] [i_3 - 1]) : (arr_13 [1] [i_2] [i_1 - 1] [i_5] [1] [i_5]))))));
                    arr_18 [i_2] [8] [i_3] [i_1] = 1;
                }
                arr_19 [13] [5] [i_3] [i_1 - 1] = ((-(arr_6 [i_1] [i_2])));
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_25 = 1;
                var_26 *= ((-(arr_14 [i_6] [i_1 - 1])));
                var_27 *= (~0);
                var_28 *= 1;
                var_29 = 221;
            }
            arr_23 [1] [i_2] [i_2] = (((arr_20 [i_1 - 1] [i_1 - 1] [i_2] [i_2]) + (arr_20 [i_1] [4] [i_2] [i_2])));
            arr_24 [i_1] = -1;
            arr_25 [3] = arr_13 [9] [i_2] [i_1] [i_1] [i_2] [i_2];
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_30 [13] [1] = (arr_14 [1] [i_7]);

            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                arr_34 [i_8] = (max((((~0) ^ (~18))), ((~(arr_5 [i_1 - 1])))));
                var_30 = ((((1 ? (arr_17 [i_1 - 1] [1] [1]) : (arr_17 [i_8 - 1] [i_7] [i_7]))) << 1));
            }
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                var_31 = 1;
                var_32 *= ((((((arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_17 [i_1 - 1] [i_1 - 1] [i_7]) : 191))) ? 3 : ((22 ? (arr_26 [1] [i_1 - 1] [i_1 - 1]) : -38))));
                var_33 *= (~53);
                var_34 *= arr_28 [i_1] [i_7] [i_1 - 1];
            }
            var_35 = (min(var_35, (((((((arr_28 [i_1 - 1] [1] [1]) - ((max((arr_4 [i_1] [i_7]), (arr_35 [1]))))))) && (arr_26 [i_1 - 1] [9] [i_7]))))));
            var_36 *= (max(1, ((-(arr_29 [i_1 - 1])))));
        }
        var_37 = arr_21 [i_1 - 1];
        arr_38 [i_1] [i_1] = ((((-(1 - 1))) + (arr_8 [i_1] [i_1] [i_1 - 1] [i_1])));
        var_38 = ((~(((0 | 1) ? 1 : (~1)))));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        var_39 = 119;
        arr_41 [i_10 - 1] = (((arr_21 [i_10 - 1]) ? (arr_28 [1] [i_10 - 1] [i_10 - 1]) : (arr_13 [i_10 - 1] [i_10 - 1] [i_10] [1] [i_10 - 1] [i_10 - 1])));
    }
    #pragma endscop
}
