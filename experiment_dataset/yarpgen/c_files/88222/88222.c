/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = 14243;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [1] = 51307;
                    arr_7 [i_0] [i_1] [1] |= var_0;
                }
            }
        }

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_12 [i_3] [i_3] = (((arr_9 [i_3] [i_3] [i_3]) ? (arr_1 [i_0]) : var_5));
            arr_13 [7] [7] [i_3] = ((var_10 ? (arr_8 [i_0] [i_3]) : (((arr_8 [i_0] [10]) * (arr_5 [i_0] [1] [i_0] [8])))));
            arr_14 [i_0] [i_3] [i_3] = ((-(arr_10 [i_3] [i_3] [i_3])));
        }
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            arr_17 [i_0] [i_4] [i_4] = (arr_15 [i_4 - 1] [i_4 - 1]);
            var_13 = (arr_3 [i_0] [i_0]);
        }
        var_14 = (min(var_14, (arr_8 [i_0] [i_0])));
    }
    var_15 ^= var_8;
    var_16 = (max(((((max(var_6, var_6))) ? var_2 : ((max(var_11, var_5))))), var_7));
    var_17 = (min(var_17, (min((var_7 | var_3), ((((max(var_5, 4540897673043245856))) ? var_8 : var_4))))));
    #pragma endscop
}
