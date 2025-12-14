/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((var_1 - var_4) ? var_2 : var_5)))));
    var_13 = var_11;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_0] = (arr_4 [i_0] [i_0]);

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_14 = (arr_10 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0]);
                        var_15 = (arr_0 [i_0 - 1] [i_0 - 1]);
                        arr_12 [i_0] [5] [i_2] [5] [i_2] = (arr_8 [i_2] [i_2] [i_2] [i_2 + 1] [i_0] [i_3]);
                        arr_13 [i_0] [i_1] [i_2 + 1] [i_3 - 1] = arr_9 [i_0] [i_0] [i_1] [i_2 + 1] [i_2] [i_3 + 2];
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_16 = (min(var_16, ((((arr_16 [14] [i_1] [i_1] [i_1]) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (arr_5 [i_0 - 2] [i_1] [i_0 - 2] [i_0 - 2]))))));
                            var_17 = ((-(arr_0 [i_4] [i_1])));
                        }
                        arr_20 [i_0] [i_1] [i_0] [i_4] [i_2] = (((arr_19 [3] [3] [i_2] [i_4] [i_0 + 1] [i_2]) < (arr_16 [i_0 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 1])));
                        var_18 = ((((-(arr_10 [i_0] [i_1] [i_1] [i_2] [i_1]))) >> (-4 + 30)));
                    }
                    var_19 = (arr_11 [i_0] [i_1] [i_2]);
                    var_20 = (((arr_9 [i_2 + 2] [i_1] [i_2 + 1] [i_1] [i_0 - 2] [i_0]) % (arr_9 [i_2 + 3] [i_1] [i_2] [i_2] [i_0 - 1] [i_2])));
                    arr_21 [i_0] [i_0] [i_2] = (arr_15 [i_0 + 1] [i_0] [i_2] [i_2 + 2]);
                }
            }
        }
        arr_22 [i_0] = (arr_6 [i_0 - 1] [i_0]);
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_21 = (arr_8 [i_6 - 1] [i_6 - 2] [i_6 - 2] [i_6] [i_6] [i_6 - 1]);

        for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
        {
            var_22 += (arr_26 [i_7 + 4] [i_7 + 3] [i_7 + 1]);
            arr_27 [i_6] [i_6] = (((arr_1 [i_6] [i_6 + 1]) / ((((arr_23 [i_6]) - var_10)))));
        }
        for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
        {
            var_23 = (max(var_23, (arr_8 [i_6] [i_6 - 1] [i_6 - 1] [i_6] [6] [i_6])));
            var_24 |= (arr_17 [5] [i_8] [i_8 + 3] [i_8 + 4] [i_8 + 3]);
        }
    }
    #pragma endscop
}
