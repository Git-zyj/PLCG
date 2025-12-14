/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-((var_11 | ((max(var_5, var_7)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (!1);

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_16 ^= (((((7606 ? (((arr_7 [i_0] [5] [i_0] [5]) ? (arr_4 [i_2] [i_2]) : (arr_7 [i_0] [i_1] [i_1] [i_3]))) : ((max((arr_7 [i_1] [i_1] [13] [i_2]), var_4)))))) * (max((0 * var_4), (~4235090893)))));
                        var_17 = (min(var_17, ((((~var_9) * 0)))));
                        var_18 += ((-((var_7 ? (0 / var_8) : (((var_1 >= (arr_3 [i_0] [16] [16]))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_13 [i_2] = var_6;
                        var_19 ^= (arr_10 [i_4] [i_0] [i_1] [i_0]);
                    }
                }
            }
        }
    }
    var_20 = var_0;
    var_21 = (max(var_21, (max(0, 105265399))));
    var_22 = (max((((~(1 | var_7)))), var_2));
    #pragma endscop
}
