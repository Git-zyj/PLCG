/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((!(((((((arr_6 [i_1] [i_1] [i_1]) ? 63703 : 3097907411))) & -9030167140589892668)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2 - 1] [i_1] [i_4] [i_3] = (arr_7 [i_0] [i_1]);
                                var_20 = (max(var_20, ((((arr_10 [20] [i_0] [i_0] [i_2 - 1] [i_3] [i_4]) * (min((arr_3 [i_0]), ((var_9 ? (arr_10 [i_0] [i_1] [i_0] [i_3] [i_4] [8]) : (arr_10 [i_0] [12] [i_0] [i_0] [i_0] [i_0]))))))))));
                                var_21 |= (((((var_14 & (~1)))) ? (452854883 == 1647) : ((var_15 ? (arr_7 [i_0] [i_0]) : (arr_3 [i_0])))));
                                arr_15 [i_1] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            {
                var_22 = 7207970354793225510;
                var_23 = (((((188 - ((max(var_14, var_16)))))) ? (((arr_2 [i_5]) ? 1 : -var_16)) : ((65535 ? var_14 : -1))));
                var_24 = (max(11238773718916326106, 3097907411));
            }
        }
    }
    #pragma endscop
}
