/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 = (~var_10);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_18 = (((((var_1 ? var_11 : (arr_0 [i_0])))) ? (arr_1 [i_0]) : (arr_1 [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_19 = (var_11 / var_11);
                        var_20 = (max(var_20, var_12));
                        arr_9 [i_0] [8] [i_3] = (((arr_4 [3] [i_2 - 2] [i_2 - 2]) ? (arr_4 [i_2] [i_2 - 1] [1]) : (arr_4 [i_2] [i_2 - 1] [i_2])));
                    }
                }
            }
        }
        var_21 = (min(var_21, ((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_10)))));
        arr_10 [i_0] [18] = 3072;
        arr_11 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : -3073));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_22 = (min(var_22, var_8));
        arr_16 [15] = (max(3088, 3068));
        var_23 = (min(var_23, 3065));
    }
    var_24 = ((-((min(-2048, var_2)))));
    #pragma endscop
}
