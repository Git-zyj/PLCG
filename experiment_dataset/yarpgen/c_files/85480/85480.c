/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_8 ? 913924150 : ((~((var_2 ? var_8 : var_0)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_21 = 42360;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            arr_12 [i_0] = var_7;
                            var_22 = var_5;
                        }

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_23 = (((arr_14 [21] [11] [i_3] [i_3 - 1] [i_3] [11]) ? (arr_11 [2] [1] [i_3] [i_3 - 1] [i_3] [i_3]) : (arr_14 [i_3] [0] [i_3 - 1] [i_3 + 1] [i_3] [i_3])));
                            var_24 -= (arr_7 [i_1]);
                            arr_16 [1] [i_3] [1] [i_0 + 1] = 42363;
                            var_25 = (((arr_5 [i_0 + 4] [i_1] [i_3 + 1]) * ((23146 ? (arr_8 [i_5] [i_1]) : 6320))));
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0 + 3] [i_1] [8] [21] [i_3] [i_0 + 3] = var_18;
                            var_26 = 6320;
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_27 = 0;
                            var_28 = ((((~(arr_8 [i_0 + 4] [i_3]))) ^ ((var_6 ? var_0 : 23179))));
                            var_29 -= 6320;
                            var_30 = (((arr_0 [i_0 + 3]) ? (((-913924139 + 2147483647) >> (((arr_9 [i_3 + 1] [i_7]) + 142)))) : var_14));
                        }
                        for (int i_8 = 4; i_8 < 21;i_8 += 1)
                        {
                            var_31 = 17215;
                            var_32 = (arr_23 [i_1] [i_3] [i_8 + 2]);
                        }
                    }
                }
            }
        }
        arr_25 [i_0] = 32760;
        arr_26 [17] = (((-1 ? -17214 : (arr_14 [i_0 + 4] [i_0] [5] [i_0] [i_0] [9]))));
    }
    for (int i_9 = 1; i_9 < 20;i_9 += 1) /* same iter space */
    {
        var_33 = (max(var_33, var_6));
        var_34 = 156;
        var_35 = var_15;
    }
    #pragma endscop
}
