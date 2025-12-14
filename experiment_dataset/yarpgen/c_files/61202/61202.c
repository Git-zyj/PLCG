/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((13 ? (((-55 ? var_10 : ((min(-96, -55)))))) : ((var_12 % (arr_1 [i_0 - 1])))));
        var_15 = ((+((((arr_1 [i_0 - 3]) <= ((var_11 ? (arr_1 [i_0]) : (arr_0 [i_0 - 3]))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = 2520694610;
                    var_17 = (((arr_8 [i_0] [i_2]) < (-41 <= 1774272708)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_15 [i_3] = ((-((~(arr_14 [i_3])))));
        var_18 += ((-(arr_12 [i_3])));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = ((~(arr_16 [i_4])));
        arr_20 [i_4] = (((((~(arr_18 [13]))) + 2147483647)) << (2047 - 2047));
        var_19 = (arr_18 [i_4]);
    }
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        var_20 = (min((min((arr_16 [i_5 - 2]), (arr_16 [i_5 + 2]))), (var_5 >= 8388608)));
        var_21 = ((((-81 ^ ((-1 | (arr_0 [i_5]))))) & (((985956829 ? (~1774272706) : ((var_9 ? 0 : 55)))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 11;i_7 += 1)
            {
                {
                    var_22 = ((!((((((1886820860 ? -32 : var_1))) ? -2047 : ((min((arr_25 [i_5] [i_6] [i_6]), var_14))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_23 = ((-(((((((arr_13 [i_9]) % 1774272686)) + 9223372036854775807)) >> (((var_12 % var_6) - 1121729195))))));
                                arr_33 [7] [i_6] [i_6] [i_6] [1] = (((((min(498156455, (arr_25 [i_5] [10] [i_5])))) & ((2520694597 ? 3 : (arr_5 [8] [i_6]))))) % (min((min((arr_6 [i_5] [i_5]), (arr_1 [2]))), ((((arr_0 [10]) >= (arr_29 [1] [i_6] [i_8] [1])))))));
                                var_24 = (max(27526, (((arr_17 [i_5 - 2]) ? ((((arr_17 [10]) ? (arr_14 [i_5]) : -1))) : var_1))));
                                var_25 = var_5;
                            }
                        }
                    }
                    var_26 = 8405066339927642725;
                }
            }
        }
    }
    #pragma endscop
}
