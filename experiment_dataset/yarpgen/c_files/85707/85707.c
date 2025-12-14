/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((min((min(5135253447984791279, -105), (2485938449 > var_8))))))));
    var_17 = ((max(var_7, (max(var_13, var_2)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = ((max(((-105 ? 160 : 160)), (arr_0 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_1] = var_7;
                    arr_10 [i_0] [11] [i_1] [i_1] = (arr_5 [i_1 + 1]);
                    arr_11 [i_1] [i_1] [i_1] [9] = ((((((var_15 ? (arr_7 [i_0] [i_1] [i_1] [i_2]) : var_9))) ? ((var_10 ? (arr_1 [i_1]) : var_4)) : (arr_7 [i_2] [i_1] [i_1] [16]))));
                    arr_12 [i_0] [i_1] [i_1] = -9278;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_22 [i_3] [8] [i_4] [i_5] [8] [i_4] = (min(((var_2 ? (arr_15 [i_4]) : var_9)), ((max((arr_18 [i_4] [i_4] [i_5] [i_6]), var_9)))));
                        arr_23 [i_5] [i_4] [i_5] [i_5] [i_4] [i_3] = (((0 ^ (max(var_1, var_10)))));
                    }
                }
            }
        }
        arr_24 [i_3] = (((arr_17 [8] [i_3] [i_3] [i_3]) / var_13));
    }
    var_19 |= var_9;
    #pragma endscop
}
