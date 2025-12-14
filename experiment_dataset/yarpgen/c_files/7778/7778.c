/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = (42380 * (max((arr_11 [i_1 - 3] [i_1] [i_1 - 2] [i_1 - 3] [i_1 - 3] [i_1 + 1] [i_1 - 3]), 42380)));
                                var_14 ^= (min((min(6409, 42380)), 0));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] &= (arr_4 [i_1]);
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_2] = (((arr_4 [i_1 - 2]) ? (~-112) : (max(((66668964 ? (arr_7 [i_0] [i_0] [i_0]) : 111)), (arr_8 [i_0] [8] [i_0 - 1])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    arr_25 [i_6] [9] [i_7] = (arr_19 [i_6]);
                    var_15 ^= var_4;
                    var_16 -= (((arr_23 [i_7] [i_5] [i_7]) ? -16 : ((max(var_5, (arr_21 [i_7] [i_7] [i_7]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            {
                arr_32 [i_8] = (max(((min((max((arr_21 [i_8] [4] [i_8]), var_0)), (!-40)))), (~var_2)));
                var_17 = var_5;
                var_18 |= 112;
            }
        }
    }
    var_19 = min(66668951, var_4);
    #pragma endscop
}
