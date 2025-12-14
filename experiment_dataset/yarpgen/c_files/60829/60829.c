/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] &= ((((var_0 >> (((arr_0 [i_0 + 1]) - 1867128661)))) << (((arr_0 [i_0 - 2]) - 1867128638))));
        arr_3 [i_0] = 65535;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = ((0 & ((min((arr_1 [i_1] [i_1]), var_3)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_14 [i_1] [1] = (arr_1 [i_2] [20]);
                    arr_15 [i_2] = ((!((max((arr_9 [i_1] [6]), 2437001025)))));
                    arr_16 [i_3] [0] [0] [i_1] = (+(((arr_1 [i_1] [i_1]) ? (arr_9 [13] [13]) : (arr_1 [i_1] [i_3]))));
                }
            }
        }
        arr_17 [i_1] = var_9;
    }
    var_17 = (min((max((max(var_0, var_1)), ((65535 ? var_4 : var_14)))), var_7));
    var_18 = var_10;
    var_19 = var_11;
    var_20 = var_14;
    #pragma endscop
}
