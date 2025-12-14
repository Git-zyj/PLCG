/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = ((!(((var_7 ? var_4 : var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = var_8;
                    arr_8 [1] [5] [5] [i_2] = ((!((max(126, 1)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_2] [i_2] [i_2] &= (arr_5 [i_0 + 3]);
                        arr_12 [2] [2] [2] [i_3] = (-470179617 <= 111);
                        var_20 *= (((arr_7 [i_1] [i_1] [i_1 - 2] [i_1 - 2]) && 65535));
                        var_21 = (min(var_21, (arr_2 [i_0 + 3])));
                    }
                    var_22 = ((-(max((!1610612736), 222))));
                }
            }
        }
    }
    #pragma endscop
}
