/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((-14549 != (((var_17 ? var_0 : var_6)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (max((max(4026531840, (max(4071331615, 9223372036854775807)))), (((!((((arr_2 [i_0] [i_0]) ? -7419470757958622344 : (arr_0 [i_0])))))))));
        arr_4 [i_0] = var_2;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_21 = (((arr_5 [i_1] [i_1]) ? (-32767 - 1) : 330063714));
        arr_9 [i_1] [i_1] = -1;
        arr_10 [10] |= (((arr_7 [i_1]) ? 126 : (arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_22 = 39974;
            var_23 = (max(var_23, (arr_5 [0] [0])));
            arr_15 [i_2] [i_3] [i_2] = (max(-1393686502, var_3));
            arr_16 [i_3] [i_3] = ((~((var_15 ? (arr_12 [i_2]) : var_7))));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_19 [3] [i_4] [6] = (arr_1 [i_2]);
            arr_20 [i_2] [i_4] &= (min(var_15, (min((arr_13 [i_4]), -32755))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_24 = (max(var_24, ((((arr_26 [4] [i_4] [5] [i_6]) ? (min(-52127, ((var_0 ? 2762473392 : var_18)))) : (arr_13 [i_7]))))));
                            arr_30 [i_4] [i_5] [i_5] = arr_12 [i_6];
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_34 [i_5] = (arr_17 [i_8] [i_8]);
                            var_25 = (((((192764688 ? (arr_18 [i_2] [i_4]) : (arr_18 [i_8] [i_6])))) ? ((max((arr_18 [i_5] [i_8]), (arr_18 [i_2] [i_2])))) : ((-1014979686 ? 3496852018 : -2069738482))));
                        }
                        arr_35 [i_2] [i_4] [i_4] [i_6] |= (min(((-14 ? ((((arr_23 [i_6] [i_4] [i_4] [i_2]) ? (arr_31 [i_6] [i_5] [i_4] [i_2] [i_2]) : (arr_21 [i_2] [i_4] [i_5] [i_4])))) : ((7897808646894502527 & (arr_24 [i_2] [1] [i_5] [i_6]))))), 507553992));
                        arr_36 [i_5] [i_5] [9] [i_5] [4] = ((-(((!1) ? 1 : (arr_25 [i_6] [i_6] [i_2] [i_6])))));
                    }
                }
            }
            var_26 ^= ((+(max((arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_4]), (arr_14 [i_2] [i_4])))));
            var_27 ^= ((var_8 ? var_12 : (max((arr_5 [i_2] [i_2]), var_11))));
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
        {
            arr_39 [5] [0] [i_2] = ((var_15 ? (((!var_15) ^ (min(2367712809, (arr_21 [i_2] [i_2] [i_2] [i_2]))))) : (arr_1 [i_2])));
            var_28 = 1;
            var_29 = min(0, (((arr_1 [i_2]) >= var_0)));
            var_30 ^= ((((max((min(312, 1)), 38259))) ? ((~(arr_17 [i_2] [i_2]))) : (-249578709 < -3)));
            var_31 = (max(2432225514, ((min(65531, -6)))));
        }
        var_32 *= (arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
        var_33 = (max(var_33, var_16));
        arr_40 [i_2] = ((!(((65535 ? 1348547329 : -535369644)))));
    }
    var_34 = (var_14 < var_6);
    var_35 = ((max(117, var_1)));
    #pragma endscop
}
