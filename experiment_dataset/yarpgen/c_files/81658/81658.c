/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [20] [20] = ((var_7 ? (((arr_0 [i_0 + 1]) / (arr_1 [i_0 - 1] [i_0 + 2]))) : (arr_1 [i_0] [i_0 - 1])));
        var_11 = (min(((min(var_9, (arr_1 [i_0 - 1] [i_0 - 1])))), var_4));
        arr_3 [i_0] [i_0] = var_7;
    }

    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_12 = (arr_5 [i_1]);
                    var_13 ^= (!var_0);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_2] [i_3] [i_2] [i_5 - 2] = ((max(((-(arr_12 [i_1 - 2] [i_5] [23])), var_5))));
                                var_14 = 11;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_15 ^= ((((((max(26, var_6)) <= -23139)))) ^ (max(17732178089717129318, 65045)));
                                var_16 = min((arr_11 [i_2] [i_3]), ((min((arr_11 [i_2] [i_6 + 2]), (arr_11 [i_1 - 1] [i_3])))));
                                arr_22 [i_1 - 2] [i_3] [i_2] [1] [i_1 - 2] = (max(((~(arr_6 [i_2] [13] [i_2]))), 1));
                            }
                        }
                    }
                    var_17 = (((1 + 175) - ((((arr_20 [i_1 - 2] [11] [i_1] [22] [22]) & (arr_20 [i_1 - 2] [i_1] [i_1] [18] [18]))))));
                }
            }
        }
        arr_23 [13] = 5846386080909088692;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        arr_28 [7] = (arr_18 [i_8]);
        var_18 &= ((~(arr_15 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
    }
    var_19 = (min((!var_0), (min(7282474019748810698, (~108)))));
    var_20 = (max(var_20, (var_5 - 7282474019748810698)));
    #pragma endscop
}
