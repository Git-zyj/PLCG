/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = 1;
        arr_3 [i_0] = (((arr_2 [i_0]) || ((((arr_2 [i_0]) & (arr_2 [14]))))));
        var_12 = ((var_10 ? ((((arr_0 [i_0] [i_0]) || var_2))) : 1073741792));
        var_13 = (max(var_13, var_6));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_15 [i_3] [i_2] [4] [4] |= ((!(arr_14 [i_2 + 1])));
                        var_14 = (!0);
                    }
                }
            }
        }
        arr_16 [i_1] = ((!(arr_11 [i_1])));
        var_15 |= var_7;
    }
    var_16 = (max(var_16, (((((((max(var_6, var_9)) >= var_9))) / var_8)))));
    var_17 |= var_6;
    #pragma endscop
}
