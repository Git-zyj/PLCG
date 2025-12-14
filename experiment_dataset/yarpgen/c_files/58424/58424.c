/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0 + 4]);
        var_15 = (((((arr_0 [i_0 + 3]) | -25)) % (((6755399441055744 < (arr_1 [i_0 + 1]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_11 [0] [i_1] [i_2] [i_3] = (+(min((arr_5 [i_0] [i_0] [i_3]), var_7)));
                        var_16 = max((arr_2 [i_0 + 2]), (((arr_9 [i_0] [i_1] [i_0 + 4] [i_3] [i_2] [i_0 - 1]) * 5)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_21 [1] [i_0] [i_0] [i_0] [i_4] [i_0] = (min(((var_0 ? 1 : (var_3 - 18053701412242120814))), var_2));
                        arr_22 [i_5] [i_5] [i_5] [i_5] [i_4] = (arr_17 [10] [0] [10] [i_4] [i_6]);
                        arr_23 [i_4] = (arr_6 [9]);
                        var_17 = (((~0) - (((min((arr_8 [i_0 + 1] [3] [i_0 + 3] [i_0]), (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 3])))))));
                        var_18 = 247;
                    }
                }
            }
        }
        var_19 = var_14;
    }
    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = 212;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_40 [i_9] [i_10] [i_9] [i_9] [i_11] = ((var_3 | ((min(1, 0)))));
                                arr_41 [11] [i_8] [11] = 54014;
                                var_20 = 5;
                                arr_42 [3] [i_8] = ((((var_7 ? 1 : var_12)) << 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                arr_51 [i_13] [i_12] [i_9] [i_8] [i_7] = 0;
                                var_21 = var_0;
                                var_22 = -1158542127;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_1;
    #pragma endscop
}
