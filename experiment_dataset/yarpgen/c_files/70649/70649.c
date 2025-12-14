/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1;
    var_11 = (min(var_11, ((((((~(max(4069694566, 225272724))))) <= (min((min(var_8, var_0)), (var_0 <= 246))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (((~1073741824) ? (arr_0 [0] [8]) : 4162));
        var_13 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = ((~(arr_5 [i_0] [i_1] [i_1] [i_3])));
                                var_15 |= (-(arr_5 [i_1] [i_1 - 1] [i_4] [i_1 - 1]));
                            }
                        }
                    }
                    var_16 = (max(var_16, var_5));
                    var_17 = ((arr_0 [i_1 - 2] [i_1]) + (arr_1 [i_1 - 1]));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_18 = (~(arr_14 [i_5]));
            var_19 = (-(arr_14 [i_5]));

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_20 ^= var_4;
                var_21 = (arr_12 [i_5]);
            }
        }
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            var_22 = (min(var_4, 147));
            var_23 = (min((((arr_19 [i_5]) / ((155 ? var_4 : var_7)))), ((max(var_1, (var_1 <= 4069694564))))));
            var_24 = ((-(0 / var_5)));
        }
        var_25 = 147;
        var_26 -= ((~((-(arr_19 [14])))));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_27 ^= 1;
        var_28 = ((((1805507877 ? (arr_21 [3]) : var_9)) | -var_6));
        var_29 = (max(((((((-913754300 - 23847) + 2147483647)) << ((((1309929144 << (((var_5 + 55) - 15)))) - 1309929144))))), 4069694588));
        var_30 = (((min((arr_21 [i_9]), (arr_21 [i_9]))) < (arr_20 [i_9] [i_9])));
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        var_31 ^= ((-(32759 | 9223372036854775807)));
        var_32 -= (min(-29888, (arr_9 [i_10] [i_10] [i_10] [i_10] [i_10])));
    }
    var_33 ^= ((var_5 > (((((var_7 ? var_9 : var_6))) ? var_7 : -311284557))));
    #pragma endscop
}
