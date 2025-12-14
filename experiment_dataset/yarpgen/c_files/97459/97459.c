/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = ((61 ? 81 : -1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = (var_9 != 61);
        var_20 |= (((arr_1 [i_0]) ? 18446744073709551615 : (arr_0 [i_0] [i_0])));
        arr_2 [i_0] = ((var_5 / (((-(arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_7 [i_1] [i_2] = (arr_0 [i_1] [i_2 - 1]);
            var_21 = ((~(arr_0 [i_2 - 1] [i_2])));
            arr_8 [i_2] = var_9;
            var_22 |= (((~-67) ? (var_0 <= var_3) : (arr_4 [i_2 - 1])));
        }
        var_23 = ((!(~58137)));
    }
    var_24 = var_0;

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_25 = (max(var_11, ((min(var_16, (arr_12 [i_3]))))));
        arr_13 [i_3] [i_3] = (((((3731 * 27169) < (((arr_11 [i_3]) ? (arr_12 [i_3]) : (arr_12 [i_3]))))) ? ((((7398 ? 58156 : (arr_11 [i_3]))) << ((((58181 ? 255 : 7366)) - 235)))) : ((((!(arr_9 [i_3])))))));
        var_26 = ((-85 ? (min(((((arr_9 [i_3]) && -85))), ((1 ? 1 : 58170)))) : ((((-1 ? (arr_9 [i_3]) : (arr_9 [i_3]))) + var_14))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_27 = 61;
        arr_18 [i_4] = ((211471515226271491 > 7377) < ((-(arr_16 [i_4]))));
        arr_19 [i_4] = ((1 | (arr_10 [i_4] [i_4])));
    }
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        var_28 = ((var_7 * ((((arr_14 [i_5 + 1]) != (arr_14 [i_5 - 1]))))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_24 [i_5] [i_6] [i_5] = (((((255 ? 11 : 1))) ? var_12 : ((max((min(12114, var_14)), (arr_9 [i_5 - 1]))))));
            arr_25 [i_5] = (var_12 / -7343);
            var_29 = -2;
        }
        arr_26 [i_5] [i_5 - 1] = 4095;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        var_30 = ((((min((max(var_8, 1)), ((min((arr_30 [i_5 + 1] [i_9]), 47771)))))) ? (arr_9 [i_5 + 1]) : (~53422)));
                        var_31 = ((((((min(var_10, (arr_11 [i_9]))) / (arr_22 [i_8 + 1])))) ? ((65535 << (((arr_32 [i_5] [0] [i_5]) + 32368)))) : (max(2147483635, (((arr_1 [i_8]) ? var_0 : 1))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
