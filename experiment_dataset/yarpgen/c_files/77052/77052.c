/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    var_21 = (var_13 ^ var_1);
    var_22 = -1070086562;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = var_6;
                    var_23 = (arr_1 [i_0 - 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_24 = (((arr_6 [i_0 + 1] [i_0 - 2] [i_2]) ? (arr_4 [i_4]) : ((-(arr_0 [i_4])))));
                                arr_15 [i_1] [i_3] [i_1] [i_1] [i_1] = ((-(arr_0 [i_0])));
                                var_25 = (arr_14 [4] [i_0 - 1]);
                                arr_16 [i_1] [i_1] [i_1] [7] [i_1] [i_4] = (((arr_3 [i_2] [i_1] [i_2]) && (arr_3 [i_0] [i_1] [i_4])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 7;i_6 += 1)
                        {
                            {
                                var_26 = (arr_10 [i_0 - 2] [i_0] [i_0 - 3] [i_1] [i_6 + 3] [i_6 + 2]);
                                var_27 = (((arr_21 [i_0] [i_0] [i_2] [i_5] [i_6 - 1]) ? var_6 : 1));
                                arr_24 [i_0] [i_1] [i_2] [i_1] [i_0] [i_2] [i_0] = (~var_2);
                                arr_25 [i_0] [i_1] [i_0] [i_5] [i_0] [i_1] = (((arr_4 [i_0]) ? var_5 : 126));
                            }
                        }
                    }
                    arr_26 [i_1] [i_1] [i_1] [i_0] = ((126 ? 1163224257 : 2));
                }
            }
        }
        arr_27 [7] = ((-401500693 ? 81 : 1));
        var_28 = (((arr_2 [i_0] [0] [i_0]) ? (arr_2 [i_0 - 3] [6] [i_0]) : var_16));
    }
    #pragma endscop
}
