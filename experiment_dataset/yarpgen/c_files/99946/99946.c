/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min(var_8, ((min(var_12, var_7))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = (max(var_14, (((((var_10 && (((var_1 ? var_6 : var_4))))))))));
        arr_4 [i_0] = (((var_6 * (!var_0))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 = (((!var_10) ? (((!190653310) ? 18010000462970880 : 18010000462970880)) : (var_0 | var_8)));
        arr_8 [i_1] = (max((min((min(var_4, var_10)), var_3)), (!var_1)));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_16 [i_4] [i_4] [i_4] [i_4] = ((!(~var_2)));
                        var_16 = var_9;
                        var_17 = var_0;
                    }
                }
            }
            var_18 += max(var_0, ((min(var_0, var_5))));
        }
        arr_17 [2] = ((((var_12 & (max(var_12, var_10)))) > (((-(!var_7))))));
    }
    var_19 |= var_8;
    var_20 = (var_2 / ((min(var_10, var_12))));
    var_21 = ((((var_6 & (~var_2))) | var_7));
    #pragma endscop
}
