/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_10 < (max(var_4, (var_0 | -838461613)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = (max(2147352576, (arr_2 [i_1 - 2])));
                    arr_8 [i_2] [i_1 + 1] [i_0] = 25462;
                    arr_9 [i_2] = -3;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                arr_14 [i_4] [i_4] = var_8;
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_13 = (~var_2);
                                var_14 = (min(var_14, (((!((((48228 | var_10) ? (max(-13, var_7)) : -var_4))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (min(var_15, (((var_11 * (((~1) ? (((var_0 ? var_2 : 1))) : ((5 ? var_3 : 7951944287426011767)))))))));
    var_16 = (min(var_16, -18));
    #pragma endscop
}
