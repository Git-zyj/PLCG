/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = var_3;
    var_13 = (min(var_6, -127));
    var_14 -= (min(var_8, (((-1541767916 + 2147483647) >> (32767 - 32746)))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_15 = ((!(~0)));
        arr_2 [i_0] [i_0] = ((max((arr_1 [i_0]), (arr_1 [i_0]))));
        var_16 = (-9223372036854775807 - 1);
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_17 = (max(((-(((arr_5 [i_1]) ? (arr_6 [i_1]) : 287667426198290432)))), 10483));
        arr_7 [i_1] = ((((((min((arr_3 [i_1 - 3]), var_1))) + 2147483647)) >> (((((arr_4 [i_1] [i_1]) - ((var_0 ? 1541767915 : 29525)))) + 1541767828))));

        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] = ((-(((var_8 && (((var_3 ? var_6 : var_3))))))));
            var_18 ^= 41904945;
            arr_11 [i_2] [i_1] [i_1] &= (((((var_8 <= (arr_4 [i_1 - 1] [i_1 - 1])))) << (((max(0, 31)) - 7))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            arr_16 [i_3] [i_1] [i_1] = ((((((arr_9 [i_1] [i_3] [i_1]) ? (arr_3 [i_1]) : (arr_5 [i_3])))) > (arr_15 [i_1 - 3])));
            var_19 = (((((-68 ? var_1 : 1541767915))) ? (((((arr_15 [i_3]) + 9223372036854775807)) << (((-29536 + 29595) - 59)))) : 255));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    {
                        arr_23 [i_3] [i_5] [i_5] = (((arr_12 [i_1 + 1] [i_1 + 2]) ? (arr_12 [i_1 + 1] [i_1 + 1]) : 65535));
                        arr_24 [i_5] [i_5] = (~(((arr_9 [i_5] [i_3] [i_4]) / 1541767915)));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_27 [i_1] = var_7;
            arr_28 [i_1] [i_6] [i_6] = ((var_10 + 14337) % (arr_5 [i_1]));
            arr_29 [i_1] [i_6] [i_1] = ((!((((arr_12 [i_1] [i_1 + 2]) & var_0)))));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_20 ^= var_1;
        var_21 = (arr_30 [i_7]);
    }
    #pragma endscop
}
