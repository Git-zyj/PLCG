/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_4 [i_1] = 1501410711422650220;
            var_10 = (-1501410711422650220 ? (((arr_0 [i_1]) ? (arr_3 [i_0] [i_0] [i_1]) : var_9)) : var_4);
            var_11 = var_5;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_3] [i_1] [i_3] [i_0] = (((arr_7 [i_2]) ^ (arr_1 [i_0])));
                        var_12 = (arr_3 [i_3] [i_1] [i_0]);
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_13 = 1863763221;
            var_14 = ((-(arr_6 [i_4] [i_0] [i_0])));
        }
        var_15 = (((((1839889637783287688 ? (arr_12 [i_0] [i_0] [i_0]) : 11))) ? (arr_3 [i_0] [i_0] [i_0]) : var_8));
    }
    var_16 = (((-2436 + var_6) + (max(var_8, 0))));
    #pragma endscop
}
