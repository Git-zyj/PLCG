/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((1 >> (113 - 109)));
        arr_3 [i_0] [i_0] = (((arr_1 [i_0]) || 624258362));
        arr_4 [i_0] [i_0] = 7088266362815857593;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            {
                var_12 = (max(var_12, (((((((arr_0 [i_2 + 2] [i_2 - 1]) < 2133027546))) > (((arr_8 [i_2] [i_2 + 1]) >> (((arr_0 [i_2 + 3] [i_2 - 1]) - 129)))))))));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_13 = (arr_9 [i_2]);
                            var_14 *= ((~((((arr_5 [i_3 - 1]) < (arr_7 [i_2 + 1]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
