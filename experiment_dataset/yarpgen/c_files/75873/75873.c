/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((((0 ? var_2 : -2311006724544465704))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] &= (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_4] &= (arr_9 [19] [i_1] [i_1] [i_1] [i_1] [i_1]);
                                var_11 = (max(var_11, (((max(0, -2311006724544465688)) / var_8))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] [i_5] [i_2] [18] [i_0] = var_9;
                                arr_20 [i_2] [i_5] [i_6 + 1] = -1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
