/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((-((var_6 ? var_8 : 32761)))));
    var_11 = ((0 ? var_8 : var_2));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_12 = (arr_0 [i_0]);
        arr_2 [i_0] = (max((arr_1 [i_0] [i_0 - 1]), 0));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 = (((((-(arr_5 [i_1] [24])))) ? ((var_1 / (max(0, (arr_4 [18]))))) : (!0)));
        var_14 = 0;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_12 [i_1] [i_3] = 0;
                        var_15 = var_4;
                        arr_13 [i_1] [24] = (max(var_6, ((((29018 <= (arr_4 [i_4 + 1])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
