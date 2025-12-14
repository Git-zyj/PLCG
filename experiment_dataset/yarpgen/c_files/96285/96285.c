/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(2027958783, (26601 >= -29908));
    var_11 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 *= 1499563639;
                    arr_10 [i_0] [i_1] [i_2] = (arr_7 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 ^= (~var_4);
                                var_14 = (min(1728203804966531502, 20));
                                var_15 = (max(var_15, ((((((~((51462 ? -7825927245556527075 : 1717261857))))) ? 4148921666 : ((max(10, (arr_5 [i_1] [i_2])))))))));
                                var_16 += (max((arr_12 [i_0] [4] [10]), (((arr_0 [i_0] [i_1]) - (arr_7 [0])))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] [i_0] = arr_14 [i_0] [i_0] [i_2];
                }
            }
        }
    }
    #pragma endscop
}
