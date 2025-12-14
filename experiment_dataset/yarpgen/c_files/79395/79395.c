/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (max(var_12, var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = (max(255, var_2));
                    var_15 = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = ((min(-252, 33554428)));
                                var_17 += ((!((min((min(var_0, var_5)), var_4)))));
                                var_18 *= ((min((min(-620746383, 33554436)), ((min(var_0, var_10))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_2] [i_5] [i_5] = (-(~-1));
                                var_19 = var_0;
                                var_20 = (!11);
                                var_21 = (-2147483647 - 1);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 ^= var_5;
    #pragma endscop
}
