/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [10] [i_0] [i_0] [11] = var_14;
                            arr_12 [i_0] [i_0] [i_1] [i_2] [i_0] = (!var_6);
                        }
                    }
                }
                var_18 = (max(var_18, -3998));
                var_19 = (!-32759);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                var_20 = (min(((-(arr_13 [i_4]))), 32759));
                var_21 = (min(var_21, (arr_17 [i_4] [i_5])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_22 ^= (arr_19 [i_7] [i_5] [i_4 + 1]);
                            var_23 += (max(((var_5 ? 8191 : var_16)), (arr_19 [i_4] [i_4 - 1] [i_7 - 1])));
                            var_24 = (max(var_24, (((((((arr_20 [i_4 + 1] [12] [12] [10]) ? (arr_21 [14] [i_5] [i_6] [i_7] [8] [i_6]) : (arr_21 [i_4] [8] [i_6] [i_6] [1] [8])))) ? (max((arr_21 [0] [i_5] [i_6] [i_7] [0] [i_7]), (arr_20 [22] [10] [i_6] [i_7]))) : (arr_21 [12] [12] [10] [i_7] [1] [i_7]))))));
                            var_25 = (!-18);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_30 [i_9] [i_4] [i_4] = (arr_29 [i_9] [i_9] [7] [i_9] [i_10] [i_4] [i_9]);
                                var_26 = ((!(arr_16 [i_8] [i_5] [1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = max(var_6, 0);
    #pragma endscop
}
