/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, (min(1, (!var_12)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 -= (((~(min(1, 3162698733)))));
                    arr_9 [i_0] [i_2] = 1040384;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [12] [i_2] [i_4] |= ((((((arr_5 [i_0] [i_0]) ? (arr_7 [i_0] [22] [16]) : (-11427 & var_12)))) ? (((arr_11 [i_4] [i_3] [i_2] [8] [i_0]) ? (arr_0 [i_4]) : (arr_0 [i_0]))) : -4293926911));
                                var_15 = (min(var_15, (((((1 ? (arr_12 [i_1 + 3] [i_1] [i_1 + 3] [i_1 + 3] [10]) : (arr_12 [i_1 - 2] [i_1] [i_1 + 1] [i_1 - 2] [6]))) >= (min((arr_12 [i_1] [i_1] [i_1 + 3] [i_1] [2]), var_9)))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_2] [i_2] = ((((((~(arr_4 [1]))))) ? (arr_1 [i_2] [1]) : -205));
                }
            }
        }
    }
    var_16 = ((var_6 ? (min(var_4, 8638577932224313686)) : (!var_3)));
    #pragma endscop
}
