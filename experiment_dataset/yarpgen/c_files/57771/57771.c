/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = var_11;
                arr_8 [i_1] [i_0] = ((((((arr_1 [i_0 + 1]) == 226))) / ((min((arr_4 [i_0 + 1]), (arr_3 [i_0] [i_1]))))));
                var_15 |= (((arr_0 [i_0]) / -31));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_14 [i_0 + 1] [i_0 + 1] [i_2] [i_3] = (((arr_12 [i_0] [i_0] [i_0] [i_0]) ? (((var_2 / ((-29 ? (arr_1 [i_1]) : (arr_10 [i_0 + 2] [1] [i_2] [i_3])))))) : ((-(arr_2 [i_0 + 3])))));
                            arr_15 [i_3] [i_2] [i_2] = (!-31);
                            arr_16 [i_2] [i_2] = -28;
                        }
                    }
                }
                arr_17 [i_0] [i_0] [i_0] = (arr_3 [i_0] [i_0]);
            }
        }
    }
    var_16 = ((((var_14 ? -var_6 : 227))) ? 7706387423430928075 : var_7);

    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_17 += (-(arr_2 [i_4]));
            var_18 = (arr_22 [i_4] [i_5] [i_5]);
            arr_23 [i_4] [i_5] = ((arr_21 [i_5] [i_4] [i_4]) ? 13 : ((4611686018427387903 ? 2111813775890721054 : (arr_11 [i_5] [i_5] [i_4] [i_4]))));
            var_19 -= 1;
        }
        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            arr_26 [i_4] |= (arr_24 [i_6 + 2]);

            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                var_20 = (((arr_11 [i_4] [i_4] [i_6] [i_7]) / ((65535 ? (((arr_18 [i_7]) ? var_2 : 772686145973605698)) : (((40 ? var_14 : var_8)))))));
                arr_30 [i_4] [i_6 - 2] = (arr_29 [i_7 - 3] [i_6] [i_4] [i_4]);
                var_21 = var_8;
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                arr_35 [i_4] = var_11;
                var_22 -= (((arr_25 [i_6] [i_8]) ? (((arr_6 [i_6 - 2] [i_6 - 2]) ? (arr_6 [i_6 + 2] [i_6 + 2]) : (arr_6 [i_6 - 1] [i_6 - 2]))) : (((arr_18 [i_4]) / 63))));
                var_23 = (arr_0 [i_6]);
                arr_36 [i_8] [i_6] [i_6] [i_4] = (-(((arr_0 [i_6 + 1]) & (((arr_1 [i_4]) ? 4611686018427387903 : (arr_0 [i_4]))))));
            }
            var_24 = (arr_20 [i_4]);
            arr_37 [i_4] [i_4] [i_4] = ((~(((((arr_27 [i_4] [i_4] [i_6]) + 2147483647)) >> (arr_13 [i_6])))));
        }
        arr_38 [i_4] [i_4] = var_6;
        var_25 = (arr_13 [i_4]);
        var_26 = ((~(arr_11 [i_4] [i_4] [i_4] [i_4])));
        arr_39 [i_4] [i_4] = (arr_3 [i_4] [i_4]);
    }
    #pragma endscop
}
