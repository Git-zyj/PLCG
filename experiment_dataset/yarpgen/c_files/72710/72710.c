/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (((((!(((var_8 ? var_4 : var_10))))))) == (max(74, 3813634841)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [14] = (~(~var_4));
        var_13 = ((arr_0 [i_0 + 3] [i_0 + 3]) ? (arr_0 [i_0 + 3] [i_0 + 1]) : (arr_0 [i_0 + 3] [i_0 + 1]));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_14 -= ((-3813634818 ? var_8 : ((-((19513 ? 8400109593209132762 : 10046634480500418853))))));
                    var_15 *= ((-((((arr_6 [i_3 - 1]) > (arr_0 [i_3 - 1] [i_3 - 1]))))));
                    arr_12 [i_1] [i_1] [6] = var_2;
                    var_16 = (max(var_16, var_8));
                }
            }
        }
        var_17 = var_5;
    }
    #pragma endscop
}
