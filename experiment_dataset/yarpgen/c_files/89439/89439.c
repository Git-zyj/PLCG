/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [16] |= (max((max(var_11, var_2)), (((!((max((arr_0 [i_0] [i_1]), (arr_2 [i_1])))))))));
                arr_7 [i_0] [i_1] [i_1] = (max((max(68, (min((arr_2 [i_0]), (arr_3 [1]))))), ((max(0, (arr_3 [i_0 + 3]))))));
            }
        }
    }
    var_13 = (max((((!((max(var_3, var_4)))))), var_2));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_14 ^= ((!((min(var_0, var_2)))));
                var_15 -= (max((min(var_2, 16833)), -var_11));
                arr_12 [i_3] = (max(-7162380772188399342, ((max(var_9, 0)))));
                arr_13 [i_3] [i_3] [i_2] = (max(((min(0, var_8))), (max(var_5, (arr_0 [i_3] [i_2])))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_21 [i_2] [5] [7] [i_3] = (max((arr_17 [i_4 + 1] [i_3]), (max((arr_18 [i_4 + 1] [i_4 - 1] [i_4 - 1]), var_6))));
                            arr_22 [i_3] [i_3] [9] [i_3] [i_3] [i_3] = (max(-var_4, ((min(-4306, 32767)))));
                        }
                    }
                }
            }
        }
    }
    var_16 = (max((max(var_4, var_10)), var_10));
    #pragma endscop
}
