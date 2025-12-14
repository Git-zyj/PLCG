/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((-2147483647 - 1) ? -102 : (var_0 % -108)))) ? ((-2147483633 ? (~var_3) : var_6)) : (max(((95 ? -2147483642 : var_0)), (!62)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (min(var_1, ((var_7 >> (((~15) + 39))))));
        arr_4 [i_0] [i_0] = (((arr_1 [i_0]) * ((((max(22, var_6))) ? (0 < 0) : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_11 -= ((-((((var_9 ? (arr_0 [10]) : -2147483641)) ^ (((arr_6 [i_1] [2]) & -1694171325))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                {
                    arr_12 [i_3] [i_1] [i_3 + 2] [i_2] = ((var_5 & (max((arr_6 [i_2 + 2] [i_3 - 1]), 266338304))));
                    var_12 = 0;
                    arr_13 [i_2] [i_2] = -783;
                }
            }
        }
        arr_14 [i_1] [i_1] = ((var_8 | (((((-9223372036854775807 - 1) || -var_0))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_13 = (min(var_13, (((!(!var_5))))));
        var_14 = (max(var_14, -1385196688));
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_15 += (arr_18 [i_5] [i_5]);

        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            var_16 = (min(var_16, var_3));
            var_17 = (max(var_17, ((((((-(((arr_23 [i_5] [i_5]) ? (arr_20 [i_5]) : var_0))))) ? (min((((arr_20 [i_5]) ? (arr_18 [i_6] [i_6]) : 30083)), -118)) : (~var_8))))));
        }
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            var_18 = ((~((((arr_22 [i_7 + 1] [i_7]) != var_7)))));
            var_19 += 2047;
            var_20 = (max(var_20, ((1385196688 ? (arr_25 [i_5] [i_5] [i_7]) : (min((arr_21 [i_5] [19] [i_5]), ((var_1 ? -1279605674731910099 : 32767))))))));
        }
    }
    for (int i_8 = 1; i_8 < 7;i_8 += 1)
    {
        var_21 = (-((0 ? -45 : -627)));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {

            for (int i_10 = 2; i_10 < 9;i_10 += 1)
            {
                var_22 = (min(var_22, (~2147483647)));
                arr_34 [i_8] [i_9] = var_0;
            }
            var_23 = (var_9 || 247);
        }
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            arr_38 [0] [i_11] = (min(((0 ? (arr_2 [8]) : (var_2 << 0))), 15));
            var_24 += 18446744073709551603;
            arr_39 [i_8] [i_8] = ((((((~(arr_32 [i_11]))) + 2147483647)) << (arr_9 [1] [0] [i_11])));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_25 = (max(var_25, var_7));
            var_26 = (min(var_26, (~1)));
            var_27 += (((((23 ? (arr_23 [i_8] [i_12]) : -1))) ^ (arr_36 [i_8 - 1] [i_8 + 1] [i_8])));
            arr_44 [i_12] [i_8] = (arr_20 [i_8]);
        }
    }
    #pragma endscop
}
