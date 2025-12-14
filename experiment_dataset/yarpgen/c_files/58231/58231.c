/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 1));
    var_21 |= (!(min(var_18, var_8)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (1 << 1);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (!(arr_0 [i_0]));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_23 = ((~(((arr_8 [i_0] [i_2] [i_1] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_19))));
                        arr_10 [i_3] [i_3] [i_3] [i_0] [i_3] [i_3] = (!((!(arr_5 [1] [1] [i_2] [i_0]))));
                    }
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_24 += arr_11 [i_4 - 1];
        arr_13 [i_4] = var_1;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_23 [i_4] [i_5] [1] [i_7] = (!(max(var_8, (arr_18 [i_4 - 1] [1] [i_6 - 1]))));
                        var_25 = ((((var_3 ? (arr_15 [i_6 - 1] [i_6] [i_6]) : ((~(arr_12 [i_7]))))) & ((min(((var_19 < (arr_20 [i_4 - 1] [i_5] [i_5] [i_7]))), var_9)))));
                    }
                }
            }
        }
        var_26 = (max(var_26, (((-(((arr_20 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1]) & ((((arr_19 [i_4] [i_4]) >= (arr_22 [i_4] [0] [i_4 - 1] [0])))))))))));
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                {
                    arr_33 [i_8] [i_8] = (((arr_27 [i_8]) ^ (((arr_0 [i_10 - 1]) ? 1 : (arr_0 [i_10 - 1])))));
                    arr_34 [i_8] [i_9] [i_8] [i_10] = 1;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 0;i_12 += 1)
                        {
                            {
                                arr_41 [i_8] = (!(((((max(1, 1))) * -0))));
                                var_27 = (max(var_27, (((0 - (arr_38 [i_9] [i_10 - 1] [i_11] [i_11] [1] [i_12]))))));
                            }
                        }
                    }
                    var_28 = -1;
                }
            }
        }
    }
    #pragma endscop
}
