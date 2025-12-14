/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_6 >= ((var_14 ^ (6344 % var_7)))));
    var_16 -= min(var_14, (!-29667));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = 1;
                arr_8 [i_0] [i_1] [16] |= (arr_3 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = ((((((arr_13 [i_3] [i_2] [i_1]) ? (((max(-32759, 1)))) : (max((arr_0 [i_0]), var_10))))) ? (max((arr_2 [i_0] [i_0]), ((((arr_6 [i_0]) >= (arr_1 [i_3])))))) : (((((min(var_7, var_13))) <= 6070549663312191832)))));
                            var_19 = 390027153711618474;

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] = (arr_13 [i_0] [i_0] [i_0]);
                                arr_18 [i_0] [i_1] [i_4] [i_3] [i_1] = (arr_15 [i_0] [i_1] [i_1] [i_0] [i_4] [i_4]);
                                var_20 &= ((((((arr_5 [i_0] [i_1]) % ((max((arr_14 [i_2]), var_14)))))) ? (2097144 + 1) : ((((((~(arr_2 [i_0] [i_0])))) ? (min((arr_2 [i_4] [i_0]), var_9)) : (~var_13))))));
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                var_21 = -var_1;
                                var_22 -= (min(11698, (((arr_13 [i_1] [i_2] [i_3]) & (arr_11 [i_0] [i_1] [i_2] [i_2] [i_5])))));
                                var_23 ^= (arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2]);
                                var_24 = 660204462;
                            }
                        }
                    }
                }
                var_25 = (max(var_25, (arr_7 [i_0] [15] [i_0])));
                arr_22 [i_1] [i_1] [i_0] = (((~(-9223372036854775804 % var_11))));
            }
        }
    }
    #pragma endscop
}
