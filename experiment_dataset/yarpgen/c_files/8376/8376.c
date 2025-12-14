/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_12 = max((177 < 0), (arr_2 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (((1 ? (arr_0 [i_1 + 2]) : (arr_0 [i_1 - 2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = var_9;
                                var_14 *= (1 < -2045952982);
                                var_15 = (((((~-2) ? (min(1, 4074810765938500377)) : (((var_11 ? (arr_12 [2] [i_0] [i_0] [i_3] [10]) : 14596))))) < (min((((1 ^ (arr_10 [i_0] [i_0] [i_0])))), var_7))));
                            }
                        }
                    }
                    var_16 = (arr_3 [i_0]);
                }
            }
        }
    }
    var_17 = ((((max((max(var_2, -1)), var_5))) ? (((!((max(28672, 265182115)))))) : var_0));
    #pragma endscop
}
