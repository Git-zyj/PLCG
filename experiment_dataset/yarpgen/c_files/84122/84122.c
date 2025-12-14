/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = min(-104, 12133895272739296791);
        arr_3 [i_0] [i_0] = (((var_0 + 2147483647) << (((max(-9050996774915142689, 98)) - 9395747298794408927))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_14 = (min(var_14, ((min(var_3, var_4)))));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    {
                        var_15 = (34482 <= 1);
                        var_16 = (max(var_16, var_4));
                        arr_14 [14] [i_2] [i_3] [i_4] |= ((-(max((((arr_4 [i_2]) ? var_9 : var_7)), var_3))));
                        var_17 = (i_1 % 2 == 0) ? (((((((arr_6 [i_1]) << (((arr_6 [i_1]) - 5920004012650733990))))) ? (arr_6 [i_1]) : ((var_6 | (arr_6 [i_1])))))) : (((((((((arr_6 [i_1]) + 9223372036854775807)) << (((((((arr_6 [i_1]) + 5920004012650733990)) + 2540467248135968855)) - 53))))) ? (arr_6 [i_1]) : ((var_6 | (arr_6 [i_1]))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_21 [i_1] [i_1] [i_1] [i_1] = var_4;
                        var_18 ^= ((var_9 ? (max((-77 || var_1), (max((arr_20 [i_1]), var_0)))) : ((((((104 ? var_7 : 104)) <= ((((arr_11 [i_1] [i_1] [i_2] [i_1]) ? var_3 : (arr_12 [i_6] [2] [2] [i_1] [1]))))))))));
                    }
                }
            }
            var_19 = var_0;
        }
        arr_22 [i_1] = ((-13536 ? ((var_4 ? (arr_17 [i_1] [1] [i_1] [1]) : (arr_17 [i_1] [i_1] [i_1] [i_1]))) : (((((arr_7 [i_1]) <= (arr_7 [i_1])))))));

        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            arr_25 [i_1] = (arr_24 [i_7]);
            arr_26 [i_1] = (max(((((arr_16 [i_1] [i_7] [i_7] [i_7]) ? var_4 : var_0))), (min((arr_16 [i_1] [i_1] [i_1] [i_7]), (arr_9 [i_1] [i_1] [i_1])))));
        }
    }
    var_20 = (min(var_10, (min(6375, 2377433025603224315))));
    #pragma endscop
}
