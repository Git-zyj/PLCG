/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(1, var_9));
    var_12 = var_9;
    var_13 += -9011850707730299984;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_14 ^= ((min(-var_6, (arr_14 [i_0] [i_1]))));
                                var_15 = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                            for (int i_5 = 0; i_5 < 25;i_5 += 1)
                            {
                                arr_19 [21] [i_0] [21] [21] [i_0] = -75;
                                var_16 *= ((!(((((var_7 ? 109 : -94)) / var_1)))));
                                arr_20 [i_0] = (max((max(35257, (arr_10 [i_0] [i_0] [i_3]))), (((30278 ? ((min(-61, 116))) : (60 < 8968))))));
                            }
                            arr_21 [i_0] = ((max(((min(157, 8968))), (min(5572064456870397588, -7668230123996993674)))));
                            arr_22 [i_0] [i_3] [16] [20] [16] [i_0] = (!var_2);
                        }
                    }
                }
                var_17 = -48;
            }
        }
    }
    #pragma endscop
}
