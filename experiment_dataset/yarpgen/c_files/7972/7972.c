/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 += var_14;
                                var_21 = ((-22694 ? ((~(arr_1 [i_0 + 1] [i_1 - 1]))) : ((((22691 ? 16384 : -22706))))));
                                var_22 = (((arr_6 [i_1 + 2] [6] [i_1 + 1] [i_1 - 1]) ? (min(((0 ? var_0 : 262143)), ((min((arr_9 [i_1] [7] [i_2] [12] [i_4]), -2147483642))))) : var_13));
                                arr_10 [i_1 + 2] [i_1] [i_1] [i_1] [7] [i_1 - 1] [i_1] = 4294950911;
                                arr_11 [i_0] [i_0] [i_1] [i_0] [1] [i_4] [i_1] = (((((arr_8 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [13]) ? var_17 : var_18)) & (((arr_2 [i_0 + 1] [i_1]) ? (arr_6 [i_0 + 1] [12] [i_0 + 1] [i_0 + 1]) : var_9))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_23 = (max(var_23, var_0));
                                var_24 = -22693;
                                arr_16 [i_0] [0] [13] [i_1] [i_6] = var_18;
                            }
                        }
                    }
                    var_25 = min(((((arr_3 [i_1 + 2]) ^ (arr_3 [i_1 - 1])))), 4002565267052893701);
                    arr_17 [i_1] [22] [i_1] [i_1] = (arr_4 [i_0 + 1]);
                }
            }
        }
    }
    var_26 &= ((((var_2 ? var_11 : 0)) + var_18));

    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_20 [i_7] = (((~11174562390506878598) & (arr_5 [i_7] [i_7])));
        var_27 = (11260370909000694422 & 0);
        var_28 = var_1;
        var_29 = (max(var_29, 27024910));
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_30 = (arr_22 [i_8]);
        arr_25 [i_8] = (arr_22 [i_8]);
    }
    #pragma endscop
}
