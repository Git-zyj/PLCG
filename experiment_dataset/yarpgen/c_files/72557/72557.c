/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 15351;
        var_10 = ((~((var_5 ? (arr_1 [i_0] [i_0]) : var_5))));
        arr_3 [i_0] = (((((var_9 ^ (arr_0 [i_0] [i_0])))) ? ((56603 ? (arr_0 [i_0] [i_0]) : -8)) : (arr_0 [i_0] [i_0])));
        var_11 = ((var_0 ? (56603 && 544) : (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_7))));
        var_12 = ((-(arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = (max((arr_5 [i_1]), ((8932 ? 39839 : 52406))));
        var_13 = 39826;
        var_14 = ((24576 ? var_7 : ((max(1023, -70)))));

        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            arr_10 [i_2] = ((!(((((((arr_1 [i_2] [i_2 - 2]) ? var_5 : 65525))) ? ((var_2 ? 38421 : 56622)) : -var_0)))));
            var_15 = (min(48, (((((var_6 ? (arr_9 [i_2] [i_2] [i_2]) : var_8))) ? ((max(8, 32601))) : (!30613)))));
        }
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                arr_18 [i_3] [i_3] = (max((min(((min((arr_17 [i_3] [i_1] [i_3] [i_4]), var_7))), ((var_3 ? 43 : 21816)))), (((((47 ? (arr_9 [i_3] [i_3] [i_4 + 1]) : (arr_15 [i_1] [i_3] [i_3 + 2] [i_4])))) ? (((!(arr_17 [i_3] [i_1] [i_3 - 1] [i_4 - 2])))) : (~15360)))));
                var_16 = ((((min(((min(49087, 30))), (((var_9 + 2147483647) << (var_1 - 97)))))) ? ((((min(-30, (arr_7 [i_3 + 1] [i_4 - 1])))) ? var_2 : ((~(arr_1 [i_3] [i_3]))))) : (((var_6 - 24) - ((65502 ? 38398 : 96))))));

                /* vectorizable */
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    var_17 = (((!38421) ? ((var_2 ? (arr_7 [i_1] [i_3]) : var_2)) : ((var_6 ? var_2 : -73))));
                    var_18 = (((arr_20 [i_1] [i_3] [i_3] [i_5 - 1]) ? ((var_7 ? var_3 : (arr_17 [i_3] [i_4 - 1] [i_3 - 1] [i_3]))) : ((12 ? 8191 : 84))));
                }
            }
            var_19 = min((((!(arr_7 [i_3 - 1] [i_3 + 4])))), (min((arr_7 [i_3 + 3] [i_3 + 3]), (arr_7 [i_3] [i_3 + 3]))));
        }
    }
    var_20 = -40;
    #pragma endscop
}
