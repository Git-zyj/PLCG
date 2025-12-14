/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [i_3] [i_3] [i_2] [9] [i_1] [i_3] = (max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (max((max((arr_8 [i_3] [i_3]), 0)), (arr_7 [i_0] [i_3] [i_3] [i_0])))));
                                var_12 = ((((arr_6 [i_4 - 1] [i_4 - 1] [i_4 + 1]) ^ (arr_6 [i_4 - 1] [i_4 + 1] [i_4 + 1]))));
                                var_13 += ((arr_8 [i_0] [i_1]) & (((min(5066436832200732535, 30671)) | 13380307241508819081)));
                            }
                        }
                    }
                    arr_12 [i_1] [i_1] [i_0] = ((max(((min((arr_9 [i_1] [i_0] [i_1] [i_0] [i_0]), var_7))), ((~(arr_7 [i_0] [i_0] [i_2] [i_2]))))));
                    var_14 = (!-1024131436);
                    var_15 = (((((arr_9 [i_0] [i_0] [i_2] [i_2] [i_0]) ? (arr_6 [i_2] [i_1] [i_0]) : var_6)) * (((arr_10 [i_0] [i_1] [i_1] [2] [i_2]) ? (arr_6 [i_0] [i_1] [7]) : (arr_2 [i_0] [i_1] [i_1])))));
                    var_16 = (arr_6 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
