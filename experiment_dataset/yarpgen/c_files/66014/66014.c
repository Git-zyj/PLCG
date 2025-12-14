/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_10 = var_8;
                    var_11 = (max(1654543665281160762, 1151010779));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 = 2121578804;
                                arr_13 [i_0 - 2] [i_1 - 1] [i_2] [4] [6] [i_0] [i_4] = (arr_8 [i_2] [i_2] [i_2] [i_2]);
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] = (((arr_3 [i_4 + 1] [i_0]) ? (((arr_3 [i_4 + 1] [i_0]) ? (arr_3 [i_4 + 1] [i_0]) : var_2)) : ((((arr_3 [i_4 - 1] [i_0]) ? (arr_3 [i_4 + 1] [i_0]) : (arr_3 [i_4 - 1] [i_0]))))));
                                arr_15 [i_1] [i_0] [i_1 - 3] [i_1] [i_1] [i_1] [i_1] = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = -1144943746;
    #pragma endscop
}
