/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_2));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 *= (30723 <= 2147483641);
        var_19 = (((arr_1 [i_0]) + ((((arr_2 [i_0]) ? (arr_2 [i_0]) : var_9)))));
        var_20 = var_2;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_0] [i_2] = ((var_9 - ((max((arr_6 [i_0] [i_0]), var_3)))));
                    arr_11 [i_1] [i_0] [i_2] = ((~(((!(((-(arr_1 [i_0])))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_21 = ((!(arr_12 [i_3])));
                var_22 = (min(var_22, (max((arr_12 [i_3]), ((var_12 ? (arr_14 [i_4] [i_3]) : -15642))))));
                var_23 = (arr_15 [i_3] [i_3]);
            }
        }
    }
    #pragma endscop
}
