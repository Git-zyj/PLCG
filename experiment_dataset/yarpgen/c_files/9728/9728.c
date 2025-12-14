/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_0] [3] [i_0] = -var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = (arr_11 [i_0] [i_1] [8] [i_3]);
                                var_15 = (arr_14 [i_0] [i_3] [i_2 - 1] [i_3] [3]);
                                var_16 = (min(var_16, (arr_6 [i_0] [i_3] [i_2] [1])));
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    arr_19 [0] [5] [i_5] = (arr_16 [8] [i_1]);
                    arr_20 [11] [i_0] [i_0] [11] = (((arr_10 [6] [2] [i_5 + 1] [i_5]) ? var_10 : (max(((max(var_0, -1416463308))), var_11))));
                    arr_21 [i_0] [5] [i_5 + 2] = 1416463283;
                }
            }
        }
    }
    var_17 = (~var_9);
    #pragma endscop
}
