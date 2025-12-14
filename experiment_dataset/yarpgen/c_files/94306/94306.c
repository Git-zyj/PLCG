/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((((var_9 ? (min(var_5, var_8)) : ((var_14 ? 281474842492928 : var_10)))) / var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = var_6;
                var_18 = var_2;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, (!var_9)));
                            arr_10 [i_0] [i_3] [i_0] [i_0] [i_0] = (arr_9 [i_1 - 3] [6] [6] [2] [i_1]);

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_20 &= var_4;
                                var_21 = (max(var_21, (max(var_13, -var_7))));
                            }
                            var_22 = (min(var_22, (((((arr_2 [i_1]) ? var_10 : var_1))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
