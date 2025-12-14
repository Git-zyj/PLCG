/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_16 ? (!-21) : var_13)) ^ var_13));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (((((28162 ? (arr_0 [i_0]) : var_19))) ? (arr_1 [i_0] [i_0]) : (max((var_4 <= var_4), (min((arr_0 [1]), var_2))))));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((~(--488780533)));
        arr_5 [i_0] = (((1 + 1) && ((max((arr_2 [i_0]), (~2546632702716211846))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_22 = var_10;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_23 = (((arr_8 [i_2] [i_2]) / (arr_7 [i_2])));
                                var_24 -= (!var_10);
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_25 &= ((((2546632702716211850 ? 1 : 15900111370993339769)) / 1));
                        arr_18 [i_1] [i_2] [i_2] [i_3] [i_3] = (!var_9);
                    }
                    var_26 = (arr_7 [i_1]);
                }
            }
        }
        arr_19 [i_1] = ((1 & (arr_16 [i_1] [i_1])));
    }
    #pragma endscop
}
