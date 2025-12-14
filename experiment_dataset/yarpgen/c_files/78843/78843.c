/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (!3641304310)));
                    arr_6 [11] [11] = (arr_5 [i_2 + 1] [5] [i_2 - 1]);
                    var_21 = ((!(~64007)));
                    var_22 = ((!(((5780 ? (arr_4 [i_2 + 1] [i_2] [i_2 + 4]) : (arr_3 [i_2] [i_2 + 3]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_23 = arr_2 [10];
                                arr_11 [15] [i_3] [i_2 + 4] [i_1] [i_0] = (max(((~((~(arr_8 [i_0] [3] [2] [i_0] [i_0]))))), (arr_4 [i_1] [i_2] [i_4])));
                                var_24 = (min(var_24, var_15));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        var_25 *= arr_12 [i_5];
        var_26 = (((arr_12 [i_5 - 1]) ? 2048 : 5780));
        var_27 = ((var_16 < (0 < 4294967295)));
        var_28 = (arr_12 [i_5 + 1]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_29 += (((arr_3 [i_6] [i_6]) / (arr_3 [i_6] [i_6])));
        var_30 += (((arr_2 [i_6]) ? (arr_2 [i_6]) : (arr_2 [i_6])));
        arr_17 [i_6] = (arr_8 [i_6] [i_6] [i_6] [6] [i_6]);
    }
    var_31 = max(var_4, var_2);
    var_32 = var_6;
    #pragma endscop
}
