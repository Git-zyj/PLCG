/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = var_7;
                    var_15 *= (((arr_6 [i_0] [i_2 - 2] [1] [i_1 + 2]) > 0));
                    var_16 = 7;
                }
            }
        }
        arr_8 [i_0] = ((var_1 ? -var_4 : (~0)));
        arr_9 [11] [i_0] = (arr_0 [i_0]);
        var_17 = 231;
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            arr_16 [i_3] [i_3] = (((arr_4 [i_4 + 1] [i_4 + 1]) ? -1232973477 : ((var_5 ? var_12 : (arr_2 [i_3 - 1] [8])))));
            var_18 = (252 ? (-127 - 1) : (-2147483647 - 1));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_20 [i_3] [i_5] [i_5] = ((((((-127 + 2147483647) << (126 - 126)))) ? (((((~(arr_11 [i_3 - 1] [i_5])))) ? (arr_17 [4]) : var_10)) : (arr_11 [i_3] [i_3 - 1])));
            var_19 = 1;
            var_20 = (max((var_6 > var_8), (((32736 ? -255 : (((arr_5 [i_3] [6] [7] [i_5]) ? -117 : 251)))))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_24 [i_3 - 1] [i_3] [i_6] = (var_12 < (((max((arr_22 [3] [9]), (arr_11 [i_3] [1]))) ? ((~(arr_10 [6]))) : (!-345148262))));
            var_21 = min(var_9, (((((arr_17 [i_3]) * (arr_21 [i_6]))))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            arr_28 [i_3 - 1] [i_3 - 1] = (((arr_23 [i_3 - 1] [i_3 - 1]) * var_5));
            arr_29 [i_7] [4] [5] = (((arr_23 [i_3 - 1] [i_3 - 1]) ? var_2 : (arr_23 [i_7] [i_3 - 1])));
            var_22 = (min(var_22, -82));

            for (int i_8 = 3; i_8 < 10;i_8 += 1)
            {
                arr_33 [7] [i_7] = 3;
                var_23 *= 63;
                var_24 *= 783625714;
                arr_34 [3] [i_3] = ((((((arr_19 [i_7]) != (arr_14 [i_3] [9])))) + 1));
            }
            for (int i_9 = 4; i_9 < 9;i_9 += 1)
            {
                arr_37 [i_7] [i_7] [i_9] [i_9] = ((0 ? 74 : 1));
                var_25 = ((32736 ? (((54 && (arr_5 [i_3] [i_3] [1] [i_3])))) : (arr_35 [i_9])));
            }
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                var_26 = (var_3 <= var_2);
                arr_42 [8] [i_3 - 1] [0] [1] = (arr_41 [i_3] [i_10] [i_10]);
                var_27 = var_9;
                arr_43 [i_3] [i_7] = (-127 - 1);
                var_28 -= (arr_23 [1] [11]);
            }
            var_29 ^= ((arr_0 [i_3 - 1]) ? (arr_0 [i_3 - 1]) : var_10);
        }
        var_30 = 0;
    }
    for (int i_11 = 1; i_11 < 14;i_11 += 1)
    {
        arr_47 [i_11 + 2] [i_11 + 2] = ((+(min((arr_45 [i_11 - 1]), (arr_45 [i_11 + 2])))));
        var_31 = (((2139239998 ? 1 : 7)));
    }
    #pragma endscop
}
