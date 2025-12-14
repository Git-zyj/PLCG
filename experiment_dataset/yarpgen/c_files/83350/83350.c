/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_6;
    var_13 = (max(var_13, (((min(var_4, var_6)) + (var_8 - var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_3] [i_0] [i_3] = (max(0, (min((arr_6 [i_1 - 1] [i_1 - 2] [3] [i_2] [i_1 - 1]), var_8))));

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                arr_13 [i_0 + 1] [i_1] [i_0] [3] [i_4] = (min(-13, (max(var_5, (arr_10 [i_1 - 1] [i_3 - 2])))));
                                arr_14 [i_1 - 1] [i_0] [i_1] [i_1] = var_11;
                                var_14 = (4506 ? (((((arr_7 [i_3] [i_3 + 1] [i_3] [i_3 - 2] [i_3 + 1]) < (~-4525))))) : var_7);
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] = (max((-4532 < 7377544157790119972), var_10));
                arr_16 [i_0] = var_0;
                var_15 *= (((var_1 < 0) & 75163343));
            }
        }
    }
    var_16 = var_4;
    #pragma endscop
}
