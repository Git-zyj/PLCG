/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (((max(1, -var_5)) - (((1 + (53975 * var_10))))));
    var_13 = var_3;

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [2] = 1;
        var_14 = var_4;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = (arr_1 [i_0 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 = -32758;
                                var_16 = (((arr_6 [1] [i_1] [1]) ? var_7 : var_9));
                                arr_15 [i_1 - 1] [1] [22] [i_3] [i_1] [i_3 + 1] = ((-((~((1 ? (arr_0 [7]) : 0))))));
                            }
                        }
                    }
                }
            }
        }
        arr_16 [i_0 + 1] = (((((1 ? (arr_6 [i_0 - 1] [i_0] [8]) : (arr_9 [22] [i_0] [i_0])))) ? (((arr_1 [i_0 - 2]) ^ var_1)) : ((~((var_1 << (var_0 - 1)))))));
    }
    var_17 = var_1;
    #pragma endscop
}
