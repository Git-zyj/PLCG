/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_7, var_5));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_12 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 -= (max((arr_6 [i_1 - 1] [i_1 + 3] [i_2]), (arr_6 [i_0 - 1] [i_1 + 3] [i_0 - 1])));
                    var_14 = (min(0, 190));
                }
            }
        }
        var_15 = (arr_4 [i_0] [i_0]);
        var_16 = (arr_1 [i_0] [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_10 [i_3] [i_3] = (arr_5 [2] [2]);
        var_17 = (arr_6 [i_3 - 1] [i_3] [i_3]);
        var_18 = arr_0 [8] [i_3 + 1];
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_19 -= (max(((max((arr_0 [2] [2]), (arr_0 [0] [0])))), (min((arr_3 [0]), (arr_5 [4] [i_4 + 1])))));
        var_20 = (min((max((arr_12 [i_4 - 1]), (arr_12 [i_4 - 1]))), (arr_12 [i_4 - 1])));
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        arr_18 [i_5] = arr_16 [i_5] [i_5];
        var_21 = (max((arr_14 [i_5]), (arr_17 [i_5])));
    }
    var_22 = var_1;
    #pragma endscop
}
