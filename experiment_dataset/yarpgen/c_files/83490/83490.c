/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(var_9, 8191));
        arr_4 [i_0] [i_0] = (min(2127047735, (((4294959079 ? (arr_0 [i_0] [i_0]) : ((((arr_2 [3]) || (arr_1 [i_0])))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            {
                var_14 = -893457780;
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((min((arr_15 [i_1 - 1] [i_4 - 1]), (arr_11 [i_5] [i_5 + 3])))))));
                                var_16 = (max(var_16, ((((((((-(arr_11 [i_2] [i_3]))) & -var_1))) ? (((65535 ? (8295063730167103566 <= 8295063730167103575) : 16))) : (((16 ? 63 : 4294967280))))))));
                                var_17 = ((8295063730167103572 ^ (arr_16 [15] [15] [i_2] [16] [i_4] [i_5])));
                                var_18 = ((+((min((arr_10 [i_1 - 1] [i_1] [1] [i_1]), var_1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
