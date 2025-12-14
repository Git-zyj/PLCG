/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = (5575678659966909299 * 0);
                    var_11 = (min(var_11, (arr_6 [i_1] [i_2 - 1])));
                }
            }
        }
    }
    var_12 = (1 + var_9);
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                {
                    var_13 = (~94);
                    arr_18 [i_5] = (arr_11 [i_3] [i_4 - 1]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_14 = 9255;
                                var_15 &= 94;
                                var_16 = ((4336436013227318208 ? 94 : (max(14107346893855557974, (max((arr_14 [i_7] [5] [i_3]), 12871065413742642306))))));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        var_17 ^= var_3;
                        arr_29 [i_5] = var_6;
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        var_18 = (max(var_18, 8));
                        var_19 = (arr_17 [i_9]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
