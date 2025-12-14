/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = ((min(-64, 86)));
        arr_3 [i_0] = min(((((10 + 32704) <= 4294967291))), var_3);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_18 = (max(var_5, var_10));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_1] [i_2] = (max((min(9677, 4294967288)), (((~(arr_4 [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_19 = (((arr_17 [i_5]) >= (arr_18 [i_1] [i_4 - 1] [i_3] [i_4] [i_4])));
                                arr_20 [i_2] [i_2] = ((~((~(arr_15 [i_1] [i_1] [i_4 - 1] [i_1] [12])))));
                            }
                        }
                    }
                    var_20 = (min(((((((arr_4 [i_3]) + 2147483647)) >> (((min(var_5, -5289324703078365295)) + 5289324703078365304))))), (max(var_14, (arr_6 [i_1] [i_2])))));
                }
            }
        }
    }
    var_21 = var_9;
    #pragma endscop
}
