/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= 0;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_11 = (max(var_11, var_2));
        var_12 = (min(var_12, (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_4 [i_1] = 31;
        var_13 = (max(var_13, (arr_2 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 13;i_3 += 1)
            {
                {
                    var_14 = (max(var_14, 0));
                    arr_11 [i_2] = var_8;
                    arr_12 [i_2] [i_2] = 0;
                }
            }
        }
        var_15 = 12084419760503599172;
    }
    #pragma endscop
}
