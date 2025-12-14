/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, ((((arr_9 [3] [3] [i_2]) < 1)))));
                            var_16 *= var_13;
                            arr_11 [i_1] [i_1] [i_1] [i_2] [i_3] [i_1] = (max(1, (arr_0 [i_0 - 1])));
                        }
                    }
                }
                arr_12 [i_1 - 4] [i_1] [i_1 + 2] = arr_5 [i_1 - 1] [i_1 - 4] [i_1] [i_1];

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        arr_19 [i_1] [i_1] [9] [7] = (arr_14 [i_1 + 2] [i_1] [6] [1]);
                        var_17 = ((1 || (((var_14 ? 3077127022 : 1)))));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_18 = ((arr_22 [i_0] [i_1] [i_1] [i_6]) ? (arr_21 [i_0 + 2] [i_1 - 2] [i_1 - 2] [i_1 - 2]) : 308211185);
                        arr_23 [i_0 - 1] [11] [i_1] [i_6] = (arr_10 [i_0 + 1] [i_0 + 2] [i_1] [i_0 + 1]);
                    }
                    arr_24 [i_1] [i_0 + 2] [i_4] [i_0 + 2] = (arr_2 [i_0 - 1]);
                    var_19 = (max(var_19, ((((arr_6 [i_1 - 3] [1] [1] [1]) == (arr_8 [i_0] [i_1 + 3] [i_4] [i_0]))))));
                    var_20 = (arr_9 [i_0] [i_0] [i_0]);
                }
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    arr_27 [i_1] = (var_5 | 3647149386);
                    var_21 = (max(var_21, (max(((((min((arr_15 [i_0] [10] [i_0] [i_0]), 4022160740))) ? 1 : var_11)), (~2843461060)))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_36 [i_10 - 1] [i_1] [i_8] [i_1] [i_10] = (arr_8 [i_1] [i_1 - 1] [i_8] [i_0 - 1]);
                                var_22 = (arr_0 [i_10 - 1]);
                                arr_37 [i_1] [i_1] [i_8] [i_1] = arr_10 [1] [1] [i_1] [i_10 - 1];
                                var_23 = (max(var_23, 1));
                                var_24 = (max(var_24, 1451506236));
                            }
                        }
                    }
                    arr_38 [i_1] [i_1 + 3] [i_8] = (arr_22 [i_0] [i_1] [i_1] [1]);
                    arr_39 [i_1] [12] [i_1] [7] = (var_1 + 1);
                    arr_40 [i_0] [i_1] [i_1] = ((1 ? var_6 : (arr_16 [i_0])));
                    var_25 = (max(var_25, var_11));
                }
                arr_41 [i_0] [i_1] [i_1] = (var_9 >= var_9);
            }
        }
    }
    var_26 = var_0;
    #pragma endscop
}
