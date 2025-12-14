/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_1] [i_0] = (arr_9 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_2 + 2]);
                    var_20 -= (arr_7 [i_1]);
                    var_21 = (arr_4 [i_2 - 1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_17 [i_3] [i_1 + 1] [i_3] [i_1] = (arr_8 [i_2 - 1] [i_1 - 2] [i_1 - 2] [i_1 + 1]);
                                var_22 += (arr_5 [i_1 - 2]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (var_9 & var_11);
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                var_24 ^= (((arr_9 [i_5 + 2] [i_5 - 1] [i_5] [i_5]) / (((arr_9 [i_5] [i_5] [i_6] [i_6]) | (arr_9 [i_6] [i_6] [i_5 - 1] [i_5 + 2])))));
                arr_24 [i_5] [i_6] [i_5] = (arr_23 [i_6] [i_6] [i_6]);
            }
        }
    }
    #pragma endscop
}
