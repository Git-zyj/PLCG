/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (min(var_13, var_0));
        var_14 = (min(var_14, ((((arr_2 [4] [i_0]) ? (arr_1 [i_0]) : var_6)))));
        arr_3 [i_0] = var_6;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = var_12;
        var_15 = 0;
        var_16 |= var_4;
        var_17 += (35 != 208);
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                arr_14 [i_2] = 5;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_18 = (min((var_7 & 251), var_1));
                            var_19 = var_12;
                            var_20 = ((((max(7, (arr_5 [i_2 - 2])))) | (((arr_5 [i_4 + 1]) - (arr_5 [i_4 + 1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
