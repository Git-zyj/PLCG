/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (max((((var_1 / 11409) ? -4988643103995182068 : 60432)), ((max((var_9 / var_5), (((77 ? var_6 : var_12))))))));
    var_16 = 53;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_17 = 203;
        var_18 = (min(var_18, var_9));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_0] [i_2] [i_0] [i_0] = var_12;
                        arr_11 [i_0] [i_1] [i_0] [i_0] [i_2] [i_3] = 14269814541517875978;
                        var_19 |= 3222680888;
                        var_20 = (max(var_20, (!-14445)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
