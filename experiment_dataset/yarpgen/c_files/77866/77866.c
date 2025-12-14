/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((var_11 != (min(0, 0))))), var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (((!35465847065542656) ? (((!((((arr_0 [i_0]) ? 18411278226644008973 : (arr_1 [i_0] [i_1]))))))) : (arr_2 [i_1] [i_1] [i_1])));
                var_15 = (min(((max(var_3, (max(-1383898829, 158))))), (((((arr_3 [i_0]) ? var_12 : var_3)) << (18411278226644008969 - 18411278226644008964)))));
                var_16 = (((arr_0 [i_0]) & (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_4] [i_4] = (((arr_1 [i_2 + 2] [i_2 - 2]) ? var_10 : 26210));
                                var_17 = ((arr_5 [i_2 - 2] [i_2] [i_2 - 2] [i_2]) ? var_1 : (arr_5 [i_2] [i_2] [i_2 - 2] [i_2]));
                                var_18 = (((((var_3 != (arr_6 [i_0] [i_1] [i_2])))) << (var_0 - 2784054658)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_19 = arr_6 [i_2 - 2] [i_2 + 2] [i_2 + 1];
                                var_20 += var_2;
                                arr_18 [i_5] [i_2] [i_5] = (((arr_3 [i_2 - 2]) ? (arr_3 [i_2 + 3]) : (arr_15 [i_2] [i_2 + 2] [i_5] [i_2] [i_2])));
                                var_21 = arr_4 [i_1];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
