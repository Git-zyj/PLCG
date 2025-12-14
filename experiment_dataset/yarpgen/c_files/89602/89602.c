/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = ((~(arr_1 [i_0])));
        arr_5 [i_0] = (min((((arr_0 [i_0]) ? (((var_17 ? (arr_0 [i_0]) : 1))) : (max((arr_2 [14]), (arr_2 [5]))))), ((((arr_0 [i_0]) / (arr_0 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1 + 1] = (((((!(arr_7 [i_1 - 2])))) | (arr_6 [i_1 - 1])));
        arr_9 [i_1 - 1] [i_1 - 1] = (~var_17);
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_3] [i_2] = arr_10 [i_4] [i_2];
                    arr_17 [i_4] [i_3] [i_2] = (((arr_14 [i_4] [i_3] [21]) ? ((1 ? (arr_14 [6] [i_3] [i_4]) : (((arr_15 [i_2] [i_3] [10]) ? (arr_14 [i_2] [i_3] [4]) : (arr_10 [i_2] [i_2]))))) : (((~0) ? (((arr_15 [i_2] [i_2] [i_3]) ? (arr_12 [i_2] [i_2]) : (arr_15 [i_2] [0] [i_4]))) : (((~(arr_13 [i_2] [14] [i_2]))))))));
                    arr_18 [i_2] [8] [i_4 - 1] [i_4 + 2] = ((((max(var_13, -var_5))) ? (arr_13 [i_4 + 1] [i_4 + 2] [i_4 + 1]) : (arr_11 [16] [18])));
                }
            }
        }
    }
    var_18 = ((~((((var_15 ? var_4 : var_2))))));
    var_19 &= ((var_17 ? ((1 ? 1 : ((var_2 ? var_16 : 1)))) : (((!var_11) ? (~1) : (!var_2)))));
    #pragma endscop
}
