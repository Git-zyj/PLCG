/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 = (min(var_10, (arr_2 [i_0] [i_0])));
        var_11 = ((~(((arr_2 [i_0] [i_0]) & (arr_0 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_12 -= (!-4933480360150890400);
                        var_13 = (((arr_0 [i_3]) ? (arr_9 [i_3] [i_1] [i_0]) : (((arr_4 [14] [i_2] [i_3]) << (((((arr_9 [i_0] [i_1] [i_3]) + 1029342313)) - 15))))));
                        arr_12 [i_0] [i_1] [i_1] [i_0] [1] [i_0] = (((arr_11 [i_0] [i_0] [i_1 + 1] [i_2] [9] [i_3 + 1]) == (((arr_11 [i_0] [i_0] [i_0] [i_1 + 1] [i_2] [i_3]) & (arr_2 [i_3] [i_1])))));
                    }
                }
            }
        }
    }
    var_14 = (min(var_5, var_3));
    var_15 = ((!((min((!var_1), ((var_9 ? var_9 : var_4)))))));
    #pragma endscop
}
