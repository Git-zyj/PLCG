/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (max((max((min(var_13, 13569851526378922567)), var_8)), var_12));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_7, (min(var_8, var_1))));
                                var_16 = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            {
                arr_18 [i_5] [i_6] = (min(212565082, -16813));

                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    var_17 = var_12;
                    var_18 = (min(var_18, var_10));
                    var_19 = -16813;
                    var_20 *= var_8;
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    arr_23 [i_5 + 2] [i_6 - 1] [i_8] = (min(var_7, var_9));
                    arr_24 [i_8] [i_5 + 2] [i_5 + 2] = var_5;
                }
                arr_25 [i_5 + 2] = var_13;
                var_21 = var_4;
            }
        }
    }
    var_22 -= var_2;
    #pragma endscop
}
