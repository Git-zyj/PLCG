/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_10 = (max(var_10, var_6));
        var_11 = (~1);
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                arr_8 [i_1 - 1] [i_1 - 1] [0] = (arr_4 [i_2]);
                arr_9 [i_1 - 2] [i_1 - 2] &= ((((max((arr_3 [i_2]), ((var_6 ? (arr_3 [i_2]) : var_7))))) ? (arr_3 [4]) : (~var_9)));
                var_12 = (max(32751, (arr_4 [5])));
            }
        }
    }
    #pragma endscop
}
