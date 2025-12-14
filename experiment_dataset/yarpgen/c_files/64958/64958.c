/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_9 - ((var_6 ? var_1 : 1)))) + 1));
    var_11 *= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_2] [i_1] [5] [i_1] = (arr_11 [i_3]);
                            var_12 -= (((1 ? 11364887533931438378 : (arr_4 [i_0]))));
                        }
                    }
                }
                arr_13 [i_1] [i_0] [i_1] = 255;
            }
        }
    }

    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        var_13 = (arr_15 [i_4]);

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_14 = (((((-((1 >> (arr_14 [i_4 - 1])))))) ? (((~1) | 15392354651188635115)) : (arr_16 [i_4 - 3])));
            arr_21 [i_5] [i_5] = (((+-3555878313) ? var_5 : (arr_19 [i_4 + 2] [i_5])));
            var_15 *= (arr_14 [i_5]);
            var_16 = (1 || 1);
        }
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            arr_25 [i_6] = ((~(~17672405049588133729)));
            arr_26 [i_6] [i_6] [i_6] = (1 & -9223372036854775804);
            arr_27 [i_4] [10] [i_6] = var_3;
        }
        var_17 = 33064;
        arr_28 [i_4] = arr_18 [8];
        arr_29 [i_4] [i_4 - 2] = ((((((~(arr_18 [2]))) & (64 & var_4))) | var_3));
    }
    #pragma endscop
}
