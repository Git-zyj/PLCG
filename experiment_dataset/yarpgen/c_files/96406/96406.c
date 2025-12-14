/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~((max(31, -121))))));
    var_11 = (~var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 = var_2;
                                arr_14 [i_0] [i_1 + 2] [i_1] [i_2] [i_3] [i_4] = (((((arr_9 [i_3]) != (arr_2 [i_1 - 1]))) && ((((max(-797605932, -89))) >= (((arr_4 [i_4] [0] [i_4]) + 1468798481170948988))))));
                                var_13 = ((!(((max(16977945592538602610, -89))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [11] = ((120 < (max(16977945592538602627, 16977945592538602627))));
            }
        }
    }
    var_14 = (min(var_14, (!58025)));
    var_15 = var_0;
    #pragma endscop
}
