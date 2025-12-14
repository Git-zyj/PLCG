/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = max((arr_0 [i_2 - 4] [i_4]), (arr_0 [i_2 - 4] [1]));
                                var_17 = var_8;
                                arr_15 [i_4] [i_2] [7] [i_2] [i_0] = (arr_2 [i_2 - 3] [i_2 - 3]);
                                var_18 = (arr_13 [i_0] [i_0] [i_0] [3] [i_2] [i_3] [7]);
                            }
                        }
                    }
                }
                arr_16 [7] [i_1] = -1168969077;
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 8;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_5 - 1] [i_5] [i_6] [i_7] = (arr_7 [i_5] [i_1] [9]);
                                arr_24 [3] [i_1] [i_5] [i_6] [i_5] = (arr_21 [i_0] [i_1] [i_0] [i_6] [i_7]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((max(var_15, var_10))));
    #pragma endscop
}
