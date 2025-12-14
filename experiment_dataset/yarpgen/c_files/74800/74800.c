/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_2] = arr_2 [i_0] [4] [i_2];
                    arr_8 [i_2] = ((min(0, var_8)));
                    arr_9 [i_2] = (((((-((-396566555 ? (arr_3 [i_0] [i_2] [i_2]) : -396566573))))) && ((max(var_16, ((var_14 | (arr_4 [i_1] [8]))))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_17 = (var_12 | ((min((arr_10 [i_3]), var_5))));
        var_18 = (((((arr_2 [i_3] [i_3] [i_3]) ? 4064 : 396566561)) * (-746108890 == 65535)));
        arr_14 [i_3] = var_9;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_21 [i_3] [i_3] [2] [i_3] = min(-8928084790989834564, var_3);
                    var_19 = (var_10 / 396566573);
                }
            }
        }
        arr_22 [0] = ((((min((arr_11 [i_3]), var_11))) ? ((2147483647 ? (arr_2 [i_3] [i_3] [i_3]) : (arr_10 [i_3]))) : (-2147483642 && var_8)));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        var_20 = (min(var_20, -396566563));
        arr_25 [i_6] = ((61459 ? (arr_24 [i_6 - 1] [i_6 - 1]) : (arr_24 [i_6 - 1] [i_6])));
    }
    #pragma endscop
}
