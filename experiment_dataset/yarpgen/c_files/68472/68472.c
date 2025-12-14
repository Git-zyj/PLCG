/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 += ((((((var_5 >= var_5) >> (288217517 - 288217488)))) * (((((var_0 ? var_10 : var_9))) ? var_2 : 16990639389524067402))));
        var_12 = (((((var_0 ? ((max(4006749778, 254))) : ((var_9 ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0])))))) ? (((((arr_2 [i_0]) < 18446744073709551606)))) : ((~(max(var_7, 288217517))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_13 = ((652 / (~0)));
                            var_14 = (~536604755764077060);
                        }
                    }
                }
                var_15 = var_4;
                var_16 = (arr_7 [7] [7] [7]);
                arr_13 [i_1] [i_2] [i_1] = ((((((288217517 - var_1) ? 0 : ((236 ? var_2 : var_0))))) ? (min(var_10, 288217517)) : var_2));
            }
        }
    }
    var_17 = (((min(1456104684185484213, ((2 ? var_8 : var_10)))) < (((max(3005998766620150435, var_5)) & var_1))));
    #pragma endscop
}
