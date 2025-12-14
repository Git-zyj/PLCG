/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [18] &= (-3058337922277573541 + -5);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] [4] = -3058337922277573541;
                        var_13 = (var_3 - 84);
                        arr_13 [i_0] [2] [i_0] [6] [5] = (7268 || -608481625);
                        var_14 = (arr_4 [i_1] [i_2] [i_3]);

                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            var_15 ^= ((var_1 ? 104843435 : -3058337922277573550));
                            var_16 = (~0);
                            arr_17 [i_0] [i_1] = var_5;
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_17 = (arr_14 [i_3] [i_3 + 1] [i_0] [i_3 - 1] [i_3 + 1] [i_5] [i_0]);
                            arr_20 [1] [i_1] [i_2] [i_3] [i_0] = -16178227620896573545;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_26 [i_7] [i_0] [i_0] [i_0] = var_1;
                        var_18 = 19;
                    }
                }
            }
            var_19 = ((-(arr_6 [i_0])));
            arr_27 [i_0] = (((arr_4 [i_0] [18] [i_1]) && (!var_9)));
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_20 = 2147468127;
            arr_30 [i_0] [i_0] = (((arr_28 [i_0]) < (arr_28 [i_0])));
        }
    }
    #pragma endscop
}
