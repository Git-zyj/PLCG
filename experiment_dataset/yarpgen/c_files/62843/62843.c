/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, 1));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((~(((((-(arr_0 [i_0] [0])))) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [8])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_19 = ((~(max(((((arr_12 [i_5] [i_2] [16] [i_4]) ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : (arr_7 [i_4] [i_2])))), (arr_6 [i_2] [i_2])))));
                                var_20 += (arr_12 [i_1] [i_1] [i_3] [i_1]);
                                var_21 = (max(var_21, (arr_9 [i_4] [i_2])));
                            }
                        }
                    }
                    var_22 = (((((arr_13 [i_3] [8] [i_3] [i_3]) % (((arr_10 [i_2] [i_2 - 1] [i_3] [i_2 + 3]) / (arr_4 [i_1] [i_1])))))) ? ((~((max((arr_5 [i_3]), (arr_14 [i_2] [i_2] [i_2] [i_2] [5] [i_2] [1])))))) : (((~(arr_9 [i_2] [i_2])))));
                }
            }
        }
        arr_16 [i_1] = (max(((1 ? (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_7 [i_1] [i_1]))), (max(((~(arr_11 [1] [i_1] [10]))), (arr_7 [i_1] [i_1])))));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_22 [i_1] [i_6] [i_7] = arr_18 [i_1] [i_1] [i_1];
                    var_23 = ((-(arr_20 [i_1] [i_6] [i_1])));
                    var_24 = 0;
                }
            }
        }
    }
    #pragma endscop
}
