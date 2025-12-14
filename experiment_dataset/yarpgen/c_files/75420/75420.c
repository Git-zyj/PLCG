/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_10 -= (max(17293535913101195871, 124));
                var_11 = ((!(arr_1 [i_0 + 1] [i_1 + 1])));

                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_0] [i_1 - 1] [i_1] [i_2] = (max(((~(arr_5 [i_0 - 2] [i_0 + 1]))), (((arr_5 [i_0] [i_0 + 1]) << (((arr_5 [i_0 + 2] [i_0 - 2]) - 13304129659468339326))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_4] = (-(arr_11 [i_2 - 3] [i_2 + 1] [i_2 - 4] [i_2 + 2] [i_2 - 3]));
                                var_12 = (max(var_12, (((((((arr_1 [i_0 - 3] [i_1 - 1]) & (arr_1 [i_0 - 1] [i_1 - 3])))) && -122)))));
                            }
                        }
                    }
                    var_13 = (max(var_13, ((((max((arr_1 [i_0 - 2] [i_1 - 3]), ((126 ? (arr_5 [i_2] [i_1]) : (arr_8 [i_2 + 1] [i_2] [i_2] [i_2 + 1]))))) + -59)))));
                }
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    var_14 = var_3;
                    var_15 = (~127);
                    arr_16 [i_5 + 2] = (arr_13 [i_5 + 2] [i_5] [i_5 + 1] [i_0]);
                }
                var_16 = (arr_13 [i_0] [i_0 - 3] [i_1] [i_1 + 2]);
                arr_17 [i_0 - 3] [i_0] = (max(((max(((~(arr_10 [i_0] [i_0] [i_0 - 1] [i_1 + 1] [i_1 - 1]))), (arr_14 [i_0 + 1])))), 17293535913101195871));
            }
        }
    }
    var_17 = (max((max(var_2, (104 * var_9))), 127));
    #pragma endscop
}
