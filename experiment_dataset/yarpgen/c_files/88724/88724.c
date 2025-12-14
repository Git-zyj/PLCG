/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((var_9 ? 493066340 : (~248))), (~0)));
    var_15 = ((var_3 ? ((((var_10 ? var_7 : 14)))) : -27));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_1] = (((~255) ^ ((var_4 ? (min(3942751278, (arr_4 [i_1]))) : var_1))));
                arr_6 [i_0] [i_1] [i_1] = 4294967295;
                var_16 = ((max((arr_2 [i_1]), (((arr_3 [i_0] [i_1]) ? (arr_2 [i_1]) : var_2)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_13 [i_2] = var_11;
                    var_17 = var_11;
                    arr_14 [i_3] = 1562910628;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_18 = ((-(arr_16 [i_5])));
        var_19 = (arr_16 [i_5]);
    }
    #pragma endscop
}
