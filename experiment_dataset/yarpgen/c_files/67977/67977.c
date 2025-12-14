/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = -7646990687874831254;
        arr_4 [3] = var_8;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1 + 2] = 2476850694712811683;
        arr_8 [i_1] = (((45068 | (arr_6 [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        arr_11 [i_2] = 2476850694712811696;
        arr_12 [i_2 - 2] [i_2 - 1] = (arr_9 [i_2 + 2]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        arr_23 [i_4] [1] = ((var_3 - (arr_19 [i_3] [i_3] [i_6 + 2])));
                        arr_24 [i_6] [i_6] [i_6] = var_6;
                        arr_25 [i_3] [i_3] = ((-(2476850694712811686 + var_0)));
                        arr_26 [i_3] [i_3] [i_4 - 1] [i_5] [i_6 - 1] [i_6] = ((((-47 ? (arr_21 [i_5] [i_4] [i_3]) : var_6)) ^ (arr_15 [i_4 - 1] [i_4 + 2])));
                    }
                    arr_27 [i_3] = ((-(arr_18 [i_3] [i_4] [i_5 - 2])));
                }
            }
        }
        arr_28 [i_3] = ((-(arr_13 [16])));
    }
    var_14 = min(var_9, ((var_0 - ((var_9 ? -7646990687874831254 : var_3)))));
    var_15 = (((((var_7 ? (!var_9) : ((min(-1, var_9)))))) ? var_11 : var_0));
    #pragma endscop
}
