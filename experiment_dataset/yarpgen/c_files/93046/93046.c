/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_3);
    var_11 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_1 + 3] [12] = (max(var_9, (arr_13 [i_0] [i_0] [i_1 - 2] [i_2] [i_2] [i_3] [i_4])));
                                var_12 ^= (((~(~401124287332437391))));
                            }
                        }
                    }
                }
                arr_15 [11] [i_1] = (!32742);
                arr_16 [i_1] [i_1 + 2] = ((((max((arr_0 [i_0] [i_1 + 2]), var_6))) ? ((max((arr_6 [i_1 - 2] [i_1 + 3] [i_1 - 2]), var_5))) : (-2147483647 - 1)));
            }
        }
    }
    var_13 |= -25511;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_31 [i_5] [i_5] [i_5] [i_5] [i_6] = var_1;
                                var_14 = (min(var_14, var_1));
                            }
                        }
                    }
                    arr_32 [i_6] [i_7] [i_7] [i_7] = ((((max(((min(var_7, (arr_28 [i_5] [i_6] [i_7])))), ((var_8 ? var_9 : var_7))))) ? 25504 : ((((arr_23 [i_5] [i_5]) ? 25494 : var_7)))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            {
                                arr_37 [i_6] = 25510;
                                var_15 += (((arr_18 [i_5]) ? (arr_24 [i_11 + 2]) : 65529));
                                var_16 = (((!var_1) ? var_8 : 25483));
                            }
                        }
                    }
                    var_17 = -7240;
                }
            }
        }
    }
    #pragma endscop
}
