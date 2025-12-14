/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [i_0] = (min((((arr_5 [i_0]) ? (arr_5 [i_1]) : (arr_5 [i_0]))), ((max((!244), 254)))));
            arr_7 [i_0] [i_0] = ((((!(((30056 ? (arr_5 [i_0]) : 35))))) ? (((arr_1 [i_0]) ? ((max((arr_2 [i_1]), 44885))) : (arr_2 [15]))) : (65535 * -92)));
            var_18 = ((((53431 ? 7680 : -83))) ^ (((arr_4 [i_0] [i_1]) ? (min(-75, (arr_5 [i_1]))) : ((((arr_2 [i_1]) ^ 75))))));
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_19 = ((((max((min(-92, 0)), 127))) ? 74 : (arr_4 [i_2] [i_2 + 2])));
            var_20 = (min(var_20, 96));
            var_21 = (((arr_2 [i_2]) ? 57872 : ((4 >> (36738 + 128)))));
            var_22 |= (((arr_1 [i_2]) || ((((((min((-127 - 1), (arr_8 [i_0] [i_0]))) + 2147483647)) >> ((((9079256848778919936 ^ (arr_9 [6]))) - 9367487224616195918)))))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                arr_13 [i_2] [i_2] [i_3] [i_3] = (((2047 >> 1) == (arr_12 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2 - 2])));
                var_23 -= (((arr_4 [i_0] [i_2 - 2]) * (arr_4 [i_2] [i_2 - 2])));
                var_24 = (arr_0 [i_2 + 2]);
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                arr_16 [i_0] [i_2 - 1] [i_2] = (100 >> 7);
                arr_17 [i_0] [i_0] [i_2] [i_4] = ((((!(arr_8 [i_2 + 2] [i_2 - 2])))) & 242);
                var_25 = ((!(arr_8 [i_0] [i_2 - 1])));
            }
        }
        arr_18 [i_0] [i_0] = (((((-28 ? 15 : (arr_12 [i_0] [i_0] [i_0] [i_0])))) ? ((75 ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (arr_12 [i_0] [i_0] [i_0] [i_0]))) : (((arr_4 [i_0] [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0])))));
    }
    var_26 = ((((var_8 ? ((max(var_11, var_14))) : -30275)) <= ((9669 >> (var_14 - 46059)))));
    var_27 = var_2;

    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        var_28 = (arr_12 [i_5] [i_5 - 1] [18] [i_5]);
        var_29 = ((((arr_5 [i_5 + 1]) ? (arr_5 [i_5 - 1]) : -20)));
        var_30 |= (((((((min(1, 58717))) >> ((((arr_2 [i_5]) >= 65535)))))) ? (min(20661, 268435455)) : (((-(arr_11 [2] [1] [i_5 - 1] [i_5]))))));
    }
    #pragma endscop
}
