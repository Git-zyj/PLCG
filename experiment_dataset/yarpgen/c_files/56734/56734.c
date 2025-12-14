/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-7783699244624892579 ? var_0 : (min(var_5, var_11))));
    var_14 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 - 2] [i_0] [i_0] [0] = (((!(arr_10 [i_0 - 3] [i_0] [i_0 - 3] [i_0] [i_0 - 1]))) ? ((~(arr_3 [i_1 - 1] [i_0 - 2] [i_0 - 2]))) : ((min(-7783699244624892579, var_6))));
                                arr_15 [i_0] [i_1] [i_3] [i_4] = (((arr_5 [i_0 - 2] [i_0 - 1] [i_1 - 3] [i_2 + 1]) ? (((((arr_5 [i_0 - 3] [i_0 - 3] [i_1 - 3] [i_2 + 1]) < -4)))) : (0 + 15084089743900963299)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_5] [i_0] [i_2 + 1] [i_0] [7] [i_0] = (((((-70 ? 7783699244624892598 : 11))) ? ((~(max(var_7, var_0)))) : var_12));
                                arr_23 [i_6] [i_0] [i_0] = ((+(((arr_13 [i_1 + 1] [i_2 - 4] [i_0] [i_2] [i_2] [i_2 + 1]) ? (arr_13 [i_1 - 2] [i_1 - 2] [i_0] [i_1 - 2] [i_1 - 2] [i_2 - 2]) : (arr_13 [i_1 - 2] [i_1 - 2] [i_0] [i_1] [i_2] [i_2 + 1])))));
                            }
                        }
                    }
                    arr_24 [i_0] [i_1] [i_0] [i_0] = (((max((arr_17 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]), var_12)) * (var_8 / var_4)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 4; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_38 [i_11] [i_11] [i_9] [i_9] [i_8] [i_7 + 3] = ((!(((arr_30 [i_9]) >= var_5))));
                                arr_39 [i_7] [13] [i_7] [i_10] [i_11] = 15084089743900963286;
                                arr_40 [i_7 - 1] [i_10] [i_7] [i_10] [i_11] = var_0;
                                arr_41 [i_7] = 1;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 4; i_13 < 13;i_13 += 1)
                    {
                        {
                            arr_48 [11] [i_8] [1] [i_7] = (((~(arr_31 [i_7] [i_7] [i_12]))));
                            arr_49 [i_7] [i_8] [i_12] [i_7] [i_8] = (min(1, ((min((arr_47 [i_7] [i_7] [i_12] [i_13]), var_0)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
