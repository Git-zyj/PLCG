/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (min((max(var_2, (((arr_1 [i_0]) ? 24857 : (arr_0 [i_0] [i_0]))))), (arr_1 [i_0])));
        var_13 = -5231916209579917113;
    }
    var_14 = var_10;

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_15 = ((((((var_2 ? var_1 : var_11))) % (max((arr_2 [i_1]), -4)))));
        var_16 = max((arr_1 [i_1]), (max((arr_1 [i_1]), var_4)));

        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_17 = (max(var_17, var_5));
            arr_7 [i_1] [3] = (var_3 % var_4);
            arr_8 [7] [7] [i_1] = -var_10;
        }
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            var_18 &= var_3;
            arr_11 [10] [i_1] = 3013344370;

            /* vectorizable */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_15 [i_3] [i_1] [i_1] = (arr_14 [i_3 + 1] [i_1] [i_3 + 1] [i_3 + 1]);
                var_19 = 44167675;
            }
            var_20 = (max((min((-9223372036854775807 - 1), 0)), -0));
        }
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_21 = ((var_1 ? 105102844 : (max((arr_17 [i_5]), (arr_17 [i_5])))));

        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            var_22 = (min(((min(var_1, var_2))), (max((arr_5 [i_5] [i_6]), -5))));
            var_23 = 18446744073709551615;

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_27 [i_5] = ((var_9 ? ((-29586 / (((arr_1 [i_7]) ? var_0 : -32)))) : (arr_1 [5])));
                arr_28 [i_5] [i_6 + 1] [i_5] [17] = (max((!13214), (min(((max((-127 - 1), 44167673))), (((arr_23 [i_6] [i_6]) & -10908))))));
            }
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                var_24 = (min(var_24, ((((((arr_5 [i_6 - 1] [i_6 - 1]) + 9223372036854775807)) >> (((max((arr_5 [i_6 - 1] [i_6 - 1]), (arr_5 [i_6 - 1] [i_6 - 1]))) + 3809833596693875216)))))));
                var_25 = 1166039310;
                var_26 = (min(var_26, ((((arr_21 [i_6 - 1] [i_8 + 2] [i_8 + 2]) / (arr_5 [1] [17]))))));
            }
        }
        arr_32 [i_5] = min(((min((arr_20 [i_5] [i_5]), -8639))), (arr_25 [2] [i_5] [i_5] [i_5]));
        var_27 = (arr_31 [i_5] [16] [18] [i_5]);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_28 = (max(var_28, (((var_11 + (arr_35 [i_9]))))));
        arr_37 [13] = (arr_18 [i_9]);
    }
    #pragma endscop
}
