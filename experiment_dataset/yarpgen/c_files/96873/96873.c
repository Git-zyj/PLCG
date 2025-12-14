/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 += var_9;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 = var_10;
                                var_14 = (min(var_14, (((4294967295 ? (min(((((arr_9 [i_1] [i_2] [1] [10]) || 0))), (((arr_9 [i_0] [i_0] [i_0] [i_0 - 1]) ? (arr_12 [1] [i_3] [i_2] [11] [11] [i_0]) : 0)))) : (min((min(2, 1)), 1903169418)))))));
                                arr_15 [i_0 - 2] [i_4] [i_2] [i_3] [i_0] = (8 / 1);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_15 ^= ((-(min((arr_17 [i_5 - 2]), (arr_16 [i_5 - 2])))));
                    arr_23 [i_5 - 2] [i_6] [i_6] = 15;
                    arr_24 [16] [i_6] [1] &= (((min(((79425526 ? 4294967290 : 1341197107)), 1)) / (max((~var_1), (((arr_18 [i_5] [i_5] [i_5]) ? (arr_19 [6]) : (arr_18 [i_6] [i_6] [i_7])))))));
                }
            }
        }
    }
    #pragma endscop
}
