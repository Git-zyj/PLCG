/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = ((~((-((-(arr_0 [i_0])))))));
                var_17 = (arr_2 [i_1] [i_1]);
                var_18 = (arr_3 [8]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_19 = (arr_6 [i_2]);

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_20 = (arr_6 [i_5]);
                        var_21 = (arr_5 [i_2]);
                        var_22 = ((~(arr_5 [i_2])));
                        var_23 = (max(var_23, (arr_6 [i_2 - 3])));
                    }

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_24 = ((!(arr_8 [i_3])));
                        var_25 = (arr_15 [i_2] [i_6] [i_4] [i_6]);
                        var_26 = ((!(arr_18 [i_2 - 4] [i_3] [i_4] [i_6])));
                        var_27 += (-(arr_13 [i_4] [i_4] [i_3] [i_2]));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_28 = (arr_14 [i_2] [i_3] [i_4]);
                        var_29 = (arr_13 [i_2] [i_3] [i_4] [i_4]);
                    }
                    var_30 = ((-((-((-(arr_5 [i_2])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 4; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 7;i_9 += 1)
        {
            {
                var_31 = (arr_12 [i_8 - 2] [i_8] [i_8]);
                var_32 = (max(var_32, (arr_9 [i_8 - 1] [i_9 + 4] [i_9])));
                var_33 = (arr_20 [i_9] [i_9] [i_8] [i_8]);
                var_34 = (arr_22 [i_8]);
            }
        }
    }
    var_35 = (min(var_35, var_11));
    var_36 = -2431211477892754569;
    #pragma endscop
}
