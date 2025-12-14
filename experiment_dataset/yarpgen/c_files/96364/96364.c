/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_5 || ((max(var_1, var_2))))) ? ((~(max(-1050604811455384097, -326502103547818421)))) : ((max(var_10, (~var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = ((min(326502103547818420, ((min(var_5, (arr_3 [i_1])))))));
                var_14 = (((((min((arr_3 [i_0]), (arr_3 [i_0]))))) ^ (min(-326502103547818421, 2422651201728214024))));
                arr_6 [i_0] [i_1] = (min(1, -1));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                {

                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        arr_18 [i_2] [1] [i_4] [i_4 + 2] [i_4 + 2] = (min(((min((arr_8 [i_2] [i_3 - 1]), var_0))), (min((arr_10 [i_5 + 2]), (arr_10 [i_5 + 1])))));
                        var_15 = var_4;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_16 = 255;
                                arr_24 [i_2] [i_2] [i_3 + 1] [i_4] [i_6] [i_6] [i_7] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
