/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= max(1852, ((max(var_9, 0))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_2 - 1] [i_1] [i_0 + 1] = var_2;
                    arr_8 [i_1] = (arr_3 [i_0] [1] [1]);
                    var_17 = (arr_6 [i_2] [i_1] [i_0]);
                }
            }
        }

        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            arr_11 [3] [i_3] [i_3] = 91;
            arr_12 [i_0] [i_3] [0] = var_1;
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_18 = (max(var_12, ((((var_7 + 9223372036854775807) >> (((var_8 / 1) + 115)))))));
        var_19 = ((((max(1909560012, var_13))) ? ((var_14 ? var_13 : (arr_14 [i_4]))) : (((var_0 <= (arr_14 [11]))))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_20 = (arr_13 [i_5] [i_5]);
        arr_19 [1] [i_5] = (((((arr_15 [i_5] [i_5]) ? (max(-229235142, 1)) : ((-1844 ? var_0 : 18940)))) >= (((4191333444 != var_1) & 1))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_21 = (min(var_21, (arr_22 [i_6] [i_6])));
        arr_23 [i_6] = ((!(arr_18 [i_6] [i_6])));
        arr_24 [i_6] = (arr_18 [i_6] [15]);
    }
    var_22 = ((var_4 ? 5097 : var_6));
    #pragma endscop
}
