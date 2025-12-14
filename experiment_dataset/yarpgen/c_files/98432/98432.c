/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_13 = -19759;
        var_14 = var_4;
        var_15 = (max(var_15, var_0));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_16 = (arr_3 [i_1]);

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_17 = (arr_0 [i_1]);
            var_18 -= (arr_5 [i_2] [i_1]);
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_19 -= (arr_6 [i_1] [5]);
            var_20 = (max(var_20, (var_2 | -4628)));
            var_21 |= ((~(arr_12 [i_1])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_20 [i_1] [8] [i_3] [i_3] [i_4] [i_5 + 3] = ((9223372036854775807 ? (((var_1 ? (arr_13 [i_5] [i_1] [i_1]) : 18446744073709551615))) : var_2));
                        var_22 = (arr_11 [i_3]);
                        arr_21 [19] [i_3] [i_3] [i_3] [16] = (arr_7 [i_1] [1] [i_1]);
                        var_23 = (arr_9 [i_1] [i_1] [i_1]);
                    }
                }
            }
            var_24 = var_11;
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_25 = (((arr_23 [i_1] [i_6] [i_6]) ? (arr_23 [i_1] [i_6] [i_1]) : (arr_23 [i_1] [i_1] [i_6])));
            arr_24 [i_1] [i_1] [i_1] &= ((var_7 ? ((6431321958231734317 ? 19415 : (arr_22 [i_6]))) : var_8));
            var_26 = (min(var_26, (arr_0 [i_1])));
            arr_25 [i_1] [i_6] = -1206650806400479223;
            arr_26 [i_1] [9] [i_6] = (var_5 ? ((-3509 ? -6431321958231734318 : var_2)) : (arr_22 [i_6]));
        }
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
    {
        var_27 = (((arr_15 [i_7]) ? -3509 : (((!-7561528990233337329) ? (arr_15 [i_7]) : (arr_10 [i_7])))));
        var_28 ^= (arr_13 [i_7] [i_7] [20]);
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        arr_39 [i_7] [i_8] [12] [i_9] [i_7] [i_7] = 29;
                        var_29 = (max(var_29, (arr_23 [i_7] [i_8 + 1] [i_8 - 1])));
                        var_30 ^= 88;
                        var_31 = ((-((-(((arr_9 [i_10] [8] [i_8 + 1]) << (((arr_37 [11] [i_9 - 1] [23]) - 3458542917642650447))))))));
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        arr_42 [i_11] [i_11] = 1;
        arr_43 [1] = (((arr_11 [i_11]) ? (arr_41 [i_11]) : 783168976));
        var_32 = (arr_37 [i_11] [13] [i_11]);
    }
    var_33 = 14832;
    var_34 = var_4;
    #pragma endscop
}
